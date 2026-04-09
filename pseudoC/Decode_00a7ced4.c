// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decode
// Entry Point: 00a7ced4
// Size: 3168 bytes
// Signature: undefined __thiscall Decode(D3DX_BC6H * this, bool param_1, HDRColorA * param_2)


/* BC6BC7Util::D3DX_BC6H::Decode(bool, BC6BC7Util::HDRColorA*) const */

void __thiscall BC6BC7Util::D3DX_BC6H::Decode(D3DX_BC6H *this,bool param_1,HDRColorA *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  float fVar41;
  int iVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 uVar47;
  ulong uVar48;
  undefined8 uVar49;
  ulong uVar50;
  ulong uVar51;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  lVar16 = tpidr_el0;
  local_68 = *(long *)(lVar16 + 0x28);
  uVar19 = (byte)*this & 3;
  uVar1 = uVar19;
  if (1 < uVar19) {
    uVar1 = (byte)*this & 0x1f;
  }
  if ((0x4444cccfU >> (ulong)uVar1 & 1) == 0) {
    *(undefined8 *)(param_2 + 8) = 0x3f80000000000000;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xb8) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 200) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined8 *)(param_2 + 0xd8) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0xd0) = 0;
    *(undefined8 *)(param_2 + 0xe8) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(undefined8 *)(param_2 + 0xf8) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0xf0) = 0;
    goto LAB_00a7db00;
  }
  uVar45 = 2;
  if (1 < uVar19) {
    uVar45 = 5;
  }
  lVar28 = (long)*(int *)(ms_aModeToInfo + (ulong)uVar1 * 4);
  uVar21 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar33 = lVar28 - 10;
  uVar22 = 0;
  uVar27 = 0;
  uVar24 = 0;
  uVar35 = 0;
  uVar36 = 0;
  uVar30 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar31 = 0;
  uVar34 = 0;
  uVar26 = 0x41;
  if (3 < uVar33) {
    uVar26 = 0x52;
  }
  pbVar20 = ms_aDesc + (uVar45 + lVar28 * 0x52) * 2 + 1;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  do {
    if (((byte)this[uVar45 >> 3] >> (ulong)((uint)uVar45 & 7) & 1) != 0) {
      switch(pbVar20[-1]) {
      case 2:
        uVar21 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar21;
        break;
      case 3:
        uVar34 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar34;
        local_b0 = CONCAT44(local_b0._4_4_,uVar34);
        break;
      case 4:
        uVar31 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar31;
        local_a0 = CONCAT44(local_a0._4_4_,uVar31);
        break;
      case 5:
        uVar38 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar38;
        local_90 = CONCAT44(local_90._4_4_,uVar38);
        break;
      case 6:
        uVar37 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar37;
        local_80 = CONCAT44(local_80._4_4_,uVar37);
        break;
      case 7:
        uVar30 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar30;
        local_b0 = CONCAT44(uVar30,(undefined4)local_b0);
        break;
      case 8:
        uVar36 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar36;
        local_a0 = CONCAT44(uVar36,(undefined4)local_a0);
        break;
      case 9:
        uVar35 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar35;
        local_90 = CONCAT44(uVar35,(int)local_90);
        break;
      case 10:
        uVar24 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar24;
        local_80 = CONCAT44(uVar24,(int)local_80);
        break;
      case 0xb:
        uVar27 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar27;
        uStack_a8 = (ulong)uVar27;
        break;
      case 0xc:
        uVar22 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar22;
        local_98 = (ulong)uVar22;
        break;
      case 0xd:
        uVar19 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar19;
        uStack_88 = (ulong)uVar19;
        break;
      case 0xe:
        uVar18 = 1 << (ulong)(*pbVar20 & 0x1f) | uVar18;
        local_78 = (ulong)uVar18;
        break;
      default:
        goto switchD_00a7d04c_caseD_d;
      }
    }
    uVar45 = uVar45 + 1;
    pbVar20 = pbVar20 + 2;
  } while (uVar26 != uVar45);
  if (param_1) {
    lVar14 = lVar28 * 0x14;
    uVar34 = -(uVar34 >> (ulong)((byte)ms_aInfo[lVar14 + 4] - 1 & 0x1f) & 1) &
             -1 << (ulong)((byte)ms_aInfo[lVar14 + 4] & 0x1f) | uVar34;
    uVar30 = -(uVar30 >> (ulong)((byte)ms_aInfo[lVar14 + 5] - 1 & 0x1f) & 1) &
             -1 << (ulong)((byte)ms_aInfo[lVar14 + 5] & 0x1f) | uVar30;
    uVar27 = -(uVar27 >> (ulong)((byte)ms_aInfo[lVar14 + 6] - 1 & 0x1f) & 1) &
             -1 << (ulong)((byte)ms_aInfo[lVar14 + 6] & 0x1f) | uVar27;
    local_b0 = CONCAT44(uVar30,uVar34);
    uStack_a8 = (ulong)uVar27;
LAB_00a7d1bc:
    lVar14 = lVar28 * 0x14;
    uVar43 = NEON_ushl(0xffffffffffffffff,
                       (ulong)CONCAT14(ms_aInfo[lVar14 + 9],(uint)(byte)ms_aInfo[lVar14 + 8]),4);
    uVar45 = NEON_ushl(0x100000001,
                       CONCAT44((byte)ms_aInfo[lVar14 + 9] - 1,(byte)ms_aInfo[lVar14 + 8] - 1),4);
    uVar19 = -((uint)local_98 >> (ulong)((byte)ms_aInfo[lVar14 + 10] - 1 & 0x1f) & 1) &
             -1 << (ulong)((byte)ms_aInfo[lVar14 + 10] & 0x1f) | (uint)local_98;
    local_98 = (ulong)uVar19;
    uVar44 = NEON_cmeq(uVar45 & local_a0,0,4);
    iVar42 = CONCAT13((byte)((ulong)uVar43 >> 0x18) & ~(byte)((ulong)uVar44 >> 0x18) |
                      (byte)(local_a0 >> 0x18),
                      CONCAT12((byte)((ulong)uVar43 >> 0x10) & ~(byte)((ulong)uVar44 >> 0x10) |
                               (byte)(local_a0 >> 0x10),
                               CONCAT11((byte)((ulong)uVar43 >> 8) & ~(byte)((ulong)uVar44 >> 8) |
                                        (byte)(local_a0 >> 8),
                                        (byte)uVar43 & ~(byte)uVar44 | (byte)local_a0)));
    local_a0 = CONCAT17((byte)((ulong)uVar43 >> 0x38) & ~(byte)((ulong)uVar44 >> 0x38) |
                        (byte)(local_a0 >> 0x38),
                        CONCAT16((byte)((ulong)uVar43 >> 0x30) & ~(byte)((ulong)uVar44 >> 0x30) |
                                 (byte)(local_a0 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar43 >> 0x28) &
                                          ~(byte)((ulong)uVar44 >> 0x28) | (byte)(local_a0 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar43 >> 0x20) &
                                                   ~(byte)((ulong)uVar44 >> 0x20) |
                                                   (byte)(local_a0 >> 0x20),iVar42))));
    if (3 < uVar33) {
      uVar45 = (ulong)(byte)ms_aInfo[lVar28 * 0x14 + 1];
      puVar23 = &local_78;
      pbVar20 = ms_aInfo + lVar28 * 0x14 + 0x12;
      do {
        uVar45 = uVar45 - 1;
        uVar50 = puVar23[-3];
        uVar51 = puVar23[-1];
        bVar7 = *pbVar20;
        uVar43 = NEON_ushl(0xffffffffffffffff,(ulong)CONCAT14(pbVar20[-5],(uint)pbVar20[-6]),4);
        uVar44 = NEON_ushl(0xffffffffffffffff,(ulong)CONCAT14(pbVar20[-1],(uint)pbVar20[-2]),4);
        uVar46 = NEON_ushl(0x100000001,CONCAT44(pbVar20[-5] - 1,pbVar20[-6] - 1),4);
        uVar48 = NEON_ushl(0x100000001,CONCAT44(pbVar20[-1] - 1,pbVar20[-2] - 1),4);
        uVar47 = NEON_cmeq(uVar46 & uVar50,0,4);
        uVar49 = NEON_cmeq(uVar48 & uVar51,0,4);
        *(uint *)(puVar23 + -2) =
             -(*(uint *)(puVar23 + -2) >> (ulong)(pbVar20[-4] - 1 & 0x1f) & 1) &
             -1 << (ulong)(pbVar20[-4] & 0x1f) | *(uint *)(puVar23 + -2);
        *(uint *)puVar23 =
             -(*(uint *)puVar23 >> (ulong)(bVar7 - 1 & 0x1f) & 1) & -1 << (ulong)(bVar7 & 0x1f) |
             *(uint *)puVar23;
        puVar23[-3] = CONCAT17((byte)((ulong)uVar43 >> 0x38) & ~(byte)((ulong)uVar47 >> 0x38) |
                               (byte)(uVar50 >> 0x38),
                               CONCAT16((byte)((ulong)uVar43 >> 0x30) &
                                        ~(byte)((ulong)uVar47 >> 0x30) | (byte)(uVar50 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar43 >> 0x28) &
                                                 ~(byte)((ulong)uVar47 >> 0x28) |
                                                 (byte)(uVar50 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar43 >> 0x20) &
                                                          ~(byte)((ulong)uVar47 >> 0x20) |
                                                          (byte)(uVar50 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar43 >> 0x18) &
                                                                   ~(byte)((ulong)uVar47 >> 0x18) |
                                                                   (byte)(uVar50 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar43 >>
                                                                                  0x10) &
                                                                            ~(byte)((ulong)uVar47 >>
                                                                                   0x10) |
                                                                            (byte)(uVar50 >> 0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar43 >> 8) & ~(byte)((ulong)uVar47 >> 8) |
                                                  (byte)(uVar50 >> 8),
                                                  (byte)uVar43 & ~(byte)uVar47 | (byte)uVar50)))))))
        ;
        puVar23[-1] = CONCAT17((byte)((ulong)uVar44 >> 0x38) & ~(byte)((ulong)uVar49 >> 0x38) |
                               (byte)(uVar51 >> 0x38),
                               CONCAT16((byte)((ulong)uVar44 >> 0x30) &
                                        ~(byte)((ulong)uVar49 >> 0x30) | (byte)(uVar51 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar44 >> 0x28) &
                                                 ~(byte)((ulong)uVar49 >> 0x28) |
                                                 (byte)(uVar51 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar44 >> 0x20) &
                                                          ~(byte)((ulong)uVar49 >> 0x20) |
                                                          (byte)(uVar51 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar44 >> 0x18) &
                                                                   ~(byte)((ulong)uVar49 >> 0x18) |
                                                                   (byte)(uVar51 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar44 >>
                                                                                  0x10) &
                                                                            ~(byte)((ulong)uVar49 >>
                                                                                   0x10) |
                                                                            (byte)(uVar51 >> 0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar44 >> 8) & ~(byte)((ulong)uVar49 >> 8) |
                                                  (byte)(uVar51 >> 8),
                                                  (byte)uVar44 & ~(byte)uVar49 | (byte)uVar51)))))))
        ;
        puVar23 = puVar23 + 4;
        pbVar20 = pbVar20 + 8;
      } while (uVar45 != 0);
    }
    if ((uVar1 != 3) && (uVar1 != 0x1e)) {
      local_a0._4_4_ = (int)(local_a0 >> 0x20);
      lVar14 = lVar28 * 0x14;
      uVar10 = -1 << (ulong)((byte)ms_aInfo[lVar14 + 5] & 0x1f);
      uVar11 = -1 << (ulong)((byte)ms_aInfo[lVar14 + 4] & 0x1f);
      uVar37 = local_a0._4_4_ + uVar30 & (uVar10 ^ 0xffffffff);
      uVar18 = iVar42 + uVar34 & (uVar11 ^ 0xffffffff);
      uVar12 = -1 << (ulong)((byte)ms_aInfo[lVar14 + 6] & 0x1f);
      uVar19 = uVar19 + uVar27 & (uVar12 ^ 0xffffffff);
      uVar31 = (int)local_90 + uVar34 & (uVar11 ^ 0xffffffff);
      uVar38 = local_90._4_4_ + uVar30 & (uVar10 ^ 0xffffffff);
      uVar35 = (int)uStack_88 + uVar27 & (uVar12 ^ 0xffffffff);
      uVar36 = (int)local_80 + uVar34 & (uVar11 ^ 0xffffffff);
      uVar24 = local_80._4_4_ + uVar30 & (uVar10 ^ 0xffffffff);
      uVar22 = (int)local_78 + uVar27 & (uVar12 ^ 0xffffffff);
      local_a0 = CONCAT44(uVar37,uVar18);
      local_98 = (ulong)uVar19;
      local_90 = CONCAT44(uVar38,uVar31);
      uStack_88 = CONCAT44(uStack_88._4_4_,uVar35);
      local_80 = CONCAT44(uVar24,uVar36);
      local_78 = CONCAT44(local_78._4_4_,uVar22);
      if (param_1) {
        uVar30 = 1 << (ulong)((byte)ms_aInfo[lVar14 + 4] - 1 & 0x1f);
        uVar27 = 1 << (ulong)((byte)ms_aInfo[lVar14 + 5] - 1 & 0x1f);
        uVar13 = 1 << (ulong)((byte)ms_aInfo[lVar14 + 6] - 1 & 0x1f);
        uVar34 = 0;
        if ((uVar18 & uVar30) != 0) {
          uVar34 = uVar11;
        }
        uVar2 = 0;
        if ((uVar37 & uVar27) != 0) {
          uVar2 = uVar10;
        }
        uVar3 = 0;
        if ((uVar19 & uVar13) != 0) {
          uVar3 = uVar12;
        }
        uVar4 = 0;
        if ((uVar31 & uVar30) != 0) {
          uVar4 = uVar11;
        }
        local_a0 = CONCAT44(uVar2 | uVar37,uVar34 | uVar18);
        uVar37 = 0;
        if ((uVar38 & uVar27) != 0) {
          uVar37 = uVar10;
        }
        uVar18 = 0;
        if ((uVar35 & uVar13) != 0) {
          uVar18 = uVar12;
        }
        uVar34 = 0;
        if ((uVar36 & uVar30) != 0) {
          uVar34 = uVar11;
        }
        uVar30 = 0;
        if ((uVar24 & uVar27) != 0) {
          uVar30 = uVar10;
        }
        uVar27 = 0;
        if ((uVar22 & uVar13) != 0) {
          uVar27 = uVar12;
        }
        local_98 = (ulong)(uVar3 | uVar19);
        local_90 = CONCAT44(uVar37 | uVar38,uVar4 | uVar31);
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar18 | uVar35);
        local_80 = CONCAT44(uVar30 | uVar24,uVar34 | uVar36);
        local_78 = CONCAT44(local_78._4_4_,uVar27 | uVar22);
      }
    }
  }
  else if ((uVar1 != 3) && (uVar1 != 0x1e)) goto LAB_00a7d1bc;
  uVar45 = (ulong)(byte)ms_aInfo[lVar28 * 0x14 + 1];
  lVar28 = lVar28 * 0x14;
  bVar7 = ms_aInfo[lVar28 + 3];
  uVar19 = 0x10;
  if (3 < uVar33) {
    uVar19 = 8;
  }
  puVar5 = s_aWeights4;
  if (3 < uVar33) {
    puVar5 = s_aWeights3;
  }
  uVar33 = 0;
  do {
    uVar46 = 0;
    do {
      lVar14 = uVar46 + (ulong)uVar21 + (ulong)uVar21 * 2 + uVar45 * 0xc0;
      bVar17 = uVar46 < uVar45;
      uVar46 = uVar46 + 1;
    } while (uVar33 != (byte)s_aFixUp[lVar14] && bVar17);
    uVar37 = (uint)bVar7 - (uint)(uVar33 == (byte)s_aFixUp[lVar14]);
    uVar46 = (ulong)uVar37;
    if (0x80 < uVar46 + uVar26) goto switchD_00a7d04c_caseD_d;
    if (uVar46 == 0) {
      uVar48 = 0;
    }
    else {
      uVar48 = uVar26 & 7;
      if (uVar46 + uVar48 < 9) {
        uVar37 = (uint)((byte)this[uVar26 >> 3] >> uVar48) &
                 (-1 << (ulong)(uVar37 & 0x1f) ^ 0xffffffffU);
        uVar18 = uVar37;
      }
      else {
        uVar31 = 8 - (int)uVar48;
        uVar18 = (uint)((byte)this[uVar26 >> 3] >> uVar48);
        uVar31 = ((uint)(byte)(this + (uVar26 >> 3))[1] &
                 (-1 << (ulong)(uVar37 - uVar31 & 0x1f) ^ 0xffffffffU)) << (ulong)(uVar31 & 0x1f);
        uVar37 = uVar31 | uVar18;
        uVar18 = uVar31 & 0xff | uVar18;
      }
      if (uVar19 <= uVar18) goto switchD_00a7d04c_caseD_d;
      uVar48 = (ulong)uVar37;
      uVar26 = uVar46 + uVar26;
    }
    uVar46 = (ulong)(byte)s_aPartitionTable[uVar33 + (ulong)uVar21 * 0x10 + uVar45 * 0x400];
    uVar37 = *(uint *)(&local_b0 + uVar46 * 4);
    uVar18 = (uint)(byte)ms_aInfo[lVar28 + 4];
    if (param_1) {
      if (uVar1 == 0xf) {
LAB_00a7d61c:
        iVar42 = *(int *)((long)&local_b0 + uVar46 * 0x20 + 4);
        iVar32 = *(int *)(&uStack_a8 + uVar46 * 4);
        iVar25 = *(int *)(&local_a0 + uVar46 * 4);
        iVar39 = *(int *)((long)&local_a0 + uVar46 * 0x20 + 4);
        iVar40 = *(int *)(&local_98 + uVar46 * 4);
      }
      else {
        uVar31 = -uVar37;
        if (-1 < (int)uVar37) {
          uVar31 = uVar37;
        }
        if (uVar31 != 0) {
          if ((int)uVar31 < ~(-1 << (ulong)(uVar18 - 1 & 0x1f))) {
            uVar31 = (int)(uVar31 << 0xf | 0x4000) >> (uVar18 - 1 & 0x1f);
          }
          else {
            uVar31 = 0x7fff;
          }
        }
        bVar17 = -1 < (int)uVar37;
        uVar37 = -uVar31;
        if (bVar17) {
          uVar37 = uVar31;
        }
        iVar25 = *(int *)((long)&local_b0 + uVar46 * 0x20 + 4);
        iVar32 = -iVar25;
        if (-1 < iVar25) {
          iVar32 = iVar25;
        }
        uVar31 = (uint)(byte)ms_aInfo[lVar28 + 5];
        if (iVar32 != 0) {
          uVar38 = uVar31 - 1;
          if (iVar32 < ~(-1 << (ulong)(uVar38 & 0x1f))) {
            iVar32 = (int)(iVar32 << 0xf | 0x4000U) >> (uVar38 & 0x1f);
          }
          else {
            iVar32 = 0x7fff;
          }
        }
        iVar39 = *(int *)(&uStack_a8 + uVar46 * 4);
        iVar42 = -iVar32;
        if (-1 < iVar25) {
          iVar42 = iVar32;
        }
        iVar25 = -iVar39;
        if (-1 < iVar39) {
          iVar25 = iVar39;
        }
        uVar38 = (uint)(byte)ms_aInfo[lVar28 + 6];
        if (iVar25 != 0) {
          uVar35 = uVar38 - 1;
          if (iVar25 < ~(-1 << (ulong)(uVar35 & 0x1f))) {
            iVar25 = (int)(iVar25 << 0xf | 0x4000U) >> (uVar35 & 0x1f);
          }
          else {
            iVar25 = 0x7fff;
          }
        }
        iVar32 = -iVar25;
        if (-1 < iVar39) {
          iVar32 = iVar25;
        }
        iVar39 = *(int *)(&local_a0 + uVar46 * 4);
        iVar25 = -iVar39;
        if (-1 < iVar39) {
          iVar25 = iVar39;
        }
        if (iVar25 == 0) {
          iVar40 = 0;
        }
        else if (iVar25 < ~(-1 << (ulong)(uVar18 - 1 & 0x1f))) {
          iVar40 = (int)(iVar25 << 0xf | 0x4000U) >> (uVar18 - 1 & 0x1f);
        }
        else {
          iVar40 = 0x7fff;
        }
        iVar29 = *(int *)((long)&local_a0 + uVar46 * 0x20 + 4);
        iVar25 = -iVar40;
        if (-1 < iVar39) {
          iVar25 = iVar40;
        }
        iVar39 = -iVar29;
        if (-1 < iVar29) {
          iVar39 = iVar29;
        }
        if (iVar39 == 0) {
          iVar40 = 0;
        }
        else {
          uVar31 = uVar31 - 1;
          if (iVar39 < ~(-1 << (ulong)(uVar31 & 0x1f))) {
            iVar40 = (int)(iVar39 << 0xf | 0x4000U) >> (uVar31 & 0x1f);
          }
          else {
            iVar40 = 0x7fff;
          }
        }
        iVar39 = -iVar40;
        if (-1 < iVar29) {
          iVar39 = iVar40;
        }
        iVar6 = *(int *)(&local_98 + uVar46 * 4);
        iVar29 = -iVar6;
        if (-1 < iVar6) {
          iVar29 = iVar6;
        }
        if (iVar29 != 0) {
          uVar38 = uVar38 - 1;
          if (iVar29 < ~(-1 << (ulong)(uVar38 & 0x1f))) {
            iVar29 = (int)(iVar29 << 0xf | 0x4000U) >> (uVar38 & 0x1f);
          }
          else {
            iVar29 = 0x7fff;
          }
        }
        iVar40 = -iVar29;
        if (-1 < iVar6) {
          iVar40 = iVar29;
        }
      }
    }
    else {
      if (uVar1 == 0xf) goto LAB_00a7d61c;
      uVar31 = -1 << (ulong)(uVar18 & 0x1f);
      if (uVar37 != 0) {
        if (uVar37 == ~uVar31) {
          uVar37 = 0xffff;
        }
        else {
          uVar37 = (int)(uVar37 << 0x10 | 0x8000) >> (uVar18 & 0x1f);
        }
      }
      bVar8 = ms_aInfo[lVar28 + 5];
      uVar38 = *(uint *)((long)&local_b0 + uVar46 * 0x20 + 4);
      uVar35 = -1 << (ulong)(bVar8 & 0x1f);
      if (uVar38 == 0) {
        iVar42 = 0;
      }
      else if (uVar38 == ~uVar35) {
        iVar42 = 0xffff;
      }
      else {
        iVar42 = (int)(uVar38 << 0x10 | 0x8000) >> (bVar8 & 0x1f);
      }
      bVar9 = ms_aInfo[lVar28 + 6];
      uVar38 = *(uint *)(&uStack_a8 + uVar46 * 4);
      uVar36 = -1 << (ulong)(bVar9 & 0x1f);
      if (uVar38 == 0) {
        iVar32 = 0;
      }
      else if (uVar38 == ~uVar36) {
        iVar32 = 0xffff;
      }
      else {
        iVar32 = (int)(uVar38 << 0x10 | 0x8000) >> (bVar9 & 0x1f);
      }
      uVar38 = *(uint *)(&local_a0 + uVar46 * 4);
      if (uVar38 == 0) {
        iVar25 = 0;
      }
      else if (uVar38 == ~uVar31) {
        iVar25 = 0xffff;
      }
      else {
        iVar25 = (int)(uVar38 << 0x10 | 0x8000) >> (uVar18 & 0x1f);
      }
      uVar18 = *(uint *)((long)&local_a0 + uVar46 * 0x20 + 4);
      if (uVar18 == 0) {
        iVar39 = 0;
      }
      else if (uVar18 == ~uVar35) {
        iVar39 = 0xffff;
      }
      else {
        iVar39 = (int)(uVar18 << 0x10 | 0x8000) >> (bVar8 & 0x1f);
      }
      uVar18 = *(uint *)(&local_98 + uVar46 * 4);
      if (uVar18 == 0) {
        iVar40 = 0;
      }
      else if (uVar18 == ~uVar36) {
        iVar40 = 0xffff;
      }
      else {
        iVar40 = (int)(uVar18 << 0x10 | 0x8000) >> (bVar9 & 0x1f);
      }
    }
    iVar29 = *(int *)(puVar5 + (uVar48 & 0xff) * 4);
    iVar15 = 0x40 - iVar29;
    iVar6 = iVar29 * iVar25 + iVar15 * uVar37;
    iVar25 = iVar6 + 0x20 >> 6;
    if (param_1) {
      if (iVar6 == -0x21 || iVar6 + 0x21 < 0 != SCARRY4(iVar6,0x21)) {
        uVar37 = -((uint)(iVar25 * -0x1f) >> 5);
      }
      else {
        uVar37 = (uint)(iVar25 * 0x1f) >> 5;
      }
      iVar25 = iVar29 * iVar39 + iVar15 * iVar42;
      iVar42 = iVar25 + 0x20 >> 6;
      if (iVar25 == -0x21 || iVar25 + 0x21 < 0 != SCARRY4(iVar25,0x21)) {
        uVar18 = -((uint)(iVar42 * -0x1f) >> 5);
      }
      else {
        uVar18 = (uint)(iVar42 * 0x1f) >> 5;
      }
      iVar32 = iVar29 * iVar40 + iVar15 * iVar32;
      iVar42 = iVar32 + 0x20 >> 6;
      if (iVar32 == -0x21 || iVar32 + 0x21 < 0 != SCARRY4(iVar32,0x21)) {
        uVar31 = -((uint)(iVar42 * -0x1f) >> 5);
      }
      else {
        uVar31 = (uint)(iVar42 * 0x1f) >> 5;
      }
    }
    else {
      uVar37 = iVar25 * 0x1f >> 6;
      uVar18 = (iVar15 * iVar42 + iVar29 * iVar39 + 0x20 >> 6) * 0x1f >> 6;
      uVar31 = (iVar15 * iVar32 + iVar29 * iVar40 + 0x20 >> 6) * 0x1f >> 6;
    }
    uVar38 = uVar37 << 0xd & 0xfffe000;
    uVar35 = uVar37 << 0xd & 0xf800000;
    if (uVar35 == 0xf800000) {
      fVar41 = (float)(uVar38 | 0x70000000);
    }
    else if (uVar35 == 0) {
      fVar41 = (float)(uVar38 + 0x38800000) + -6.103516e-05;
    }
    else {
      fVar41 = (float)(uVar38 + 0x38000000);
    }
    uVar38 = uVar18 << 0xd & 0xfffe000;
    uVar35 = uVar18 << 0xd & 0xf800000;
    *(uint *)(param_2 + uVar33 * 0x10) = (uint)fVar41 | (uVar37 & 0x8000) << 0x10;
    if (uVar35 == 0xf800000) {
      fVar41 = (float)(uVar38 | 0x70000000);
    }
    else if (uVar35 == 0) {
      fVar41 = (float)(uVar38 + 0x38800000) + -6.103516e-05;
    }
    else {
      fVar41 = (float)(uVar38 + 0x38000000);
    }
    uVar37 = uVar31 << 0xd & 0xfffe000;
    uVar38 = uVar31 << 0xd & 0xf800000;
    *(uint *)(param_2 + uVar33 * 0x10 + 4) = (uint)fVar41 | (uVar18 & 0x8000) << 0x10;
    if (uVar38 == 0xf800000) {
      fVar41 = (float)(uVar37 | 0x70000000);
    }
    else if (uVar38 == 0) {
      fVar41 = (float)(uVar37 + 0x38800000) + -6.103516e-05;
    }
    else {
      fVar41 = (float)(uVar37 + 0x38000000);
    }
    uVar46 = uVar33 + 1;
    *(uint *)(param_2 + uVar33 * 0x10 + 8) = (uint)fVar41 | (uVar31 & 0x8000) << 0x10;
    *(undefined4 *)(param_2 + uVar33 * 0x10 + 0xc) = 0x3f800000;
    uVar33 = uVar46;
  } while (uVar46 != 0x10);
LAB_00a7db00:
  if (*(long *)(lVar16 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
switchD_00a7d04c_caseD_d:
  *(undefined8 *)(param_2 + 8) = 0x3f80000000000000;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 0x18) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 200) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  goto LAB_00a7db00;
}


