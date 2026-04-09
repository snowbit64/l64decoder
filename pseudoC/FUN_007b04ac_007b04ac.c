// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b04ac
// Entry Point: 007b04ac
// Size: 108 bytes
// Signature: undefined FUN_007b04ac(void)


void FUN_007b04ac(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = FoliageSystemDesc::getLayer(param_1,*param_2,param_2[4],true);
  if (lVar2 == 0) {
    uVar3 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    uVar3 = 6;
    lVar1 = lVar2 + 0x31;
    if ((*(byte *)(lVar2 + 0x30) & 1) != 0) {
      lVar1 = *(long *)(lVar2 + 0x40);
    }
    *(long *)(param_2 + 0x40) = lVar1;
    *(ushort *)(param_2 + 0x43) = *(ushort *)(param_2 + 0x43) & 0xfffe;
  }
  param_2[0x42] = uVar3;
  return;
}


