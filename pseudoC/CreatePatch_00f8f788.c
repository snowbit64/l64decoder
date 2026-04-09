// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreatePatch
// Entry Point: 00f8f788
// Size: 1932 bytes
// Signature: undefined __cdecl CreatePatch(btSoftBodyWorldInfo * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, int param_6, int param_7, int param_8, bool param_9)


/* WARNING: Type propagation algorithm not settling */
/* btSoftBodyHelpers::CreatePatch(btSoftBodyWorldInfo&, btVector3 const&, btVector3 const&,
   btVector3 const&, btVector3 const&, int, int, int, bool) */

btSoftBody *
btSoftBodyHelpers::CreatePatch
          (btSoftBodyWorldInfo *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
          btVector3 *param_5,int param_6,int param_7,int param_8,bool param_9)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  undefined8 *puVar18;
  btSoftBody *this;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined auVar40 [16];
  float fVar41;
  
  this = (btSoftBody *)0x0;
  if ((1 < param_6) && (1 < param_7)) {
    uVar2 = param_7 * param_6;
    uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
    if ((ulong)(long)(int)uVar2 >> 0x3c != 0) {
      uVar13 = 0xffffffffffffffff;
    }
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    pfVar4 = (float *)(*(code *)PTR_FUN_01048e38)(uVar13,0x10);
    uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    if ((ulong)(long)(int)uVar2 >> 0x3e != 0) {
      uVar13 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)operator_new__(uVar13);
    iVar3 = param_7 + -1;
    uVar22 = (ulong)(uint)param_6;
    lVar10 = 0;
    iVar14 = (int)((long)param_6 + -1);
    fVar23 = (float)iVar14;
    uVar13 = 0;
    lVar15 = uVar22 * 4;
    auVar26 = NEON_fmov(0x3f800000,4);
    uVar16 = uVar22 & 0xfffffffc;
    fVar25 = 1.0 / fVar23;
    pfVar17 = pfVar4;
    puVar18 = puVar5;
    do {
      fVar32 = (float)(int)uVar13 / (float)iVar3;
      fVar27 = (float)NEON_fmadd(*(float *)param_4 - *(float *)param_2,fVar32,*(float *)param_2);
      fVar28 = (float)NEON_fmadd(*(float *)(param_4 + 4) - *(float *)(param_2 + 4),fVar32,
                                 *(float *)(param_2 + 4));
      fVar29 = (float)NEON_fmadd(*(float *)(param_4 + 8) - *(float *)(param_2 + 8),fVar32,
                                 *(float *)(param_2 + 8));
      fVar30 = (float)NEON_fmadd(*(float *)param_5 - *(float *)param_3,fVar32,
                                 *(float *)param_3 - fVar27);
      fVar31 = (float)NEON_fmadd(*(float *)(param_5 + 4) - *(float *)(param_3 + 4),fVar32,
                                 *(float *)(param_3 + 4) - fVar28);
      fVar32 = (float)NEON_fmadd(*(float *)(param_5 + 8) - *(float *)(param_3 + 8),fVar32,
                                 *(float *)(param_3 + 8) - fVar29);
      if ((uint)param_6 < 4) {
LAB_00f8f960:
        uVar9 = 0;
LAB_00f8f964:
        pfVar7 = pfVar4 + (uVar9 + lVar10) * 4 + 2;
        do {
          pfVar7[1] = 0.0;
          fVar33 = (float)(int)uVar9 / fVar23;
          fVar34 = (float)NEON_fmadd(fVar33,fVar30,fVar27);
          fVar35 = (float)NEON_fmadd(fVar33,fVar31,fVar28);
          fVar33 = (float)NEON_fmadd(fVar33,fVar32,fVar29);
          pfVar7[-2] = fVar34;
          pfVar7[-1] = fVar35;
          *pfVar7 = fVar33;
          *(float *)((long)puVar18 + uVar9 * 4) = 1.0;
          uVar9 = uVar9 + 1;
          pfVar7 = pfVar7 + 4;
        } while (uVar22 != uVar9);
      }
      else {
        lVar6 = uVar22 * 0x10 * uVar13;
        if (((float *)((long)pfVar4 + lVar6) < (float *)((long)puVar5 + lVar15 + lVar15 * uVar13))
           && ((undefined8 *)((long)puVar5 + lVar15 * uVar13) <
               (undefined8 *)((long)pfVar4 + uVar22 * 0x10 + lVar6))) goto LAB_00f8f960;
        iVar38 = 2;
        iVar39 = 3;
        iVar36 = 0;
        iVar37 = 1;
        puVar8 = puVar18;
        uVar9 = uVar16;
        pfVar7 = pfVar17;
        do {
          auVar40._4_4_ = iVar37;
          auVar40._0_4_ = iVar36;
          auVar40._8_4_ = iVar38;
          auVar40._12_4_ = iVar39;
          auVar40 = NEON_scvtf(auVar40,4);
          uVar9 = uVar9 - 4;
          iVar36 = iVar36 + 4;
          iVar37 = iVar37 + 4;
          iVar38 = iVar38 + 4;
          iVar39 = iVar39 + 4;
          fVar33 = auVar40._0_4_ * fVar25;
          fVar34 = auVar40._4_4_ * fVar25;
          fVar35 = auVar40._8_4_ * fVar25;
          fVar41 = auVar40._12_4_ * fVar25;
          *pfVar7 = fVar27 + fVar30 * fVar33;
          pfVar7[1] = fVar28 + fVar31 * fVar33;
          pfVar7[2] = fVar29 + fVar32 * fVar33;
          pfVar7[3] = 0.0;
          pfVar7[4] = fVar27 + fVar30 * fVar34;
          pfVar7[5] = fVar28 + fVar31 * fVar34;
          pfVar7[6] = fVar29 + fVar32 * fVar34;
          pfVar7[7] = 0.0;
          pfVar7[8] = fVar27 + fVar30 * fVar35;
          pfVar7[9] = fVar28 + fVar31 * fVar35;
          pfVar7[10] = fVar29 + fVar32 * fVar35;
          pfVar7[0xb] = 0.0;
          pfVar7[0xc] = fVar27 + fVar30 * fVar41;
          pfVar7[0xd] = fVar28 + fVar31 * fVar41;
          pfVar7[0xe] = fVar29 + fVar32 * fVar41;
          pfVar7[0xf] = 0.0;
          pfVar7 = pfVar7 + 0x10;
          puVar8[1] = auVar26._8_8_;
          *puVar8 = auVar26._0_8_;
          puVar8 = puVar8 + 2;
        } while (uVar9 != 0);
        uVar9 = uVar16;
        if (uVar16 != uVar22) goto LAB_00f8f964;
      }
      uVar13 = uVar13 + 1;
      puVar18 = (undefined8 *)((long)puVar18 + lVar15);
      pfVar17 = pfVar17 + uVar22 * 4;
      lVar10 = lVar10 + uVar22;
    } while (uVar13 != (uint)param_7);
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    this = (btSoftBody *)(*(code *)PTR_FUN_01048e38)(0x690,0x10);
    btSoftBody::btSoftBody(this,param_1,uVar2,(btVector3 *)pfVar4,(float *)puVar5);
    if ((param_8 & 1U) != 0) {
      *(undefined4 *)(*(long *)(this + 0x380) + 0x60) = 0;
      this[0x4b4] = (btSoftBody)0x1;
    }
    if (((uint)param_8 >> 1 & 1) != 0) {
      this[0x4b4] = (btSoftBody)0x1;
      *(undefined4 *)(*(long *)(this + 0x380) + ((long)param_6 + -1) * 0x78 + 0x60) = 0;
    }
    if (((uint)param_8 >> 2 & 1) != 0) {
      this[0x4b4] = (btSoftBody)0x1;
      *(undefined4 *)(*(long *)(this + 0x380) + (long)(iVar3 * param_6) * 0x78 + 0x60) = 0;
    }
    if (((uint)param_8 >> 3 & 1) != 0) {
      this[0x4b4] = (btSoftBody)0x1;
      *(undefined4 *)(*(long *)(this + 0x380) + (long)(iVar14 + iVar3 * param_6) * 0x78 + 0x60) = 0;
    }
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(pfVar4);
    operator_delete__(puVar5);
    lVar10 = 0;
    lVar15 = 0;
    lVar6 = (long)param_6 * 0x78;
    uVar13 = uVar22;
    uVar16 = 0;
    do {
      uVar9 = uVar16 + 1;
      if ((long)uVar9 < (long)param_7) {
        uVar20 = 0;
        lVar21 = lVar15;
        do {
          uVar1 = uVar20 + 1;
          if ((long)uVar1 < (long)param_6) {
            iVar37 = (int)lVar10;
            iVar38 = (int)uVar20;
            lVar19 = *(long *)(this + 0x380) + lVar21;
            iVar14 = iVar37 + iVar38 + 1;
            btSoftBody::appendLink(this,-1,(Material *)0x0);
            fVar23 = *(float *)(lVar19 + 0x10) - *(float *)(lVar19 + 0x88);
            fVar27 = *(float *)(lVar19 + 0x14) - *(float *)(lVar19 + 0x8c);
            fVar25 = *(float *)(lVar19 + 0x18);
            lVar11 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            fVar28 = *(float *)(lVar19 + 0x90);
            this[0x4b4] = (btSoftBody)0x1;
            fVar25 = fVar25 - fVar28;
            *(long *)(lVar11 + -0x38) = lVar19;
            *(long *)(lVar11 + -0x30) = lVar19 + 0x78;
            uVar24 = NEON_fmadd(fVar27,fVar27,fVar23 * fVar23);
            iVar36 = (int)uVar13;
            iVar3 = iVar36 + iVar38;
            lVar19 = *(long *)(this + 0x380) + lVar21;
            fVar23 = (float)NEON_fmadd(fVar25,fVar25,uVar24);
            lVar12 = *(long *)(this + 0x380) + lVar6 + lVar21;
            *(float *)(lVar11 + -0x28) = SQRT(fVar23);
            btSoftBody::appendLink(this,-1,(Material *)0x0);
            fVar23 = *(float *)(lVar12 + 0x10);
            fVar28 = *(float *)(lVar12 + 0x14);
            fVar25 = *(float *)(lVar19 + 0x10);
            fVar27 = *(float *)(lVar19 + 0x14);
            this[0x4b4] = (btSoftBody)0x1;
            fVar25 = fVar25 - fVar23;
            fVar27 = fVar27 - fVar28;
            lVar11 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            fVar23 = *(float *)(lVar19 + 0x18) - *(float *)(lVar12 + 0x18);
            *(long *)(lVar11 + -0x38) = lVar19;
            *(long *)(lVar11 + -0x30) = lVar12;
            uVar24 = NEON_fmadd(fVar27,fVar27,fVar25 * fVar25);
            fVar23 = (float)NEON_fmadd(fVar23,fVar23,uVar24);
            *(float *)(lVar11 + -0x28) = SQRT(fVar23);
            if (((int)uVar16 + iVar38 & 1U) == 0) {
              btSoftBody::appendFace(this,iVar3,iVar37 + iVar38,iVar14,(Material *)0x0);
              btSoftBody::appendFace(this,iVar3,iVar14,iVar36 + iVar38 + 1,(Material *)0x0);
              if (param_9) {
                lVar11 = *(long *)(this + 0x380) + lVar21;
                lVar19 = lVar11 + 0x78;
                lVar12 = *(long *)(this + 0x380) + lVar6 + lVar21;
                btSoftBody::appendLink(this,-1,(Material *)0x0);
                fVar23 = *(float *)(lVar11 + 0x88) - *(float *)(lVar12 + 0x10);
                fVar25 = *(float *)(lVar11 + 0x8c) - *(float *)(lVar12 + 0x14);
                fVar27 = *(float *)(lVar11 + 0x90);
                fVar28 = *(float *)(lVar12 + 0x18);
LAB_00f8fdd8:
                uVar24 = NEON_fmadd(fVar25,fVar25,fVar23 * fVar23);
                fVar23 = (float)NEON_fmadd(fVar27 - fVar28,fVar27 - fVar28,uVar24);
                lVar11 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
                *(long *)(lVar11 + -0x38) = lVar19;
                *(long *)(lVar11 + -0x30) = lVar12;
                goto LAB_00f8fb98;
              }
            }
            else {
              iVar36 = iVar36 + iVar38 + 1;
              btSoftBody::appendFace(this,iVar37 + iVar38,iVar14,iVar36,(Material *)0x0);
              btSoftBody::appendFace(this,iVar37 + iVar38,iVar36,iVar3,(Material *)0x0);
              if (param_9) {
                lVar19 = *(long *)(this + 0x380) + lVar21;
                lVar11 = *(long *)(this + 0x380) + lVar6 + lVar21;
                lVar12 = lVar11 + 0x78;
                btSoftBody::appendLink(this,-1,(Material *)0x0);
                fVar23 = *(float *)(lVar19 + 0x10) - *(float *)(lVar11 + 0x88);
                fVar25 = *(float *)(lVar19 + 0x14) - *(float *)(lVar11 + 0x8c);
                fVar27 = *(float *)(lVar19 + 0x18);
                fVar28 = *(float *)(lVar11 + 0x90);
                goto LAB_00f8fdd8;
              }
            }
          }
          else {
            lVar19 = *(long *)(this + 0x380) + lVar21;
            lVar12 = *(long *)(this + 0x380) + lVar6 + lVar21;
            btSoftBody::appendLink(this,-1,(Material *)0x0);
            fVar23 = *(float *)(lVar19 + 0x10) - *(float *)(lVar12 + 0x10);
            fVar25 = *(float *)(lVar19 + 0x14) - *(float *)(lVar12 + 0x14);
            lVar11 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            fVar27 = *(float *)(lVar19 + 0x18) - *(float *)(lVar12 + 0x18);
            *(long *)(lVar11 + -0x38) = lVar19;
            *(long *)(lVar11 + -0x30) = lVar12;
            uVar24 = NEON_fmadd(fVar25,fVar25,fVar23 * fVar23);
            fVar23 = (float)NEON_fmadd(fVar27,fVar27,uVar24);
LAB_00f8fb98:
            *(float *)(lVar11 + -0x28) = SQRT(fVar23);
            this[0x4b4] = (btSoftBody)0x1;
          }
          lVar21 = lVar21 + 0x78;
          uVar20 = uVar1;
        } while (uVar22 != uVar1);
      }
      else {
        uVar16 = 0;
        lVar21 = lVar15;
        do {
          uVar16 = uVar16 + 1;
          if ((long)uVar16 < (long)param_6) {
            lVar19 = *(long *)(this + 0x380) + lVar21;
            btSoftBody::appendLink(this,-1,(Material *)0x0);
            fVar23 = *(float *)(lVar19 + 0x10) - *(float *)(lVar19 + 0x88);
            fVar27 = *(float *)(lVar19 + 0x14) - *(float *)(lVar19 + 0x8c);
            lVar12 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            fVar25 = *(float *)(lVar19 + 0x18) - *(float *)(lVar19 + 0x90);
            *(long *)(lVar12 + -0x38) = lVar19;
            *(long *)(lVar12 + -0x30) = lVar19 + 0x78;
            uVar24 = NEON_fmadd(fVar27,fVar27,fVar23 * fVar23);
            fVar23 = (float)NEON_fmadd(fVar25,fVar25,uVar24);
            *(float *)(lVar12 + -0x28) = SQRT(fVar23);
            this[0x4b4] = (btSoftBody)0x1;
          }
          lVar21 = lVar21 + 0x78;
        } while (uVar22 != uVar16);
      }
      lVar10 = lVar10 + uVar22;
      lVar15 = lVar15 + lVar6;
      uVar13 = uVar13 + uVar22;
      uVar16 = uVar9;
    } while (uVar9 != (uint)param_7);
  }
  return this;
}


