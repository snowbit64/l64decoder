// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_lapout
// Entry Point: 00e0698c
// Size: 1192 bytes
// Signature: undefined vorbis_synthesis_lapout(void)


int vorbis_synthesis_lapout(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined4 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  iVar11 = *(int *)(param_1 + 0x28);
  if (iVar11 < 0) {
    return 0;
  }
  lVar15 = *(long *)(param_1 + 8);
  uVar21 = *(ulong *)(param_1 + 0x40);
  plVar13 = *(long **)(lVar15 + 0x30);
  lVar22 = plVar13[uVar21];
  uVar16 = (ulong)(*(int *)(plVar13 + 0x2d2) + 1);
  uVar14 = plVar13[1] >> (uVar16 & 0x3f);
  uVar19 = *plVar13 >> (uVar16 & 0x3f);
  iVar12 = (int)uVar14;
  lVar20 = (long)iVar12;
  if (*(long *)(param_1 + 0x50) == lVar20) {
    uVar3 = *(uint *)(lVar15 + 4);
    if ((0 < (int)uVar3) && (0 < iVar12)) {
      uVar9 = uVar14 & 0xffffffff;
      uVar23 = 0;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar10 = uVar9 - (uVar14 & 7);
      do {
        puVar24 = *(undefined8 **)(lVar8 + uVar23 * 8);
        if ((uVar9 < 8) ||
           (lVar30 = lVar10, puVar27 = puVar24,
           puVar24 < (undefined8 *)((long)puVar24 + (lVar20 + uVar9) * 4) &&
           (ulong)((long)puVar24 + lVar20 * 4) < (long)puVar24 + uVar9 * 4)) {
          lVar30 = 0;
LAB_00e06a6c:
          lVar35 = uVar9 - lVar30;
          puVar25 = (undefined4 *)((long)puVar24 + lVar30 * 4);
          puVar26 = (undefined4 *)((long)puVar24 + (lVar20 + lVar30) * 4);
          do {
            lVar35 = lVar35 + -1;
            uVar40 = *puVar25;
            *puVar25 = *puVar26;
            *puVar26 = uVar40;
            puVar25 = puVar25 + 1;
            puVar26 = puVar26 + 1;
          } while (lVar35 != 0);
        }
        else {
          do {
            puVar1 = (undefined8 *)((long)puVar27 + lVar20 * 4);
            lVar30 = lVar30 + -8;
            uVar43 = *puVar27;
            uVar45 = puVar27[3];
            uVar44 = puVar27[2];
            uVar39 = puVar1[1];
            uVar38 = *puVar1;
            uVar42 = puVar1[3];
            uVar41 = puVar1[2];
            puVar1[1] = puVar27[1];
            *puVar1 = uVar43;
            puVar1[3] = uVar45;
            puVar1[2] = uVar44;
            puVar27[1] = uVar39;
            *puVar27 = uVar38;
            puVar27[3] = uVar42;
            puVar27[2] = uVar41;
            puVar27 = puVar27 + 4;
          } while (lVar30 != 0);
          lVar30 = lVar10;
          if ((uVar14 & 7) != 0) goto LAB_00e06a6c;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar3);
    }
    iVar11 = iVar11 - iVar12;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar12;
    *(int *)(param_1 + 0x28) = iVar11;
  }
  iVar31 = (int)uVar19;
  if ((*(ulong *)(param_1 + 0x38) ^ uVar21) == 1) {
    uVar3 = iVar12 - iVar31;
    iVar31 = iVar12 + iVar31;
    uVar4 = *(uint *)(lVar15 + 4);
    if ((int)uVar3 < 0) {
      uVar3 = uVar3 + 1;
    }
    iVar32 = (int)uVar3 >> 1;
    iVar2 = iVar31;
    if (iVar31 < 0) {
      iVar2 = iVar31 + 1;
    }
    if ((0 < (int)uVar4) && (1 < iVar31)) {
      uVar21 = (ulong)(uint)(iVar2 >> 1);
      uVar5 = (iVar2 >> 1) - 1;
      uVar19 = (ulong)uVar5;
      uVar14 = uVar21;
      if (uVar21 != 0) {
        uVar14 = 1;
      }
      lVar20 = (long)((ulong)uVar3 << 0x20) >> 0x21;
      uVar29 = uVar21 - uVar14;
      uVar23 = uVar29 + 1;
      bVar7 = uVar29 >> 0x3e != 0;
      uVar28 = uVar23 & 0xfffffffffffffff8;
      uVar9 = 0;
      lVar8 = *(long *)(param_1 + 0x10);
      do {
        lVar30 = *(long *)(lVar8 + uVar9 * 8);
        lVar10 = lVar30 + lVar20 * 4;
        uVar34 = uVar21;
        if ((((uVar23 < 8) ||
             (uVar33 = lVar30 + (lVar20 + uVar19) * 4, uVar37 = lVar30 + uVar19 * 4,
             (uVar5 < (uint)uVar29 || uVar29 >> 0x20 != 0) ||
             (uVar33 < uVar33 + uVar29 * -4 || bVar7))) || (uVar37 < uVar37 + uVar29 * -4 || bVar7))
           || ((uVar33 = uVar28, uVar37 = uVar21 - 1,
               lVar30 + ((uVar14 + lVar20 + uVar19) - uVar21) * 4 < lVar30 + (uVar19 + 1) * 4 &&
               (lVar30 + ((uVar14 + uVar19) - uVar21) * 4 < lVar30 + (lVar20 + uVar19 + 1) * 4)))) {
LAB_00e06c1c:
          lVar35 = uVar34 + 1;
          do {
            iVar31 = (int)lVar35;
            lVar35 = lVar35 + -1;
            lVar17 = (ulong)(iVar31 - 2) * 4;
            *(undefined4 *)(lVar10 + lVar17) = *(undefined4 *)(lVar30 + lVar17);
          } while (1 < lVar35);
        }
        else {
          do {
            lVar17 = (uVar37 & 0xffffffff) * 4;
            lVar35 = lVar30 + lVar17;
            lVar17 = lVar10 + lVar17;
            uVar33 = uVar33 - 8;
            uVar38 = *(undefined8 *)(lVar35 + -0xc);
            uVar41 = *(undefined8 *)(lVar35 + -0x14);
            uVar39 = *(undefined8 *)(lVar35 + -0x1c);
            *(undefined8 *)(lVar17 + -4) = *(undefined8 *)(lVar35 + -4);
            *(undefined8 *)(lVar17 + -0xc) = uVar38;
            *(undefined8 *)(lVar17 + -0x14) = uVar41;
            *(undefined8 *)(lVar17 + -0x1c) = uVar39;
            uVar37 = uVar37 - 8;
          } while (uVar33 != 0);
          uVar34 = uVar21 - uVar28;
          if (uVar23 != uVar28) goto LAB_00e06c1c;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar4);
    }
  }
  else {
    if (*(ulong *)(param_1 + 0x38) != 0) goto LAB_00e06dcc;
    uVar3 = *(uint *)(lVar15 + 4);
    if (0 < (int)uVar3) {
      uVar14 = (ulong)(iVar31 - 1U);
      if (0 < iVar31) {
        uVar23 = uVar19 & 0xffffffff;
        uVar9 = uVar23 - 1;
        lVar10 = (lVar20 + uVar14) - (long)iVar31;
        lVar8 = lVar10 + 1;
        bVar7 = uVar9 >> 0x3e != 0;
        uVar28 = uVar19 & 7;
        uVar21 = 0;
        lVar30 = *(long *)(param_1 + 0x10);
        do {
          lVar17 = *(long *)(lVar30 + uVar21 * 8);
          lVar35 = lVar17 + lVar20 * 4 + (long)iVar31 * -4;
          uVar29 = uVar23;
          if ((((uVar23 < 8) ||
               (uVar34 = lVar17 + lVar10 * 4, uVar33 = lVar17 + uVar14 * 4,
               (iVar31 - 1U < (uint)uVar9 || uVar9 >> 0x20 != 0) ||
               (uVar34 < uVar34 + uVar9 * -4 || bVar7))) || (uVar33 < uVar33 + uVar9 * -4 || bVar7))
             || ((lVar36 = uVar23 - uVar28, uVar34 = uVar19 - 1,
                 lVar17 + (lVar8 - uVar23) * 4 < lVar17 + (uVar14 + 1) * 4 &&
                 (lVar17 + ((uVar14 + 1) - uVar23) * 4 < (ulong)(lVar17 + lVar8 * 4))))) {
LAB_00e06ce8:
            lVar36 = uVar29 + 1;
            do {
              iVar32 = (int)lVar36;
              lVar36 = lVar36 + -1;
              lVar18 = (ulong)(iVar32 - 2) * 4;
              *(undefined4 *)(lVar35 + lVar18) = *(undefined4 *)(lVar17 + lVar18);
            } while (1 < lVar36);
          }
          else {
            do {
              lVar6 = (uVar34 & 0xffffffff) * 4;
              lVar18 = lVar17 + lVar6;
              lVar6 = lVar35 + lVar6;
              lVar36 = lVar36 + -8;
              uVar38 = *(undefined8 *)(lVar18 + -0xc);
              uVar41 = *(undefined8 *)(lVar18 + -0x14);
              uVar39 = *(undefined8 *)(lVar18 + -0x1c);
              *(undefined8 *)(lVar6 + -4) = *(undefined8 *)(lVar18 + -4);
              *(undefined8 *)(lVar6 + -0xc) = uVar38;
              *(undefined8 *)(lVar6 + -0x14) = uVar41;
              *(undefined8 *)(lVar6 + -0x1c) = uVar39;
              uVar34 = uVar34 - 8;
            } while (lVar36 != 0);
            uVar29 = uVar28;
            if (uVar28 != 0) goto LAB_00e06ce8;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar3);
      }
    }
    iVar32 = iVar12 - iVar31;
  }
  iVar11 = iVar11 + iVar32;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar32;
  *(int *)(param_1 + 0x28) = iVar11;
LAB_00e06dcc:
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *(uint *)(lVar15 + 4);
    if (0 < (int)uVar3) {
      lVar15 = 0;
      do {
        *(long *)(*(long *)(param_1 + 0x18) + lVar15) =
             *(long *)(*(long *)(param_1 + 0x10) + lVar15) + (long)iVar11 * 4;
        lVar15 = lVar15 + 8;
      } while ((ulong)uVar3 * 8 - lVar15 != 0);
    }
    *param_2 = *(undefined8 *)(param_1 + 0x18);
  }
  return (iVar12 + (int)(lVar22 >> (uVar16 & 0x3f))) - iVar11;
}


