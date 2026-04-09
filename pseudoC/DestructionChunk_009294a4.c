// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DestructionChunk
// Entry Point: 009294a4
// Size: 1324 bytes
// Signature: undefined __thiscall DestructionChunk(DestructionChunk * this, ushort * param_1, uint param_2, float * param_3, uint param_4, ushort * param_5, uint param_6, float param_7, uint param_8, uint param_9)


/* DestructionChunk::DestructionChunk(unsigned short*, unsigned int, float*, unsigned int, unsigned
   short*, unsigned int, float, unsigned int, unsigned int) */

void __thiscall
DestructionChunk::DestructionChunk
          (DestructionChunk *this,ushort *param_1,uint param_2,float *param_3,uint param_4,
          ushort *param_5,uint param_6,float param_7,uint param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [14];
  undefined6 uVar12;
  bool bVar13;
  bool bVar14;
  void *pvVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  undefined (*pauVar21) [16];
  ulong uVar22;
  ulong uVar23;
  ushort *puVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  float fVar37;
  undefined4 uVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  float fVar43;
  float fVar44;
  undefined auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  undefined auVar48 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  undefined auVar54 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar64;
  float fVar68;
  float fVar69;
  undefined auVar65 [16];
  float fVar63;
  undefined auVar66 [16];
  undefined auVar67 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  
  *(ushort **)(this + 0x10) = param_1;
  uVar3 = *param_1;
  uVar19 = (uint)uVar3;
  *(uint *)(this + 8) = param_2;
  *(float **)(this + 0x20) = param_3;
  *(float *)(this + 0x30) = param_7;
  *(uint *)(this + 0x18) = param_4;
  *(ushort **)(this + 0x38) = param_5;
  *(undefined ***)this = &PTR__DestructionChunk_00fe0050;
  *(uint *)(this + 0x34) = param_6;
  *(uint *)(this + 0x74) = param_8;
  *(uint *)(this + 0x78) = param_9;
  uVar36 = (uint)uVar3;
  *(uint *)(this + 0x7c) = uVar36;
  if (1 < param_2) {
    uVar23 = (ulong)param_2 - 1;
    if (uVar23 < 0x10) {
      uVar22 = 1;
      uVar36 = uVar19;
LAB_009295cc:
      lVar18 = param_2 - uVar22;
      puVar24 = param_1 + uVar22;
      uVar26 = uVar36;
      uVar20 = uVar19;
      do {
        uVar36 = (uint)*puVar24;
        uVar19 = uVar36;
        if (uVar20 <= *puVar24) {
          uVar19 = uVar20;
        }
        if (uVar36 <= uVar26) {
          uVar36 = uVar26;
        }
        lVar18 = lVar18 + -1;
        puVar24 = puVar24 + 1;
        uVar26 = uVar36;
        uVar20 = uVar19;
      } while (lVar18 != 0);
    }
    else {
      uVar27 = CONCAT26(0,CONCAT24(uVar3,uVar19));
      auVar11._8_2_ = uVar3;
      auVar11._0_8_ = uVar27;
      auVar11._10_2_ = 0;
      auVar11._12_2_ = uVar3;
      auVar39._14_2_ = 0;
      auVar39._0_14_ = auVar11;
      uVar25 = uVar23 & 0xfffffffffffffff0;
      pauVar21 = (undefined (*) [16])(param_1 + 9);
      uVar22 = uVar25 | 1;
      uVar12 = auVar11._8_6_;
      auVar67._8_6_ = uVar12;
      auVar67._0_8_ = uVar27;
      auVar67._14_2_ = 0;
      auVar78._8_6_ = uVar12;
      auVar78._0_8_ = uVar27;
      auVar78._14_2_ = 0;
      auVar40._8_6_ = uVar12;
      auVar40._0_8_ = uVar27;
      auVar40._14_2_ = 0;
      auVar42._8_6_ = uVar12;
      auVar42._0_8_ = uVar27;
      auVar42._14_2_ = 0;
      auVar45._8_6_ = uVar12;
      auVar45._0_8_ = uVar27;
      auVar45._14_2_ = 0;
      auVar48._8_6_ = uVar12;
      auVar48._0_8_ = uVar27;
      auVar48._14_2_ = 0;
      auVar54._8_6_ = uVar12;
      auVar54._0_8_ = uVar27;
      auVar54._14_2_ = 0;
      uVar27 = uVar25;
      do {
        uVar8 = *(undefined8 *)(pauVar21[-1] + 8);
        uVar7 = *(undefined8 *)pauVar21[-1];
        auVar5 = *pauVar21;
        pauVar21 = pauVar21 + 2;
        uVar27 = uVar27 - 0x10;
        uVar28 = (undefined2)((ulong)uVar8 >> 0x10);
        uVar30 = (undefined2)((ulong)uVar8 >> 0x20);
        uVar32 = (undefined2)((ulong)uVar8 >> 0x30);
        uVar29 = (undefined2)((ulong)uVar7 >> 0x10);
        uVar31 = (undefined2)((ulong)uVar7 >> 0x20);
        uVar33 = (undefined2)((ulong)uVar7 >> 0x30);
        auVar77._2_2_ = 0;
        auVar77._0_2_ = auVar5._8_2_;
        auVar77._4_2_ = auVar5._10_2_;
        auVar77._6_2_ = 0;
        auVar77._8_2_ = auVar5._12_2_;
        auVar77._10_2_ = 0;
        auVar77._12_2_ = auVar5._14_2_;
        auVar77._14_2_ = 0;
        auVar65._2_2_ = 0;
        auVar65._0_2_ = auVar5._0_2_;
        auVar65._4_2_ = auVar5._2_2_;
        auVar65._6_2_ = 0;
        auVar65._8_2_ = auVar5._4_2_;
        auVar65._10_2_ = 0;
        auVar65._12_2_ = auVar5._6_2_;
        auVar65._14_2_ = 0;
        auVar9._6_2_ = 0;
        auVar9._0_6_ = CONCAT24(uVar28,(int)uVar8) & 0xffff0000ffff;
        auVar9._8_2_ = uVar30;
        auVar9._10_2_ = 0;
        auVar9._12_2_ = uVar32;
        auVar9._14_2_ = 0;
        auVar67 = NEON_umin(auVar67,auVar9,4);
        auVar5._6_2_ = 0;
        auVar5._0_6_ = CONCAT24(uVar29,(int)uVar7) & 0xffff0000ffff;
        auVar5._8_2_ = uVar31;
        auVar5._10_2_ = 0;
        auVar5._12_2_ = uVar33;
        auVar5._14_2_ = 0;
        auVar39 = NEON_umin(auVar39,auVar5,4);
        auVar40 = NEON_umin(auVar40,auVar77,4);
        auVar78 = NEON_umin(auVar78,auVar65,4);
        auVar10._6_2_ = 0;
        auVar10._0_6_ = CONCAT24(uVar28,(int)uVar8) & 0xffff0000ffff;
        auVar10._8_2_ = uVar30;
        auVar10._10_2_ = 0;
        auVar10._12_2_ = uVar32;
        auVar10._14_2_ = 0;
        auVar45 = NEON_umax(auVar45,auVar10,4);
        auVar6._6_2_ = 0;
        auVar6._0_6_ = CONCAT24(uVar29,(int)uVar7) & 0xffff0000ffff;
        auVar6._8_2_ = uVar31;
        auVar6._10_2_ = 0;
        auVar6._12_2_ = uVar33;
        auVar6._14_2_ = 0;
        auVar42 = NEON_umax(auVar42,auVar6,4);
        auVar54 = NEON_umax(auVar54,auVar77,4);
        auVar48 = NEON_umax(auVar48,auVar65,4);
      } while (uVar27 != 0);
      auVar42 = NEON_umax(auVar42,auVar48,4);
      auVar45 = NEON_umax(auVar45,auVar54,4);
      auVar39 = NEON_umin(auVar39,auVar78,4);
      auVar67 = NEON_umin(auVar67,auVar40,4);
      auVar78 = NEON_umax(auVar42,auVar45,4);
      auVar39 = NEON_umin(auVar39,auVar67,4);
      uVar36 = NEON_umaxv(auVar78,4);
      uVar19 = NEON_uminv(auVar39,4);
      if (uVar23 != uVar25) goto LAB_009295cc;
    }
    *(uint *)(this + 0x7c) = uVar19;
  }
  *(uint *)(this + 0x80) = (uVar36 - uVar19) + 1;
  if (param_4 == 0) {
    fVar37 = 0.0;
    fVar46 = 0.0;
    fVar43 = 0.0;
    fVar62 = -3.402823e+38;
    fVar34 = 3.402823e+38;
    fVar71 = -3.402823e+38;
    fVar76 = -3.402823e+38;
    fVar44 = 3.402823e+38;
    fVar35 = 3.402823e+38;
  }
  else {
    fVar43 = 0.0;
    fVar46 = 0.0;
    fVar37 = 0.0;
    uVar23 = 0;
    fVar63 = 3.402823e+38;
    fVar53 = 3.402823e+38;
    fVar47 = 3.402823e+38;
    fVar49 = -3.402823e+38;
    fVar50 = -3.402823e+38;
    fVar51 = -3.402823e+38;
    do {
      fVar62 = param_3[uVar23 & 0xffffffff];
      iVar17 = (int)uVar23;
      fVar71 = param_3[iVar17 + 1];
      fVar37 = fVar37 + fVar62;
      uVar23 = uVar23 + 3;
      fVar76 = param_3[iVar17 + 2];
      fVar34 = fVar62;
      if (fVar53 <= fVar62) {
        fVar34 = fVar53;
      }
      fVar46 = fVar46 + fVar71;
      fVar44 = fVar71;
      if (fVar63 <= fVar71) {
        fVar44 = fVar63;
      }
      fVar43 = fVar43 + fVar76;
      fVar35 = fVar76;
      if (fVar47 <= fVar76) {
        fVar35 = fVar47;
      }
      if (fVar62 <= fVar49) {
        fVar62 = fVar49;
      }
      if (fVar71 <= fVar50) {
        fVar71 = fVar50;
      }
      if (fVar76 <= fVar51) {
        fVar76 = fVar51;
      }
      fVar63 = fVar44;
      fVar53 = fVar34;
      fVar47 = fVar35;
      fVar49 = fVar62;
      fVar50 = fVar71;
      fVar51 = fVar76;
    } while ((ulong)param_4 + (ulong)param_4 * 2 != uVar23);
  }
  fVar63 = (float)(ulong)param_4;
  *(float *)(this + 0x40) = fVar34;
  *(float *)(this + 0x44) = fVar44;
  *(float *)(this + 0x48) = fVar35;
  *(float *)(this + 0x4c) = fVar62;
  *(float *)(this + 0x50) = fVar71;
  *(float *)(this + 0x54) = fVar76;
  fVar37 = fVar37 / fVar63;
  fVar46 = fVar46 / fVar63;
  fVar43 = fVar43 / fVar63;
  *(float *)(this + 0x58) = fVar37;
  *(float *)(this + 0x5c) = fVar46;
  *(float *)(this + 0x60) = fVar43;
  if (param_4 == 0) {
    fVar34 = 3.402823e+38;
  }
  else {
    uVar23 = 0;
    fVar35 = 3.402823e+38;
    do {
      iVar17 = (int)uVar23;
      uVar27 = uVar23 & 0xffffffff;
      uVar23 = uVar23 + 3;
      uVar38 = NEON_fmadd(param_3[uVar27] - fVar37,param_3[uVar27] - fVar37,
                          (param_3[iVar17 + 1] - fVar46) * (param_3[iVar17 + 1] - fVar46));
      fVar62 = (float)NEON_fmadd(param_3[iVar17 + 2] - fVar43,param_3[iVar17 + 2] - fVar43,uVar38);
      fVar34 = SQRT(fVar62);
      if (fVar35 <= SQRT(fVar62)) {
        fVar34 = fVar35;
      }
      fVar35 = fVar34;
    } while ((ulong)param_4 + (ulong)param_4 * 2 != uVar23);
    fVar34 = fVar34 + -1e-06;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  if (param_7 <= fVar34) {
    fVar34 = param_7;
  }
  *(float *)(this + 0x30) = fVar34;
  pvVar15 = operator_new__((ulong)(param_4 * 3) << 2);
  *(void **)(this + 0x28) = pvVar15;
  if (param_4 != 0) {
    uVar23 = (ulong)param_4;
    if (param_4 < 4) {
      uVar22 = 0;
    }
    else {
      uVar25 = uVar23 - 1;
      uVar22 = 0;
      uVar27 = (uVar25 & 0xffffffff) + (uVar25 & 0xffffffff) * 2;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar25;
      bVar13 = (uVar27 & 0xffffffff00000000) == 0;
      bVar14 = SUB168(auVar4 * ZEXT816(0xc),8) == 0;
      uVar19 = (uint)uVar27;
      if ((((((uVar19 != 0xffffffff) && (bVar13)) && (uVar25 >> 0x20 == 0)) &&
           ((uVar19 < 0xfffffffe && (bVar13)))) &&
          ((lVar18 = uVar25 * 0xc, (long)pvVar15 + 4U <= (long)pvVar15 + 4U + lVar18 &&
           ((bVar14 && ((long)pvVar15 + 8U <= (long)pvVar15 + 8U + lVar18)))))) &&
         ((bVar14 && ((pvVar15 <= (void *)((long)pvVar15 + lVar18) && (bVar14)))))) {
        uVar27 = 0;
        uVar22 = uVar23 & 0xfffffffc;
        auVar39 = NEON_fmov(0x3f800000,4);
        auVar41._8_4_ = 0x358637bd;
        auVar41._0_8_ = 0x358637bd358637bd;
        auVar41._12_4_ = 0x358637bd;
        do {
          pfVar1 = param_3 + (uVar27 & 0xffffffff);
          fVar76 = pfVar1[1];
          fVar47 = pfVar1[2];
          fVar35 = pfVar1[3];
          fVar44 = pfVar1[4];
          fVar49 = pfVar1[5];
          fVar62 = pfVar1[6];
          fVar63 = pfVar1[7];
          fVar50 = pfVar1[8];
          fVar71 = pfVar1[9];
          fVar53 = pfVar1[10];
          fVar51 = pfVar1[0xb];
          iVar17 = (int)uVar27;
          uVar27 = uVar27 + 0xc;
          pfVar2 = (float *)((long)pvVar15 + (ulong)(iVar17 + 2) * 4 + -8);
          fVar52 = fVar76 - fVar46;
          fVar55 = fVar44 - fVar46;
          fVar56 = fVar63 - fVar46;
          fVar57 = fVar53 - fVar46;
          fVar58 = *pfVar1 - fVar37;
          fVar59 = fVar35 - fVar37;
          fVar60 = fVar62 - fVar37;
          fVar61 = fVar71 - fVar37;
          fVar72 = fVar47 - fVar43;
          fVar73 = fVar49 - fVar43;
          fVar74 = fVar50 - fVar43;
          fVar75 = fVar51 - fVar43;
          auVar66._0_4_ = fVar52 * fVar52 + fVar58 * fVar58 + fVar72 * fVar72;
          auVar66._4_4_ = fVar55 * fVar55 + fVar59 * fVar59 + fVar73 * fVar73;
          auVar66._8_4_ = fVar56 * fVar56 + fVar60 * fVar60 + fVar74 * fVar74;
          auVar66._12_4_ = fVar57 * fVar57 + fVar61 * fVar61 + fVar75 * fVar75;
          auVar78 = NEON_fsqrt(auVar66,4);
          auVar67 = NEON_fcmgt(auVar66,auVar41,4);
          auVar79._0_4_ = auVar39._0_4_ / auVar78._0_4_;
          auVar79._4_4_ = auVar39._4_4_ / auVar78._4_4_;
          auVar79._8_4_ = auVar39._8_4_ / auVar78._8_4_;
          auVar79._12_4_ = auVar39._12_4_ / auVar78._12_4_;
          auVar67 = NEON_bsl(auVar67,auVar79,auVar39,1);
          fVar64 = auVar67._0_4_ * fVar34;
          fVar68 = auVar67._4_4_ * fVar34;
          fVar69 = auVar67._8_4_ * fVar34;
          fVar70 = auVar67._12_4_ * fVar34;
          *pfVar2 = *pfVar1 - fVar58 * fVar64;
          pfVar2[1] = fVar76 - fVar52 * fVar64;
          pfVar2[2] = fVar47 - fVar72 * fVar64;
          pfVar2[3] = fVar35 - fVar59 * fVar68;
          pfVar2[4] = fVar44 - fVar55 * fVar68;
          pfVar2[5] = fVar49 - fVar73 * fVar68;
          pfVar2[6] = fVar62 - fVar60 * fVar69;
          pfVar2[7] = fVar63 - fVar56 * fVar69;
          pfVar2[8] = fVar50 - fVar74 * fVar69;
          pfVar2[9] = fVar71 - fVar61 * fVar70;
          pfVar2[10] = fVar53 - fVar57 * fVar70;
          pfVar2[0xb] = fVar51 - fVar75 * fVar70;
        } while ((ulong)(param_4 >> 2) * 0xc - uVar27 != 0);
        if (uVar22 == uVar23) goto LAB_009298e4;
      }
    }
    uVar19 = (int)uVar22 * 3;
    lVar18 = uVar23 - uVar22;
    do {
      uVar36 = uVar19 + 1;
      uVar23 = (ulong)uVar19;
      uVar26 = uVar19 + 2;
      fVar62 = param_3[uVar36];
      fVar35 = param_3[uVar26];
      fVar76 = param_3[uVar23] - fVar37;
      fVar71 = fVar62 - fVar46;
      fVar44 = fVar35 - fVar43;
      uVar38 = NEON_fmadd(fVar76,fVar76,fVar71 * fVar71);
      fVar53 = (float)NEON_fmadd(fVar44,fVar44,uVar38);
      fVar63 = 1.0;
      if (1e-06 < fVar53) {
        fVar63 = 1.0 / SQRT(fVar53);
      }
      fVar63 = fVar34 * fVar63;
      uVar27 = (ulong)uVar19;
      lVar18 = lVar18 + -1;
      uVar19 = uVar19 + 3;
      *(float *)((long)pvVar15 + uVar27 * 4) = param_3[uVar23] - fVar76 * fVar63;
      *(float *)((long)pvVar15 + (ulong)uVar36 * 4) = fVar62 - fVar71 * fVar63;
      *(float *)((long)pvVar15 + (ulong)uVar26 * 4) = fVar35 - fVar44 * fVar63;
    } while (lVar18 != 0);
  }
LAB_009298e4:
  plVar16 = (long *)BoundingVolumeFactory::createBoundingVolume(param_3,param_4,0xc);
  lVar18 = *plVar16;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)((long)plVar16 + 0xc);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(plVar16 + 2);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)((long)plVar16 + 0x14);
  *(undefined4 *)(this + 100) = *(undefined4 *)(plVar16 + 3);
  (**(code **)(lVar18 + 8))();
  *(undefined4 *)(this + 0x84) = 0;
  return;
}


