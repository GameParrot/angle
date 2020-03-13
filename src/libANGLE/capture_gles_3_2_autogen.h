// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// capture_gles_3_2_autogen.h:
//   Capture functions for the OpenGL ES 3.2 entry points.

#ifndef LIBANGLE_CAPTURE_GLES_3_2_AUTOGEN_H_
#define LIBANGLE_CAPTURE_GLES_3_2_AUTOGEN_H_

#include "common/PackedEnums.h"
#include "libANGLE/FrameCapture.h"

namespace gl
{

// Method Captures

angle::CallCapture CaptureBlendBarrier(const State &glState, bool isCallValid);
angle::CallCapture CaptureBlendEquationSeparatei(const State &glState,
                                                 bool isCallValid,
                                                 GLuint buf,
                                                 GLenum modeRGB,
                                                 GLenum modeAlpha);
angle::CallCapture CaptureBlendEquationi(const State &glState,
                                         bool isCallValid,
                                         GLuint buf,
                                         GLenum mode);
angle::CallCapture CaptureBlendFuncSeparatei(const State &glState,
                                             bool isCallValid,
                                             GLuint buf,
                                             GLenum srcRGB,
                                             GLenum dstRGB,
                                             GLenum srcAlpha,
                                             GLenum dstAlpha);
angle::CallCapture CaptureBlendFunci(const State &glState,
                                     bool isCallValid,
                                     GLuint buf,
                                     GLenum src,
                                     GLenum dst);
angle::CallCapture CaptureColorMaski(const State &glState,
                                     bool isCallValid,
                                     GLuint index,
                                     GLboolean r,
                                     GLboolean g,
                                     GLboolean b,
                                     GLboolean a);
angle::CallCapture CaptureCopyImageSubData(const State &glState,
                                           bool isCallValid,
                                           GLuint srcName,
                                           GLenum srcTarget,
                                           GLint srcLevel,
                                           GLint srcX,
                                           GLint srcY,
                                           GLint srcZ,
                                           GLuint dstName,
                                           GLenum dstTarget,
                                           GLint dstLevel,
                                           GLint dstX,
                                           GLint dstY,
                                           GLint dstZ,
                                           GLsizei srcWidth,
                                           GLsizei srcHeight,
                                           GLsizei srcDepth);
angle::CallCapture CaptureDebugMessageCallback(const State &glState,
                                               bool isCallValid,
                                               GLDEBUGPROC callback,
                                               const void *userParam);
angle::CallCapture CaptureDebugMessageControl(const State &glState,
                                              bool isCallValid,
                                              GLenum source,
                                              GLenum type,
                                              GLenum severity,
                                              GLsizei count,
                                              const GLuint *ids,
                                              GLboolean enabled);
angle::CallCapture CaptureDebugMessageInsert(const State &glState,
                                             bool isCallValid,
                                             GLenum source,
                                             GLenum type,
                                             GLuint id,
                                             GLenum severity,
                                             GLsizei length,
                                             const GLchar *buf);
angle::CallCapture CaptureDisablei(const State &glState,
                                   bool isCallValid,
                                   GLenum target,
                                   GLuint index);
angle::CallCapture CaptureDrawElementsBaseVertex(const State &glState,
                                                 bool isCallValid,
                                                 PrimitiveMode modePacked,
                                                 GLsizei count,
                                                 DrawElementsType typePacked,
                                                 const void *indices,
                                                 GLint basevertex);
angle::CallCapture CaptureDrawElementsInstancedBaseVertex(const State &glState,
                                                          bool isCallValid,
                                                          PrimitiveMode modePacked,
                                                          GLsizei count,
                                                          DrawElementsType typePacked,
                                                          const void *indices,
                                                          GLsizei instancecount,
                                                          GLint basevertex);
angle::CallCapture CaptureDrawRangeElementsBaseVertex(const State &glState,
                                                      bool isCallValid,
                                                      PrimitiveMode modePacked,
                                                      GLuint start,
                                                      GLuint end,
                                                      GLsizei count,
                                                      DrawElementsType typePacked,
                                                      const void *indices,
                                                      GLint basevertex);
angle::CallCapture CaptureEnablei(const State &glState,
                                  bool isCallValid,
                                  GLenum target,
                                  GLuint index);
angle::CallCapture CaptureFramebufferTexture(const State &glState,
                                             bool isCallValid,
                                             GLenum target,
                                             GLenum attachment,
                                             TextureID texturePacked,
                                             GLint level);
angle::CallCapture CaptureGetDebugMessageLog(const State &glState,
                                             bool isCallValid,
                                             GLuint count,
                                             GLsizei bufSize,
                                             GLenum *sources,
                                             GLenum *types,
                                             GLuint *ids,
                                             GLenum *severities,
                                             GLsizei *lengths,
                                             GLchar *messageLog,
                                             GLuint returnValue);
angle::CallCapture CaptureGetGraphicsResetStatus(const State &glState,
                                                 bool isCallValid,
                                                 GLenum returnValue);
angle::CallCapture CaptureGetObjectLabel(const State &glState,
                                         bool isCallValid,
                                         GLenum identifier,
                                         GLuint name,
                                         GLsizei bufSize,
                                         GLsizei *length,
                                         GLchar *label);
angle::CallCapture CaptureGetObjectPtrLabel(const State &glState,
                                            bool isCallValid,
                                            const void *ptr,
                                            GLsizei bufSize,
                                            GLsizei *length,
                                            GLchar *label);
angle::CallCapture CaptureGetPointerv(const State &glState,
                                      bool isCallValid,
                                      GLenum pname,
                                      void **params);
angle::CallCapture CaptureGetSamplerParameterIiv(const State &glState,
                                                 bool isCallValid,
                                                 SamplerID samplerPacked,
                                                 GLenum pname,
                                                 GLint *params);
angle::CallCapture CaptureGetSamplerParameterIuiv(const State &glState,
                                                  bool isCallValid,
                                                  SamplerID samplerPacked,
                                                  GLenum pname,
                                                  GLuint *params);
angle::CallCapture CaptureGetTexParameterIiv(const State &glState,
                                             bool isCallValid,
                                             TextureType targetPacked,
                                             GLenum pname,
                                             GLint *params);
angle::CallCapture CaptureGetTexParameterIuiv(const State &glState,
                                              bool isCallValid,
                                              TextureType targetPacked,
                                              GLenum pname,
                                              GLuint *params);
angle::CallCapture CaptureGetnUniformfv(const State &glState,
                                        bool isCallValid,
                                        ShaderProgramID programPacked,
                                        UniformLocation locationPacked,
                                        GLsizei bufSize,
                                        GLfloat *params);
angle::CallCapture CaptureGetnUniformiv(const State &glState,
                                        bool isCallValid,
                                        ShaderProgramID programPacked,
                                        UniformLocation locationPacked,
                                        GLsizei bufSize,
                                        GLint *params);
angle::CallCapture CaptureGetnUniformuiv(const State &glState,
                                         bool isCallValid,
                                         ShaderProgramID programPacked,
                                         UniformLocation locationPacked,
                                         GLsizei bufSize,
                                         GLuint *params);
angle::CallCapture CaptureIsEnabledi(const State &glState,
                                     bool isCallValid,
                                     GLenum target,
                                     GLuint index,
                                     GLboolean returnValue);
angle::CallCapture CaptureMinSampleShading(const State &glState, bool isCallValid, GLfloat value);
angle::CallCapture CaptureObjectLabel(const State &glState,
                                      bool isCallValid,
                                      GLenum identifier,
                                      GLuint name,
                                      GLsizei length,
                                      const GLchar *label);
angle::CallCapture CaptureObjectPtrLabel(const State &glState,
                                         bool isCallValid,
                                         const void *ptr,
                                         GLsizei length,
                                         const GLchar *label);
angle::CallCapture CapturePatchParameteri(const State &glState,
                                          bool isCallValid,
                                          GLenum pname,
                                          GLint value);
angle::CallCapture CapturePopDebugGroup(const State &glState, bool isCallValid);
angle::CallCapture CapturePrimitiveBoundingBox(const State &glState,
                                               bool isCallValid,
                                               GLfloat minX,
                                               GLfloat minY,
                                               GLfloat minZ,
                                               GLfloat minW,
                                               GLfloat maxX,
                                               GLfloat maxY,
                                               GLfloat maxZ,
                                               GLfloat maxW);
angle::CallCapture CapturePushDebugGroup(const State &glState,
                                         bool isCallValid,
                                         GLenum source,
                                         GLuint id,
                                         GLsizei length,
                                         const GLchar *message);
angle::CallCapture CaptureReadnPixels(const State &glState,
                                      bool isCallValid,
                                      GLint x,
                                      GLint y,
                                      GLsizei width,
                                      GLsizei height,
                                      GLenum format,
                                      GLenum type,
                                      GLsizei bufSize,
                                      void *data);
angle::CallCapture CaptureSamplerParameterIiv(const State &glState,
                                              bool isCallValid,
                                              SamplerID samplerPacked,
                                              GLenum pname,
                                              const GLint *param);
angle::CallCapture CaptureSamplerParameterIuiv(const State &glState,
                                               bool isCallValid,
                                               SamplerID samplerPacked,
                                               GLenum pname,
                                               const GLuint *param);
angle::CallCapture CaptureTexBuffer(const State &glState,
                                    bool isCallValid,
                                    GLenum target,
                                    GLenum internalformat,
                                    BufferID bufferPacked);
angle::CallCapture CaptureTexBufferRange(const State &glState,
                                         bool isCallValid,
                                         GLenum target,
                                         GLenum internalformat,
                                         BufferID bufferPacked,
                                         GLintptr offset,
                                         GLsizeiptr size);
angle::CallCapture CaptureTexParameterIiv(const State &glState,
                                          bool isCallValid,
                                          TextureType targetPacked,
                                          GLenum pname,
                                          const GLint *params);
angle::CallCapture CaptureTexParameterIuiv(const State &glState,
                                           bool isCallValid,
                                           TextureType targetPacked,
                                           GLenum pname,
                                           const GLuint *params);
angle::CallCapture CaptureTexStorage3DMultisample(const State &glState,
                                                  bool isCallValid,
                                                  TextureType targetPacked,
                                                  GLsizei samples,
                                                  GLenum internalformat,
                                                  GLsizei width,
                                                  GLsizei height,
                                                  GLsizei depth,
                                                  GLboolean fixedsamplelocations);

// Parameter Captures

void CaptureDebugMessageCallback_userParam(const State &glState,
                                           bool isCallValid,
                                           GLDEBUGPROC callback,
                                           const void *userParam,
                                           angle::ParamCapture *paramCapture);
void CaptureDebugMessageControl_ids(const State &glState,
                                    bool isCallValid,
                                    GLenum source,
                                    GLenum type,
                                    GLenum severity,
                                    GLsizei count,
                                    const GLuint *ids,
                                    GLboolean enabled,
                                    angle::ParamCapture *paramCapture);
void CaptureDebugMessageInsert_buf(const State &glState,
                                   bool isCallValid,
                                   GLenum source,
                                   GLenum type,
                                   GLuint id,
                                   GLenum severity,
                                   GLsizei length,
                                   const GLchar *buf,
                                   angle::ParamCapture *paramCapture);
void CaptureDrawElementsBaseVertex_indices(const State &glState,
                                           bool isCallValid,
                                           PrimitiveMode modePacked,
                                           GLsizei count,
                                           DrawElementsType typePacked,
                                           const void *indices,
                                           GLint basevertex,
                                           angle::ParamCapture *paramCapture);
void CaptureDrawElementsInstancedBaseVertex_indices(const State &glState,
                                                    bool isCallValid,
                                                    PrimitiveMode modePacked,
                                                    GLsizei count,
                                                    DrawElementsType typePacked,
                                                    const void *indices,
                                                    GLsizei instancecount,
                                                    GLint basevertex,
                                                    angle::ParamCapture *paramCapture);
void CaptureDrawRangeElementsBaseVertex_indices(const State &glState,
                                                bool isCallValid,
                                                PrimitiveMode modePacked,
                                                GLuint start,
                                                GLuint end,
                                                GLsizei count,
                                                DrawElementsType typePacked,
                                                const void *indices,
                                                GLint basevertex,
                                                angle::ParamCapture *paramCapture);
void CaptureGetDebugMessageLog_sources(const State &glState,
                                       bool isCallValid,
                                       GLuint count,
                                       GLsizei bufSize,
                                       GLenum *sources,
                                       GLenum *types,
                                       GLuint *ids,
                                       GLenum *severities,
                                       GLsizei *lengths,
                                       GLchar *messageLog,
                                       angle::ParamCapture *paramCapture);
void CaptureGetDebugMessageLog_types(const State &glState,
                                     bool isCallValid,
                                     GLuint count,
                                     GLsizei bufSize,
                                     GLenum *sources,
                                     GLenum *types,
                                     GLuint *ids,
                                     GLenum *severities,
                                     GLsizei *lengths,
                                     GLchar *messageLog,
                                     angle::ParamCapture *paramCapture);
void CaptureGetDebugMessageLog_ids(const State &glState,
                                   bool isCallValid,
                                   GLuint count,
                                   GLsizei bufSize,
                                   GLenum *sources,
                                   GLenum *types,
                                   GLuint *ids,
                                   GLenum *severities,
                                   GLsizei *lengths,
                                   GLchar *messageLog,
                                   angle::ParamCapture *paramCapture);
void CaptureGetDebugMessageLog_severities(const State &glState,
                                          bool isCallValid,
                                          GLuint count,
                                          GLsizei bufSize,
                                          GLenum *sources,
                                          GLenum *types,
                                          GLuint *ids,
                                          GLenum *severities,
                                          GLsizei *lengths,
                                          GLchar *messageLog,
                                          angle::ParamCapture *paramCapture);
void CaptureGetDebugMessageLog_lengths(const State &glState,
                                       bool isCallValid,
                                       GLuint count,
                                       GLsizei bufSize,
                                       GLenum *sources,
                                       GLenum *types,
                                       GLuint *ids,
                                       GLenum *severities,
                                       GLsizei *lengths,
                                       GLchar *messageLog,
                                       angle::ParamCapture *paramCapture);
void CaptureGetDebugMessageLog_messageLog(const State &glState,
                                          bool isCallValid,
                                          GLuint count,
                                          GLsizei bufSize,
                                          GLenum *sources,
                                          GLenum *types,
                                          GLuint *ids,
                                          GLenum *severities,
                                          GLsizei *lengths,
                                          GLchar *messageLog,
                                          angle::ParamCapture *paramCapture);
void CaptureGetObjectLabel_length(const State &glState,
                                  bool isCallValid,
                                  GLenum identifier,
                                  GLuint name,
                                  GLsizei bufSize,
                                  GLsizei *length,
                                  GLchar *label,
                                  angle::ParamCapture *paramCapture);
void CaptureGetObjectLabel_label(const State &glState,
                                 bool isCallValid,
                                 GLenum identifier,
                                 GLuint name,
                                 GLsizei bufSize,
                                 GLsizei *length,
                                 GLchar *label,
                                 angle::ParamCapture *paramCapture);
void CaptureGetObjectPtrLabel_ptr(const State &glState,
                                  bool isCallValid,
                                  const void *ptr,
                                  GLsizei bufSize,
                                  GLsizei *length,
                                  GLchar *label,
                                  angle::ParamCapture *paramCapture);
void CaptureGetObjectPtrLabel_length(const State &glState,
                                     bool isCallValid,
                                     const void *ptr,
                                     GLsizei bufSize,
                                     GLsizei *length,
                                     GLchar *label,
                                     angle::ParamCapture *paramCapture);
void CaptureGetObjectPtrLabel_label(const State &glState,
                                    bool isCallValid,
                                    const void *ptr,
                                    GLsizei bufSize,
                                    GLsizei *length,
                                    GLchar *label,
                                    angle::ParamCapture *paramCapture);
void CaptureGetPointerv_params(const State &glState,
                               bool isCallValid,
                               GLenum pname,
                               void **params,
                               angle::ParamCapture *paramCapture);
void CaptureGetSamplerParameterIiv_params(const State &glState,
                                          bool isCallValid,
                                          SamplerID samplerPacked,
                                          GLenum pname,
                                          GLint *params,
                                          angle::ParamCapture *paramCapture);
void CaptureGetSamplerParameterIuiv_params(const State &glState,
                                           bool isCallValid,
                                           SamplerID samplerPacked,
                                           GLenum pname,
                                           GLuint *params,
                                           angle::ParamCapture *paramCapture);
void CaptureGetTexParameterIiv_params(const State &glState,
                                      bool isCallValid,
                                      TextureType targetPacked,
                                      GLenum pname,
                                      GLint *params,
                                      angle::ParamCapture *paramCapture);
void CaptureGetTexParameterIuiv_params(const State &glState,
                                       bool isCallValid,
                                       TextureType targetPacked,
                                       GLenum pname,
                                       GLuint *params,
                                       angle::ParamCapture *paramCapture);
void CaptureGetnUniformfv_params(const State &glState,
                                 bool isCallValid,
                                 ShaderProgramID programPacked,
                                 UniformLocation locationPacked,
                                 GLsizei bufSize,
                                 GLfloat *params,
                                 angle::ParamCapture *paramCapture);
void CaptureGetnUniformiv_params(const State &glState,
                                 bool isCallValid,
                                 ShaderProgramID programPacked,
                                 UniformLocation locationPacked,
                                 GLsizei bufSize,
                                 GLint *params,
                                 angle::ParamCapture *paramCapture);
void CaptureGetnUniformuiv_params(const State &glState,
                                  bool isCallValid,
                                  ShaderProgramID programPacked,
                                  UniformLocation locationPacked,
                                  GLsizei bufSize,
                                  GLuint *params,
                                  angle::ParamCapture *paramCapture);
void CaptureObjectLabel_label(const State &glState,
                              bool isCallValid,
                              GLenum identifier,
                              GLuint name,
                              GLsizei length,
                              const GLchar *label,
                              angle::ParamCapture *paramCapture);
void CaptureObjectPtrLabel_ptr(const State &glState,
                               bool isCallValid,
                               const void *ptr,
                               GLsizei length,
                               const GLchar *label,
                               angle::ParamCapture *paramCapture);
void CaptureObjectPtrLabel_label(const State &glState,
                                 bool isCallValid,
                                 const void *ptr,
                                 GLsizei length,
                                 const GLchar *label,
                                 angle::ParamCapture *paramCapture);
void CapturePushDebugGroup_message(const State &glState,
                                   bool isCallValid,
                                   GLenum source,
                                   GLuint id,
                                   GLsizei length,
                                   const GLchar *message,
                                   angle::ParamCapture *paramCapture);
void CaptureReadnPixels_data(const State &glState,
                             bool isCallValid,
                             GLint x,
                             GLint y,
                             GLsizei width,
                             GLsizei height,
                             GLenum format,
                             GLenum type,
                             GLsizei bufSize,
                             void *data,
                             angle::ParamCapture *paramCapture);
void CaptureSamplerParameterIiv_param(const State &glState,
                                      bool isCallValid,
                                      SamplerID samplerPacked,
                                      GLenum pname,
                                      const GLint *param,
                                      angle::ParamCapture *paramCapture);
void CaptureSamplerParameterIuiv_param(const State &glState,
                                       bool isCallValid,
                                       SamplerID samplerPacked,
                                       GLenum pname,
                                       const GLuint *param,
                                       angle::ParamCapture *paramCapture);
void CaptureTexParameterIiv_params(const State &glState,
                                   bool isCallValid,
                                   TextureType targetPacked,
                                   GLenum pname,
                                   const GLint *params,
                                   angle::ParamCapture *paramCapture);
void CaptureTexParameterIuiv_params(const State &glState,
                                    bool isCallValid,
                                    TextureType targetPacked,
                                    GLenum pname,
                                    const GLuint *params,
                                    angle::ParamCapture *paramCapture);
}  // namespace gl

#endif  // LIBANGLE_CAPTURE_GLES_3_2_AUTOGEN_H_
