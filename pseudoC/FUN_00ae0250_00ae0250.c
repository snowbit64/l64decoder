// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ae0250
// Entry Point: 00ae0250
// Size: 192 bytes
// Signature: undefined FUN_00ae0250(void)


undefined8 FUN_00ae0250(long param_1,undefined4 *param_2,long *param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(uint *)(param_1 + 0x4c) < param_5) {
    uVar2 = 0xf;
  }
  else {
    if (param_4 == 0) {
      *param_3 = *param_3 + 1;
      iVar1 = param_2[1];
    }
    else {
      lVar3 = *param_3;
      *(undefined4 *)(param_4 + lVar3 * 4) = *param_2;
      *param_3 = lVar3 + 1;
      iVar1 = param_2[1];
    }
    if (iVar1 != 0) {
      uVar4 = 0;
      do {
        uVar2 = FUN_00ae0250(param_1,*(undefined8 *)(*(long *)(param_2 + 4) + uVar4 * 8),param_3,
                             param_4,param_5 + 1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_2[1]);
    }
    uVar2 = 0;
  }
  return uVar2;
}


