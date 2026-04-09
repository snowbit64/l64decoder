// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00efeddc
// Entry Point: 00efeddc
// Size: 360 bytes
// Signature: undefined FUN_00efeddc(void)


int FUN_00efeddc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)param_2;
  uVar2 = *(uint *)param_3;
  if (uVar1 < *(uint *)param_1) {
    uVar4 = *param_1;
    if (uVar2 < uVar1) {
      iVar3 = 1;
      *param_1 = *param_3;
    }
    else {
      *param_1 = *param_2;
      *param_2 = uVar4;
      if ((uint)uVar4 <= *(uint *)param_3) {
        iVar3 = 1;
        if (*(uint *)param_3 <= *(uint *)param_4) {
          return 1;
        }
        goto LAB_00efeed8;
      }
      iVar3 = 2;
      *param_2 = *param_3;
    }
    *param_3 = uVar4;
    if ((uint)uVar4 <= *(uint *)param_4) {
      return iVar3;
    }
  }
  else if (uVar2 < uVar1) {
    uVar4 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar4;
    if (*(uint *)param_2 < *(uint *)param_1) {
      uVar4 = *param_1;
      *param_1 = *param_2;
      iVar3 = 2;
      *param_2 = uVar4;
      if (*(uint *)param_3 <= *(uint *)param_4) {
        return 2;
      }
    }
    else {
      iVar3 = 1;
      if ((uint)uVar4 <= *(uint *)param_4) {
        return 1;
      }
    }
  }
  else {
    iVar3 = 0;
    if (uVar2 <= *(uint *)param_4) {
      return 0;
    }
  }
LAB_00efeed8:
  uVar4 = *param_3;
  *param_3 = *param_4;
  *param_4 = uVar4;
  if (*(uint *)param_2 <= *(uint *)param_3) {
    return iVar3 + 1;
  }
  uVar4 = *param_2;
  *param_2 = *param_3;
  *param_3 = uVar4;
  if (*(uint *)param_2 < *(uint *)param_1) {
    uVar4 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar4;
    return iVar3 + 3;
  }
  return iVar3 + 2;
}


