// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d64f28
// Entry Point: 00d64f28
// Size: 352 bytes
// Signature: undefined FUN_00d64f28(void)


void FUN_00d64f28(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  code **ppcVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if ((*(char *)(param_1 + 0xc0) == '\0') && (iVar2 = *(int *)(param_1 + 0x20), 0 < iVar2)) {
    iVar8 = iVar2 + 0xf;
    uVar7 = 0x7fL << ((ulong)(0x11 - iVar2) & 0x3f) | *(ulong *)(param_1 + 0x18);
    do {
      puVar5 = *(undefined **)(param_1 + 200);
      *(undefined **)(param_1 + 200) = puVar5 + 1;
      *puVar5 = (char)(uVar7 >> 0x10);
      lVar3 = *(long *)(param_1 + 0xd0) + -1;
      *(long *)(param_1 + 0xd0) = lVar3;
      if (lVar3 == 0) {
        puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
        cVar4 = (*(code *)puVar9[3])();
        if (cVar4 == '\0') {
          ppcVar6 = (code **)**(long **)(param_1 + 0xd8);
          *(undefined4 *)(ppcVar6 + 5) = 0x19;
          (**ppcVar6)();
          uVar1 = puVar9[1];
          *(undefined8 *)(param_1 + 200) = *puVar9;
          *(undefined8 *)(param_1 + 0xd0) = uVar1;
        }
        else {
          uVar1 = puVar9[1];
          *(undefined8 *)(param_1 + 200) = *puVar9;
          *(undefined8 *)(param_1 + 0xd0) = uVar1;
        }
      }
      if ((~(uint)uVar7 & 0xff0000) == 0) {
        puVar5 = *(undefined **)(param_1 + 200);
        *(undefined **)(param_1 + 200) = puVar5 + 1;
        *puVar5 = 0;
        lVar3 = *(long *)(param_1 + 0xd0) + -1;
        *(long *)(param_1 + 0xd0) = lVar3;
        if (lVar3 == 0) {
          puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
          cVar4 = (*(code *)puVar9[3])();
          if (cVar4 == '\0') {
            ppcVar6 = (code **)**(long **)(param_1 + 0xd8);
            *(undefined4 *)(ppcVar6 + 5) = 0x19;
            (**ppcVar6)();
          }
          uVar1 = puVar9[1];
          *(undefined8 *)(param_1 + 200) = *puVar9;
          *(undefined8 *)(param_1 + 0xd0) = uVar1;
        }
      }
      uVar7 = uVar7 << 8;
      iVar8 = iVar8 + -8;
    } while (0xf < iVar8);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


