// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d71a3c
// Entry Point: 00d71a3c
// Size: 264 bytes
// Signature: undefined FUN_00d71a3c(void)


undefined4 FUN_00d71a3c(long *param_1)

{
  undefined uVar1;
  undefined uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  
  puVar9 = (undefined8 *)param_1[5];
  lVar4 = puVar9[1];
  if (lVar4 == 0) {
    cVar3 = (*(code *)puVar9[3])(param_1);
    if (cVar3 != '\0') {
      puVar10 = (undefined *)*puVar9;
      lVar4 = puVar9[1];
      uVar1 = *puVar10;
      goto joined_r0x00d71ab0;
    }
LAB_00d71b24:
    uVar8 = 0;
  }
  else {
    puVar10 = (undefined *)*puVar9;
    uVar1 = *puVar10;
joined_r0x00d71ab0:
    lVar4 = lVar4 + -1;
    puVar10 = puVar10 + 1;
    if (lVar4 == 0) {
      cVar3 = (*(code *)puVar9[3])(param_1);
      if (cVar3 == '\0') goto LAB_00d71b24;
      puVar10 = (undefined *)*puVar9;
      lVar4 = puVar9[1];
    }
    uVar2 = *puVar10;
    lVar5 = *param_1;
    lVar7 = (ulong)CONCAT11(uVar1,uVar2) - 2;
    *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
    lVar6 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x5d;
    uVar8 = 1;
    *(int *)(lVar6 + 0x30) = (int)lVar7;
    (**(code **)(*param_1 + 8))(param_1,1);
    *puVar9 = puVar10 + 1;
    puVar9[1] = lVar4 + -1;
    if (2 < (ulong)CONCAT11(uVar1,uVar2)) {
      (**(code **)(param_1[5] + 0x20))(param_1,lVar7);
      uVar8 = 1;
    }
  }
  return uVar8;
}


