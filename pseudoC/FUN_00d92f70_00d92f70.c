// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d92f70
// Entry Point: 00d92f70
// Size: 3860 bytes
// Signature: undefined FUN_00d92f70(void)


undefined8 FUN_00d92f70(uint *param_1,ulong param_2,byte *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  ushort *puVar13;
  bool bVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined uVar24;
  ulong uVar25;
  ushort *puVar26;
  long lVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  ushort uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  undefined8 *puVar40;
  byte *pbVar41;
  byte *pbVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  uint local_6c;
  
  do {
    uVar23 = param_1[0x11];
    if (uVar23 == 0) {
      uVar16 = param_1[0x10];
      uVar15 = *(ulong *)(param_1 + 0xc);
      uVar47 = uVar15 + (param_1[3] - uVar16);
      if (param_2 - uVar15 <= (ulong)(param_1[3] - uVar16)) {
        uVar47 = param_2;
      }
    }
    else {
      uVar15 = *(ulong *)(param_1 + 0xc);
      uVar16 = param_1[0x10];
      uVar47 = param_2;
    }
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar10 = *param_1;
    lVar8 = *(long *)(param_1 + 4);
    lVar9 = *(long *)(param_1 + 6);
    uVar39 = 0;
    lVar27 = lVar8 + 0x1b0;
    uVar34 = param_1[0x12];
    uVar17 = param_1[0x13];
    uVar43 = param_1[0x14];
    uVar44 = param_1[0x15];
    lVar31 = lVar8 + 0x180;
    lVar1 = lVar8 + 0x198;
    local_6c = param_1[0x16];
    uVar38 = *(ulong *)(param_1 + 0xe);
    pbVar41 = *(byte **)(param_1 + 8);
    lVar2 = lVar8 + 0x644;
    uVar29 = param_1[10];
    uVar18 = param_1[0xb];
LAB_00d930c8:
    pbVar42 = pbVar41;
    if (uVar29 >> 0x18 == 0) {
      pbVar42 = pbVar41 + 1;
      uVar29 = uVar29 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
    }
    uVar33 = uVar16 & ~(-1 << (ulong)(uVar7 & 0x1f));
    uVar25 = (ulong)uVar33;
    lVar35 = lVar8 + (ulong)(uVar34 << 4) * 2;
    uVar32 = *(ushort *)(lVar35 + uVar25 * 2);
    uVar30 = (uVar29 >> 0xb) * (uint)uVar32;
    uVar45 = uVar18 - uVar30;
    if (uVar18 < uVar30) {
      *(ushort *)(lVar35 + uVar25 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
      lVar35 = lVar8 + 0xe6c;
      if ((uVar23 | uVar16) != 0) {
        uVar25 = uVar38;
        if (uVar15 != 0) {
          uVar25 = uVar15;
        }
        lVar35 = lVar8 + 0xe6c +
                 (ulong)(((uint)(*(byte *)(uVar25 + lVar9 + -1) >> (ulong)(8 - uVar10 & 0x1f)) +
                         ((uVar16 & ~(-1 << (ulong)(uVar6 & 0x1f))) << (ulong)(uVar10 & 0x1f))) *
                        0x300) * 2;
      }
      if (uVar34 < 7) {
        uVar29 = 1;
        do {
          while( true ) {
            pbVar41 = pbVar42;
            uVar33 = uVar18;
            uVar45 = uVar30;
            if (uVar30 >> 0x18 == 0) {
              pbVar41 = pbVar42 + 1;
              uVar45 = uVar30 << 8;
              uVar33 = (uint)*pbVar42 | uVar18 << 8;
            }
            uVar32 = *(ushort *)(lVar35 + (ulong)uVar29 * 2);
            uVar30 = (uVar45 >> 0xb) * (uint)uVar32;
            uVar25 = (ulong)uVar29;
            uVar18 = uVar33 - uVar30;
            pbVar42 = pbVar41;
            if (uVar30 <= uVar33) break;
            uVar29 = uVar29 << 1;
            *(ushort *)(lVar35 + uVar25 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
            uVar18 = uVar33;
            if (0xff < uVar29) goto LAB_00d931cc;
          }
          uVar30 = uVar45 - uVar30;
          uVar29 = uVar29 << 1 | 1;
          *(ushort *)(lVar35 + uVar25 * 2) = uVar32 - (uVar32 >> 5);
        } while (uVar29 < 0x100);
LAB_00d931cc:
        uVar24 = (undefined)uVar29;
        uVar29 = 0;
        if (2 < uVar34) {
          uVar29 = uVar34 - 3;
        }
      }
      else {
        uVar25 = uVar38;
        if (uVar17 <= uVar15) {
          uVar25 = 0;
        }
        uVar46 = 0x100;
        uVar33 = (uint)*(byte *)(*(long *)(param_1 + 6) + (uVar15 - uVar17) + uVar25);
        uVar29 = 1;
        uVar45 = uVar18;
        do {
          while( true ) {
            pbVar41 = pbVar42;
            uVar18 = uVar45;
            uVar20 = uVar30;
            if (uVar30 >> 0x18 == 0) {
              pbVar41 = pbVar42 + 1;
              uVar20 = uVar30 << 8;
              uVar18 = (uint)*pbVar42 | uVar45 << 8;
            }
            uVar33 = uVar33 << 1;
            lVar36 = uVar46 * 2;
            uVar22 = (uint)uVar46;
            uVar19 = uVar33 & uVar22;
            uVar46 = (ulong)uVar19;
            lVar36 = lVar35 + lVar36 + uVar46 * 2;
            uVar32 = *(ushort *)(lVar36 + (ulong)uVar29 * 2);
            uVar30 = (uVar20 >> 0xb) * (uint)uVar32;
            uVar25 = (ulong)uVar29;
            uVar45 = uVar18 - uVar30;
            pbVar42 = pbVar41;
            if (uVar30 <= uVar18) break;
            uVar29 = uVar29 << 1;
            uVar46 = (ulong)(uVar19 ^ uVar22);
            *(ushort *)(lVar36 + uVar25 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
            uVar45 = uVar18;
            if (0xff < uVar29) goto LAB_00d93070;
          }
          uVar30 = uVar20 - uVar30;
          uVar29 = uVar29 << 1 | 1;
          *(ushort *)(lVar36 + uVar25 * 2) = uVar32 - (uVar32 >> 5);
          uVar18 = uVar45;
        } while (uVar29 < 0x100);
LAB_00d93070:
        uVar24 = (undefined)uVar29;
        iVar28 = -3;
        if (9 < uVar34) {
          iVar28 = -6;
        }
        uVar29 = iVar28 + uVar34;
      }
      *(undefined *)(lVar9 + uVar15) = uVar24;
      uVar16 = uVar16 + 1;
      uVar15 = uVar15 + 1;
      uVar34 = uVar29;
      uVar29 = uVar30;
      goto joined_r0x00d93d20;
    }
    uVar29 = uVar29 - uVar30;
    *(ushort *)(lVar35 + uVar25 * 2) = uVar32 - (uVar32 >> 5);
    uVar30 = uVar17;
    if (uVar29 >> 0x18 == 0) {
      pbVar41 = pbVar42 + 1;
      uVar29 = uVar29 * 0x100;
      uVar45 = (uint)*pbVar42 | uVar45 * 0x100;
      uVar32 = *(ushort *)(lVar31 + (ulong)uVar34 * 2);
      uVar22 = (uint)uVar32;
      uVar20 = (uVar29 >> 0xb) * (uint)uVar32;
      uVar18 = uVar45 - uVar20;
      pbVar42 = pbVar41;
      uVar19 = uVar22;
      if (uVar20 <= uVar45) goto LAB_00d93210;
LAB_00d933ec:
      uVar22 = uVar34 + 0xc;
      *(short *)(lVar31 + (ulong)uVar34 * 2) = (short)uVar19 + (short)(0x800 - uVar19 >> 5);
      uVar32 = *(ushort *)(lVar8 + 0x664);
      puVar13 = (ushort *)(lVar8 + 0x664);
      pbVar41 = pbVar42;
    }
    else {
      uVar32 = *(ushort *)(lVar31 + (ulong)uVar34 * 2);
      uVar19 = (uint)uVar32;
      uVar22 = (uint)uVar32;
      uVar20 = (uVar29 >> 0xb) * uVar22;
      uVar18 = uVar45 - uVar20;
      if (uVar45 < uVar20) goto LAB_00d933ec;
LAB_00d93210:
      uVar46 = (ulong)uVar34;
      *(short *)(lVar31 + uVar46 * 2) = (short)uVar22 - (short)(uVar22 >> 5);
      if ((uVar23 | uVar16) == 0) {
        return 1;
      }
      uVar29 = uVar29 - uVar20;
      if (uVar29 >> 0x18 == 0) {
        pbVar41 = pbVar42 + 1;
        uVar29 = uVar29 * 0x100;
        uVar18 = (uint)*pbVar42 | uVar18 << 8;
        uVar32 = *(ushort *)(lVar1 + uVar46 * 2);
        uVar22 = (uint)uVar32;
        uVar20 = (uVar29 >> 0xb) * (uint)uVar32;
        uVar45 = uVar18 - uVar20;
        pbVar42 = pbVar41;
        uVar19 = uVar22;
        if (uVar20 <= uVar18) goto LAB_00d9324c;
LAB_00d934b8:
        *(short *)(lVar1 + uVar46 * 2) = (short)uVar19 + (short)(0x800 - uVar19 >> 5);
        pbVar41 = pbVar42;
        if (uVar20 >> 0x18 == 0) {
          pbVar41 = pbVar42 + 1;
          uVar20 = uVar20 << 8;
          uVar18 = (uint)*pbVar42 | uVar18 << 8;
        }
        lVar35 = lVar8 + 0x1e0 + (ulong)(uVar34 << 4) * 2;
        uVar32 = *(ushort *)(lVar35 + uVar25 * 2);
        uVar29 = (uVar20 >> 0xb) * (uint)uVar32;
        uVar45 = uVar18 - uVar29;
        if (uVar18 < uVar29) {
          uVar46 = uVar38;
          if (uVar17 <= uVar15) {
            uVar46 = 0;
          }
          *(ushort *)(lVar35 + uVar25 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
          *(undefined *)(lVar9 + uVar15) = *(undefined *)(lVar9 + (uVar15 - uVar17) + uVar46);
          uVar15 = uVar15 + 1;
          uVar33 = 9;
          if (6 < uVar34) {
            uVar33 = 0xb;
          }
          uVar16 = uVar16 + 1;
          uVar34 = uVar33;
          goto joined_r0x00d93d20;
        }
        uVar20 = uVar20 - uVar29;
        *(ushort *)(lVar35 + uVar25 * 2) = uVar32 - (uVar32 >> 5);
      }
      else {
        uVar32 = *(ushort *)(lVar1 + uVar46 * 2);
        uVar19 = (uint)uVar32;
        uVar22 = (uint)uVar32;
        uVar20 = (uVar29 >> 0xb) * uVar22;
        uVar45 = uVar18 - uVar20;
        pbVar41 = pbVar42;
        if (uVar18 < uVar20) goto LAB_00d934b8;
LAB_00d9324c:
        uVar29 = uVar29 - uVar20;
        lVar35 = uVar46 * 2;
        *(short *)(lVar1 + lVar35) = (short)uVar22 - (short)(uVar22 >> 5);
        if (uVar29 >> 0x18 == 0) {
          pbVar42 = pbVar41 + 1;
          uVar29 = uVar29 * 0x100;
          uVar45 = (uint)*pbVar41 | uVar45 << 8;
          uVar30 = (uint)*(ushort *)(lVar27 + lVar35);
          uVar20 = (uVar29 >> 0xb) * (uint)*(ushort *)(lVar27 + lVar35);
          uVar39 = uVar45 - uVar20;
          pbVar41 = pbVar42;
          uVar18 = uVar30;
          if (uVar20 <= uVar45) {
LAB_00d93288:
            uVar29 = uVar29 - uVar20;
            *(short *)(lVar27 + lVar35) = (short)uVar30 - (short)(uVar30 >> 5);
            pbVar41 = pbVar42;
            if (uVar29 >> 0x18 == 0) {
              pbVar41 = pbVar42 + 1;
              uVar29 = uVar29 * 0x100;
              uVar39 = (uint)*pbVar42 | uVar39 << 8;
            }
            uVar32 = *(ushort *)(lVar8 + 0x1c8 + lVar35);
            uVar30 = (uVar29 >> 0xb) * (uint)uVar32;
            uVar18 = uVar44;
            if (uVar39 < uVar30) {
              uVar18 = local_6c;
              local_6c = uVar44;
            }
            sVar12 = -(uVar32 >> 5);
            uVar20 = uVar29 - uVar30;
            uVar45 = uVar39 - uVar30;
            if (uVar39 < uVar30) {
              sVar12 = (short)(0x800 - uVar32 >> 5);
              uVar20 = uVar30;
              uVar45 = uVar39;
            }
            *(ushort *)(lVar8 + 0x1c8 + uVar46 * 2) = uVar32 + sVar12;
            uVar30 = local_6c;
            uVar44 = uVar43;
            local_6c = uVar18;
            uVar43 = uVar17;
            goto LAB_00d93980;
          }
        }
        else {
          uVar18 = (uint)*(ushort *)(lVar27 + lVar35);
          uVar30 = (uint)*(ushort *)(lVar27 + lVar35);
          uVar20 = (uVar29 >> 0xb) * uVar30;
          uVar39 = uVar45 - uVar20;
          pbVar42 = pbVar41;
          if (uVar20 <= uVar45) goto LAB_00d93288;
        }
        *(short *)(lVar27 + uVar46 * 2) = (short)uVar18 + (short)(0x800 - uVar18 >> 5);
        uVar30 = uVar43;
        uVar43 = uVar17;
      }
LAB_00d93980:
      uVar22 = 8;
      if (6 < uVar34) {
        uVar22 = 0xb;
      }
      uVar32 = *(ushort *)(lVar8 + 0xa68);
      puVar13 = (ushort *)(lVar8 + 0xa68);
    }
    if (uVar20 >> 0x18 == 0) {
      uVar20 = uVar20 << 8;
      uVar45 = (uint)*pbVar41 | uVar45 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar29 = (uVar20 >> 0xb) * (uint)uVar32;
    uVar17 = uVar45 - uVar29;
    if (uVar45 < uVar29) {
      iVar28 = 0;
      uVar17 = 8;
      puVar26 = puVar13 + (ulong)(uVar33 << 3) + 2;
      *puVar13 = uVar32 + (short)(0x800 - uVar32 >> 5);
    }
    else {
      uVar20 = uVar20 - uVar29;
      *puVar13 = uVar32 - (uVar32 >> 5);
      if (uVar20 >> 0x18 == 0) {
        pbVar42 = pbVar41 + 1;
        uVar20 = uVar20 * 0x100;
        uVar45 = (uint)*pbVar41 | uVar17 * 0x100;
        uVar34 = (uint)puVar13[1];
        uVar29 = (uVar20 >> 0xb) * (uint)puVar13[1];
        pbVar41 = pbVar42;
        uVar39 = uVar45 - uVar29;
        uVar18 = uVar34;
        if (uVar29 <= uVar45) goto LAB_00d93484;
LAB_00d9355c:
        uVar17 = 8;
        iVar28 = 8;
        uVar32 = (short)uVar18 + (short)(0x800 - uVar18 >> 5);
        puVar26 = puVar13 + (ulong)(uVar33 << 3) + 0x82;
      }
      else {
        uVar18 = (uint)puVar13[1];
        uVar34 = (uint)puVar13[1];
        uVar29 = (uVar20 >> 0xb) * uVar34;
        uVar45 = uVar17;
        uVar39 = uVar17 - uVar29;
        if (uVar17 < uVar29) goto LAB_00d9355c;
LAB_00d93484:
        uVar45 = uVar39;
        uVar29 = uVar20 - uVar29;
        uVar32 = (short)uVar34 - (short)(uVar34 >> 5);
        puVar26 = puVar13 + 0x102;
        iVar28 = 0x10;
        uVar17 = 0x100;
      }
      puVar13[1] = uVar32;
    }
    pbVar42 = pbVar41;
    uVar18 = uVar45;
    uVar39 = 1;
    do {
      while( true ) {
        uVar32 = puVar26[uVar39];
        pbVar41 = pbVar42;
        uVar33 = uVar29;
        uVar34 = uVar18;
        if (uVar29 >> 0x18 == 0) {
          pbVar41 = pbVar42 + 1;
          uVar33 = uVar29 << 8;
          uVar34 = (uint)*pbVar42 | uVar18 << 8;
        }
        uVar29 = (uVar33 >> 0xb) * (uint)uVar32;
        uVar18 = uVar34 - uVar29;
        pbVar42 = pbVar41;
        if (uVar29 <= uVar34) break;
        uVar33 = uVar39 * 2;
        puVar26[uVar39] = uVar32 + (short)(0x800 - uVar32 >> 5);
        iVar21 = uVar33 - uVar17;
        uVar18 = uVar34;
        uVar39 = uVar33;
        if (uVar17 <= uVar33) goto LAB_00d935f0;
      }
      uVar29 = uVar33 - uVar29;
      uVar34 = uVar39 << 1 | 1;
      puVar26[uVar39] = uVar32 - (uVar32 >> 5);
      iVar21 = uVar34 - uVar17;
      uVar39 = uVar34;
    } while (uVar34 < uVar17);
LAB_00d935f0:
    uVar39 = iVar21 + iVar28;
    uVar34 = uVar22 - 0xc;
    uVar17 = uVar30;
    uVar33 = uVar43;
    uVar45 = uVar44;
    if (uVar22 < 0xc) {
LAB_00d93bec:
      uVar25 = uVar47 - uVar15;
      if (uVar25 == 0) {
        return 1;
      }
      uVar39 = uVar39 + 2;
      uVar30 = (uint)uVar25;
      if (uVar39 <= uVar25) {
        uVar30 = uVar39;
      }
      uVar46 = (ulong)uVar30;
      uVar25 = uVar38;
      if (uVar17 <= uVar15) {
        uVar25 = 0;
      }
      uVar39 = uVar39 - uVar30;
      lVar35 = uVar25 + (uVar15 - uVar17);
      uVar44 = uVar45;
      uVar43 = uVar33;
      uVar34 = uVar22;
      if (uVar38 < lVar35 + uVar46) {
        lVar36 = 0;
        do {
          lVar5 = 0;
          if (lVar35 + 1U != uVar38) {
            lVar5 = lVar35 + 1;
          }
          *(undefined *)(lVar9 + uVar15 + lVar36) = *(undefined *)(lVar9 + lVar35);
          lVar36 = lVar36 + 1;
          lVar35 = lVar5;
        } while (uVar30 != (uint)lVar36);
        uVar15 = uVar15 + lVar36;
        uVar16 = uVar30 + uVar16;
      }
      else {
        puVar3 = (undefined *)(lVar9 + uVar15);
        lVar36 = lVar35 - uVar15;
        puVar48 = puVar3;
        if ((uVar30 < 8) ||
           ((puVar3 < (undefined *)(lVar9 + lVar35 + uVar46) &&
            ((undefined *)(lVar9 + lVar35) < puVar3 + uVar46)))) {
LAB_00d93d04:
          do {
            puVar49 = puVar48 + 1;
            *puVar48 = puVar48[lVar36];
            puVar48 = puVar49;
          } while (puVar49 != puVar3 + uVar46);
        }
        else if (uVar30 < 0x20) {
          uVar37 = 0;
LAB_00d93cd0:
          uVar25 = uVar46 & 0xfffffff8;
          lVar35 = uVar37 - uVar25;
          puVar40 = (undefined8 *)(lVar9 + uVar15 + uVar37);
          do {
            lVar35 = lVar35 + 8;
            *puVar40 = *(undefined8 *)((long)puVar40 + lVar36);
            puVar40 = puVar40 + 1;
          } while (lVar35 != 0);
          puVar48 = puVar3 + uVar25;
          if (uVar25 != uVar46) goto LAB_00d93d04;
        }
        else {
          uVar37 = uVar46 & 0xffffffe0;
          puVar40 = (undefined8 *)(lVar9 + 0x10 + uVar15);
          uVar25 = uVar37;
          do {
            puVar4 = (undefined8 *)((long)puVar40 + lVar36);
            uVar25 = uVar25 - 0x20;
            uVar50 = puVar4[-2];
            uVar52 = puVar4[1];
            uVar51 = *puVar4;
            puVar40[-1] = puVar4[-1];
            puVar40[-2] = uVar50;
            puVar40[1] = uVar52;
            *puVar40 = uVar51;
            puVar40 = puVar40 + 4;
          } while (uVar25 != 0);
          if (uVar37 != uVar46) {
            if ((uVar30 & 0x18) == 0) {
              puVar48 = puVar3 + uVar37;
              goto LAB_00d93d04;
            }
            goto LAB_00d93cd0;
          }
        }
        uVar16 = uVar30 + uVar16;
        uVar15 = uVar15 + uVar46;
      }
joined_r0x00d93d20:
      if ((uVar47 <= uVar15) || (param_3 <= pbVar41)) goto joined_r0x00d93e30;
      goto LAB_00d930c8;
    }
    uVar33 = uVar39;
    if (2 < uVar39) {
      uVar33 = 3;
    }
    if (uVar29 >> 0x18 == 0) {
      uVar29 = uVar29 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    lVar35 = lVar8 + 0x360 + (ulong)(uVar33 << 6) * 2;
    uVar32 = *(ushort *)(lVar35 + 2);
    uVar33 = (uVar29 >> 0xb) * (uint)uVar32;
    uVar45 = uVar18 - uVar33;
    if (uVar18 < uVar33) {
      lVar36 = 2;
      *(ushort *)(lVar35 + 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
    }
    else {
      uVar33 = uVar29 - uVar33;
      lVar36 = 3;
      *(ushort *)(lVar35 + 2) = uVar32 - (uVar32 >> 5);
      uVar18 = uVar45;
    }
    if (uVar33 >> 0x18 == 0) {
      uVar33 = uVar33 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar32 = *(ushort *)(lVar35 + lVar36 * 2);
    uVar29 = (uVar33 >> 0xb) * (uint)uVar32;
    uVar45 = uVar18 - uVar29;
    if (uVar18 < uVar29) {
      uVar33 = (int)lVar36 << 1;
      *(ushort *)(lVar35 + lVar36 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
      uVar32 = *(ushort *)(lVar35 + (ulong)uVar33 * 2);
    }
    else {
      uVar29 = uVar33 - uVar29;
      uVar33 = (int)lVar36 << 1 | 1;
      *(ushort *)(lVar35 + lVar36 * 2) = uVar32 - (uVar32 >> 5);
      uVar32 = *(ushort *)(lVar35 + (ulong)uVar33 * 2);
      uVar18 = uVar45;
    }
    if (uVar29 >> 0x18 == 0) {
      uVar29 = uVar29 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar45 = (uVar29 >> 0xb) * (uint)uVar32;
    uVar20 = uVar18 - uVar45;
    if (uVar18 < uVar45) {
      uVar29 = uVar33 << 1;
      *(ushort *)(lVar35 + (ulong)uVar33 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
      uVar32 = *(ushort *)(lVar35 + (ulong)uVar29 * 2);
    }
    else {
      uVar45 = uVar29 - uVar45;
      uVar29 = uVar33 << 1 | 1;
      *(ushort *)(lVar35 + (ulong)uVar33 * 2) = uVar32 - (uVar32 >> 5);
      uVar32 = *(ushort *)(lVar35 + (ulong)uVar29 * 2);
      uVar18 = uVar20;
    }
    if (uVar45 >> 0x18 == 0) {
      uVar45 = uVar45 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar33 = (uVar45 >> 0xb) * (uint)uVar32;
    uVar20 = uVar18 - uVar33;
    if (uVar18 < uVar33) {
      uVar45 = uVar29 << 1;
      *(ushort *)(lVar35 + (ulong)uVar29 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
      uVar32 = *(ushort *)(lVar35 + (ulong)uVar45 * 2);
    }
    else {
      uVar33 = uVar45 - uVar33;
      uVar45 = uVar29 << 1 | 1;
      *(ushort *)(lVar35 + (ulong)uVar29 * 2) = uVar32 - (uVar32 >> 5);
      uVar32 = *(ushort *)(lVar35 + (ulong)uVar45 * 2);
      uVar18 = uVar20;
    }
    if (uVar33 >> 0x18 == 0) {
      uVar33 = uVar33 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar20 = (uVar33 >> 0xb) * (uint)uVar32;
    uVar29 = uVar18 - uVar20;
    if (uVar18 < uVar20) {
      uVar33 = uVar45 << 1;
      *(ushort *)(lVar35 + (ulong)uVar45 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
      uVar32 = *(ushort *)(lVar35 + (ulong)uVar33 * 2);
    }
    else {
      uVar20 = uVar33 - uVar20;
      uVar33 = uVar45 << 1 | 1;
      *(ushort *)(lVar35 + (ulong)uVar45 * 2) = uVar32 - (uVar32 >> 5);
      uVar32 = *(ushort *)(lVar35 + (ulong)uVar33 * 2);
      uVar18 = uVar29;
    }
    if (uVar20 >> 0x18 == 0) {
      uVar20 = uVar20 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar29 = (uVar20 >> 0xb) * (uint)uVar32;
    uVar45 = uVar18 - uVar29;
    if (uVar18 < uVar29) {
      uVar20 = uVar33 * 2;
      *(ushort *)(lVar35 + (ulong)uVar33 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
    }
    else {
      uVar29 = uVar20 - uVar29;
      uVar20 = uVar33 << 1 | 1;
      *(ushort *)(lVar35 + (ulong)uVar33 * 2) = uVar32 - (uVar32 >> 5);
      uVar18 = uVar45;
    }
    uVar33 = uVar20 - 0x40;
    if (uVar33 < 4) {
LAB_00d93bb0:
      uVar17 = uVar16;
      if (uVar23 != 0) {
        uVar17 = uVar23;
      }
      if (uVar17 <= uVar33) {
        return 1;
      }
      uVar17 = uVar33 + 1;
      bVar14 = 0x12 < uVar22;
      uVar22 = 7;
      uVar33 = uVar30;
      uVar45 = uVar43;
      local_6c = uVar44;
      if (bVar14) {
        uVar22 = 10;
      }
      goto LAB_00d93bec;
    }
    uVar45 = uVar20 & 1 | 2;
    if (uVar33 < 0xe) {
      uVar20 = (uVar33 >> 1) - 1;
      uVar17 = 1;
      uVar45 = uVar45 << (ulong)(uVar20 & 0x1f);
      uVar34 = 1;
      lVar35 = lVar8 + 0x55e + (ulong)uVar45 * 2 + (ulong)uVar33 * -2;
      pbVar42 = pbVar41;
      uVar19 = uVar18;
      uVar33 = uVar45;
      do {
        while( true ) {
          pbVar41 = pbVar42;
          uVar45 = uVar29;
          uVar18 = uVar19;
          if (uVar29 >> 0x18 == 0) {
            pbVar41 = pbVar42 + 1;
            uVar45 = uVar29 << 8;
            uVar18 = (uint)*pbVar42 | uVar19 << 8;
          }
          uVar32 = *(ushort *)(lVar35 + (ulong)uVar17 * 2);
          uVar25 = (ulong)uVar17;
          uVar29 = (uVar45 >> 0xb) * (uint)uVar32;
          uVar19 = uVar18 - uVar29;
          pbVar42 = pbVar41;
          if (uVar29 <= uVar18) break;
          uVar17 = uVar17 << 1;
          *(ushort *)(lVar35 + uVar25 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
          uVar34 = uVar34 << 1;
          uVar20 = uVar20 - 1;
          uVar19 = uVar18;
          if (uVar20 == 0) goto LAB_00d93bb0;
        }
        uVar29 = uVar45 - uVar29;
        uVar17 = uVar17 << 1 | 1;
        uVar33 = uVar34 | uVar33;
        *(ushort *)(lVar35 + uVar25 * 2) = uVar32 - (uVar32 >> 5);
        uVar34 = uVar34 << 1;
        uVar20 = uVar20 - 1;
        uVar18 = uVar19;
      } while (uVar20 != 0);
      goto LAB_00d93bb0;
    }
    iVar28 = (uVar33 >> 1) - 5;
    pbVar42 = pbVar41;
    do {
      uVar33 = uVar29;
      if (uVar29 >> 0x18 == 0) {
        uVar18 = (uint)*pbVar42 | uVar18 << 8;
        pbVar42 = pbVar42 + 1;
        uVar33 = uVar29 << 8;
      }
      uVar29 = uVar33 >> 1;
      iVar28 = iVar28 + -1;
      uVar20 = (int)(uVar18 - uVar29) >> 0x1f;
      uVar45 = uVar20 + uVar45 * 2 + 1;
      uVar18 = (uVar20 & uVar29) + (uVar18 - uVar29);
    } while (iVar28 != 0);
    pbVar41 = pbVar42;
    if (uVar33 >> 0x19 == 0) {
      pbVar41 = pbVar42 + 1;
      uVar29 = uVar29 << 8;
      uVar18 = (uint)*pbVar42 | uVar18 * 0x100;
    }
    uVar32 = *(ushort *)(lVar8 + 0x646);
    uVar33 = uVar45 * 0x10;
    uVar45 = (uVar29 >> 0xb) * (uint)uVar32;
    uVar20 = uVar18 - uVar45;
    if (uVar18 < uVar45) {
      lVar35 = 2;
      *(ushort *)(lVar8 + 0x646) = uVar32 + (short)(0x800 - uVar32 >> 5);
    }
    else {
      uVar45 = uVar29 - uVar45;
      uVar33 = uVar33 | 1;
      lVar35 = 3;
      *(ushort *)(lVar8 + 0x646) = uVar32 - (uVar32 >> 5);
      uVar18 = uVar20;
    }
    if (uVar45 >> 0x18 == 0) {
      uVar45 = uVar45 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar32 = *(ushort *)(lVar2 + lVar35 * 2);
    uVar29 = (uVar45 >> 0xb) * (uint)uVar32;
    uVar20 = uVar18 - uVar29;
    if (uVar18 < uVar29) {
      uVar45 = (int)lVar35 << 1;
      *(ushort *)(lVar2 + lVar35 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
      uVar32 = *(ushort *)(lVar2 + (ulong)uVar45 * 2);
    }
    else {
      uVar29 = uVar45 - uVar29;
      uVar45 = (int)lVar35 << 1 | 1;
      uVar33 = uVar33 | 2;
      *(ushort *)(lVar2 + lVar35 * 2) = uVar32 - (uVar32 >> 5);
      uVar32 = *(ushort *)(lVar2 + (ulong)uVar45 * 2);
      uVar18 = uVar20;
    }
    if (uVar29 >> 0x18 == 0) {
      uVar29 = uVar29 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar20 = (uVar29 >> 0xb) * (uint)uVar32;
    uVar19 = uVar18 - uVar20;
    if (uVar18 < uVar20) {
      uVar11 = uVar45 << 1;
      *(ushort *)(lVar2 + (ulong)uVar45 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
      uVar32 = *(ushort *)(lVar2 + (ulong)uVar11 * 2);
    }
    else {
      uVar20 = uVar29 - uVar20;
      uVar11 = uVar45 << 1 | 1;
      uVar33 = uVar33 | 4;
      *(ushort *)(lVar2 + (ulong)uVar45 * 2) = uVar32 - (uVar32 >> 5);
      uVar32 = *(ushort *)(lVar2 + (ulong)uVar11 * 2);
      uVar18 = uVar19;
    }
    if (uVar20 >> 0x18 == 0) {
      uVar20 = uVar20 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
      pbVar41 = pbVar41 + 1;
    }
    uVar29 = (uVar20 >> 0xb) * (uint)uVar32;
    uVar45 = uVar18 - uVar29;
    if (uVar18 < uVar29) {
      *(ushort *)(lVar2 + (ulong)uVar11 * 2) = uVar32 + (short)(0x800 - uVar32 >> 5);
    }
    else {
      uVar29 = uVar20 - uVar29;
      uVar33 = uVar33 | 8;
      *(ushort *)(lVar2 + (ulong)uVar11 * 2) = uVar32 - (uVar32 >> 5);
      uVar18 = uVar45;
    }
    if (uVar33 != 0xffffffff) goto LAB_00d93bb0;
    uVar39 = uVar39 + 0x112;
joined_r0x00d93e30:
    pbVar42 = pbVar41;
    if (uVar29 >> 0x18 == 0) {
      pbVar42 = pbVar41 + 1;
      uVar29 = uVar29 << 8;
      uVar18 = (uint)*pbVar41 | uVar18 << 8;
    }
    uVar23 = param_1[3];
    param_1[10] = uVar29;
    param_1[0xb] = uVar18;
    *(byte **)(param_1 + 8) = pbVar42;
    *(ulong *)(param_1 + 0xc) = uVar15;
    param_1[0x10] = uVar16;
    param_1[0x14] = uVar43;
    param_1[0x15] = uVar44;
    param_1[0x16] = local_6c;
    param_1[0x17] = uVar39;
    param_1[0x12] = uVar34;
    param_1[0x13] = uVar17;
    if (uVar16 < uVar23) {
      if (uVar39 - 1 < 0x111) goto LAB_00d93d7c;
LAB_00d93e00:
      if (uVar15 < param_2) goto LAB_00d93e08;
LAB_00d93e60:
      uVar23 = param_1[0x17];
      goto LAB_00d93e64;
    }
    param_1[0x11] = uVar23;
    if (0x110 < uVar39 - 1) goto LAB_00d93e00;
LAB_00d93d7c:
    uVar18 = (uint)(param_2 - uVar15);
    if ((ulong)uVar39 <= param_2 - uVar15) {
      uVar18 = uVar39;
    }
    if ((param_1[0x11] == 0) && (uVar23 - uVar16 <= uVar18)) {
      param_1[0x11] = uVar23;
    }
    lVar27 = *(long *)(param_1 + 6);
    lVar31 = *(long *)(param_1 + 0xe);
    param_1[0x10] = uVar18 + uVar16;
    param_1[0x17] = uVar39 - uVar18;
    if (uVar18 != 0) {
      do {
        uVar18 = uVar18 - 1;
        lVar1 = lVar31;
        if (uVar17 <= uVar15) {
          lVar1 = 0;
        }
        *(undefined *)(lVar27 + uVar15) = *(undefined *)((lVar27 - (ulong)uVar17) + lVar1 + uVar15);
        uVar15 = uVar15 + 1;
      } while (uVar18 != 0);
    }
    *(ulong *)(param_1 + 0xc) = uVar15;
    if (param_2 <= uVar15) goto LAB_00d93e60;
LAB_00d93e08:
    if (param_3 <= *(byte **)(param_1 + 8)) goto LAB_00d93e60;
    uVar23 = param_1[0x17];
    if (0x111 < uVar23) {
LAB_00d93e64:
      if (0x112 < uVar23) {
        param_1[0x17] = 0x112;
      }
      return 0;
    }
  } while( true );
}


