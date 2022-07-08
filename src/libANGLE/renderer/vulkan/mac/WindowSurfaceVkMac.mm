//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// WindowSurfaceVkMac.mm:
//    Implements methods from WindowSurfaceVkMac.
//

#include "libANGLE/renderer/vulkan/mac/WindowSurfaceVkMac.h"

#include <Metal/Metal.h>
#include <QuartzCore/CAMetalLayer.h>

#include "libANGLE/renderer/vulkan/RendererVk.h"
#include "libANGLE/renderer/vulkan/vk_utils.h"

namespace rx
{

WindowSurfaceVkMac::WindowSurfaceVkMac(const egl::SurfaceState &surfaceState,
                                       EGLNativeWindowType window)
    : WindowSurfaceVk(surfaceState, window), mMetalLayer(nullptr)
{}

WindowSurfaceVkMac::~WindowSurfaceVkMac()
{
}

angle::Result WindowSurfaceVkMac::createSurfaceVk(vk::Context *context, gl::Extents *extentsOut)
    API_AVAILABLE(macosx(10.11))
{

    mMetalLayer = reinterpret_cast<CAMetalLayer *>(mNativeWindowType);

    VkMetalSurfaceCreateInfoEXT sci = {};
    memset(&sci, 0, sizeof(sci));
    sci.sType = VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT;
    sci.pLayer = window->ns.layer;
    ANGLE_VK_TRY(context, vkCreateMetalSurfaceEXT(context->getRenderer()->getInstance(),
                                                  &sci, nullptr, &mSurface));

    return getCurrentWindowSize(context, extentsOut);
}

angle::Result WindowSurfaceVkMac::getCurrentWindowSize(vk::Context *context,
                                                       gl::Extents *extentsOut)
    API_AVAILABLE(macosx(10.11))
{
    ANGLE_VK_CHECK(context, (mMetalLayer != nullptr), VK_ERROR_INITIALIZATION_FAILED);

    *extentsOut = gl::Extents(static_cast<int>(mMetalLayer.bounds.size.width * mMetalLayer.contentsScale),
                              static_cast<int>(mMetalLayer.bounds.size.height * mMetalLayer.contentsScale), 1);

    return angle::Result::Continue;
}

}  // namespace rx
