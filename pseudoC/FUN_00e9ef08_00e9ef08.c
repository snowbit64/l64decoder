// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e9ef08
// Entry Point: 00e9ef08
// Size: 2004 bytes
// Signature: undefined FUN_00e9ef08(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined2 param_9, undefined4 param_10, undefined8 param_11)


bool FUN_00e9ef08(long param_1,ulong param_2,int param_3,long param_4,int param_5,long param_6,
                 int param_7,uint param_8,short param_9,int param_10,int *param_11)

{
  bool bVar1;
  undefined4 *puVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  void *pvVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  void *__dest;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  ushort uVar44;
  ushort uVar46;
  ushort uVar47;
  undefined8 uVar45;
  ushort uVar48;
  ushort uVar49;
  ushort uVar51;
  ushort uVar52;
  undefined8 uVar50;
  ushort uVar53;
  ushort uVar54;
  ushort uVar56;
  ushort uVar57;
  undefined8 uVar55;
  ushort uVar58;
  ushort uVar59;
  ushort uVar61;
  ushort uVar62;
  undefined8 uVar60;
  ushort uVar63;
  long local_120;
  long local_118;
  int *local_110;
  int local_104;
  ulong local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined8 *local_e0;
  int local_d4;
  uint local_d0;
  int local_cc;
  void *local_c8;
  long local_c0;
  int local_b8;
  int local_b4;
  ulong local_b0;
  uint *local_a8;
  long local_a0;
  int local_94;
  ulong local_90;
  ulong local_88;
  undefined8 *local_80;
  int local_78;
  int local_74;
  long local_70;
  
  local_a0 = param_6;
  lVar14 = tpidr_el0;
  iVar16 = -(int)param_9 + 0x2000;
  if (iVar16 == -0x1000 || -(int)param_9 + 0x3000 < 0 != SCARRY4(iVar16,0x1000)) {
    iVar16 = -0x1000;
  }
  uVar17 = (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) + 0xf &
           0xfffffffffffffff0;
  iVar25 = (int)param_2;
  puVar22 = (uint *)((long)&local_120 - uVar17);
  local_70 = *(long *)(lVar14 + 0x28);
  lVar21 = (long)iVar25 + -1;
  uVar9 = *(ulong *)(param_1 + 0x18);
  local_c0 = param_1;
  uVar4 = (int)*(short *)(uVar9 + (long)iVar25 * 2) - (int)*(short *)(uVar9 + lVar21 * 2) <<
          (ulong)(param_8 & 0x1f);
  uVar13 = (-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1) + 0xf &
           0xfffffffffffffff0;
  __dest = (void *)((long)puVar22 - uVar13);
  pvVar18 = (void *)((long)__dest - uVar13);
  lVar23 = (long)pvVar18 - uVar17;
  local_e8 = lVar23 - uVar17;
  iVar27 = param_8 * 0x10000;
  if (param_3 == 0) {
    iVar27 = 0;
  }
  local_74 = param_3;
  if (0 < iVar25) {
    local_cc = 1 << (ulong)(param_8 & 0x1f);
    local_d0 = param_8 * -2;
    local_110 = param_11;
    iVar16 = (short)iVar16 * 0x51f >> 0xe;
    local_b4 = param_10 * param_7;
    local_78 = iVar16 << 0x10;
    local_b0 = param_2 & 0xffffffff;
    local_b8 = iVar27 * iVar16 >> 0x10;
    local_d4 = (int)((param_8 * 0x10000 + 0x10000) * iVar16) >> 0x10;
    local_80 = (undefined8 *)((long)__dest + 0x10);
    local_e0 = (undefined8 *)((long)pvVar18 + 0x10);
    uVar13 = 0;
    local_120 = lVar23;
    local_118 = lVar21;
    local_104 = param_5;
    local_100 = param_2;
    local_f8 = lVar14;
    lStack_f0 = param_4;
    local_c8 = pvVar18;
    local_a8 = puVar22;
    do {
      local_90 = uVar13 + 1;
      iVar27 = (int)*(short *)(uVar9 + uVar13 * 2);
      iVar16 = *(short *)(uVar9 + local_90 * 2) - iVar27;
      uVar4 = iVar16 << (ulong)(param_8 & 0x1f);
      uVar17 = (ulong)uVar4;
      uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1;
      memcpy(__dest,(void *)(local_a0 + (long)((iVar27 << (ulong)(param_8 & 0x1f)) + local_b4) * 2),
             uVar9);
      pvVar18 = local_c8;
      local_88 = uVar13;
      if ((int)uVar4 < 1) {
        uVar26 = 0;
      }
      else {
        if (uVar4 < 0x10) {
          uVar10 = 0;
          uVar26 = 0;
        }
        else {
          uVar10 = uVar17 & 0xfffffff0;
          iVar27 = 0;
          iVar25 = 0;
          iVar29 = 0;
          iVar30 = 0;
          iVar31 = 0;
          iVar32 = 0;
          iVar33 = 0;
          iVar34 = 0;
          iVar35 = 0;
          iVar36 = 0;
          iVar37 = 0;
          iVar38 = 0;
          iVar39 = 0;
          iVar40 = 0;
          iVar41 = 0;
          iVar42 = 0;
          uVar13 = uVar10;
          puVar12 = local_80;
          do {
            uVar50 = puVar12[-1];
            uVar45 = puVar12[-2];
            uVar60 = puVar12[1];
            uVar55 = *puVar12;
            puVar12 = puVar12 + 4;
            uVar13 = uVar13 - 0x10;
            uVar44 = MP_INT_ABS((short)uVar45);
            uVar46 = MP_INT_ABS((short)((ulong)uVar45 >> 0x10));
            uVar47 = MP_INT_ABS((short)((ulong)uVar45 >> 0x20));
            uVar48 = MP_INT_ABS((short)((ulong)uVar45 >> 0x30));
            uVar49 = MP_INT_ABS((short)uVar50);
            uVar51 = MP_INT_ABS((short)((ulong)uVar50 >> 0x10));
            uVar52 = MP_INT_ABS((short)((ulong)uVar50 >> 0x20));
            uVar53 = MP_INT_ABS((short)((ulong)uVar50 >> 0x30));
            uVar54 = MP_INT_ABS((short)uVar55);
            uVar56 = MP_INT_ABS((short)((ulong)uVar55 >> 0x10));
            uVar57 = MP_INT_ABS((short)((ulong)uVar55 >> 0x20));
            uVar58 = MP_INT_ABS((short)((ulong)uVar55 >> 0x30));
            uVar59 = MP_INT_ABS((short)uVar60);
            uVar61 = MP_INT_ABS((short)((ulong)uVar60 >> 0x10));
            uVar62 = MP_INT_ABS((short)((ulong)uVar60 >> 0x20));
            uVar63 = MP_INT_ABS((short)((ulong)uVar60 >> 0x30));
            iVar31 = iVar31 + (uint)uVar49;
            iVar32 = iVar32 + (uint)uVar51;
            iVar33 = iVar33 + (uint)uVar52;
            iVar34 = iVar34 + (uint)uVar53;
            iVar27 = iVar27 + (uint)uVar44;
            iVar25 = iVar25 + (uint)uVar46;
            iVar29 = iVar29 + (uint)uVar47;
            iVar30 = iVar30 + (uint)uVar48;
            iVar39 = iVar39 + (uint)uVar59;
            iVar40 = iVar40 + (uint)uVar61;
            iVar41 = iVar41 + (uint)uVar62;
            iVar42 = iVar42 + (uint)uVar63;
            iVar35 = iVar35 + (uint)uVar54;
            iVar36 = iVar36 + (uint)uVar56;
            iVar37 = iVar37 + (uint)uVar57;
            iVar38 = iVar38 + (uint)uVar58;
          } while (uVar13 != 0);
          uVar26 = iVar35 + iVar27 + iVar39 + iVar31 + iVar36 + iVar25 + iVar40 + iVar32 +
                   iVar37 + iVar29 + iVar41 + iVar33 + iVar38 + iVar30 + iVar42 + iVar34;
          if (uVar10 == uVar17) goto LAB_00e9f154;
        }
        lVar14 = uVar17 - uVar10;
        psVar11 = (short *)((long)__dest + uVar10 * 2);
        do {
          sVar3 = *psVar11;
          uVar28 = -(int)sVar3;
          if (-1 < sVar3) {
            uVar28 = (uint)sVar3;
          }
          lVar14 = lVar14 + -1;
          uVar26 = uVar26 + (uVar28 & 0xffff);
          psVar11 = psVar11 + 1;
        } while (lVar14 != 0);
      }
LAB_00e9f154:
      uVar28 = 0;
      iVar27 = uVar26 + ((int)((uVar26 & 0x7fff) * local_b8) >> 0xf) +
               ((int)(uVar26 << 1) >> 0x10) * local_b8;
      iVar25 = iVar27;
      if ((local_74 != 0) && (iVar16 != 1)) {
        memcpy(local_c8,__dest,uVar9);
        haar1(pvVar18,(int)uVar4 >> (param_8 & 0x1f),local_cc);
        if ((int)uVar4 < 1) {
          uVar26 = 0;
        }
        else {
          if (uVar4 < 0x10) {
            uVar13 = 0;
            uVar26 = 0;
          }
          else {
            uVar13 = uVar17 & 0xfffffff0;
            iVar25 = 0;
            iVar29 = 0;
            iVar30 = 0;
            iVar31 = 0;
            iVar32 = 0;
            iVar33 = 0;
            iVar34 = 0;
            iVar35 = 0;
            iVar36 = 0;
            iVar37 = 0;
            iVar38 = 0;
            iVar39 = 0;
            iVar40 = 0;
            iVar41 = 0;
            iVar42 = 0;
            iVar43 = 0;
            uVar9 = uVar13;
            puVar12 = local_e0;
            do {
              uVar50 = puVar12[-1];
              uVar45 = puVar12[-2];
              uVar60 = puVar12[1];
              uVar55 = *puVar12;
              puVar12 = puVar12 + 4;
              uVar9 = uVar9 - 0x10;
              uVar44 = MP_INT_ABS((short)uVar45);
              uVar46 = MP_INT_ABS((short)((ulong)uVar45 >> 0x10));
              uVar47 = MP_INT_ABS((short)((ulong)uVar45 >> 0x20));
              uVar48 = MP_INT_ABS((short)((ulong)uVar45 >> 0x30));
              uVar49 = MP_INT_ABS((short)uVar50);
              uVar51 = MP_INT_ABS((short)((ulong)uVar50 >> 0x10));
              uVar52 = MP_INT_ABS((short)((ulong)uVar50 >> 0x20));
              uVar53 = MP_INT_ABS((short)((ulong)uVar50 >> 0x30));
              uVar54 = MP_INT_ABS((short)uVar55);
              uVar56 = MP_INT_ABS((short)((ulong)uVar55 >> 0x10));
              uVar57 = MP_INT_ABS((short)((ulong)uVar55 >> 0x20));
              uVar58 = MP_INT_ABS((short)((ulong)uVar55 >> 0x30));
              uVar59 = MP_INT_ABS((short)uVar60);
              uVar61 = MP_INT_ABS((short)((ulong)uVar60 >> 0x10));
              uVar62 = MP_INT_ABS((short)((ulong)uVar60 >> 0x20));
              uVar63 = MP_INT_ABS((short)((ulong)uVar60 >> 0x30));
              iVar32 = iVar32 + (uint)uVar49;
              iVar33 = iVar33 + (uint)uVar51;
              iVar34 = iVar34 + (uint)uVar52;
              iVar35 = iVar35 + (uint)uVar53;
              iVar25 = iVar25 + (uint)uVar44;
              iVar29 = iVar29 + (uint)uVar46;
              iVar30 = iVar30 + (uint)uVar47;
              iVar31 = iVar31 + (uint)uVar48;
              iVar40 = iVar40 + (uint)uVar59;
              iVar41 = iVar41 + (uint)uVar61;
              iVar42 = iVar42 + (uint)uVar62;
              iVar43 = iVar43 + (uint)uVar63;
              iVar36 = iVar36 + (uint)uVar54;
              iVar37 = iVar37 + (uint)uVar56;
              iVar38 = iVar38 + (uint)uVar57;
              iVar39 = iVar39 + (uint)uVar58;
            } while (uVar9 != 0);
            uVar26 = iVar36 + iVar25 + iVar40 + iVar32 + iVar37 + iVar29 + iVar41 + iVar33 +
                     iVar38 + iVar30 + iVar42 + iVar34 + iVar39 + iVar31 + iVar43 + iVar35;
            if (uVar13 == uVar17) goto LAB_00e9f250;
          }
          lVar14 = uVar17 - uVar13;
          psVar11 = (short *)((long)local_c8 + uVar13 * 2);
          do {
            sVar3 = *psVar11;
            uVar28 = -(int)sVar3;
            if (-1 < sVar3) {
              uVar28 = (uint)sVar3;
            }
            lVar14 = lVar14 + -1;
            uVar26 = uVar26 + (uVar28 & 0xffff);
            psVar11 = psVar11 + 1;
          } while (lVar14 != 0);
        }
LAB_00e9f250:
        iVar29 = uVar26 + ((int)((uVar26 & 0x7fff) * local_d4) >> 0xf) +
                 ((int)(uVar26 << 1) >> 0x10) * local_d4;
        iVar25 = iVar29;
        if (iVar27 <= iVar29) {
          iVar25 = iVar27;
        }
        uVar28 = -(uint)(iVar29 < iVar27);
      }
      local_94 = iVar16;
      uVar26 = (local_74 == 0 && iVar16 != 1) + param_8;
      if (0 < (int)uVar26) {
        uVar24 = 0;
        uVar9 = uVar17 & 0xfffffff0;
        uVar20 = uVar28;
        do {
          iVar16 = ~uVar24 + param_8;
          if (local_74 == 0) {
            iVar16 = uVar24 + 1;
          }
          haar1(__dest,(int)uVar4 >> (uVar24 & 0x1f),1 << (ulong)(uVar24 & 0x1f));
          if ((int)uVar4 < 1) {
            uVar28 = 0;
          }
          else {
            if (uVar4 < 0x10) {
              uVar28 = 0;
              uVar13 = 0;
            }
            else {
              iVar27 = 0;
              iVar29 = 0;
              iVar30 = 0;
              iVar31 = 0;
              iVar32 = 0;
              iVar33 = 0;
              iVar34 = 0;
              iVar35 = 0;
              iVar36 = 0;
              iVar37 = 0;
              iVar38 = 0;
              iVar39 = 0;
              iVar40 = 0;
              iVar41 = 0;
              iVar42 = 0;
              iVar43 = 0;
              uVar13 = uVar9;
              puVar12 = local_80;
              do {
                uVar50 = puVar12[-1];
                uVar45 = puVar12[-2];
                uVar60 = puVar12[1];
                uVar55 = *puVar12;
                puVar12 = puVar12 + 4;
                uVar13 = uVar13 - 0x10;
                uVar44 = MP_INT_ABS((short)uVar45);
                uVar46 = MP_INT_ABS((short)((ulong)uVar45 >> 0x10));
                uVar47 = MP_INT_ABS((short)((ulong)uVar45 >> 0x20));
                uVar48 = MP_INT_ABS((short)((ulong)uVar45 >> 0x30));
                uVar49 = MP_INT_ABS((short)uVar50);
                uVar51 = MP_INT_ABS((short)((ulong)uVar50 >> 0x10));
                uVar52 = MP_INT_ABS((short)((ulong)uVar50 >> 0x20));
                uVar53 = MP_INT_ABS((short)((ulong)uVar50 >> 0x30));
                uVar54 = MP_INT_ABS((short)uVar55);
                uVar56 = MP_INT_ABS((short)((ulong)uVar55 >> 0x10));
                uVar57 = MP_INT_ABS((short)((ulong)uVar55 >> 0x20));
                uVar58 = MP_INT_ABS((short)((ulong)uVar55 >> 0x30));
                uVar59 = MP_INT_ABS((short)uVar60);
                uVar61 = MP_INT_ABS((short)((ulong)uVar60 >> 0x10));
                uVar62 = MP_INT_ABS((short)((ulong)uVar60 >> 0x20));
                uVar63 = MP_INT_ABS((short)((ulong)uVar60 >> 0x30));
                iVar32 = iVar32 + (uint)uVar49;
                iVar33 = iVar33 + (uint)uVar51;
                iVar34 = iVar34 + (uint)uVar52;
                iVar35 = iVar35 + (uint)uVar53;
                iVar27 = iVar27 + (uint)uVar44;
                iVar29 = iVar29 + (uint)uVar46;
                iVar30 = iVar30 + (uint)uVar47;
                iVar31 = iVar31 + (uint)uVar48;
                iVar40 = iVar40 + (uint)uVar59;
                iVar41 = iVar41 + (uint)uVar61;
                iVar42 = iVar42 + (uint)uVar62;
                iVar43 = iVar43 + (uint)uVar63;
                iVar36 = iVar36 + (uint)uVar54;
                iVar37 = iVar37 + (uint)uVar56;
                iVar38 = iVar38 + (uint)uVar57;
                iVar39 = iVar39 + (uint)uVar58;
              } while (uVar13 != 0);
              uVar28 = iVar36 + iVar27 + iVar40 + iVar32 + iVar37 + iVar29 + iVar41 + iVar33 +
                       iVar38 + iVar30 + iVar42 + iVar34 + iVar39 + iVar31 + iVar43 + iVar35;
              uVar13 = uVar9;
              if (uVar9 == uVar17) goto LAB_00e9f2b0;
            }
            lVar14 = uVar17 - uVar13;
            psVar11 = (short *)((long)__dest + uVar13 * 2);
            do {
              sVar3 = *psVar11;
              uVar15 = -(int)sVar3;
              if (-1 < sVar3) {
                uVar15 = (uint)sVar3;
              }
              lVar14 = lVar14 + -1;
              uVar28 = uVar28 + (uVar15 & 0xffff);
              psVar11 = psVar11 + 1;
            } while (lVar14 != 0);
          }
LAB_00e9f2b0:
          uVar24 = uVar24 + 1;
          iVar16 = local_78 * iVar16 >> 0x10;
          iVar16 = uVar28 + ((int)((uVar28 & 0x7fff) * iVar16) >> 0xf) +
                   ((int)(uVar28 << 1) >> 0x10) * iVar16;
          uVar28 = uVar24;
          if (iVar25 <= iVar16) {
            uVar28 = uVar20;
            iVar16 = iVar25;
          }
          iVar25 = iVar16;
          uVar20 = uVar28;
        } while (uVar24 != uVar26);
      }
      uVar4 = uVar28 * -2;
      if (local_74 != 0) {
        uVar4 = uVar28 * 2;
      }
      local_a8[local_88] = uVar4;
      if ((local_94 == 1) && (uVar4 == 0 || uVar4 == local_d0)) {
        local_a8[local_88] = uVar4 - 1;
      }
      if (local_90 == local_b0) goto LAB_00e9f418;
      uVar9 = *(ulong *)(local_c0 + 0x18);
      uVar13 = local_90;
    } while( true );
  }
LAB_00e9f434:
  lVar5 = local_e8;
  uVar4 = local_74 << 2;
  iVar16 = param_5;
  if (local_74 != 0) {
    iVar16 = 0;
  }
  iVar25 = *param_11;
  iVar31 = (int)(char)tf_select_table[(ulong)uVar4 + (long)(int)param_8 * 8];
  iVar30 = (int)uVar9;
  iVar29 = iVar30 + iVar31 * -2;
  iVar32 = (int)(char)tf_select_table[(ulong)(local_74 << 2 | 1) + (long)(int)param_8 * 8];
  iVar27 = -iVar29;
  if (-1 < iVar29) {
    iVar27 = iVar29;
  }
  iVar33 = iVar30 + iVar32 * -2;
  iVar29 = -iVar33;
  if (-1 < iVar33) {
    iVar29 = iVar33;
  }
  iVar33 = (int)param_2;
  iVar27 = iVar27 * iVar25;
  iVar29 = iVar16 + iVar29 * iVar25;
  if (1 < iVar33) {
    lVar8 = (param_2 & 0xffffffff) - 1;
    piVar19 = param_11;
    puVar7 = puVar22;
    do {
      puVar7 = puVar7 + 1;
      piVar19 = piVar19 + 1;
      iVar34 = iVar27;
      if (iVar29 + param_5 <= iVar27) {
        iVar34 = iVar29 + param_5;
      }
      iVar35 = iVar27 + param_5;
      if (iVar29 <= iVar27 + param_5) {
        iVar35 = iVar29;
      }
      iVar27 = *puVar7 + iVar31 * -2;
      iVar29 = -iVar27;
      if (-1 < iVar27) {
        iVar29 = iVar27;
      }
      iVar27 = *puVar7 + iVar32 * -2;
      iVar36 = -iVar27;
      if (-1 < iVar27) {
        iVar36 = iVar27;
      }
      lVar8 = lVar8 + -1;
      iVar27 = iVar34 + iVar29 * *piVar19;
      iVar29 = iVar35 + iVar36 * *piVar19;
    } while (lVar8 != 0);
  }
  if (iVar29 <= iVar27) {
    iVar27 = iVar29;
  }
  iVar32 = (int)(char)tf_select_table[(ulong)(uVar4 | 2) + (long)(int)param_8 * 8];
  iVar31 = iVar30 + iVar32 * -2;
  iVar34 = (int)(char)tf_select_table[(ulong)(uVar4 | 3) + (long)(int)param_8 * 8];
  iVar29 = -iVar31;
  if (-1 < iVar31) {
    iVar29 = iVar31;
  }
  iVar35 = iVar30 + iVar34 * -2;
  iVar31 = -iVar35;
  if (-1 < iVar35) {
    iVar31 = iVar35;
  }
  iVar29 = iVar29 * iVar25;
  iVar16 = iVar16 + iVar31 * iVar25;
  if (1 < iVar33) {
    lVar8 = (param_2 & 0xffffffff) - 1;
    piVar19 = param_11;
    puVar7 = puVar22;
    do {
      puVar7 = puVar7 + 1;
      piVar19 = piVar19 + 1;
      iVar31 = iVar29;
      if (iVar16 + param_5 <= iVar29) {
        iVar31 = iVar16 + param_5;
      }
      iVar35 = iVar29 + param_5;
      if (iVar16 <= iVar29 + param_5) {
        iVar35 = iVar16;
      }
      iVar16 = *puVar7 + iVar32 * -2;
      iVar29 = -iVar16;
      if (-1 < iVar16) {
        iVar29 = iVar16;
      }
      iVar16 = *puVar7 + iVar34 * -2;
      iVar36 = -iVar16;
      if (-1 < iVar16) {
        iVar36 = iVar16;
      }
      lVar8 = lVar8 + -1;
      iVar29 = iVar31 + iVar29 * *piVar19;
      iVar16 = iVar35 + iVar36 * *piVar19;
    } while (lVar8 != 0);
  }
  if (iVar16 <= iVar29) {
    iVar29 = iVar16;
  }
  bVar6 = local_74 != 0;
  iVar16 = 0;
  if (!bVar6) {
    iVar16 = param_5;
  }
  uVar26 = 2;
  if (!bVar6 || iVar29 >= iVar27) {
    uVar26 = 0;
  }
  iVar34 = (int)(char)tf_select_table[(ulong)(uVar26 | uVar4) + (long)(int)param_8 * 8];
  iVar32 = iVar30 + iVar34 * -2;
  iVar35 = (int)(char)tf_select_table[(ulong)(uVar26 | uVar4 | 1) + (long)(int)param_8 * 8];
  iVar31 = -iVar32;
  if (-1 < iVar32) {
    iVar31 = iVar32;
  }
  iVar30 = iVar30 + iVar35 * -2;
  iVar32 = -iVar30;
  if (-1 < iVar30) {
    iVar32 = iVar30;
  }
  iVar31 = iVar31 * iVar25;
  iVar16 = iVar16 + iVar32 * iVar25;
  if (iVar33 < 2) {
    *(uint *)(param_4 + lVar21 * 4) = (uint)(iVar16 <= iVar31);
  }
  else {
    lVar8 = 4;
    do {
      iVar32 = *(int *)((long)puVar22 + lVar8);
      iVar25 = iVar16 + param_5;
      iVar30 = iVar31 + param_5;
      iVar36 = iVar31;
      if (iVar25 <= iVar31) {
        iVar36 = iVar25;
      }
      iVar38 = *(int *)((long)param_11 + lVar8);
      iVar37 = iVar30;
      if (iVar16 <= iVar30) {
        iVar37 = iVar16;
      }
      iVar39 = iVar32 + iVar34 * -2;
      *(uint *)(lVar23 + lVar8) = (uint)(iVar25 <= iVar31);
      iVar25 = -iVar39;
      if (-1 < iVar39) {
        iVar25 = iVar39;
      }
      iVar32 = iVar32 + iVar35 * -2;
      iVar39 = -iVar32;
      if (-1 < iVar32) {
        iVar39 = iVar32;
      }
      *(uint *)(lVar5 + lVar8) = (uint)(iVar16 <= iVar30);
      iVar31 = iVar36 + iVar25 * iVar38;
      lVar8 = lVar8 + 4;
      iVar16 = iVar37 + iVar39 * iVar38;
    } while ((param_2 & 0xffffffff) * 4 - lVar8 != 0);
    *(uint *)(param_4 + lVar21 * 4) = (uint)(iVar16 <= iVar31);
    uVar9 = (ulong)(iVar33 - 2);
    if (1 < iVar33) {
      do {
        puVar2 = (undefined4 *)(param_4 + uVar9 * 4);
        lVar21 = lVar5;
        if (puVar2[1] != 1) {
          lVar21 = lVar23;
        }
        *puVar2 = *(undefined4 *)(lVar21 + uVar9 * 4 + 4);
        bVar1 = 0 < (long)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
  }
  if (*(long *)(lVar14 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6 && iVar29 < iVar27;
LAB_00e9f418:
  uVar9 = (ulong)*local_a8;
  param_2 = local_100;
  param_4 = lStack_f0;
  lVar14 = local_f8;
  param_11 = local_110;
  lVar21 = local_118;
  puVar22 = local_a8;
  lVar23 = local_120;
  param_5 = local_104;
  goto LAB_00e9f434;
}


