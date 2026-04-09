// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d620b0
// Entry Point: 00d620b0
// Size: 1072 bytes
// Signature: undefined FUN_00d620b0(void)


undefined8 FUN_00d620b0(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  code **ppcVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  
  lVar19 = param_1[0x44];
  iVar9 = *(int *)(param_1 + 0x26);
  uVar4 = ((undefined8 *)param_1[5])[1];
  *(undefined8 *)(lVar19 + 200) = *(undefined8 *)param_1[5];
  *(undefined8 *)(lVar19 + 0xd0) = uVar4;
  if ((iVar9 == 0) || (*(int *)(lVar19 + 0x38) != 0)) {
    iVar9 = *(int *)(param_1 + 0x38);
    iVar20 = *(int *)((long)param_1 + 0x1bc);
    if (iVar20 <= iVar9) goto LAB_00d62108;
  }
  else {
    FUN_00d65088(lVar19,*(undefined4 *)(lVar19 + 0x3c));
    iVar9 = *(int *)(param_1 + 0x38);
    iVar20 = *(int *)((long)param_1 + 0x1bc);
    if (iVar20 <= iVar9) {
LAB_00d62108:
      lVar22 = (long)iVar20;
      iVar20 = 0;
      uVar5 = *(uint *)(param_1 + 0x39);
      lVar17 = param_1[0x3a];
      lVar11 = *param_2;
LAB_00d62144:
      sVar7 = *(short *)(lVar11 + (long)*(int *)(lVar17 + lVar22 * 4) * 2);
      if (sVar7 != 0) {
        uVar2 = (int)sVar7 >> (uVar5 & 0x1f);
        uVar3 = -(int)sVar7 >> (uVar5 & 0x1f);
        uVar21 = uVar2;
        if (sVar7 < 0) {
          uVar2 = ~uVar3;
          uVar21 = uVar3;
        }
        if (uVar21 == 0) goto LAB_00d62130;
        if (*(int *)(lVar19 + 0xe4) != 0) {
          FUN_00d647a8(lVar19);
        }
        if (0xf < iVar20) {
          cVar8 = *(char *)(lVar19 + 0xc0);
          iVar16 = iVar20;
          if (cVar8 == '\0') {
            do {
              if (cVar8 == '\0') {
                lVar12 = *(long *)(lVar19 + (long)*(int *)(lVar19 + 0xe0) * 8 + 0x60);
                bVar6 = *(byte *)(lVar12 + 0x4f0);
                uVar3 = *(uint *)(lVar12 + 0x3c0);
                if (bVar6 == 0) {
                  ppcVar14 = (code **)**(long **)(lVar19 + 0xd8);
                  *(undefined4 *)(ppcVar14 + 5) = 0x29;
                  (**ppcVar14)();
                  if (*(char *)(lVar19 + 0xc0) != '\0') goto LAB_00d6237c;
                }
                iVar20 = *(int *)(lVar19 + 0x20) + (uint)bVar6;
                uVar15 = (ulong)(~(uint)(-1L << ((ulong)bVar6 & 0x3f)) & uVar3) <<
                         ((ulong)(0x18 - iVar20) & 0x3f) | *(ulong *)(lVar19 + 0x18);
                iVar23 = iVar20;
                if (7 < iVar20) {
                  do {
                    puVar13 = *(undefined **)(lVar19 + 200);
                    *(undefined **)(lVar19 + 200) = puVar13 + 1;
                    *puVar13 = (char)(uVar15 >> 0x10);
                    lVar12 = *(long *)(lVar19 + 0xd0) + -1;
                    *(long *)(lVar19 + 0xd0) = lVar12;
                    if (lVar12 == 0) {
                      puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0xd8) + 0x28);
                      cVar8 = (*(code *)puVar18[3])();
                      if (cVar8 == '\0') {
                        ppcVar14 = (code **)**(long **)(lVar19 + 0xd8);
                        *(undefined4 *)(ppcVar14 + 5) = 0x19;
                        (**ppcVar14)();
                        uVar4 = puVar18[1];
                        *(undefined8 *)(lVar19 + 200) = *puVar18;
                        *(undefined8 *)(lVar19 + 0xd0) = uVar4;
                      }
                      else {
                        uVar4 = puVar18[1];
                        *(undefined8 *)(lVar19 + 200) = *puVar18;
                        *(undefined8 *)(lVar19 + 0xd0) = uVar4;
                      }
                    }
                    if ((~(uint)uVar15 & 0xff0000) == 0) {
                      puVar13 = *(undefined **)(lVar19 + 200);
                      *(undefined **)(lVar19 + 200) = puVar13 + 1;
                      *puVar13 = 0;
                      lVar12 = *(long *)(lVar19 + 0xd0) + -1;
                      *(long *)(lVar19 + 0xd0) = lVar12;
                      if (lVar12 == 0) {
                        puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0xd8) + 0x28);
                        cVar8 = (*(code *)puVar18[3])();
                        if (cVar8 == '\0') {
                          ppcVar14 = (code **)**(long **)(lVar19 + 0xd8);
                          *(undefined4 *)(ppcVar14 + 5) = 0x19;
                          (**ppcVar14)();
                        }
                        uVar4 = puVar18[1];
                        *(undefined8 *)(lVar19 + 200) = *puVar18;
                        *(undefined8 *)(lVar19 + 0xd0) = uVar4;
                      }
                    }
                    iVar20 = iVar23 + -8;
                    uVar15 = uVar15 << 8;
                    bVar1 = 0xf < iVar23;
                    iVar23 = iVar20;
                  } while (bVar1);
                }
                *(ulong *)(lVar19 + 0x18) = uVar15;
                *(int *)(lVar19 + 0x20) = iVar20;
              }
              else {
                lVar12 = *(long *)(lVar19 + (long)*(int *)(lVar19 + 0xe0) * 8 + 0xa0);
                *(long *)(lVar12 + 0x780) = *(long *)(lVar12 + 0x780) + 1;
              }
LAB_00d6237c:
              iVar20 = iVar16 + -0x10;
              if (iVar16 < 0x20) goto code_r0x00d62388;
              cVar8 = *(char *)(lVar19 + 0xc0);
              iVar16 = iVar20;
            } while( true );
          }
          if (0x1e < iVar20) {
            iVar16 = 0x1f;
          }
          uVar3 = (iVar20 - iVar16) + 0xf;
          lVar12 = *(long *)(lVar19 + (long)*(int *)(lVar19 + 0xe0) * 8 + 0xa0);
          iVar20 = (iVar20 - (uVar3 & 0xfffffff0)) + -0x10;
          *(ulong *)(lVar12 + 0x780) = *(long *)(lVar12 + 0x780) + (ulong)(uVar3 >> 4) + 1;
        }
        if (1 < uVar21) goto LAB_00d62398;
        goto LAB_00d621dc;
      }
LAB_00d62130:
      iVar20 = iVar20 + 1;
      goto joined_r0x00d62140;
    }
  }
  goto LAB_00d62484;
code_r0x00d62388:
  if (uVar21 < 2) {
LAB_00d621dc:
    iVar16 = 1;
  }
  else {
LAB_00d62398:
    uVar3 = 0;
    do {
      uVar10 = uVar3;
      uVar3 = uVar10 + 1;
      bVar1 = 3 < uVar21;
      uVar21 = (int)uVar21 >> 1;
    } while (bVar1);
    iVar16 = uVar10 + 2;
    if (9 < uVar3) {
      ppcVar14 = (code **)*param_1;
      *(undefined4 *)(ppcVar14 + 5) = 6;
      (**ppcVar14)(param_1);
    }
  }
  uVar3 = iVar16 + iVar20 * 0x10;
  lVar12 = lVar19 + (long)*(int *)(lVar19 + 0xe0) * 8;
  if (*(char *)(lVar19 + 0xc0) == '\0') {
    lVar12 = *(long *)(lVar12 + 0x60);
    FUN_00d64bd0(lVar19,*(undefined4 *)(lVar12 + (long)(int)uVar3 * 4),
                 *(undefined *)(lVar12 + (int)uVar3 + 0x400));
  }
  else {
    uVar15 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
    lVar12 = *(long *)(lVar12 + 0xa0);
    *(long *)(lVar12 + uVar15) = *(long *)(lVar12 + uVar15) + 1;
  }
  FUN_00d64bd0(lVar19,uVar2,iVar16);
  iVar20 = 0;
joined_r0x00d62140:
  iVar16 = (int)lVar22;
  lVar22 = lVar22 + 1;
  if (iVar9 + 1 == iVar16 + 1) goto LAB_00d6243c;
  goto LAB_00d62144;
LAB_00d6243c:
  if ((0 < iVar20) &&
     (iVar9 = *(int *)(lVar19 + 0xe4) + 1, *(int *)(lVar19 + 0xe4) = iVar9, iVar9 == 0x7fff)) {
    FUN_00d647a8(lVar19);
  }
LAB_00d62484:
  uVar4 = *(undefined8 *)(lVar19 + 0xd0);
  puVar18 = (undefined8 *)param_1[5];
  iVar9 = *(int *)(param_1 + 0x26);
  *puVar18 = *(undefined8 *)(lVar19 + 200);
  puVar18[1] = uVar4;
  if (iVar9 != 0) {
    iVar20 = *(int *)(lVar19 + 0x38);
    if (*(int *)(lVar19 + 0x38) == 0) {
      *(uint *)(lVar19 + 0x3c) = *(int *)(lVar19 + 0x3c) + 1U & 7;
      iVar20 = iVar9;
    }
    *(int *)(lVar19 + 0x38) = iVar20 + -1;
  }
  return 1;
}


