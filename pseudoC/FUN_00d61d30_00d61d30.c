// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61d30
// Entry Point: 00d61d30
// Size: 456 bytes
// Signature: undefined FUN_00d61d30(void)


void FUN_00d61d30(long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code **ppcVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar5 = tpidr_el0;
  lVar3 = *(long *)(lVar5 + 0x28);
  puVar4 = (undefined8 *)param_1[5];
  lVar8 = param_1[0x44];
  puVar9 = (undefined *)*puVar4;
  if (*(char *)((long)param_1 + 0x14c) == '\0') {
    iVar11 = *(int *)(lVar8 + 0x20);
    lVar6 = puVar4[1];
    uVar16 = *(undefined8 *)(lVar8 + 0x2c);
    uVar15 = *(undefined8 *)(lVar8 + 0x24);
    uVar1 = *(undefined4 *)(lVar8 + 0x34);
    uVar12 = *(ulong *)(lVar8 + 0x18);
    if (0 < iVar11) {
      iVar14 = iVar11 + 0xf;
      uVar13 = 0x7fL << ((ulong)(0x11 - iVar11) & 0x3f) | uVar12;
      do {
        lVar6 = lVar6 + -1;
        puVar10 = puVar9 + 1;
        *puVar9 = (char)(uVar13 >> 0x10);
        if (lVar6 == 0) {
          puVar4 = (undefined8 *)param_1[5];
          cVar2 = (*(code *)puVar4[3])(param_1);
          if (cVar2 != '\0') {
            puVar10 = (undefined *)*puVar4;
            lVar6 = puVar4[1];
            goto joined_r0x00d61e6c;
          }
LAB_00d61ea8:
          ppcVar7 = (code **)*param_1;
          *(undefined4 *)(ppcVar7 + 5) = 0x19;
          (**ppcVar7)(param_1);
          lVar6 = 0;
          goto LAB_00d61ec4;
        }
joined_r0x00d61e6c:
        puVar9 = puVar10;
        if ((~(uint)uVar13 & 0xff0000) == 0) {
          lVar6 = lVar6 + -1;
          puVar9 = puVar10 + 1;
          *puVar10 = 0;
          if (lVar6 == 0) {
            puVar4 = (undefined8 *)param_1[5];
            cVar2 = (*(code *)puVar4[3])(param_1);
            puVar10 = puVar9;
            if (cVar2 == '\0') goto LAB_00d61ea8;
            puVar9 = (undefined *)*puVar4;
            lVar6 = puVar4[1];
          }
        }
        uVar13 = uVar13 << 8;
        iVar14 = iVar14 + -8;
      } while (0xf < iVar14);
    }
    uVar12 = 0;
    iVar11 = 0;
    puVar10 = puVar9;
LAB_00d61ec4:
    puVar4 = (undefined8 *)param_1[5];
    *puVar4 = puVar10;
    puVar4[1] = lVar6;
    *(ulong *)(lVar8 + 0x18) = uVar12;
    *(int *)(lVar8 + 0x20) = iVar11;
    *(undefined8 *)(lVar8 + 0x2c) = uVar16;
    *(undefined8 *)(lVar8 + 0x24) = uVar15;
    *(undefined4 *)(lVar8 + 0x34) = uVar1;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
    *(undefined **)(lVar8 + 200) = puVar9;
    *(undefined8 *)(lVar8 + 0xd0) = puVar4[1];
    FUN_00d647a8(lVar8);
    FUN_00d64f28(lVar8);
    puVar4 = (undefined8 *)param_1[5];
    *puVar4 = *(undefined8 *)(lVar8 + 200);
    puVar4[1] = *(undefined8 *)(lVar8 + 0xd0);
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (lVar5 != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


