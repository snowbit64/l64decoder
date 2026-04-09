// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downgradeDescriptor
// Entry Point: 00a7a740
// Size: 116 bytes
// Signature: undefined __cdecl downgradeDescriptor(ImageDesc * param_1, uint param_2)


/* DDSUtil::downgradeDescriptor(ImageDesc&, unsigned int) */

undefined8 DDSUtil::downgradeDescriptor(ImageDesc *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar2 = MipMapUtil::getMipRangeSize(param_1,0,param_2);
    uVar3 = NEON_neg(CONCAT44(param_2,param_2),4);
    uVar1 = *(uint *)(param_1 + 8) >> (ulong)(param_2 & 0x1f);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = NEON_ushl(*(undefined8 *)param_1,uVar3,4);
    *(uint *)(param_1 + 8) = uVar1;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
    uVar3 = NEON_umax(uVar3,0x100000001,4);
    *(undefined8 *)param_1 = uVar3;
    return uVar2;
  }
  return 0;
}


