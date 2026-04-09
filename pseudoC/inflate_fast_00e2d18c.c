// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflate_fast
// Entry Point: 00e2d18c
// Size: 1832 bytes
// Signature: undefined inflate_fast(void)


void inflate_fast(byte **param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  byte bVar20;
  ushort uVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  long lVar29;
  ulong uVar30;
  byte *pbVar31;
  uint uVar32;
  ulong uVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined4 uVar36;
  uint uVar37;
  undefined8 *puVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  byte *pbVar43;
  int iVar44;
  byte *pbVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  
  pbVar31 = param_1[7];
  iVar18 = *(int *)(param_1 + 4);
  pbVar45 = param_1[3];
  iVar11 = *(int *)(pbVar31 + 0x3c);
  uVar13 = *(uint *)(pbVar31 + 0x40);
  uVar19 = *(uint *)(pbVar31 + 0x44);
  uVar12 = *(uint *)(pbVar31 + 0x78);
  uVar14 = *(uint *)(pbVar31 + 0x7c);
  iVar4 = iVar18 + (int)pbVar45;
  uVar1 = (ulong)(uVar19 - 1) + 1;
  pbVar15 = *(byte **)(pbVar31 + 0x48);
  uVar33 = *(ulong *)(pbVar31 + 0x50);
  uVar41 = uVar1 & 0x1ffffffe0;
  iVar5 = iVar4 + ~param_2;
  pbVar34 = *param_1;
  lVar16 = *(long *)(pbVar31 + 0x68);
  lVar17 = *(long *)(pbVar31 + 0x70);
  pbVar8 = pbVar34 + (*(int *)(param_1 + 1) - 5);
  uVar42 = (ulong)*(uint *)(pbVar31 + 0x58);
  puVar2 = (undefined8 *)(pbVar15 + 0x10);
  pbVar28 = pbVar45;
LAB_00e2d268:
  uVar32 = (uint)uVar42;
  if (uVar32 < 0xf) {
    bVar20 = *pbVar34;
    pbVar35 = pbVar34 + 1;
    pbVar34 = pbVar34 + 2;
    uVar24 = uVar42 & 0x3f;
    uVar42 = (ulong)(uVar32 + 0x10);
    uVar33 = ((ulong)bVar20 << uVar24) + uVar33 + ((ulong)*pbVar35 << ((ulong)(uVar32 + 8) & 0x3f));
  }
  uVar24 = uVar33 & (uint)~(-1 << (ulong)(uVar12 & 0x1f));
  while( true ) {
    pbVar35 = (byte *)(lVar16 + uVar24 * 4);
    bVar20 = *pbVar35;
    uVar21 = *(ushort *)(pbVar35 + 2);
    uVar33 = uVar33 >> ((ulong)pbVar35[1] & 0x3f);
    uVar32 = (int)uVar42 - (uint)pbVar35[1];
    uVar42 = (ulong)uVar32;
    if (bVar20 == 0) break;
    pbVar35 = pbVar34;
    if ((bVar20 >> 4 & 1) != 0) {
      uVar39 = (uint)uVar21;
      uVar37 = bVar20 & 0xf;
      if ((bVar20 & 0xf) != 0) {
        if (uVar32 < uVar37) {
          pbVar35 = pbVar34 + 1;
          uVar32 = uVar32 + 8;
          uVar33 = ((ulong)*pbVar34 << (uVar42 & 0x3f)) + uVar33;
        }
        uVar42 = (ulong)(uVar32 - uVar37);
        uVar32 = (uint)uVar33;
        uVar33 = uVar33 >> uVar37;
        uVar39 = (uVar32 & (-1 << (ulong)uVar37 ^ 0xffffffffU)) + uVar39;
      }
      uVar32 = (uint)uVar42;
      if (uVar32 < 0xf) {
        bVar20 = *pbVar35;
        pbVar34 = pbVar35 + 1;
        pbVar35 = pbVar35 + 2;
        uVar24 = uVar42 & 0x3f;
        uVar42 = (ulong)(uVar32 + 0x10);
        uVar33 = ((ulong)bVar20 << uVar24) + uVar33 +
                 ((ulong)*pbVar34 << ((ulong)(uVar32 + 8) & 0x3f));
      }
      uVar24 = uVar33 & (uint)~(-1 << (ulong)(uVar14 & 0x1f));
      goto LAB_00e2d350;
    }
    if ((bVar20 >> 6 & 1) != 0) {
      if ((bVar20 >> 5 & 1) != 0) {
        uVar36 = 0x3f3f;
        goto LAB_00e2d84c;
      }
      pbVar43 = (byte *)"invalid literal/length code";
      goto LAB_00e2d844;
    }
    uVar24 = (uVar33 & (uint)~(-1 << (ulong)(bVar20 & 0x1f))) + (ulong)uVar21;
  }
  *pbVar28 = (byte)uVar21;
  pbVar35 = pbVar28 + 1;
  goto LAB_00e2d2d4;
LAB_00e2d350:
  pbVar34 = (byte *)(lVar17 + uVar24 * 4);
  bVar20 = *pbVar34;
  uVar21 = *(ushort *)(pbVar34 + 2);
  uVar33 = uVar33 >> ((ulong)pbVar34[1] & 0x3f);
  uVar32 = (int)uVar42 - (uint)pbVar34[1];
  uVar42 = (ulong)uVar32;
  if ((bVar20 >> 4 & 1) != 0) goto LAB_00e2d384;
  pbVar43 = (byte *)"invalid distance code";
  if ((bVar20 >> 6 & 1) != 0) goto LAB_00e2d844;
  uVar24 = (uVar33 & (uint)~(-1 << (ulong)(bVar20 & 0x1f))) + (ulong)uVar21;
  goto LAB_00e2d350;
LAB_00e2d384:
  uVar9 = bVar20 & 0xf;
  pbVar34 = pbVar35;
  uVar37 = uVar32;
  if (uVar32 < uVar9) {
    pbVar34 = pbVar35 + 1;
    uVar33 = ((ulong)*pbVar35 << (uVar42 & 0x3f)) + uVar33;
    uVar37 = uVar32 + 8;
    if (uVar37 < uVar9) {
      uVar33 = ((ulong)pbVar35[1] << ((ulong)uVar37 & 0x3f)) + uVar33;
      pbVar34 = pbVar35 + 2;
      uVar37 = uVar32 + 0x10;
    }
  }
  iVar44 = (int)pbVar28;
  uVar22 = iVar44 - ((int)pbVar45 - (param_2 - iVar18));
  uVar10 = (uint)uVar33 & (-1 << uVar9 ^ 0xffffffffU);
  uVar33 = uVar33 >> uVar9;
  uVar6 = uVar10 + uVar21;
  uVar32 = uVar37 - uVar9;
  uVar42 = (ulong)uVar32;
  uVar37 = uVar6 - uVar22;
  if (uVar6 < uVar22 || uVar37 == 0) {
    lVar29 = -(ulong)uVar6;
    lVar3 = 0;
    uVar32 = uVar39;
    do {
      lVar25 = lVar3;
      pbVar35 = pbVar28 + lVar25 + (1 - (ulong)uVar6);
      pbVar43 = pbVar28 + lVar25;
      uVar32 = uVar32 - 3;
      lVar3 = lVar25 + 3;
      *pbVar43 = pbVar35[-1];
      pbVar43[1] = *pbVar35;
      pbVar43[2] = pbVar35[1];
    } while (2 < uVar32);
    pbVar43 = pbVar28 + lVar3;
    pbVar35 = pbVar43;
    if (uVar39 != (uint)lVar3) {
      *pbVar43 = pbVar28[lVar3 + lVar29];
      pbVar35 = pbVar43 + 1;
      if (uVar39 - 1 != (uint)lVar3) {
        pbVar43[1] = pbVar28[lVar3 + lVar29 + 1];
        pbVar35 = pbVar28 + lVar25 + 5;
      }
    }
    goto LAB_00e2d2d4;
  }
  if ((uVar13 < uVar37) &&
     (pbVar43 = (byte *)"invalid distance too far back", pbVar35 = pbVar34,
     *(int *)(pbVar31 + 0x1be8) != 0)) {
LAB_00e2d844:
    uVar36 = 0x3f51;
    param_1[6] = pbVar43;
    pbVar34 = pbVar35;
LAB_00e2d84c:
    *(undefined4 *)(pbVar31 + 8) = uVar36;
    pbVar35 = pbVar28;
LAB_00e2d850:
    param_1[3] = pbVar35;
    *param_1 = pbVar34 + -(ulong)(uVar32 >> 3);
    *(int *)(param_1 + 4) = ((int)(pbVar45 + (iVar18 - 0x101)) - (int)pbVar35) + 0x101;
    *(int *)(param_1 + 1) = ((int)pbVar8 - (int)(pbVar34 + -(ulong)(uVar32 >> 3))) + 5;
    *(ulong *)(pbVar31 + 0x50) = uVar33 & (uint)~(-1 << (ulong)(uVar32 & 7));
    *(uint *)(pbVar31 + 0x58) = uVar32 & 7;
    return;
  }
  pbVar43 = pbVar28;
  if (uVar19 == 0) {
    uVar24 = (ulong)(iVar11 - uVar37);
    uVar32 = uVar39 - uVar37;
    pbVar26 = pbVar15 + uVar24;
    if (uVar39 < uVar37 || uVar32 == 0) goto joined_r0x00e2d780;
    iVar7 = iVar5 + uVar10 + (uint)uVar21;
    uVar39 = iVar7 - iVar44;
    if ((uVar39 < 0x1f) ||
       (uVar40 = (ulong)(uint)(iVar7 - iVar44),
       pbVar28 < pbVar15 + uVar24 + uVar40 + 1 && pbVar26 < pbVar28 + uVar40 + 1)) {
LAB_00e2d6a8:
      do {
        uVar37 = uVar37 - 1;
        pbVar43 = pbVar28 + 1;
        *pbVar28 = *pbVar26;
        pbVar26 = pbVar26 + 1;
        pbVar28 = pbVar43;
      } while (uVar37 != 0);
    }
    else {
      uVar40 = (ulong)uVar39 + 1;
      uVar30 = uVar40 & 0x1ffffffe0;
      pbVar43 = pbVar28 + uVar30;
      uVar37 = uVar37 - (int)uVar30;
      pbVar26 = pbVar26 + uVar30;
      puVar38 = (undefined8 *)((long)puVar2 + uVar24);
      puVar27 = (undefined8 *)(pbVar28 + 0x10);
      uVar24 = uVar30;
      do {
        puVar23 = puVar38 + -1;
        uVar46 = puVar38[-2];
        uVar48 = puVar38[1];
        uVar47 = *puVar38;
        puVar38 = puVar38 + 4;
        uVar24 = uVar24 - 0x20;
        puVar27[-1] = *puVar23;
        puVar27[-2] = uVar46;
        puVar27[1] = uVar48;
        *puVar27 = uVar47;
        puVar27 = puVar27 + 4;
      } while (uVar24 != 0);
      pbVar28 = pbVar43;
      if (uVar40 != uVar30) goto LAB_00e2d6a8;
    }
    pbVar26 = pbVar43 + -(ulong)uVar6;
    uVar39 = uVar32;
  }
  else {
    uVar24 = (ulong)(uVar19 - uVar37);
    if (uVar19 < uVar37) {
      uVar32 = uVar37 - uVar19;
      uVar24 = (ulong)((uVar19 + iVar11) - uVar37);
      uVar37 = uVar39 - uVar32;
      pbVar26 = pbVar15 + uVar24;
      if (uVar32 <= uVar39 && uVar37 != 0) {
        iVar7 = ((iVar4 + ~uVar19) - param_2) + uVar10 + (uint)uVar21;
        uVar39 = iVar7 - iVar44;
        if ((uVar39 < 0x1f) ||
           ((uVar40 = (ulong)(uint)(iVar7 - iVar44), pbVar28 < pbVar15 + uVar24 + uVar40 + 1 &&
            (pbVar26 < pbVar28 + uVar40 + 1)))) {
LAB_00e2d480:
          do {
            uVar32 = uVar32 - 1;
            pbVar43 = pbVar28 + 1;
            *pbVar28 = *pbVar26;
            pbVar26 = pbVar26 + 1;
            pbVar28 = pbVar43;
          } while (uVar32 != 0);
        }
        else {
          uVar40 = (ulong)uVar39 + 1;
          uVar30 = uVar40 & 0x1ffffffe0;
          pbVar43 = pbVar28 + uVar30;
          uVar32 = uVar32 - (int)uVar30;
          pbVar26 = pbVar26 + uVar30;
          puVar38 = (undefined8 *)((long)puVar2 + uVar24);
          puVar27 = (undefined8 *)(pbVar28 + 0x10);
          uVar24 = uVar30;
          do {
            puVar23 = puVar38 + -1;
            uVar46 = puVar38[-2];
            uVar48 = puVar38[1];
            uVar47 = *puVar38;
            puVar38 = puVar38 + 4;
            uVar24 = uVar24 - 0x20;
            puVar27[-1] = *puVar23;
            puVar27[-2] = uVar46;
            puVar27[1] = uVar48;
            *puVar27 = uVar47;
            puVar27 = puVar27 + 4;
          } while (uVar24 != 0);
          pbVar28 = pbVar43;
          if (uVar40 != uVar30) goto LAB_00e2d480;
        }
        pbVar26 = pbVar15;
        uVar39 = uVar37;
        if (uVar19 <= uVar37 && uVar37 - uVar19 != 0) {
          pbVar28 = pbVar15;
          uVar32 = uVar19;
          if ((uVar19 - 1 < 0x1f) || ((pbVar43 < pbVar15 + uVar1 && (pbVar15 < pbVar43 + uVar1)))) {
LAB_00e2d4c4:
            do {
              uVar32 = uVar32 - 1;
              pbVar35 = pbVar43 + 1;
              *pbVar43 = *pbVar28;
              pbVar28 = pbVar28 + 1;
              pbVar43 = pbVar35;
            } while (uVar32 != 0);
          }
          else {
            pbVar35 = pbVar43 + uVar41;
            puVar27 = (undefined8 *)(pbVar43 + 0x10);
            uVar24 = uVar41;
            puVar38 = puVar2;
            do {
              puVar23 = puVar38 + -1;
              uVar46 = puVar38[-2];
              uVar48 = puVar38[1];
              uVar47 = *puVar38;
              puVar38 = puVar38 + 4;
              uVar24 = uVar24 - 0x20;
              puVar27[-1] = *puVar23;
              puVar27[-2] = uVar46;
              puVar27[1] = uVar48;
              *puVar27 = uVar47;
              puVar27 = puVar27 + 4;
            } while (uVar24 != 0);
            pbVar28 = pbVar15 + uVar41;
            pbVar43 = pbVar35;
            uVar32 = uVar19 - (int)uVar41;
            if (uVar1 != uVar41) goto LAB_00e2d4c4;
          }
          pbVar26 = pbVar35 + -(ulong)uVar6;
          pbVar43 = pbVar35;
          uVar39 = uVar37 - uVar19;
        }
      }
    }
    else {
      pbVar26 = pbVar15 + uVar24;
      uVar32 = uVar39 - uVar37;
      if (uVar39 < uVar37 || uVar32 == 0) goto joined_r0x00e2d780;
      iVar7 = iVar5 + uVar10 + (uint)uVar21;
      uVar39 = iVar7 - iVar44;
      if ((uVar39 < 0x1f) ||
         ((uVar40 = (ulong)(uint)(iVar7 - iVar44), pbVar28 < pbVar15 + uVar24 + uVar40 + 1 &&
          (pbVar26 < pbVar28 + uVar40 + 1)))) {
LAB_00e2d75c:
        do {
          uVar37 = uVar37 - 1;
          pbVar43 = pbVar28 + 1;
          *pbVar28 = *pbVar26;
          pbVar26 = pbVar26 + 1;
          pbVar28 = pbVar43;
        } while (uVar37 != 0);
      }
      else {
        uVar40 = (ulong)uVar39 + 1;
        uVar30 = uVar40 & 0x1ffffffe0;
        pbVar43 = pbVar28 + uVar30;
        uVar37 = uVar37 - (int)uVar30;
        pbVar26 = pbVar26 + uVar30;
        puVar38 = (undefined8 *)((long)puVar2 + uVar24);
        puVar27 = (undefined8 *)(pbVar28 + 0x10);
        uVar24 = uVar30;
        do {
          puVar23 = puVar38 + -1;
          uVar46 = puVar38[-2];
          uVar48 = puVar38[1];
          uVar47 = *puVar38;
          puVar38 = puVar38 + 4;
          uVar24 = uVar24 - 0x20;
          puVar27[-1] = *puVar23;
          puVar27[-2] = uVar46;
          puVar27[1] = uVar48;
          *puVar27 = uVar47;
          puVar27 = puVar27 + 4;
        } while (uVar24 != 0);
        pbVar28 = pbVar43;
        if (uVar40 != uVar30) goto LAB_00e2d75c;
      }
      pbVar26 = pbVar43 + -(ulong)uVar6;
      uVar39 = uVar32;
    }
  }
joined_r0x00e2d780:
  for (; 2 < uVar39; uVar39 = uVar39 - 3) {
    *pbVar43 = *pbVar26;
    pbVar43[1] = pbVar26[1];
    pbVar43[2] = pbVar26[2];
    pbVar26 = pbVar26 + 3;
    pbVar43 = pbVar43 + 3;
  }
  pbVar35 = pbVar43;
  if (uVar39 != 0) {
    pbVar35 = pbVar43 + 1;
    *pbVar43 = *pbVar26;
    if (uVar39 != 1) {
      pbVar35 = pbVar43 + 2;
      pbVar43[1] = pbVar26[1];
    }
  }
LAB_00e2d2d4:
  uVar32 = (uint)uVar42;
  if ((pbVar8 <= pbVar34) || (pbVar28 = pbVar35, pbVar45 + (iVar18 - 0x101) <= pbVar35))
  goto LAB_00e2d850;
  goto LAB_00e2d268;
}


