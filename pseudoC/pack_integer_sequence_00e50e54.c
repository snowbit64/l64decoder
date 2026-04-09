// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pack_integer_sequence
// Entry Point: 00e50e54
// Size: 1260 bytes
// Signature: undefined __cdecl pack_integer_sequence(uint * param_1, uchar * param_2, int param_3, int param_4, int param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pack_integer_sequence(unsigned int*, unsigned char*, int, int, int) */

void pack_integer_sequence(uint *param_1,uchar *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  byte bVar17;
  ushort uVar16;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined auVar21 [16];
  undefined8 uVar23;
  undefined4 uVar24;
  undefined auVar22 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  uint local_9c;
  ulong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80 [4];
  undefined4 local_70;
  long local_68;
  
  auVar8 = _DAT_004c5d80;
  auVar7 = _DAT_004c53e0;
  auVar22 = _DAT_004c4d80;
  auVar6 = _DAT_004c34b0;
  lVar5 = tpidr_el0;
  lVar15 = (long)param_5 * 0xc;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar1 = *(int *)(range_table + lVar15);
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_70 = 0;
  iVar2 = param_4 * *(int *)(range_table + lVar15 + 4);
  iVar3 = param_4 * *(int *)(range_table + lVar15 + 8);
  iVar4 = iVar1 * param_4;
  local_9c = param_3;
  if (*(int *)(range_table + lVar15 + 4) == 1) {
    if (0 < param_4) {
      lVar15 = 0;
      uVar12 = param_4;
      do {
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        if ((int)lVar15 < param_4) {
          uVar14 = uVar12;
          if (4 < uVar12) {
            uVar14 = 5;
          }
          if (uVar14 < 2) {
            uVar14 = 1;
          }
          auVar21._8_8_ = (ulong)uVar14 - 1;
          auVar21._0_8_ = (ulong)uVar14 - 1;
          auVar25 = NEON_cmhs(auVar21,auVar8,8);
          auVar27 = NEON_cmhs(auVar21,auVar7,8);
          auVar28 = NEON_cmhs(auVar21,auVar22,8);
          auVar21 = NEON_cmhs(auVar21,auVar6,8);
          auVar26._4_4_ = auVar27._8_4_;
          auVar26._0_4_ = auVar27._0_4_;
          auVar26._8_4_ = auVar25._0_4_;
          auVar26._12_4_ = auVar25._8_4_;
          uVar10 = (auVar28[0] & 1) << 2 | (auVar28[8] & 1) << 3 | (auVar27[0] & 1) << 4 |
                   (auVar27[8] & 1) << 5 | (auVar25[0] & 1) << 6;
          uVar14 = (uint)auVar25[8] << 7;
          pbVar13 = param_2 + lVar15;
          if ((auVar21 & (undefined  [16])0x1) == (undefined  [16])0x0) {
            uVar10 = uVar10 | uVar14 & 0xff;
            if ((auVar21 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_00e5105c;
LAB_00e51114:
            auVar26[1] = pbVar13[1];
            if ((uVar10 >> 2 & 1) != 0) goto LAB_00e51120;
LAB_00e51060:
            if ((uVar10 >> 3 & 1) == 0) goto LAB_00e51064;
LAB_00e5112c:
            auVar26[3] = pbVar13[3];
            if ((uVar10 >> 4 & 1) != 0) goto LAB_00e51138;
LAB_00e51068:
            if ((uVar10 >> 5 & 1) == 0) goto LAB_00e5106c;
LAB_00e51144:
            auVar26[5] = pbVar13[5];
            if ((uVar10 >> 6 & 1) != 0) goto LAB_00e51150;
LAB_00e51070:
            uVar11 = auVar26._0_8_;
          }
          else {
            auVar26 = ZEXT116(*pbVar13);
            uVar10 = uVar10 | uVar14 & 0xff;
            if ((auVar21 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00e51114;
LAB_00e5105c:
            if ((uVar10 >> 2 & 1) == 0) goto LAB_00e51060;
LAB_00e51120:
            auVar26[2] = pbVar13[2];
            if ((uVar10 >> 3 & 1) != 0) goto LAB_00e5112c;
LAB_00e51064:
            if ((uVar10 >> 4 & 1) == 0) goto LAB_00e51068;
LAB_00e51138:
            auVar26[4] = pbVar13[4];
            if ((uVar10 >> 5 & 1) != 0) goto LAB_00e51144;
LAB_00e5106c:
            if ((uVar10 >> 6 & 1) == 0) goto LAB_00e51070;
LAB_00e51150:
            auVar26[6] = pbVar13[6];
            uVar11 = auVar26._0_8_;
          }
          if (uVar10 >> 7 != 0) {
            uVar11 = CONCAT17(pbVar13[7],auVar26._0_7_);
          }
          bVar17 = (byte)(uVar11 >> 8);
          uVar18 = (undefined)(uVar11 >> 0x28);
          uVar19 = (undefined)(uVar11 >> 0x30);
          uVar20 = (undefined)(uVar11 >> 0x38);
          uVar10 = (auVar28[0] & 1) << 2 | (auVar28[8] & 1) << 3 | (auVar27[0] & 1) << 4 |
                   (auVar27[8] & 1) << 5 | (auVar25[0] & 1) << 6;
          uVar14 = (uint)auVar25[8] << 7;
          uVar16 = CONCAT11(0,(byte)(uVar11 >> 0x20));
          if ((auVar21 & (undefined  [16])0x1) == (undefined  [16])0x0) {
            uVar10 = uVar10 | uVar14 & 0xff;
            if ((auVar21 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_00e510e8;
LAB_00e5116c:
            *(uint *)((ulong)&local_98 | 4) = (uint)bVar17;
            if ((uVar10 >> 2 & 1) != 0) goto LAB_00e51174;
LAB_00e510ec:
            if ((uVar10 >> 3 & 1) == 0) goto LAB_00e510f0;
LAB_00e51180:
            local_90 = (ulong)CONCAT14((char)(uVar11 >> 0x18),(undefined4)local_90);
            auVar25._2_2_ = 0;
            auVar25._0_2_ = uVar16;
            auVar25[4] = uVar18;
            auVar25._5_3_ = 0;
            auVar25[8] = uVar19;
            auVar25._9_3_ = 0;
            auVar25[12] = uVar20;
            auVar25._13_3_ = 0;
            if ((uVar10 >> 4 & 1) != 0) goto LAB_00e51190;
LAB_00e510f8:
            uVar23 = auVar25._8_8_;
            if ((uVar10 >> 5 & 1) == 0) goto LAB_00e510fc;
LAB_00e51198:
            uVar23 = auVar25._8_8_;
            uVar24 = auVar25._12_4_;
            local_84 = auVar25._4_4_;
          }
          else {
            local_98 = (ulong)CONCAT12(bVar17,(ushort)(byte)uVar11) & 0xffffffff0000ffff;
            uVar10 = uVar10 | uVar14 & 0xff;
            if ((auVar21 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00e5116c;
LAB_00e510e8:
            if ((uVar10 >> 2 & 1) == 0) goto LAB_00e510ec;
LAB_00e51174:
            local_90 = uVar11 >> 0x10 & 0xff;
            if ((uVar10 >> 3 & 1) != 0) goto LAB_00e51180;
LAB_00e510f0:
            auVar25._2_2_ = 0;
            auVar25._0_2_ = uVar16;
            auVar25[4] = uVar18;
            auVar25._5_3_ = 0;
            auVar25[8] = uVar19;
            auVar25._9_3_ = 0;
            auVar25[12] = uVar20;
            auVar25._13_3_ = 0;
            if ((uVar10 >> 4 & 1) == 0) goto LAB_00e510f8;
LAB_00e51190:
            uVar23 = auVar25._8_8_;
            local_88 = auVar25._0_4_;
            if ((uVar10 >> 5 & 1) != 0) goto LAB_00e51198;
LAB_00e510fc:
            uVar24 = (undefined4)((ulong)uVar23 >> 0x20);
          }
          if ((uVar10 >> 6 & 1) != 0) {
            uVar24 = (undefined4)((ulong)uVar23 >> 0x20);
            local_80[0] = (uint)uVar23;
          }
          if (uVar10 >> 7 != 0) {
            local_80[1] = uVar24;
          }
        }
        pack_five_trits(local_80,(int *)&local_98,(int *)&local_9c,iVar1);
        uVar12 = uVar12 - 5;
        lVar15 = lVar15 + 5;
      } while (((ulong)(param_4 + 4) / 5) * 5 != lVar15);
    }
  }
  else if (*(int *)(range_table + lVar15 + 8) == 1) {
    if (0 < param_4) {
      pbVar13 = param_2 + 2;
      uVar11 = (ulong)(param_4 + 2) / 3;
      do {
        uVar9 = local_90;
        local_90 = local_90 & 0xffffffff00000000;
        local_98 = 0;
        if (0 < param_4) {
          local_98 = (ulong)(uint)pbVar13[-2];
          if ((1 < (uint)param_4) &&
             (local_98 = (ulong)CONCAT14(pbVar13[-1],(uint)pbVar13[-2]), param_4 != 2)) {
            local_90 = CONCAT44(SUB84(uVar9,4),(uint)*pbVar13);
          }
        }
        pack_three_quint(local_80,(int *)&local_98,(int *)&local_9c,iVar1);
        pbVar13 = pbVar13 + 3;
        param_4 = param_4 - 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else if (0 < param_4) {
    uVar11 = (ulong)(uint)param_4;
    do {
      uVar12 = local_9c + 7;
      if (-1 < (int)local_9c) {
        uVar12 = local_9c;
      }
      uVar14 = local_9c & 7;
      lVar15 = (long)((ulong)uVar12 << 0x20) >> 0x23;
      local_9c = local_9c + iVar1;
      uVar11 = uVar11 - 1;
      *(uint *)((long)local_80 + lVar15) =
           (uint)*param_2 << (ulong)uVar14 | *(uint *)((long)local_80 + lVar15);
      param_2 = param_2 + 1;
    } while (uVar11 != 0);
  }
  uVar12 = iVar4 + param_3 + (int)(iVar2 * 8 | 4U) / 5 + (iVar3 * 7 + 2) / 3;
  if ((((int)uVar12 < 0x60) && (local_80[3] = 0, (int)uVar12 < 0x40)) &&
     (local_80[2] = 0, (int)uVar12 < 0x20)) {
    local_80[1] = 0;
  }
  uVar14 = uVar12 + 0x1f;
  if (-1 < (int)uVar12) {
    uVar14 = uVar12;
  }
  uVar11 = -(ulong)((uint)((int)uVar14 >> 5) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)((int)uVar14 >> 5) << 2;
  *(uint *)((long)local_80 + uVar11) =
       *(uint *)((long)local_80 + uVar11) & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
  auVar6 = *(undefined (*) [16])param_1;
  auVar22._0_8_ =
       CONCAT17(auVar6[7] | (byte)(local_80[1] >> 0x18),
                CONCAT16(auVar6[6] | (byte)(local_80[1] >> 0x10),
                         CONCAT15(auVar6[5] | (byte)(local_80[1] >> 8),
                                  CONCAT14(auVar6[4] | (byte)local_80[1],
                                           CONCAT13(auVar6[3] | (byte)(local_80[0] >> 0x18),
                                                    CONCAT12(auVar6[2] | (byte)(local_80[0] >> 0x10)
                                                             ,CONCAT11(auVar6[1] |
                                                                       (byte)(local_80[0] >> 8),
                                                                       auVar6[0] | (byte)local_80[0]
                                                                      )))))));
  auVar22[8] = auVar6[8] | (byte)local_80[2];
  auVar22[9] = auVar6[9] | (byte)(local_80[2] >> 8);
  auVar22[10] = auVar6[10] | (byte)(local_80[2] >> 0x10);
  auVar22[11] = auVar6[11] | (byte)(local_80[2] >> 0x18);
  auVar22[12] = auVar6[12] | (byte)local_80[3];
  auVar22[13] = auVar6[13] | (byte)(local_80[3] >> 8);
  auVar22[14] = auVar6[14] | (byte)(local_80[3] >> 0x10);
  auVar22[15] = auVar6[15] | (byte)(local_80[3] >> 0x18);
  *(long *)(param_1 + 2) = auVar22._8_8_;
  *(undefined8 *)param_1 = auVar22._0_8_;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


