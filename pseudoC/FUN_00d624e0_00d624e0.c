// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d624e0
// Entry Point: 00d624e0
// Size: 564 bytes
// Signature: undefined FUN_00d624e0(void)


undefined8 FUN_00d624e0(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  code **ppcVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  lVar9 = *(long *)(param_1 + 0x220);
  iVar5 = *(int *)(param_1 + 0x130);
  uVar1 = (*(undefined8 **)(param_1 + 0x28))[1];
  *(undefined8 *)(lVar9 + 200) = **(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(lVar9 + 0xd0) = uVar1;
  if ((iVar5 == 0) || (*(int *)(lVar9 + 0x38) != 0)) {
    iVar5 = *(int *)(param_1 + 400);
  }
  else {
    FUN_00d65088(lVar9,*(undefined4 *)(lVar9 + 0x3c));
    iVar5 = *(int *)(param_1 + 400);
  }
  if ((0 < iVar5) && (*(char *)(lVar9 + 0xc0) == '\0')) {
    lVar10 = 0;
    uVar2 = *(uint *)(param_1 + 0x1c8);
    do {
      iVar8 = *(int *)(lVar9 + 0x20);
      uVar11 = ((ulong)(long)**(short **)(param_2 + lVar10 * 8) >> ((ulong)uVar2 & 0x3f) & 1) <<
               ((ulong)(0x17 - iVar8) & 0x3f) | *(ulong *)(lVar9 + 0x18);
      if (iVar8 < 7) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar5 = iVar8 + 9;
        do {
          iVar8 = iVar5;
          puVar6 = *(undefined **)(lVar9 + 200);
          *(undefined **)(lVar9 + 200) = puVar6 + 1;
          *puVar6 = (char)(uVar11 >> 0x10);
          lVar3 = *(long *)(lVar9 + 0xd0) + -1;
          *(long *)(lVar9 + 0xd0) = lVar3;
          if (lVar3 == 0) {
            puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0xd8) + 0x28);
            cVar4 = (*(code *)puVar12[3])();
            if (cVar4 == '\0') {
              ppcVar7 = (code **)**(long **)(lVar9 + 0xd8);
              *(undefined4 *)(ppcVar7 + 5) = 0x19;
              (**ppcVar7)();
              uVar1 = puVar12[1];
              *(undefined8 *)(lVar9 + 200) = *puVar12;
              *(undefined8 *)(lVar9 + 0xd0) = uVar1;
            }
            else {
              uVar1 = puVar12[1];
              *(undefined8 *)(lVar9 + 200) = *puVar12;
              *(undefined8 *)(lVar9 + 0xd0) = uVar1;
            }
          }
          if ((~(uint)uVar11 & 0xff0000) == 0) {
            puVar6 = *(undefined **)(lVar9 + 200);
            *(undefined **)(lVar9 + 200) = puVar6 + 1;
            *puVar6 = 0;
            lVar3 = *(long *)(lVar9 + 0xd0) + -1;
            *(long *)(lVar9 + 0xd0) = lVar3;
            if (lVar3 == 0) {
              puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0xd8) + 0x28);
              cVar4 = (*(code *)puVar12[3])();
              if (cVar4 == '\0') {
                ppcVar7 = (code **)**(long **)(lVar9 + 0xd8);
                *(undefined4 *)(ppcVar7 + 5) = 0x19;
                (**ppcVar7)();
              }
              uVar1 = puVar12[1];
              *(undefined8 *)(lVar9 + 200) = *puVar12;
              *(undefined8 *)(lVar9 + 0xd0) = uVar1;
            }
          }
          uVar11 = uVar11 << 8;
          iVar5 = iVar8 + -8;
        } while (0xf < iVar5);
        iVar5 = *(int *)(param_1 + 400);
        iVar8 = iVar8 + -0x10;
      }
      *(ulong *)(lVar9 + 0x18) = uVar11;
      *(int *)(lVar9 + 0x20) = iVar8;
      do {
        lVar10 = lVar10 + 1;
        if (iVar5 <= lVar10) goto LAB_00d626bc;
      } while (*(char *)(lVar9 + 0xc0) != '\0');
    } while( true );
  }
LAB_00d626bc:
  uVar1 = *(undefined8 *)(lVar9 + 0xd0);
  puVar12 = *(undefined8 **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x130);
  *puVar12 = *(undefined8 *)(lVar9 + 200);
  puVar12[1] = uVar1;
  if (iVar5 != 0) {
    iVar8 = *(int *)(lVar9 + 0x38);
    if (*(int *)(lVar9 + 0x38) == 0) {
      *(uint *)(lVar9 + 0x3c) = *(int *)(lVar9 + 0x3c) + 1U & 7;
      iVar8 = iVar5;
    }
    *(int *)(lVar9 + 0x38) = iVar8 + -1;
  }
  return 1;
}


