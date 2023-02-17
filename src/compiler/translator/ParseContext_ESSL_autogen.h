// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ParseContext_ESSL_autogen.h:
//   Helpers for built-in related checks.

#ifndef COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_
#define COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_

namespace sh
{

namespace BuiltInGroup
{

bool isTextureOffsetNoBias(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3671 && id <= 3740;
}
bool isTextureOffsetBias(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3741 && id <= 3760;
}
bool isTextureGatherOffsetsComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3798 && id <= 3810;
}
bool isTextureGatherOffsetsNoComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3811 && id <= 3826;
}
bool isTextureGatherOffsets(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3798 && id <= 3826;
}
bool isTextureGatherOffsetComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3827 && id <= 3832;
}
bool isTextureGatherOffsetNoComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3833 && id <= 3840;
}
bool isTextureGatherOffset(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3827 && id <= 3840;
}
bool isTextureGather(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3774 && id <= 3840;
}
bool isInterpolationFS(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3853 && id <= 3876;
}
bool isAtomicMemory(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3881 && id <= 3898;
}
bool isImageLoad(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3929 && id <= 3943;
}
bool isImageAtomic(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3944 && id <= 4522;
}
bool isImageStore(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 4523 && id <= 4537;
}
bool isImage(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3899 && id <= 4537;
}

}  // namespace BuiltInGroup

}  // namespace sh

#endif  // COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_