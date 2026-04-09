// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4dcb4
// Entry Point: 00e4dcb4
// Size: 3032 bytes
// Signature: undefined FUN_00e4dcb4(void)


void FUN_00e4dcb4(float *param_1,uint param_2,long param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  ushort *puVar20;
  float *pfVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  float *pfVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  float *pfVar34;
  float fVar35;
  undefined auVar36 [16];
  undefined4 uVar37;
  undefined auVar38 [16];
  float fVar39;
  float fVar40;
  undefined auVar41 [16];
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fStack_d0;
  int local_cc;
  float *local_c8;
  int local_bc;
  ulong local_b8;
  uint local_ac;
  long local_a8;
  int local_9c;
  long local_98;
  int local_8c;
  long local_88;
  long lStack_80;
  ulong local_78;
  uint local_6c;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  uVar31 = (int)param_2 >> 1;
  iVar30 = *(int *)(param_3 + 0x94);
  if (*(long *)(param_3 + 0x80) == 0) {
    pfVar34 = (float *)((long)&fStack_d0 -
                       ((-(ulong)(uVar31 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar31 << 2) + 0xf &
                       0xfffffffffffffff0));
  }
  else {
    iVar22 = iVar30 - (uVar31 * 4 + 7 & 0xfffffff8);
    if (iVar22 < *(int *)(param_3 + 0x90)) {
      pfVar34 = (float *)0x0;
    }
    else {
      pfVar34 = (float *)(*(long *)(param_3 + 0x80) + (long)iVar22);
      *(int *)(param_3 + 0x94) = iVar22;
    }
  }
  uVar19 = -(ulong)(uVar31 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar31 << 2;
  lVar13 = (long)(int)uVar31;
  pfVar15 = (float *)((long)pfVar34 + (uVar19 - 8));
  lVar12 = lVar13 * 4;
  pfVar29 = *(float **)(param_3 + (ulong)param_4 * 8 + 0x588);
  pfVar14 = pfVar29;
  if (1 < param_2) {
    uVar24 = lVar12 - 0x10;
    pfVar18 = pfVar29;
    pfVar21 = param_1;
    if (0x3f < uVar24) {
      uVar25 = uVar24 >> 1 & 0x7ffffffffffffff8;
      uVar23 = (long)pfVar34 + (lVar12 - uVar25) + -8;
      if (((long)param_1 + (uVar24 | 0xc) <= uVar23 || pfVar34 + lVar13 <= param_1) &&
         ((long)pfVar29 + uVar25 + 8 <= uVar23 || pfVar34 + lVar13 <= pfVar29)) {
        uVar24 = (uVar24 >> 4) + 1;
        uVar25 = 4;
        if ((uVar24 & 3) != 0) {
          uVar25 = uVar24 & 3;
        }
        lVar17 = uVar24 - uVar25;
        pfVar15 = pfVar15 + lVar17 * -2;
        lVar3 = lVar17 * 4;
        lVar11 = lVar17 * 2;
        pfVar16 = pfVar29;
        pfVar26 = param_1;
        pfVar14 = pfVar34 + lVar13;
        do {
          lVar17 = lVar17 + -4;
          auVar36._4_4_ = pfVar16[3] * -pfVar26[6] + pfVar16[2] * pfVar26[4];
          auVar36._0_4_ = pfVar16[1] * -pfVar26[2] + *pfVar16 * *pfVar26;
          auVar36._8_4_ = pfVar16[5] * -pfVar26[10] + pfVar16[4] * pfVar26[8];
          auVar36._12_4_ = pfVar16[7] * -pfVar26[0xe] + pfVar16[6] * pfVar26[0xc];
          auVar38 = NEON_rev64(auVar36,4);
          auVar41._4_4_ = pfVar26[6] * pfVar16[2] + pfVar16[3] * pfVar26[4];
          auVar41._0_4_ = pfVar26[2] * *pfVar16 + pfVar16[1] * *pfVar26;
          auVar41._8_4_ = pfVar26[10] * pfVar16[4] + pfVar16[5] * pfVar26[8];
          auVar41._12_4_ = pfVar26[0xe] * pfVar16[6] + pfVar16[7] * pfVar26[0xc];
          auVar36 = NEON_rev64(auVar41,4);
          auVar36 = NEON_ext(auVar36,auVar36,8,1);
          auVar41 = NEON_ext(auVar38,auVar38,8,1);
          pfVar14[-8] = auVar36._0_4_;
          pfVar14[-7] = auVar41._0_4_;
          pfVar14[-6] = auVar36._4_4_;
          pfVar14[-5] = auVar41._4_4_;
          pfVar14[-4] = auVar36._8_4_;
          pfVar14[-3] = auVar41._8_4_;
          pfVar14[-2] = auVar36._12_4_;
          pfVar14[-1] = auVar41._12_4_;
          pfVar18 = pfVar29 + lVar11;
          pfVar21 = param_1 + lVar3;
          pfVar16 = pfVar16 + 8;
          pfVar26 = pfVar26 + 0x10;
          pfVar14 = pfVar14 + -8;
        } while (lVar17 != 0);
      }
    }
    pfVar16 = pfVar15;
    do {
      fVar35 = (float)NEON_fmadd(*pfVar21,*pfVar18,pfVar18[1] * -pfVar21[2]);
      pfVar16[1] = fVar35;
      pfVar26 = pfVar21 + 4;
      fVar35 = (float)NEON_fmadd(*pfVar21,pfVar18[1],pfVar21[2] * *pfVar18);
      pfVar15 = pfVar16 + -2;
      *pfVar16 = fVar35;
      pfVar16 = pfVar15;
      pfVar14 = pfVar18 + 2;
      pfVar18 = pfVar18 + 2;
      pfVar21 = pfVar26;
    } while (pfVar26 != (float *)((long)param_1 + uVar19));
  }
  if (pfVar34 <= pfVar15) {
    pfVar18 = param_1 + lVar13 + -1;
    do {
      fVar35 = (float)NEON_fmsub(*pfVar18,*pfVar14,pfVar18[-2] * pfVar14[1]);
      pfVar15[1] = fVar35;
      fVar35 = (float)NEON_fmsub(*pfVar18,pfVar14[1],*pfVar14 * -pfVar18[-2]);
      pfVar21 = pfVar15 + -2;
      *pfVar15 = fVar35;
      pfVar15 = pfVar21;
      pfVar14 = pfVar14 + 2;
      pfVar18 = pfVar18 + -4;
    } while (pfVar34 <= pfVar21);
  }
  uVar31 = (int)param_2 >> 2;
  if (0xf < (int)param_2) {
    lVar17 = 0;
    pfVar15 = pfVar29 + lVar13 + -8;
    do {
      pfVar14 = (float *)((long)pfVar34 + lVar17 + (long)(int)uVar31 * 4 + 4);
      pfVar18 = (float *)((long)pfVar34 + lVar17);
      pfVar21 = (float *)((long)param_1 + lVar17 + (long)(int)uVar31 * 4 + 0xc);
      puVar2 = (undefined4 *)((long)param_1 + lVar17 + 0xc);
      lVar17 = lVar17 + 0x10;
      fVar42 = pfVar14[-1];
      fVar39 = *pfVar18;
      fVar35 = *pfVar14 - pfVar18[1];
      pfVar21[-2] = *pfVar14 + pfVar18[1];
      pfVar21[-3] = pfVar14[-1] + *pfVar18;
      uVar37 = NEON_fmadd(fVar35,pfVar15[4],pfVar15[5] * -(fVar42 - fVar39));
      puVar2[-2] = uVar37;
      uVar37 = NEON_fmadd(fVar42 - fVar39,pfVar15[4],fVar35 * pfVar15[5]);
      puVar2[-3] = uVar37;
      fVar42 = pfVar18[2];
      fVar39 = pfVar14[1];
      fVar35 = pfVar14[2] - pfVar18[3];
      *pfVar21 = pfVar14[2] + pfVar18[3];
      pfVar21[-1] = pfVar14[1] + pfVar18[2];
      uVar37 = NEON_fmadd(fVar35,*pfVar15,pfVar15[1] * -(fVar39 - fVar42));
      *puVar2 = uVar37;
      pfVar14 = pfVar15 + -8;
      uVar37 = NEON_fmadd(fVar39 - fVar42,*pfVar15,fVar35 * pfVar15[1]);
      puVar2[-1] = uVar37;
      pfVar15 = pfVar14;
    } while (pfVar29 <= pfVar14);
  }
  iVar22 = (int)param_2 >> 3;
  if ((int)param_2 < 0) {
    iVar33 = 0;
  }
  else if (param_2 >> 0xe == 0) {
    if (param_2 < 0x10) {
      iVar33 = (int)(char)(&DAT_004c5180)[param_2];
    }
    else if (param_2 < 0x200) {
      iVar33 = (char)(&DAT_004c5180)[param_2 >> 5] + 5;
    }
    else {
      iVar33 = (char)(&DAT_004c5180)[param_2 >> 10] + 10;
    }
  }
  else if (param_2 >> 0x18 == 0) {
    if (param_2 >> 0x13 == 0) {
      iVar33 = (char)(&DAT_004c5180)[param_2 >> 0xf] + 0xf;
    }
    else {
      iVar33 = (char)(&DAT_004c5180)[param_2 >> 0x14] + 0x14;
    }
  }
  else if (param_2 >> 0x1d == 0) {
    iVar33 = (char)(&DAT_004c5180)[param_2 >> 0x19] + 0x19;
  }
  else {
    iVar33 = (char)(&DAT_004c5180)[param_2 >> 0x1e] + 0x1e;
  }
  iVar5 = (int)param_2 >> 4;
  uVar19 = lVar13 - 1;
  local_ac = param_4;
  local_a8 = lVar12;
  local_9c = iVar22;
  local_98 = lVar13;
  local_8c = iVar30;
  local_88 = lVar10;
  lStack_80 = param_3;
  FUN_00e4ec24(iVar5,param_1,uVar19 & 0xffffffff,-iVar22,pfVar29);
  iVar27 = (int)uVar19;
  local_b8 = (ulong)uVar31;
  FUN_00e4ec24(iVar5,param_1,iVar27 - uVar31,-iVar22,pfVar29);
  iVar30 = (int)param_2 >> 5;
  iVar5 = -iVar5;
  local_6c = param_2;
  FUN_00e4eda0(iVar30,param_1,uVar19 & 0xffffffff,iVar5,pfVar29,0x10);
  FUN_00e4eda0(iVar30,param_1,iVar27 - iVar22,iVar5,pfVar29,0x10);
  FUN_00e4eda0(iVar30,param_1,iVar27 + iVar22 * -2,iVar5,pfVar29,0x10);
  local_bc = iVar30;
  local_78 = uVar19;
  FUN_00e4eda0(iVar30,param_1,iVar22 * -3 + iVar27,iVar5,pfVar29,0x10);
  uVar31 = 2;
  if (9 < iVar33) {
    uVar28 = 2;
    uVar31 = iVar33 - 4U >> 1;
    local_c8 = pfVar34;
    local_cc = iVar33;
    do {
      iVar30 = 2 << (ulong)(uVar28 & 0x1f);
      if (0 < iVar30) {
        iVar22 = (int)local_6c >> (uVar28 + 2 & 0x1f);
        iVar33 = (int)local_6c >> (uVar28 + 4 & 0x1f);
        uVar19 = local_78 & 0xffffffff;
        do {
          FUN_00e4eda0(iVar33,param_1,uVar19,-(iVar22 >> 1),pfVar29,8 << (ulong)(uVar28 & 0x1f));
          iVar30 = iVar30 + -1;
          uVar19 = (ulong)(uint)((int)uVar19 - iVar22);
        } while (iVar30 != 0);
      }
      uVar28 = uVar28 + 1;
      pfVar34 = local_c8;
      iVar33 = local_cc;
    } while (uVar28 != uVar31);
  }
  uVar28 = local_6c;
  lVar17 = lStack_80;
  lVar13 = local_88;
  iVar30 = local_8c;
  lVar12 = local_98;
  lVar10 = local_a8;
  if ((int)uVar31 < (int)(iVar33 - 7U)) {
    do {
      iVar22 = (int)local_6c >> (uVar31 + 6 & 0x1f);
      if (0 < iVar22) {
        uVar8 = 8 << (ulong)(uVar31 & 0x1f);
        uVar24 = (ulong)(int)uVar8;
        uVar19 = (ulong)uVar8 << 1;
        uVar25 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | uVar19;
        iVar27 = 2 << (ulong)(uVar31 & 0x1f);
        iVar5 = (int)local_6c >> (uVar31 + 2 & 0x1f);
        lVar3 = uVar25 + uVar24;
        pfVar14 = param_1 + local_98 + -4;
        pfVar15 = pfVar29;
        do {
          if (0 < iVar27) {
            fVar35 = pfVar15[uVar24];
            fVar39 = pfVar15[uVar24 | 1];
            fVar42 = pfVar15[uVar25];
            fVar40 = pfVar15[(int)((uint)uVar19 | 1)];
            fVar43 = pfVar15[lVar3];
            fVar45 = pfVar15[(int)((uint)lVar3 | 1)];
            fVar46 = *pfVar15;
            fVar47 = pfVar15[1];
            pfVar18 = pfVar14;
            uVar32 = iVar27 + 1;
            do {
              pfVar21 = pfVar18 + -(long)(iVar5 >> 1);
              uVar32 = uVar32 - 1;
              fVar48 = pfVar18[2] - pfVar21[2];
              fVar51 = pfVar18[3] - pfVar21[3];
              pfVar18[3] = pfVar18[3] + pfVar21[3];
              fVar49 = (float)NEON_fmadd(fVar48,fVar46,fVar47 * fVar51);
              fVar48 = (float)NEON_fmadd(fVar51,fVar46,fVar47 * -fVar48);
              pfVar18[2] = pfVar18[2] + pfVar21[2];
              pfVar21[2] = fVar49;
              pfVar21[3] = fVar48;
              fVar48 = *pfVar18 - *pfVar21;
              fVar51 = pfVar18[1] - pfVar21[1];
              pfVar18[1] = pfVar18[1] + pfVar21[1];
              fVar49 = (float)NEON_fmadd(fVar48,fVar35,fVar39 * fVar51);
              fVar48 = (float)NEON_fmadd(fVar51,fVar35,fVar39 * -fVar48);
              *pfVar18 = *pfVar18 + *pfVar21;
              *pfVar21 = fVar49;
              pfVar21[1] = fVar48;
              fVar48 = pfVar18[-2] - pfVar21[-2];
              fVar51 = pfVar18[-1] - pfVar21[-1];
              pfVar18[-1] = pfVar18[-1] + pfVar21[-1];
              fVar49 = (float)NEON_fmadd(fVar48,fVar42,fVar40 * fVar51);
              fVar48 = (float)NEON_fmadd(fVar51,fVar42,fVar40 * -fVar48);
              pfVar18[-2] = pfVar18[-2] + pfVar21[-2];
              pfVar21[-2] = fVar49;
              pfVar21[-1] = fVar48;
              fVar48 = pfVar18[-4] - pfVar21[-4];
              fVar49 = pfVar18[-3] - pfVar21[-3];
              pfVar18[-3] = pfVar18[-3] + pfVar21[-3];
              fVar51 = (float)NEON_fmadd(fVar49,fVar43,fVar45 * -fVar48);
              fVar48 = (float)NEON_fmadd(fVar48,fVar43,fVar45 * fVar49);
              pfVar18[-4] = pfVar18[-4] + pfVar21[-4];
              pfVar18 = pfVar18 + -(long)iVar5;
              pfVar21[-3] = fVar51;
              pfVar21[-4] = fVar48;
            } while (1 < uVar32);
          }
          pfVar15 = pfVar15 + (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2);
          pfVar14 = pfVar14 + -8;
          iVar9 = iVar22 + -1;
          bVar1 = 0 < iVar22;
          iVar22 = iVar9;
        } while (iVar9 != 0 && bVar1);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != iVar33 - 7U);
  }
  uVar19 = (ulong)local_ac;
  if (0x1f < (int)local_6c) {
    fVar35 = pfVar29[local_9c];
    pfVar14 = param_1 + local_78;
    pfVar15 = pfVar14 + local_bc * -0x10;
    do {
      fVar42 = *pfVar14 - pfVar14[-8];
      fVar53 = pfVar14[-1] - pfVar14[-9];
      fVar39 = *pfVar14 + pfVar14[-8];
      fVar40 = pfVar14[-1] + pfVar14[-9];
      fVar46 = pfVar14[-2] - pfVar14[-10];
      fVar54 = pfVar14[-3] - pfVar14[-0xb];
      fVar47 = pfVar14[-2] + pfVar14[-10];
      fVar48 = pfVar14[-3] + pfVar14[-0xb];
      fVar57 = pfVar14[-0xc] + pfVar14[-4];
      fVar59 = pfVar14[-5] - pfVar14[-0xd];
      fVar43 = pfVar14[-5] + pfVar14[-0xd];
      fVar50 = pfVar14[-0xc] - pfVar14[-4];
      fVar58 = pfVar14[-0xe] + pfVar14[-6];
      fVar55 = pfVar14[-7] + pfVar14[-0xf];
      fVar51 = pfVar14[-0xe] - pfVar14[-6];
      fVar45 = pfVar14[-7] - pfVar14[-0xf];
      fVar49 = fVar39 + fVar57;
      fVar39 = fVar39 - fVar57;
      fVar57 = fVar35 * (fVar46 + fVar54);
      fVar56 = fVar47 + fVar58;
      fVar52 = fVar48 - fVar55;
      fVar47 = fVar47 - fVar58;
      fVar48 = fVar48 + fVar55;
      fVar58 = fVar40 + fVar43;
      fVar40 = fVar40 - fVar43;
      fVar46 = fVar35 * (fVar54 - fVar46);
      fVar55 = fVar35 * (fVar51 + fVar45);
      fVar45 = fVar35 * (fVar51 - fVar45);
      pfVar14[-2] = fVar49 - fVar56;
      pfVar14[-6] = fVar39 - fVar52;
      fVar51 = fVar57 + fVar55;
      pfVar14[-1] = fVar58 + fVar48;
      fVar43 = fVar42 + fVar59;
      pfVar14[-3] = fVar58 - fVar48;
      fVar48 = fVar46 - fVar45;
      pfVar14[-5] = fVar40 - fVar47;
      fVar42 = fVar42 - fVar59;
      fVar54 = fVar53 + fVar50;
      fVar46 = fVar46 + fVar45;
      fVar57 = fVar57 - fVar55;
      fVar53 = fVar53 - fVar50;
      pfVar14[-7] = fVar40 + fVar47;
      *pfVar14 = fVar49 + fVar56;
      pfVar14[-10] = fVar43 - fVar51;
      pfVar14[-0xe] = fVar42 - fVar48;
      pfVar14[-4] = fVar39 + fVar52;
      pfVar14[-8] = fVar43 + fVar51;
      pfVar14[-0xc] = fVar42 + fVar48;
      pfVar14[-9] = fVar54 + fVar46;
      pfVar14[-0xb] = fVar54 - fVar46;
      pfVar14[-0xd] = fVar53 - fVar57;
      pfVar14[-0xf] = fVar53 + fVar57;
      pfVar14 = pfVar14 + -0x10;
    } while (pfVar15 < pfVar14);
  }
  if (pfVar34 <= pfVar34 + ((int)local_b8 + -4)) {
    pfVar14 = pfVar34 + local_98 + -2;
    puVar20 = *(ushort **)(lStack_80 + uVar19 * 8 + 0x5c8);
    pfVar15 = pfVar34 + ((int)local_b8 + -4);
    do {
      uVar6 = *puVar20;
      uVar7 = puVar20[1];
      puVar20 = puVar20 + 2;
      pfVar29 = param_1 + uVar6;
      pfVar14[1] = *pfVar29;
      *pfVar14 = pfVar29[1];
      pfVar15[3] = pfVar29[2];
      pfVar18 = param_1 + uVar7;
      pfVar15[2] = pfVar29[3];
      pfVar14[-1] = *pfVar18;
      pfVar14[-2] = pfVar18[1];
      pfVar14 = pfVar14 + -4;
      pfVar15[1] = pfVar18[2];
      pfVar29 = pfVar15 + -4;
      *pfVar15 = pfVar18[3];
      pfVar15 = pfVar29;
    } while (pfVar34 <= pfVar29);
  }
  if (pfVar34 < pfVar34 + lVar12 + -4) {
    pfVar14 = pfVar34 + lVar12 + -4;
    pfVar29 = (float *)(*(long *)(lVar17 + uVar19 * 8 + 0x5a8) + 8);
    pfVar15 = pfVar34;
    do {
      fVar40 = pfVar15[1] + pfVar14[3];
      fVar43 = *pfVar15 - pfVar14[2];
      fVar35 = *pfVar15 + pfVar14[2];
      fVar39 = pfVar15[1] - pfVar14[3];
      fVar42 = (float)NEON_fmadd(pfVar29[-1],fVar43,fVar40 * pfVar29[-2]);
      fVar40 = (float)NEON_fmadd(pfVar29[-1],fVar40,fVar43 * -pfVar29[-2]);
      *pfVar15 = fVar35 + fVar42;
      pfVar15[1] = fVar39 + fVar40;
      pfVar14[2] = fVar35 - fVar42;
      pfVar14[3] = fVar40 - fVar39;
      fVar40 = pfVar15[3] + pfVar14[1];
      fVar43 = pfVar15[2] - *pfVar14;
      fVar35 = pfVar15[2] + *pfVar14;
      fVar39 = pfVar15[3] - pfVar14[1];
      fVar42 = (float)NEON_fmadd(pfVar29[1],fVar43,fVar40 * *pfVar29);
      fVar40 = (float)NEON_fmadd(pfVar29[1],fVar40,fVar43 * -*pfVar29);
      pfVar15[2] = fVar35 + fVar42;
      pfVar15[3] = fVar39 + fVar40;
      pfVar15 = pfVar15 + 4;
      pfVar18 = pfVar14 + -4;
      *pfVar14 = fVar35 - fVar42;
      pfVar14[1] = fVar40 - fVar39;
      pfVar14 = pfVar18;
      pfVar29 = pfVar29 + 4;
    } while (pfVar15 < pfVar18);
  }
  if (pfVar34 <= pfVar34 + lVar12 + -8) {
    pfVar29 = pfVar34 + -8;
    pfVar14 = param_1 + -2;
    lVar12 = *(long *)(lVar17 + uVar19 * 8 + 0x598);
    pfVar15 = param_1 + 2;
    param_1 = param_1 + (long)(int)(uVar28 - 4) + 2;
    do {
      lVar12 = lVar12 + -0x20;
      puVar2 = (undefined4 *)((long)pfVar29 + lVar10);
      pfVar18 = (float *)(lVar12 + lVar10);
      puVar4 = (undefined4 *)((long)pfVar14 + lVar10);
      pfVar21 = (float *)((long)pfVar15 + lVar10);
      pfVar14 = pfVar14 + -4;
      pfVar29 = pfVar29 + -8;
      uVar44 = puVar2[6];
      fVar35 = pfVar18[7];
      fVar39 = pfVar18[6] * -(float)puVar2[7];
      fVar42 = (float)NEON_fmadd(uVar44,fVar35,fVar39);
      uVar37 = NEON_fnmadd(uVar44,fVar35,-fVar39);
      fVar35 = (float)NEON_fmsub(uVar44,pfVar18[6],fVar35 * -(float)puVar2[7]);
      pfVar15[-2] = fVar42;
      puVar4[1] = uVar37;
      pfVar21[-2] = fVar35;
      param_1[1] = fVar35;
      uVar44 = puVar2[4];
      fVar35 = pfVar18[5];
      fVar39 = pfVar18[4] * -(float)puVar2[5];
      fVar42 = (float)NEON_fmadd(uVar44,fVar35,fVar39);
      uVar37 = NEON_fnmadd(uVar44,fVar35,-fVar39);
      fVar35 = (float)NEON_fmsub(uVar44,pfVar18[4],fVar35 * -(float)puVar2[5]);
      pfVar15[-1] = fVar42;
      *puVar4 = uVar37;
      pfVar21[-1] = fVar35;
      *param_1 = fVar35;
      uVar44 = puVar2[2];
      fVar35 = pfVar18[3];
      fVar39 = pfVar18[2] * -(float)puVar2[3];
      fVar42 = (float)NEON_fmadd(uVar44,fVar35,fVar39);
      uVar37 = NEON_fnmadd(uVar44,fVar35,-fVar39);
      fVar35 = (float)NEON_fmsub(uVar44,pfVar18[2],fVar35 * -(float)puVar2[3]);
      *pfVar15 = fVar42;
      puVar4[-1] = uVar37;
      *pfVar21 = fVar35;
      param_1[-1] = fVar35;
      uVar44 = *puVar2;
      fVar35 = pfVar18[1];
      fVar39 = *pfVar18 * -(float)puVar2[1];
      fVar42 = (float)NEON_fmadd(uVar44,fVar35,fVar39);
      uVar37 = NEON_fnmadd(uVar44,fVar35,-fVar39);
      fVar35 = (float)NEON_fmsub(uVar44,*pfVar18,fVar35 * -(float)puVar2[1]);
      pfVar15[1] = fVar42;
      pfVar15 = pfVar15 + 4;
      puVar4[-2] = uVar37;
      pfVar21[1] = fVar35;
      param_1[-2] = fVar35;
      param_1 = param_1 + -4;
    } while (pfVar34 <= (float *)((long)pfVar29 + lVar10));
  }
  *(int *)(lVar17 + 0x94) = iVar30;
  if (*(long *)(lVar13 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


