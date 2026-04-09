// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0574
// Entry Point: 007b0574
// Size: 80 bytes
// Signature: undefined FUN_007b0574(void)


void FUN_007b0574(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLayer(param_1,*param_2,param_2[4],true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    param_2[0x40] = (uint)(1L << ((ulong)*(uint *)(lVar1 + 0x50) & 0x3f));
  }
  param_2[0x42] = (uint)(lVar1 != 0);
  return;
}


