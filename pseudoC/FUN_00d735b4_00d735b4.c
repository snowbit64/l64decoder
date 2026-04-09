// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d735b4
// Entry Point: 00d735b4
// Size: 464 bytes
// Signature: undefined FUN_00d735b4(void)


void FUN_00d735b4(long *param_1)

{
  char cVar1;
  undefined4 uVar2;
  code **ppcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = param_1[0x44];
  if (*(char *)(lVar8 + 0x10) == '\0') {
    if ((*(char *)((long)param_1 + 0x62) != '\0') && (param_1[0x12] == 0)) {
      if ((*(char *)(param_1 + 0xd) == '\0') || (*(char *)((long)param_1 + 0x72) == '\0')) {
        if (*(char *)(param_1 + 0xe) == '\0') {
          ppcVar3 = (code **)*param_1;
          *(undefined4 *)(ppcVar3 + 5) = 0x2f;
          (**ppcVar3)(param_1);
        }
        else {
          param_1[0x4e] = *(long *)(lVar8 + 0x20);
        }
      }
      else {
        param_1[0x4e] = *(long *)(lVar8 + 0x28);
        *(undefined *)(lVar8 + 0x10) = 1;
      }
    }
    (**(code **)param_1[0x4b])(param_1);
    (**(code **)(param_1[0x46] + 0x10))(param_1);
    if (*(char *)((long)param_1 + 0x59) != '\0') goto LAB_00d73654;
    if (*(char *)(lVar8 + 0x1c) == '\0') {
      (**(code **)param_1[0x4d])(param_1);
    }
    (**(code **)param_1[0x4c])(param_1);
    if (*(char *)((long)param_1 + 0x62) != '\0') {
      (**(code **)param_1[0x4e])(param_1,*(undefined *)(lVar8 + 0x10));
    }
    uVar2 = 0;
    if (*(char *)(lVar8 + 0x10) != '\0') {
      uVar2 = 3;
    }
    (**(code **)param_1[0x47])(param_1,uVar2);
    uVar7 = 0;
  }
  else {
    ppcVar3 = (code **)param_1[0x4e];
    *(undefined *)(lVar8 + 0x10) = 0;
    (**ppcVar3)(param_1,0);
    uVar7 = 2;
    (**(code **)param_1[0x47])(param_1,2);
  }
  (**(code **)param_1[0x45])(param_1,uVar7);
LAB_00d73654:
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    cVar1 = *(char *)(param_1 + 0xb);
    iVar5 = 1;
    if (*(char *)(lVar8 + 0x10) != '\0') {
      iVar5 = 2;
    }
    iVar5 = iVar5 + *(int *)(lVar8 + 0x18);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar8 + 0x18);
    *(int *)(lVar4 + 0x1c) = iVar5;
    if ((cVar1 != '\0') && (*(char *)(param_1[0x48] + 0x21) == '\0')) {
      iVar6 = 1;
      if (*(char *)((long)param_1 + 0x72) != '\0') {
        iVar6 = 2;
      }
      *(int *)(lVar4 + 0x1c) = iVar6 + iVar5;
      return;
    }
  }
  return;
}


