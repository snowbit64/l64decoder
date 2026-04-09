// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ee4e88
// Entry Point: 00ee4e88
// Size: 1276 bytes
// Signature: undefined FUN_00ee4e88(void)


void FUN_00ee4e88(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  
  switch(param_2) {
  case 0:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 3;
      param_1[1] = (double)param_3[1] + (double)param_4[1];
    }
    break;
  case 1:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 3;
      param_1[1] = (double)param_3[1] - (double)param_4[1];
      return;
    }
    break;
  case 2:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 3;
      param_1[1] = (double)param_3[1] * (double)param_4[1];
      return;
    }
    break;
  case 3:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 3;
      param_1[1] = (double)param_3[1] / (double)param_4[1];
      return;
    }
    break;
  case 4:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 3;
      uVar4 = NEON_fmsub((long)((double)param_3[1] / (double)param_4[1]),param_4[1],param_3[1]);
      param_1[1] = uVar4;
      return;
    }
    break;
  case 5:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 3;
      dVar5 = pow((double)param_3[1],(double)param_4[1]);
      param_1[1] = dVar5;
      return;
    }
    break;
  case 7:
    if (*(int *)param_3 == 0) {
      return;
    }
    if (*(int *)param_4 == 0) {
      return;
    }
    *(undefined4 *)param_1 = 2;
    switch(*(int *)param_3) {
    case 1:
      bVar1 = *(int *)param_4 == 1;
      break;
    case 2:
      bVar2 = *(int *)param_4 == 2;
      bVar1 = *(char *)(param_3 + 1) == *(char *)(param_4 + 1);
      goto LAB_00ee52e0;
    case 3:
      bVar2 = *(int *)param_4 == 3;
      bVar1 = (double)param_3[1] == (double)param_4[1];
LAB_00ee52e0:
      *(byte *)(param_1 + 1) = bVar2 & bVar1 ^ 1;
      return;
    case 4:
      if ((*(int *)param_4 != 4) || (*(uint *)((long)param_3 + 4) != *(uint *)((long)param_4 + 4)))
      goto switchD_00ee5138_caseD_4;
      iVar3 = memcmp((void *)param_3[1],(void *)param_4[1],(ulong)*(uint *)((long)param_3 + 4));
      bVar1 = iVar3 == 0;
      break;
    default:
switchD_00ee5138_caseD_4:
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    *(byte *)(param_1 + 1) = bVar1 ^ 1;
    return;
  case 8:
    if ((*(int *)param_3 != 0) && (*(int *)param_4 != 0)) {
      *(undefined4 *)param_1 = 2;
      switch(*(int *)param_3) {
      case 1:
        *(bool *)(param_1 + 1) = *(int *)param_4 == 1;
        return;
      case 2:
        bVar2 = *(int *)param_4 == 2;
        bVar1 = *(char *)(param_3 + 1) == *(char *)(param_4 + 1);
        break;
      case 3:
        bVar2 = *(int *)param_4 == 3;
        bVar1 = (double)param_3[1] == (double)param_4[1];
        break;
      case 4:
        if ((*(int *)param_4 == 4) && (*(uint *)((long)param_3 + 4) == *(uint *)((long)param_4 + 4))
           ) {
          iVar3 = memcmp((void *)param_3[1],(void *)param_4[1],(ulong)*(uint *)((long)param_3 + 4));
          *(bool *)(param_1 + 1) = iVar3 == 0;
          return;
        }
      default:
        *(undefined *)(param_1 + 1) = 0;
        return;
      }
      *(char *)(param_1 + 1) = bVar2 & bVar1;
      return;
    }
    break;
  case 9:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 2;
      *(bool *)(param_1 + 1) = (double)param_3[1] < (double)param_4[1];
      return;
    }
    break;
  case 10:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 2;
      *(bool *)(param_1 + 1) = (double)param_3[1] <= (double)param_4[1];
      return;
    }
    break;
  case 0xb:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 2;
      *(bool *)(param_1 + 1) = (double)param_4[1] < (double)param_3[1];
      return;
    }
    break;
  case 0xc:
    if ((*(int *)param_3 == 3) && (*(int *)param_4 == 3)) {
      *(undefined4 *)param_1 = 2;
      *(bool *)(param_1 + 1) = (double)param_4[1] <= (double)param_3[1];
      return;
    }
    break;
  case 0xd:
    iVar3 = *(int *)param_3;
    if (iVar3 != 0) {
      if ((iVar3 != 1) && ((iVar3 != 2 || (*(char *)(param_3 + 1) != '\0')))) {
        param_3 = param_4;
      }
      uVar4 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar4;
      return;
    }
    break;
  case 0xe:
    iVar3 = *(int *)param_3;
    if (iVar3 != 0) {
      if ((iVar3 != 1) && ((iVar3 != 2 || (*(char *)(param_3 + 1) != '\0')))) {
        param_4 = param_3;
      }
      uVar4 = *param_4;
      param_1[1] = param_4[1];
      *param_1 = uVar4;
      return;
    }
  }
  return;
}


