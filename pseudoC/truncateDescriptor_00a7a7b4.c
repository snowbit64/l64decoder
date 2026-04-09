// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: truncateDescriptor
// Entry Point: 00a7a7b4
// Size: 76 bytes
// Signature: undefined __cdecl truncateDescriptor(ImageDesc * param_1, uint param_2)


/* DDSUtil::truncateDescriptor(ImageDesc&, unsigned int) */

undefined8 DDSUtil::truncateDescriptor(ImageDesc *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = MipMapUtil::getMipRangeSize(param_1,(*(int *)(param_1 + 0x10) - param_2) + 1,param_2);
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
    return uVar1;
  }
  return 0;
}


