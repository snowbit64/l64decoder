// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b03a8
// Entry Point: 007b03a8
// Size: 80 bytes
// Signature: undefined FUN_007b03a8(void)


void FUN_007b03a8(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FoliageSystemDesc::getMultiLayer(param_1,*param_2,true);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    lVar2 = *(long *)(lVar2 + 0x10);
    param_2[0x42] = 1;
    param_2[0x40] = (int)((ulong)(lVar2 - lVar1) >> 4) * -0x49249249;
  }
  return;
}


