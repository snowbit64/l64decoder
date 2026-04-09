// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00975aec
// Entry Point: 00975aec
// Size: 344 bytes
// Signature: undefined FUN_00975aec(void)


int FUN_00975aec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00975a08();
  uVar2 = FUN_009758e8(param_4,param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar2 = FUN_009758e8(param_3,param_2);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar2 = FUN_009758e8(param_2,param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        iVar1 = iVar1 + 3;
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  uVar2 = FUN_009758e8(param_5,param_4);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar2 = FUN_009758e8(param_4,param_3);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uVar2 = FUN_009758e8(param_3,param_2);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar2 = FUN_009758e8(param_2,param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          iVar1 = iVar1 + 4;
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
      }
    }
  }
  return iVar1;
}


