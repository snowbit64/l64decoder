// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0518
// Entry Point: 007b0518
// Size: 92 bytes
// Signature: undefined FUN_007b0518(void)


void FUN_007b0518(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FoliageSystemDesc::getLayer(param_1,*param_2,param_2[4],true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
  }
  else {
    param_2[0x40] = *(uint *)(lVar1 + 0x4c);
    param_2[0x44] = *(uint *)(lVar1 + 0x50);
  }
  uVar2 = (uint)(lVar1 != 0);
  param_2[0x42] = uVar2;
  param_2[0x46] = uVar2;
  return;
}


