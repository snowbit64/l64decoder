// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b09a4
// Entry Point: 007b09a4
// Size: 120 bytes
// Signature: undefined FUN_007b09a4(void)


void FUN_007b09a4(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = FoliageSystemDesc::getLod
                    (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true);
  if (lVar2 == 0) {
    uVar3 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    uVar3 = 6;
    lVar1 = lVar2 + 9;
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      lVar1 = *(long *)(lVar2 + 0x18);
    }
    *(long *)(param_2 + 0x40) = lVar1;
    *(ushort *)(param_2 + 0x43) = *(ushort *)(param_2 + 0x43) & 0xfffe;
  }
  param_2[0x42] = uVar3;
  return;
}


