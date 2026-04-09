// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0b138
// Entry Point: 00f0b138
// Size: 388 bytes
// Signature: undefined FUN_00f0b138(void)


void FUN_00f0b138(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar1 = *(uint *)((long)param_2 + 0x24);
  uVar2 = *(undefined *)(param_1 + 3);
  puVar9 = *(undefined8 **)(param_1 + 8);
  lVar8 = *(long *)param_2[1];
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x52);
  *(uint *)((long)param_2 + 0x24) = uVar1 & 0xfffffffd;
  *(undefined *)(param_1 + 3) = 0;
  switch(uVar2) {
  case 2:
    goto switchD_00f0b19c_caseD_2;
  case 3:
    puVar9[1] = puVar9[-1];
    *puVar9 = puVar9[-2];
    break;
  case 4:
    pcVar5 = "not enough memory";
    uVar6 = 0x11;
    goto LAB_00f0b1d0;
  case 5:
    pcVar5 = "error in error handling";
    uVar6 = 0x17;
LAB_00f0b1d0:
    uVar6 = FUN_00f128c0(param_1,pcVar5,uVar6);
    *puVar9 = uVar6;
    *(undefined4 *)((long)puVar9 + 0xc) = 5;
  }
  puVar9 = puVar9 + 2;
  *(undefined8 **)(param_1 + 8) = puVar9;
switchD_00f0b19c_caseD_2:
  param_2[2] = puVar9;
  lVar7 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  iVar4 = (**(code **)(lVar8 + 0x20))(param_1,uVar2);
  *(long *)(param_1 + 0x20) = (long)param_2 + (*(long *)(param_1 + 0x40) - lVar7);
  FUN_00f0bb9c(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_00f23068(param_1,*(long *)(param_1 + 8) + (long)iVar4 * -0x10);
  cVar3 = *(char *)(param_1 + 3);
  do {
    if (cVar3 != '\0') {
      return;
    }
    while( true ) {
      if (*(ulong *)(param_1 + 0x20) <= *(ulong *)(param_1 + 0x40)) {
        return;
      }
      lVar8 = **(long **)(*(ulong *)(param_1 + 0x20) + 8);
      if (*(char *)(lVar8 + 3) == '\0') break;
      iVar4 = (**(code **)(lVar8 + 0x20))(param_1,0);
      if (*(char *)(param_1 + 3) == '\x06') {
        return;
      }
      FUN_00f23068(param_1,*(long *)(param_1 + 8) + (long)iVar4 * -0x10);
      if (*(char *)(param_1 + 3) != '\0') {
        return;
      }
    }
    FUN_00f1a6c4(param_1);
    cVar3 = *(char *)(param_1 + 3);
  } while( true );
}


