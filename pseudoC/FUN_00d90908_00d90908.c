// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d90908
// Entry Point: 00d90908
// Size: 1256 bytes
// Signature: undefined FUN_00d90908(void)


void FUN_00d90908(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined uVar11;
  undefined uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  code *pcVar22;
  undefined8 *puVar23;
  long lVar24;
  ushort *puVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  ushort *puVar46;
  long lVar47;
  ushort *puVar48;
  undefined8 uVar49;
  
  lVar29 = param_1[0x4e];
  uVar28 = *(uint *)(lVar29 + 0x28);
  uVar43 = (ulong)(int)uVar28;
  pcVar22 = *(code **)param_1[1];
  param_1[0x12] = *(long *)(lVar29 + 0x20);
  puVar17 = (undefined8 *)(*pcVar22)(param_1,1,uVar43 * 0x28);
  puVar17[1] = 0x3f00000000;
  *puVar17 = 0x1f00000000;
  puVar17[2] = 0x1f00000000;
  FUN_00d911f4(param_1);
  uVar30 = 1;
  if (1 < (int)uVar28) {
    uVar30 = 1;
    do {
      if ((int)(uVar28 + (int)uVar30 * -2) < 0 == SBORROW4(uVar28,(int)uVar30 * 2)) {
        puVar19 = (undefined8 *)0x0;
        lVar24 = 0;
        uVar31 = uVar30;
        puVar23 = puVar17;
        do {
          puVar20 = puVar19;
          lVar37 = lVar24;
          if ((lVar24 < (long)puVar23[4]) &&
             (puVar20 = puVar23, lVar37 = puVar23[4], (long)puVar23[3] < 1)) {
            puVar20 = puVar19;
            lVar37 = lVar24;
          }
          puVar23 = puVar23 + 5;
          uVar31 = uVar31 - 1;
          puVar19 = puVar20;
          lVar24 = lVar37;
        } while (uVar31 != 0);
      }
      else {
        lVar24 = 0;
        puVar19 = (undefined8 *)0x0;
        uVar31 = uVar30;
        puVar23 = puVar17;
        do {
          puVar20 = puVar23;
          lVar37 = puVar23[3];
          if ((long)puVar23[3] <= lVar24) {
            puVar20 = puVar19;
            lVar37 = lVar24;
          }
          lVar24 = lVar37;
          puVar23 = puVar23 + 5;
          uVar31 = uVar31 - 1;
          puVar19 = puVar20;
        } while (uVar31 != 0);
      }
      if (puVar20 == (undefined8 *)0x0) {
        uVar43 = uVar30 & 0xffffffff;
        break;
      }
      puVar19 = puVar17 + uVar30 * 5;
      *(undefined4 *)((long)puVar19 + 0x14) = *(undefined4 *)((long)puVar20 + 0x14);
      uVar49 = *puVar20;
      puVar19[1] = puVar20[1];
      *puVar19 = uVar49;
      iVar6 = *(int *)((long)puVar20 + 0xc);
      iVar8 = *(int *)(puVar20 + 1);
      iVar26 = *(int *)puVar20;
      iVar7 = *(int *)((long)puVar20 + 4);
      iVar27 = *(int *)((long)puVar20 + 0x14);
      puVar23 = puVar19 + 2;
      *(undefined4 *)puVar23 = *(undefined4 *)(puVar20 + 2);
      iVar13 = iVar6 - iVar8;
      iVar9 = (iVar7 - iVar26) * 0x10;
      iVar10 = iVar13 * 0xc;
      iVar14 = iVar27 - *(int *)(puVar20 + 2);
      bVar16 = iVar9 + iVar13 * -0xc < 0;
      iVar13 = iVar9;
      if (iVar9 == iVar10 || bVar16 != SBORROW4(iVar9,iVar10)) {
        iVar13 = iVar10;
      }
      cVar1 = '\x02';
      if (iVar13 + iVar14 * -8 < 0 == SBORROW4(iVar13,iVar14 * 8)) {
        cVar1 = iVar9 == iVar10 || bVar16 != SBORROW4(iVar9,iVar10);
      }
      if (cVar1 == '\x02') {
        iVar27 = *(int *)(puVar20 + 2) + iVar27;
        if (iVar27 < 0) {
          iVar27 = iVar27 + 1;
        }
        iVar26 = iVar27 >> 1;
        *(int *)((long)puVar20 + 0x14) = iVar26;
LAB_00d909b8:
        *(int *)puVar23 = iVar26 + 1;
      }
      else {
        if (cVar1 == '\x01') {
          iVar8 = iVar8 + iVar6;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 1;
          }
          iVar26 = iVar8 >> 1;
          puVar23 = puVar17 + uVar30 * 5 + 1;
          *(int *)((long)puVar20 + 0xc) = iVar26;
          goto LAB_00d909b8;
        }
        if (cVar1 == '\0') {
          iVar26 = iVar26 + iVar7;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          iVar26 = iVar26 >> 1;
          *(int *)((long)puVar20 + 4) = iVar26;
          puVar23 = puVar19;
          goto LAB_00d909b8;
        }
      }
      FUN_00d911f4(param_1);
      FUN_00d911f4(param_1,puVar19);
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar28);
    uVar30 = uVar43 & 0xffffffff;
    iVar27 = (int)uVar43;
    if (iVar27 < 1) goto LAB_00d90d9c;
  }
  uVar43 = 0;
  iVar27 = (int)uVar30;
  do {
    puVar23 = puVar17 + uVar43 * 5;
    iVar26 = *(int *)puVar23;
    iVar6 = *(int *)((long)puVar23 + 4);
    iVar8 = *(int *)(puVar23 + 1);
    iVar7 = *(int *)((long)puVar23 + 0xc);
    iVar13 = *(int *)(puVar23 + 2);
    iVar9 = *(int *)((long)puVar23 + 0x14);
    lVar24 = (long)iVar26;
    bVar16 = false;
    if (iVar26 <= iVar6) {
      bVar16 = iVar8 - iVar7 < 0;
    }
    bVar16 = bVar16 != (iVar26 <= iVar6 && SBORROW4(iVar8,iVar7));
    bVar15 = true;
    if (iVar26 <= iVar6 && iVar8 == iVar7 || bVar16) {
      bVar15 = iVar9 - iVar13 < 0;
    }
    if (bVar15 == ((iVar26 <= iVar6 && iVar8 == iVar7 || bVar16) && SBORROW4(iVar9,iVar13))) {
      lVar35 = 0;
      lVar36 = 0;
      uVar31 = (ulong)(uint)(iVar9 - iVar13) + 1;
      uVar39 = uVar31 & 0x1fffffffe;
      lVar37 = 0;
      lVar34 = 0;
      do {
        lVar44 = *(long *)(*(long *)(param_1[0x4e] + 0x30) + lVar24 * 8);
        lVar45 = (long)(int)((int)lVar24 << 3 | 4);
        puVar25 = (ushort *)(lVar44 + ((long)iVar13 + (long)iVar8 * 0x20) * 2 + 2);
        lVar47 = (long)iVar8;
        do {
          puVar48 = (ushort *)(lVar44 + lVar47 * 0x40 + (long)iVar13 * 2);
          lVar42 = (long)(int)((int)lVar47 << 2 | 2);
          iVar26 = iVar13;
          if (iVar9 - iVar13 == 0) {
LAB_00d90d58:
            uVar28 = iVar26 << 3 | 4;
            iVar26 = (iVar9 + 1) - iVar26;
            do {
              uVar18 = (ulong)*puVar48;
              if (uVar18 != 0) {
                lVar37 = lVar37 + uVar18 * lVar45;
                lVar36 = lVar36 + uVar18 * lVar42;
                lVar34 = lVar34 + uVar18;
                lVar35 = lVar35 + uVar18 * (long)(int)uVar28;
              }
              iVar26 = iVar26 + -1;
              uVar28 = uVar28 + 8;
              puVar48 = puVar48 + 1;
            } while (iVar26 != 0);
          }
          else {
            lVar41 = 0;
            lVar33 = 0;
            lVar32 = 0;
            lVar40 = 0;
            puVar48 = puVar48 + uVar39;
            uVar18 = uVar39;
            puVar46 = puVar25;
            iVar26 = iVar13 * 8 + 0xc;
            do {
              uVar21 = (ulong)puVar46[-1];
              uVar38 = (ulong)*puVar46;
              bVar16 = puVar46[-1] != 0;
              lVar34 = lVar34 + uVar21;
              lVar2 = 0;
              if (bVar16) {
                lVar2 = uVar21 * lVar45;
              }
              lVar3 = 0;
              if (bVar16) {
                lVar3 = uVar21 * lVar42;
              }
              lVar5 = 0;
              if (bVar16) {
                lVar5 = uVar21 * (long)(iVar26 + -8);
              }
              bVar16 = *puVar46 != 0;
              lVar40 = lVar40 + uVar38;
              lVar4 = 0;
              if (bVar16) {
                lVar4 = uVar38 * lVar45;
              }
              lVar32 = lVar32 + lVar4;
              lVar4 = 0;
              if (bVar16) {
                lVar4 = uVar38 * lVar42;
              }
              lVar35 = lVar35 + lVar5;
              lVar5 = 0;
              if (bVar16) {
                lVar5 = uVar38 * (long)iVar26;
              }
              lVar37 = lVar37 + lVar2;
              lVar36 = lVar36 + lVar3;
              lVar33 = lVar33 + lVar4;
              lVar41 = lVar41 + lVar5;
              iVar26 = iVar26 + 0x10;
              uVar18 = uVar18 - 2;
              puVar46 = puVar46 + 2;
            } while (uVar18 != 0);
            lVar37 = lVar32 + lVar37;
            lVar34 = lVar40 + lVar34;
            lVar36 = lVar33 + lVar36;
            lVar35 = lVar41 + lVar35;
            iVar26 = (int)uVar39 + iVar13;
            if (uVar31 != uVar39) goto LAB_00d90d58;
          }
          lVar47 = lVar47 + 1;
          puVar25 = puVar25 + 0x20;
        } while (iVar7 + 1 != (int)lVar47);
        lVar24 = lVar24 + 1;
      } while (iVar6 + 1 != (int)lVar24);
    }
    else {
      lVar34 = 0;
      lVar37 = 0;
      lVar36 = 0;
      lVar35 = 0;
    }
    lVar24 = lVar34 >> 1;
    uVar11 = 0;
    if (lVar34 != 0) {
      uVar11 = (undefined)((lVar37 + lVar24) / lVar34);
    }
    uVar12 = 0;
    if (lVar34 != 0) {
      uVar12 = (undefined)((lVar36 + lVar24) / lVar34);
    }
    *(undefined *)(*(long *)param_1[0x12] + uVar43) = uVar11;
    *(undefined *)(*(long *)(param_1[0x12] + 8) + uVar43) = uVar12;
    uVar11 = 0;
    if (lVar34 != 0) {
      uVar11 = (undefined)((lVar35 + lVar24) / lVar34);
    }
    *(undefined *)(*(long *)(param_1[0x12] + 0x10) + uVar43) = uVar11;
    uVar43 = uVar43 + 1;
  } while (uVar43 != uVar30);
LAB_00d90d9c:
  lVar24 = *param_1;
  *(int *)(param_1 + 0x11) = iVar27;
  *(int *)(lVar24 + 0x2c) = iVar27;
  lVar37 = *param_1;
  *(undefined4 *)(lVar24 + 0x28) = 0x62;
  (**(code **)(lVar37 + 8))(param_1,1);
  *(undefined *)(lVar29 + 0x38) = 1;
  return;
}


