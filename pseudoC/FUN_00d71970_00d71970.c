// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d71970
// Entry Point: 00d71970
// Size: 204 bytes
// Signature: undefined FUN_00d71970(void)


undefined8 FUN_00d71970(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)((long)param_1 + 0x21c) == 0) {
    cVar1 = FUN_00d6fa10(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = *(int *)(param_1[0x49] + 0x1c);
    if (*(int *)((long)param_1 + 0x21c) != iVar2 + 0xd0) goto LAB_00d719f0;
  }
  else {
    iVar2 = *(int *)(param_1[0x49] + 0x1c);
    if (*(int *)((long)param_1 + 0x21c) != iVar2 + 0xd0) {
LAB_00d719f0:
      cVar1 = (**(code **)(param_1[5] + 0x28))(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      goto LAB_00d71a08;
    }
  }
  lVar3 = *param_1;
  *(int *)(lVar3 + 0x2c) = iVar2;
  lVar4 = *param_1;
  *(undefined4 *)(lVar3 + 0x28) = 100;
  (**(code **)(lVar4 + 8))(param_1,3);
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
LAB_00d71a08:
  *(uint *)(param_1[0x49] + 0x1c) = *(int *)(param_1[0x49] + 0x1c) + 1U & 7;
  return 1;
}


