// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0690
// Entry Point: 007b0690
// Size: 136 bytes
// Signature: undefined FUN_007b0690(void)


void FUN_007b0690(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = FoliageSystemDesc::getState(param_1,*param_2,param_2[4],param_2[8],true);
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
  }
  else {
    lVar1 = lVar2 + 0x19;
    if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
      lVar1 = *(long *)(lVar2 + 0x28);
    }
    *(long *)(param_2 + 0x40) = lVar1;
    uVar4 = 6;
    *(ushort *)(param_2 + 0x43) = *(ushort *)(param_2 + 0x43) & 0xfffe;
    uVar3 = 1;
    param_2[0x44] = *(uint *)(lVar2 + 0x30);
  }
  param_2[0x42] = uVar4;
  param_2[0x46] = uVar3;
  return;
}


