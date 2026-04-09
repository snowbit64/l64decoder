// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d65088
// Entry Point: 00d65088
// Size: 320 bytes
// Signature: undefined FUN_00d65088(void)


void FUN_00d65088(long param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  code **ppcVar7;
  long lVar8;
  undefined8 *puVar9;
  char **ppcVar10;
  
  FUN_00d647a8();
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_00d64f28(param_1);
    puVar4 = *(undefined **)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar4 + 1;
    *puVar4 = 0xff;
    lVar6 = *(long *)(param_1 + 0xd0) + -1;
    *(long *)(param_1 + 0xd0) = lVar6;
    if (lVar6 == 0) {
      ppcVar10 = *(char ***)(*(long *)(param_1 + 0xd8) + 0x28);
      cVar3 = (*(code *)ppcVar10[3])();
      if (cVar3 == '\0') {
        ppcVar7 = (code **)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(ppcVar7 + 5) = 0x19;
        (**ppcVar7)();
      }
      pcVar5 = *ppcVar10;
      *(char **)(param_1 + 0xd0) = ppcVar10[1];
    }
    else {
      pcVar5 = *(char **)(param_1 + 200);
    }
    *(char **)(param_1 + 200) = pcVar5 + 1;
    *pcVar5 = param_2 + -0x30;
    lVar6 = *(long *)(param_1 + 0xd0) + -1;
    *(long *)(param_1 + 0xd0) = lVar6;
    if (lVar6 == 0) {
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
      cVar3 = (*(code *)puVar9[3])();
      if (cVar3 == '\0') {
        ppcVar7 = (code **)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(ppcVar7 + 5) = 0x19;
        (**ppcVar7)();
      }
      uVar1 = puVar9[1];
      *(undefined8 *)(param_1 + 200) = *puVar9;
      *(undefined8 *)(param_1 + 0xd0) = uVar1;
      lVar6 = *(long *)(param_1 + 0xd8);
      iVar2 = *(int *)(lVar6 + 0x1bc);
      goto joined_r0x00d6518c;
    }
  }
  lVar6 = *(long *)(param_1 + 0xd8);
  iVar2 = *(int *)(lVar6 + 0x1bc);
joined_r0x00d6518c:
  if (iVar2 == 0) {
    if (0 < *(int *)(lVar6 + 0x164)) {
      lVar8 = 0;
      do {
        *(undefined4 *)(param_1 + 0x24 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar6 + 0x164));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  return;
}


