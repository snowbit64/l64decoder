// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTypeMemorySize
// Entry Point: 00a97a3c
// Size: 88 bytes
// Signature: undefined __cdecl getTypeMemorySize(TYPE param_1)


/* ImageUtil::getTypeMemorySize(ImageDesc::TYPE) */

undefined4 ImageUtil::getTypeMemorySize(TYPE param_1)

{
  if (param_1 - 1 < 8) {
    return *(undefined4 *)(&DAT_005175a0 + (long)(int)(param_1 - 1) * 4);
  }
  DebugUtil::message("Error","ImageUtil::getTypeMemorySize: invalid type",(char *)0x0,
                     "T:/src/base/2d/ImageUtil.cpp",800);
  return 0;
}


