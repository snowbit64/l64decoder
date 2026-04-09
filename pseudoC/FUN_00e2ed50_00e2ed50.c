// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e2ed50
// Entry Point: 00e2ed50
// Size: 2220 bytes
// Signature: undefined FUN_00e2ed50(void)


void FUN_00e2ed50(long param_1,long *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  long lVar9;
  int iVar10;
  bool bVar11;
  ushort uVar12;
  uint uVar13;
  ulong uVar14;
  ushort *puVar15;
  int *piVar16;
  ushort *puVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  undefined2 *puVar30;
  uint uVar31;
  undefined4 uVar32;
  long lVar33;
  long *plVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  long lVar38;
  ushort auStack_58 [4];
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  long local_38;
  
  lVar9 = tpidr_el0;
  puVar1 = (undefined8 *)(param_1 + 0x14b4);
  local_38 = *(long *)(lVar9 + 0x28);
  lVar25 = *param_2;
  uVar19 = *(uint *)((long)(long *)param_2[2] + 0x14);
  lVar33 = *(long *)param_2[2];
  *puVar1 = 0x23d00000000;
  if ((int)uVar19 < 1) {
    uVar13 = 0;
    uVar27 = 0xffffffff;
  }
  else {
    uVar28 = 0;
    uVar27 = 0xffffffff;
    puVar30 = (undefined2 *)(lVar25 + 2);
    do {
      while (puVar30[-1] != 0) {
        lVar24 = (long)*(int *)(param_1 + 0x14b4) + 1;
        uVar27 = uVar28 & 0xffffffff;
        *(int *)(param_1 + 0x14b4) = (int)lVar24;
        *(int *)(param_1 + lVar24 * 4 + 0xbc0) = (int)uVar28;
        *(undefined *)(param_1 + 0x14bc + uVar28) = 0;
        uVar28 = uVar28 + 1;
        puVar30 = puVar30 + 2;
        if (uVar19 == uVar28) goto LAB_00e2edf8;
      }
      *puVar30 = 0;
      uVar28 = uVar28 + 1;
      puVar30 = puVar30 + 2;
    } while (uVar19 != uVar28);
LAB_00e2edf8:
    uVar26 = (uint)uVar27;
    uVar13 = *(uint *)(param_1 + 0x14b4);
    if (1 < (int)uVar13) goto LAB_00e2ee14;
  }
  do {
    uVar26 = (uint)uVar27;
    uVar31 = 0;
    if ((int)uVar26 < 2) {
      uVar31 = uVar26 + 1;
    }
    if ((int)uVar26 < 2) {
      uVar26 = uVar26 + 1;
    }
    uVar27 = (ulong)uVar26;
    *(int *)(param_1 + 0x14b4) = (int)((long)(int)uVar13 + 1);
    *(uint *)(param_1 + ((long)(int)uVar13 + 1) * 4 + 0xbc0) = uVar31;
    *(undefined2 *)(lVar25 + (-(ulong)(uVar31 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar31 << 2)) =
         1;
    *(undefined *)(param_1 + (int)uVar31 + 0x14bc) = 0;
    *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
    if (lVar33 != 0) {
      *(long *)(param_1 + 0x1720) =
           *(long *)(param_1 + 0x1720) - (ulong)*(ushort *)(lVar33 + (long)(int)uVar31 * 4 + 2);
    }
    uVar13 = *(uint *)puVar1;
  } while ((int)uVar13 < 2);
LAB_00e2ee14:
  plVar29 = (long *)(param_1 + 0x1718);
  uVar28 = (ulong)(uVar13 >> 1);
  *(uint *)(param_2 + 1) = uVar26;
  uVar31 = uVar13 & 0xfffffffe;
  lVar33 = (long)*(int *)(param_1 + uVar28 * 4 + 0xbc0);
  uVar27 = uVar28;
  if ((int)uVar13 < (int)uVar31) goto LAB_00e2ef44;
  do {
    uVar28 = uVar27 & 0xffffffff;
    do {
      iVar37 = (int)uVar28;
      if ((int)uVar31 < (int)uVar13) {
        uVar14 = (ulong)(int)uVar31;
        lVar24 = (long)*(int *)(param_1 + 0xbc0 + (uVar14 | 1) * 4);
        lVar38 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar31 * 4);
        uVar8 = *(ushort *)(lVar25 + lVar24 * 4);
        uVar12 = *(ushort *)(lVar25 + lVar38 * 4);
        if (uVar8 < uVar12) {
LAB_00e2eec0:
          uVar28 = (ulong)uVar31 | 1;
          uVar14 = uVar14 | 1;
        }
        else if (uVar8 == uVar12) {
          uVar28 = (ulong)uVar31;
          if (*(byte *)(param_1 + 0x14bc + lVar24) <= *(byte *)(param_1 + 0x14bc + lVar38))
          goto LAB_00e2eec0;
        }
        else {
          uVar28 = (ulong)uVar31;
        }
      }
      else {
        uVar28 = (ulong)uVar31;
        uVar14 = (ulong)(int)uVar31;
      }
      uVar8 = *(ushort *)(lVar25 + lVar33 * 4);
      uVar13 = *(uint *)(param_1 + uVar14 * 4 + 0xbc0);
      uVar12 = *(ushort *)
                (lVar25 + (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2));
      if ((uVar8 < uVar12) ||
         ((uVar8 == uVar12 &&
          (*(byte *)(param_1 + lVar33 + 0x14bc) <= *(byte *)(param_1 + (int)uVar13 + 0x14bc)))))
      break;
      uVar31 = (int)uVar28 * 2;
      *(uint *)(param_1 + (long)iVar37 * 4 + 0xbc0) = uVar13;
      uVar13 = *(uint *)(param_1 + 0x14b4);
      iVar37 = (int)uVar28;
    } while ((int)uVar31 <= (int)uVar13);
    uVar28 = (ulong)iVar37;
LAB_00e2ef44:
    do {
      *(int *)(param_1 + uVar28 * 4 + 0xbc0) = (int)lVar33;
      if ((long)uVar27 < 2) {
        iVar37 = *(int *)(param_1 + 0x14b4);
        lVar33 = (long)(int)uVar19;
        goto LAB_00e2ef80;
      }
      uVar13 = *(uint *)puVar1;
      uVar28 = uVar27 - 1;
      uVar31 = (int)uVar28 * 2;
      lVar33 = (long)*(int *)(param_1 + uVar28 * 4 + 0xbc0);
      uVar27 = uVar28;
    } while ((int)uVar13 < (int)uVar31);
  } while( true );
LAB_00e2ef80:
  iVar21 = iVar37 + -1;
  *(int *)(param_1 + 0x14b4) = iVar21;
  iVar23 = *(int *)(param_1 + (long)iVar37 * 4 + 0xbc0);
  iVar36 = *(int *)(param_1 + 0xbc4);
  *(int *)(param_1 + 0xbc4) = iVar23;
  if (iVar37 < 3) {
    lVar24 = 1;
  }
  else {
    uVar19 = 2;
    uVar13 = 1;
    do {
      uVar31 = uVar19;
      if ((int)uVar19 < iVar21) {
        uVar27 = (ulong)(int)uVar19;
        lVar24 = (long)*(int *)(param_1 + 0xbc0 + (uVar27 | 1) * 4);
        lVar38 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar19 * 4);
        uVar8 = *(ushort *)(lVar25 + lVar24 * 4);
        uVar12 = *(ushort *)(lVar25 + lVar38 * 4);
        if ((uVar8 < uVar12) ||
           ((uVar8 == uVar12 &&
            (*(byte *)(param_1 + 0x14bc + lVar24) <= *(byte *)(param_1 + 0x14bc + lVar38))))) {
          uVar27 = uVar27 | 1;
          uVar31 = uVar19 | 1;
        }
      }
      else {
        uVar27 = (ulong)(int)uVar19;
      }
      uVar8 = *(ushort *)(lVar25 + (long)iVar23 * 4);
      uVar19 = *(uint *)(param_1 + uVar27 * 4 + 0xbc0);
      uVar12 = *(ushort *)
                (lVar25 + (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2));
      if ((uVar8 < uVar12) ||
         ((uVar8 == uVar12 &&
          (*(byte *)(param_1 + iVar23 + 0x14bc) <= *(byte *)(param_1 + (int)uVar19 + 0x14bc)))))
      break;
      *(uint *)(param_1 + (long)(int)uVar13 * 4 + 0xbc0) = uVar19;
      uVar19 = uVar31 * 2;
      iVar21 = *(int *)(param_1 + 0x14b4);
      uVar13 = uVar31;
    } while ((int)uVar19 <= iVar21);
    lVar24 = (long)(int)uVar13;
  }
  lVar38 = param_1 + 0xbc0;
  *(int *)(lVar38 + lVar24 * 4) = iVar23;
  psVar2 = (short *)(lVar25 + (long)iVar36 * 4);
  iVar37 = *(int *)(param_1 + 0xbc4);
  lVar24 = (long)*(int *)(param_1 + 0x14b8) + -1;
  psVar3 = (short *)(lVar25 + (long)iVar37 * 4);
  *(int *)(param_1 + 0x14b8) = (int)lVar24;
  *(int *)(lVar38 + lVar24 * 4) = iVar36;
  lVar24 = (long)*(int *)(param_1 + 0x14b8) + -1;
  *(int *)(param_1 + 0x14b8) = (int)lVar24;
  *(int *)(lVar38 + lVar24 * 4) = iVar37;
  puVar17 = (ushort *)(lVar25 + lVar33 * 4);
  lVar24 = param_1 + 0x14bc;
  *puVar17 = *psVar3 + *psVar2;
  bVar6 = *(byte *)(lVar24 + iVar36);
  bVar7 = *(byte *)(lVar24 + iVar37);
  if (bVar7 <= bVar6) {
    bVar7 = bVar6;
  }
  *(byte *)(lVar24 + lVar33) = bVar7 + 1;
  psVar3[1] = (short)lVar33;
  psVar2[1] = (short)lVar33;
  iVar37 = *(int *)(param_1 + 0x14b4);
  uVar32 = (undefined4)lVar33;
  *(undefined4 *)(param_1 + 0xbc4) = uVar32;
  if (iVar37 < 2) {
    *(undefined4 *)(param_1 + 0xbc4) = uVar32;
    iVar37 = *(int *)(param_1 + 0x14b4);
  }
  else {
    uVar19 = 2;
    uVar13 = 1;
    do {
      uVar31 = uVar19;
      if ((int)uVar19 < iVar37) {
        uVar27 = (ulong)(int)uVar19;
        lVar38 = (long)*(int *)(param_1 + 0xbc0 + (uVar27 | 1) * 4);
        lVar22 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar19 * 4);
        uVar8 = *(ushort *)(lVar25 + lVar38 * 4);
        uVar12 = *(ushort *)(lVar25 + lVar22 * 4);
        if ((uVar8 < uVar12) ||
           ((uVar8 == uVar12 &&
            (*(byte *)(param_1 + 0x14bc + lVar38) <= *(byte *)(param_1 + 0x14bc + lVar22))))) {
          uVar27 = uVar27 | 1;
          uVar31 = uVar19 | 1;
        }
      }
      else {
        uVar27 = (ulong)(int)uVar19;
      }
      uVar8 = *puVar17;
      uVar19 = *(uint *)(param_1 + uVar27 * 4 + 0xbc0);
      uVar12 = *(ushort *)
                (lVar25 + (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2));
      if ((uVar8 < uVar12) ||
         ((uVar8 == uVar12 &&
          (*(byte *)(lVar24 + lVar33) <= *(byte *)(param_1 + (int)uVar19 + 0x14bc))))) break;
      *(uint *)(param_1 + (long)(int)uVar13 * 4 + 0xbc0) = uVar19;
      uVar19 = uVar31 * 2;
      iVar37 = *(int *)(param_1 + 0x14b4);
      uVar13 = uVar31;
    } while ((int)uVar19 <= iVar37);
    *(undefined4 *)(param_1 + (long)(int)uVar13 * 4 + 0xbc0) = uVar32;
    iVar37 = *(int *)(param_1 + 0x14b4);
  }
  lVar33 = lVar33 + 1;
  if (iVar37 < 2) {
    lVar33 = (long)*(int *)(param_1 + 0x14b8) + -1;
    *(int *)(param_1 + 0x14b8) = (int)lVar33;
    *(undefined4 *)(param_1 + 0xbc0 + lVar33 * 4) = *(undefined4 *)(param_1 + 0xbc4);
    plVar34 = (long *)param_2[2];
    lVar38 = *param_2;
    iVar37 = *(int *)(param_2 + 1);
    lVar33 = *plVar34;
    lVar24 = plVar34[1];
    iVar36 = *(int *)(plVar34 + 2);
    iVar21 = *(int *)(plVar34 + 3);
    lVar22 = (long)iVar21;
    *(undefined8 *)(param_1 + 3000) = 0;
    *(undefined8 *)(param_1 + 0xbb0) = 0;
    *(undefined8 *)(param_1 + 0xba8) = 0;
    *(undefined8 *)(param_1 + 0xba0) = 0;
    *(undefined2 *)
     (lVar38 + (long)*(int *)(param_1 + 0xbc0 + (long)*(int *)(param_1 + 0x14b8) * 4) * 4 + 2) = 0;
    iVar23 = *(int *)(param_1 + 0x14b8);
    if (iVar23 < 0x23c) {
      iVar35 = 0;
      iVar18 = iVar23 + -0x23c;
      piVar16 = (int *)(param_1 + (long)iVar23 * 4 + 0xbc4);
      do {
        iVar23 = *piVar16;
        lVar20 = (long)iVar23;
        lVar4 = lVar38 + lVar20 * 4;
        uVar8 = *(ushort *)(lVar38 + (ulong)*(ushort *)(lVar4 + 2) * 4 + 2);
        if ((int)(uint)uVar8 < iVar21) {
          iVar10 = uVar8 + 1;
        }
        else {
          iVar35 = iVar35 + 1;
          iVar10 = iVar21;
        }
        *(short *)(lVar4 + 2) = (short)iVar10;
        if (iVar23 <= iVar37) {
          lVar4 = param_1 + (long)iVar10 * 2;
          *(short *)(lVar4 + 0xba0) = *(short *)(lVar4 + 0xba0) + 1;
          if (iVar23 < iVar36) {
            iVar23 = 0;
          }
          else {
            iVar23 = *(int *)(lVar24 + (long)(iVar23 - iVar36) * 4);
          }
          uVar27 = (ulong)*(ushort *)(lVar38 + lVar20 * 4);
          *plVar29 = *plVar29 + uVar27 * (uint)(iVar23 + iVar10);
          if (lVar33 != 0) {
            *(long *)(param_1 + 0x1720) =
                 *(long *)(param_1 + 0x1720) +
                 (iVar23 + (uint)*(ushort *)(lVar33 + lVar20 * 4 + 2)) * uVar27;
          }
        }
        bVar11 = iVar18 != -1;
        iVar18 = iVar18 + 1;
        piVar16 = piVar16 + 1;
      } while (bVar11);
      if (iVar35 != 0) {
        puVar17 = (ushort *)(param_1 + lVar22 * 2 + 0xba0);
        lVar33 = (lVar22 << 0x20) + 0x100000000;
        puVar15 = puVar17;
        lVar24 = lVar33;
        do {
          do {
            puVar15 = puVar15 + -1;
            lVar24 = lVar24 + -0x100000000;
          } while (*puVar15 == 0);
          lVar24 = param_1 + (lVar24 >> 0x1f);
          iVar36 = iVar35 + -2;
          *puVar15 = *puVar15 - 1;
          *(short *)(lVar24 + 0xba0) = *(short *)(lVar24 + 0xba0) + 2;
          uVar8 = *puVar17;
          uVar12 = uVar8 - 1;
          *puVar17 = uVar12;
          bVar11 = 1 < iVar35;
          puVar15 = puVar17;
          lVar24 = lVar33;
          iVar35 = iVar36;
        } while (iVar36 != 0 && bVar11);
        if (iVar21 != 0) {
          iVar36 = 0x23d;
          if (uVar8 != 1) goto LAB_00e2f390;
          while (lVar22 = lVar22 + -1, (int)lVar22 != 0) {
            uVar12 = *(ushort *)(param_1 + lVar22 * 2 + 0xba0);
            if (uVar12 != 0) {
LAB_00e2f390:
              uVar19 = (uint)uVar12;
              do {
                piVar16 = (int *)(param_1 + 0xbbc + (long)iVar36 * 4);
                do {
                  iVar21 = *piVar16;
                  iVar36 = iVar36 + -1;
                  piVar16 = piVar16 + -1;
                } while (iVar37 < iVar21);
                puVar17 = (ushort *)(lVar38 + (long)iVar21 * 4 + 2);
                uVar8 = *puVar17;
                if ((uint)lVar22 != (uint)uVar8) {
                  *plVar29 = *plVar29 +
                             (lVar22 - (ulong)uVar8) * (ulong)*(ushort *)(lVar38 + (long)iVar21 * 4)
                  ;
                  *puVar17 = (ushort)lVar22;
                }
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
          }
        }
      }
    }
    auStack_58[1] = *(short *)(param_1 + 0xba0) * 2;
    auStack_58[2] = (auStack_58[1] + *(short *)(param_1 + 0xba2)) * 2;
    auStack_58[3] = (auStack_58[2] + *(short *)(param_1 + 0xba4)) * 2;
    local_50 = (auStack_58[3] + *(short *)(param_1 + 0xba6)) * 2;
    local_4e = (local_50 + *(short *)(param_1 + 0xba8)) * 2;
    local_4c = (local_4e + *(short *)(param_1 + 0xbaa)) * 2;
    local_4a = (local_4c + *(short *)(param_1 + 0xbac)) * 2;
    local_48 = (local_4a + *(short *)(param_1 + 0xbae)) * 2;
    local_46 = (local_48 + *(short *)(param_1 + 0xbb0)) * 2;
    local_44 = (local_46 + *(short *)(param_1 + 0xbb2)) * 2;
    local_42 = (local_44 + *(short *)(param_1 + 0xbb4)) * 2;
    local_40 = (local_42 + *(short *)(param_1 + 0xbb6)) * 2;
    local_3e = (*(short *)(param_1 + 3000) + local_40) * 2;
    local_3c = (*(short *)(param_1 + 0xbba) + local_3e) * 2;
    local_3a = (local_3c + *(short *)(param_1 + 0xbbc)) * 2;
    if (-1 < (int)uVar26) {
      uVar27 = 0;
      do {
        uVar8 = *(ushort *)(lVar25 + uVar27 * 4 + 2);
        if (uVar8 != 0) {
          uVar13 = 0;
          uVar19 = uVar8 + 1;
          uVar31 = (uint)auStack_58[uVar8];
          auStack_58[uVar8] = auStack_58[uVar8] + 1;
          do {
            uVar5 = uVar31 & 1;
            uVar31 = uVar31 >> 1;
            uVar5 = uVar13 | uVar5;
            uVar19 = uVar19 - 1;
            uVar13 = uVar5 << 1;
          } while (1 < uVar19);
          *(short *)(lVar25 + uVar27 * 4) = (short)uVar5;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar26 + 1);
    }
    if (*(long *)(lVar9 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00e2ef80;
}


