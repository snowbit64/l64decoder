// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d64bd0
// Entry Point: 00d64bd0
// Size: 440 bytes
// Signature: undefined FUN_00d64bd0(void)


void FUN_00d64bd0(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  undefined *puVar6;
  code **ppcVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  
  if (param_3 == 0) {
    ppcVar7 = (code **)**(long **)(param_1 + 0xd8);
    *(undefined4 *)(ppcVar7 + 5) = 0x29;
    (**ppcVar7)();
    cVar5 = *(char *)(param_1 + 0xc0);
  }
  else {
    cVar5 = *(char *)(param_1 + 0xc0);
  }
  if (cVar5 != '\0') {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x20) + param_3;
  uVar8 = (ulong)(~(uint)(-1L << ((ulong)param_3 & 0x3f)) & param_2) <<
          ((ulong)(0x18 - iVar9) & 0x3f) | *(ulong *)(param_1 + 0x18);
  if (7 < iVar9) {
    do {
      puVar6 = *(undefined **)(param_1 + 200);
      *(undefined **)(param_1 + 200) = puVar6 + 1;
      *puVar6 = (char)(uVar8 >> 0x10);
      lVar4 = *(long *)(param_1 + 0xd0) + -1;
      *(long *)(param_1 + 0xd0) = lVar4;
      if (lVar4 == 0) {
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
        cVar5 = (*(code *)puVar10[3])();
        if (cVar5 == '\0') {
          ppcVar7 = (code **)**(long **)(param_1 + 0xd8);
          *(undefined4 *)(ppcVar7 + 5) = 0x19;
          (**ppcVar7)();
          uVar2 = puVar10[1];
          *(undefined8 *)(param_1 + 200) = *puVar10;
          *(undefined8 *)(param_1 + 0xd0) = uVar2;
        }
        else {
          uVar2 = puVar10[1];
          *(undefined8 *)(param_1 + 200) = *puVar10;
          *(undefined8 *)(param_1 + 0xd0) = uVar2;
        }
      }
      if ((~(uint)uVar8 & 0xff0000) == 0) {
        puVar6 = *(undefined **)(param_1 + 200);
        *(undefined **)(param_1 + 200) = puVar6 + 1;
        *puVar6 = 0;
        lVar4 = *(long *)(param_1 + 0xd0) + -1;
        *(long *)(param_1 + 0xd0) = lVar4;
        if (lVar4 == 0) {
          puVar10 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
          cVar5 = (*(code *)puVar10[3])();
          if (cVar5 == '\0') {
            ppcVar7 = (code **)**(long **)(param_1 + 0xd8);
            *(undefined4 *)(ppcVar7 + 5) = 0x19;
            (**ppcVar7)();
          }
          uVar2 = puVar10[1];
          *(undefined8 *)(param_1 + 200) = *puVar10;
          *(undefined8 *)(param_1 + 0xd0) = uVar2;
        }
      }
      iVar3 = iVar9 + -8;
      uVar8 = uVar8 << 8;
      bVar1 = 0xf < iVar9;
      iVar9 = iVar3;
    } while (bVar1);
  }
  *(ulong *)(param_1 + 0x18) = uVar8;
  *(int *)(param_1 + 0x20) = iVar9;
  return;
}


