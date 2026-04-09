// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6a294
// Entry Point: 00d6a294
// Size: 500 bytes
// Signature: undefined FUN_00d6a294(void)


void FUN_00d6a294(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code **ppcVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[0x3c];
  iVar1 = *(int *)(lVar5 + 0x20);
  if (iVar1 == 2) {
LAB_00d6a3f0:
    if (*(char *)((long)param_1 + 0x122) == '\0') {
      FUN_00d6a574(param_1);
      FUN_00d6a7ac(param_1);
    }
    (**(code **)param_1[0x44])(param_1,0);
    (**(code **)param_1[0x3f])(param_1,2);
    if (*(int *)(lVar5 + 0x2c) == 0) {
      (**(code **)(param_1[0x40] + 8))(param_1);
    }
    (**(code **)(param_1[0x40] + 0x10))(param_1);
  }
  else if (iVar1 == 1) {
    FUN_00d6a574(param_1);
    FUN_00d6a7ac(param_1);
    if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) != 0)) {
      *(undefined4 *)(lVar5 + 0x20) = 2;
      *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      goto LAB_00d6a3f0;
    }
    (**(code **)param_1[0x44])(param_1,1);
    (**(code **)param_1[0x3f])(param_1,2);
  }
  else {
    if (iVar1 != 0) {
      ppcVar3 = (code **)*param_1;
      *(undefined4 *)(ppcVar3 + 5) = 0x31;
      (**ppcVar3)(param_1);
      goto LAB_00d6a45c;
    }
    FUN_00d6a574(param_1);
    FUN_00d6a7ac(param_1);
    if (*(char *)(param_1 + 0x24) == '\0') {
      (**(code **)param_1[0x41])(param_1);
      (**(code **)param_1[0x42])(param_1);
      (**(code **)param_1[0x3e])(param_1,0);
    }
    (**(code **)param_1[0x43])(param_1);
    (**(code **)param_1[0x44])(param_1,*(undefined *)((long)param_1 + 0x122));
    uVar2 = 3;
    if (*(int *)(lVar5 + 0x28) < 2) {
      uVar2 = 0;
    }
    (**(code **)param_1[0x3f])(param_1,uVar2);
    (**(code **)param_1[0x3d])(param_1,0);
    if (*(char *)((long)param_1 + 0x122) == '\0') {
      *(undefined *)(lVar5 + 0x18) = 1;
      goto LAB_00d6a45c;
    }
  }
  *(undefined *)(lVar5 + 0x18) = 0;
LAB_00d6a45c:
  iVar1 = *(int *)(lVar5 + 0x28);
  lVar4 = param_1[2];
  *(bool *)(lVar5 + 0x19) = *(int *)(lVar5 + 0x24) == iVar1 + -1;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar5 + 0x24);
    *(int *)(lVar4 + 0x1c) = iVar1;
  }
  return;
}


