// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d68624
// Entry Point: 00d68624
// Size: 652 bytes
// Signature: undefined FUN_00d68624(void)


void FUN_00d68624(long *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)param_1[5];
  puVar4 = (undefined *)*puVar2;
  *puVar2 = puVar4 + 1;
  *puVar4 = 0xff;
  lVar5 = puVar2[1];
  puVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (cVar1 = (*(code *)puVar2[3])(param_1), cVar1 == '\0')) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x19;
    (**ppcVar3)(param_1);
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar4 = (undefined *)*puVar2;
  *puVar2 = puVar4 + 1;
  *puVar4 = 0xd8;
  lVar5 = puVar2[1];
  puVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (cVar1 = (*(code *)puVar2[3])(param_1), cVar1 == '\0')) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x19;
    (**ppcVar3)(param_1);
  }
  if (param_1[0xe] != 0) {
    FUN_00d68ac8(param_1,0);
  }
  if (param_1[0xf] != 0) {
    FUN_00d68ac8(param_1,1);
  }
  if (param_1[0x10] != 0) {
    FUN_00d68ac8(param_1,2);
  }
  if (param_1[0x11] != 0) {
    FUN_00d68ac8(param_1,3);
  }
  if (*(char *)((long)param_1 + 0x121) == '\0') {
    if (param_1[0x14] != 0) {
      FUN_00d6936c(param_1,0,0);
    }
    if (param_1[0x18] != 0) {
      FUN_00d6936c(param_1,0,1);
    }
    if (param_1[0x15] != 0) {
      FUN_00d6936c(param_1,1,0);
    }
    if (param_1[0x19] != 0) {
      FUN_00d6936c(param_1,1,1);
    }
    if (param_1[0x16] != 0) {
      FUN_00d6936c(param_1,2,0);
    }
    if (param_1[0x1a] != 0) {
      FUN_00d6936c(param_1,2,1);
    }
    if (param_1[0x17] != 0) {
      FUN_00d6936c(param_1,3,0);
    }
    if (param_1[0x1b] != 0) {
      FUN_00d6936c(param_1,3,1);
    }
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar4 = (undefined *)*puVar2;
  *puVar2 = puVar4 + 1;
  *puVar4 = 0xff;
  lVar5 = puVar2[1];
  puVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (cVar1 = (*(code *)puVar2[3])(param_1), cVar1 == '\0')) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x19;
    (**ppcVar3)(param_1);
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar4 = (undefined *)*puVar2;
  *puVar2 = puVar4 + 1;
  *puVar4 = 0xd9;
  lVar5 = puVar2[1];
  puVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (cVar1 = (*(code *)puVar2[3])(param_1), cVar1 == '\0')) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00d688ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar3)(param_1);
    return;
  }
  return;
}


