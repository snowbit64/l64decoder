// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ac0350
// Entry Point: 00ac0350
// Size: 300 bytes
// Signature: undefined FUN_00ac0350(void)


int FUN_00ac0350(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar5 = *param_1;
  lVar4 = *param_3;
  uVar1 = *(uint *)(lVar6 + 0x28);
  uVar2 = *(uint *)(lVar5 + 0x28);
  if (uVar1 < uVar2) {
    if (*(uint *)(lVar4 + 0x28) < uVar1) {
      *param_1 = lVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = lVar6;
      *param_2 = lVar5;
      lVar4 = *param_3;
      if (uVar2 <= *(uint *)(lVar4 + 0x28)) {
        iVar3 = 1;
        goto LAB_00ac0404;
      }
      iVar3 = 2;
      *param_2 = lVar4;
    }
    *param_3 = lVar5;
    lVar4 = lVar5;
  }
  else if (*(uint *)(lVar4 + 0x28) < uVar1) {
    *param_2 = lVar4;
    *param_3 = lVar6;
    lVar4 = *param_1;
    if (*(uint *)(*param_2 + 0x28) < *(uint *)(lVar4 + 0x28)) {
      *param_1 = *param_2;
      iVar3 = 2;
      *param_2 = lVar4;
      lVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      lVar4 = lVar6;
    }
  }
  else {
    iVar3 = 0;
  }
LAB_00ac0404:
  if (*(uint *)(*param_4 + 0x28) < *(uint *)(lVar4 + 0x28)) {
    *param_3 = *param_4;
    *param_4 = lVar4;
    lVar4 = *param_2;
    if (*(uint *)(lVar4 + 0x28) <= *(uint *)(*param_3 + 0x28)) {
      return iVar3 + 1;
    }
    *param_2 = *param_3;
    *param_3 = lVar4;
    lVar4 = *param_1;
    if (*(uint *)(lVar4 + 0x28) <= *(uint *)(*param_2 + 0x28)) {
      return iVar3 + 2;
    }
    iVar3 = iVar3 + 3;
    *param_1 = *param_2;
    *param_2 = lVar4;
  }
  return iVar3;
}


