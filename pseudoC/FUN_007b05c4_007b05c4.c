// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b05c4
// Entry Point: 007b05c4
// Size: 96 bytes
// Signature: undefined FUN_007b05c4(void)


void FUN_007b05c4(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLayer(param_1,*param_2,param_2[4],true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    param_2[0x40] =
         (int)((ulong)(*(long *)(lVar1 + 0x60) - *(long *)(lVar1 + 0x58)) >> 3) * -0x3b13b13b;
  }
  param_2[0x42] = (uint)(lVar1 != 0);
  return;
}


