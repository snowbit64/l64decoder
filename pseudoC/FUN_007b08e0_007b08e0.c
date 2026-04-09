// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b08e0
// Entry Point: 007b08e0
// Size: 92 bytes
// Signature: undefined FUN_007b08e0(void)


void FUN_007b08e0(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getShape(param_1,*param_2,param_2[4],param_2[8],param_2[0xc],true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    param_2[0x40] = (uint)((ulong)(*(long *)(lVar1 + 0x10) - *(long *)(lVar1 + 8)) >> 6);
  }
  param_2[0x42] = (uint)(lVar1 != 0);
  return;
}


