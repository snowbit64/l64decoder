// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreatePatchUV
// Entry Point: 00f8ff14
// Size: 2260 bytes
// Signature: undefined __cdecl CreatePatchUV(btSoftBodyWorldInfo * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, int param_6, int param_7, int param_8, bool param_9, float * param_10)


/* WARNING: Type propagation algorithm not settling */
/* btSoftBodyHelpers::CreatePatchUV(btSoftBodyWorldInfo&, btVector3 const&, btVector3 const&,
   btVector3 const&, btVector3 const&, int, int, int, bool, float*) */

btSoftBody *
btSoftBodyHelpers::CreatePatchUV
          (btSoftBodyWorldInfo *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
          btVector3 *param_5,int param_6,int param_7,int param_8,bool param_9,float *param_10)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  undefined8 *puVar18;
  btSoftBody *this;
  long lVar19;
  ulong uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined auVar38 [16];
  float fVar39;
  float fVar40;
  ulong local_b8;
  
  this = (btSoftBody *)0x0;
  if ((1 < param_6) && (1 < param_7)) {
    uVar2 = param_7 * param_6;
    uVar14 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
    if ((ulong)(long)(int)uVar2 >> 0x3c != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    pfVar4 = (float *)(*(code *)PTR_FUN_01048e38)(uVar14,0x10);
    uVar14 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    if ((ulong)(long)(int)uVar2 >> 0x3e != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)operator_new__(uVar14);
    iVar3 = param_7 + -1;
    uVar20 = (ulong)(uint)param_6;
    auVar23 = NEON_fmov(0x3f800000,4);
    lVar11 = 0;
    iVar21 = (int)((long)param_6 + -1);
    uVar14 = 0;
    lVar15 = uVar20 * 4;
    uVar16 = uVar20 & 0xfffffffc;
    fVar40 = 1.0 / (float)iVar21;
    fVar25 = 1.0 / (float)iVar3;
    pfVar17 = pfVar4;
    puVar18 = puVar5;
    do {
      fVar31 = fVar25 * (float)(int)uVar14;
      fVar24 = (float)NEON_fmadd(*(float *)param_4 - *(float *)param_2,fVar31,*(float *)param_2);
      fVar26 = (float)NEON_fmadd(*(float *)(param_4 + 4) - *(float *)(param_2 + 4),fVar31,
                                 *(float *)(param_2 + 4));
      fVar27 = (float)NEON_fmadd(*(float *)(param_4 + 8) - *(float *)(param_2 + 8),fVar31,
                                 *(float *)(param_2 + 8));
      fVar28 = (float)NEON_fmadd(*(float *)param_5 - *(float *)param_3,fVar31,
                                 *(float *)param_3 - fVar24);
      fVar29 = (float)NEON_fmadd(*(float *)(param_5 + 4) - *(float *)(param_3 + 4),fVar31,
                                 *(float *)(param_3 + 4) - fVar26);
      fVar31 = (float)NEON_fmadd(*(float *)(param_5 + 8) - *(float *)(param_3 + 8),fVar31,
                                 *(float *)(param_3 + 8) - fVar27);
      if ((uint)param_6 < 4) {
LAB_00f90104:
        uVar10 = 0;
LAB_00f90108:
        pfVar7 = pfVar4 + (uVar10 + lVar11) * 4 + 2;
        do {
          pfVar7[1] = 0.0;
          fVar30 = fVar40 * (float)(int)uVar10;
          fVar32 = (float)NEON_fmadd(fVar30,fVar28,fVar24);
          fVar33 = (float)NEON_fmadd(fVar30,fVar29,fVar26);
          fVar30 = (float)NEON_fmadd(fVar30,fVar31,fVar27);
          pfVar7[-2] = fVar32;
          pfVar7[-1] = fVar33;
          *pfVar7 = fVar30;
          *(float *)((long)puVar18 + uVar10 * 4) = 1.0;
          uVar10 = uVar10 + 1;
          pfVar7 = pfVar7 + 4;
        } while (uVar20 != uVar10);
      }
      else {
        lVar6 = uVar20 * 0x10 * uVar14;
        if (((float *)((long)pfVar4 + lVar6) < (float *)((long)puVar5 + lVar15 + lVar15 * uVar14))
           && ((undefined8 *)((long)puVar5 + lVar15 * uVar14) <
               (undefined8 *)((long)pfVar4 + uVar20 * 0x10 + lVar6))) goto LAB_00f90104;
        iVar36 = 2;
        iVar37 = 3;
        iVar34 = 0;
        iVar35 = 1;
        puVar8 = puVar18;
        uVar10 = uVar16;
        pfVar7 = pfVar17;
        do {
          auVar38._4_4_ = iVar35;
          auVar38._0_4_ = iVar34;
          auVar38._8_4_ = iVar36;
          auVar38._12_4_ = iVar37;
          auVar38 = NEON_scvtf(auVar38,4);
          uVar10 = uVar10 - 4;
          iVar34 = iVar34 + 4;
          iVar35 = iVar35 + 4;
          iVar36 = iVar36 + 4;
          iVar37 = iVar37 + 4;
          fVar30 = auVar38._0_4_ * fVar40;
          fVar32 = auVar38._4_4_ * fVar40;
          fVar33 = auVar38._8_4_ * fVar40;
          fVar39 = auVar38._12_4_ * fVar40;
          *pfVar7 = fVar24 + fVar28 * fVar30;
          pfVar7[1] = fVar26 + fVar29 * fVar30;
          pfVar7[2] = fVar27 + fVar31 * fVar30;
          pfVar7[3] = 0.0;
          pfVar7[4] = fVar24 + fVar28 * fVar32;
          pfVar7[5] = fVar26 + fVar29 * fVar32;
          pfVar7[6] = fVar27 + fVar31 * fVar32;
          pfVar7[7] = 0.0;
          pfVar7[8] = fVar24 + fVar28 * fVar33;
          pfVar7[9] = fVar26 + fVar29 * fVar33;
          pfVar7[10] = fVar27 + fVar31 * fVar33;
          pfVar7[0xb] = 0.0;
          pfVar7[0xc] = fVar24 + fVar28 * fVar39;
          pfVar7[0xd] = fVar26 + fVar29 * fVar39;
          pfVar7[0xe] = fVar27 + fVar31 * fVar39;
          pfVar7[0xf] = 0.0;
          pfVar7 = pfVar7 + 0x10;
          puVar8[1] = auVar23._8_8_;
          *puVar8 = auVar23._0_8_;
          puVar8 = puVar8 + 2;
        } while (uVar10 != 0);
        uVar10 = uVar16;
        if (uVar16 != uVar20) goto LAB_00f90108;
      }
      uVar14 = uVar14 + 1;
      puVar18 = (undefined8 *)((long)puVar18 + lVar15);
      pfVar17 = pfVar17 + uVar20 * 4;
      lVar11 = lVar11 + uVar20;
    } while (uVar14 != (uint)param_7);
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
      *(undefined4 *)(*(long *)(this + 0x380) + (long)(iVar21 + iVar3 * param_6) * 0x78 + 0x60) = 0;
    }
    if (((uint)param_8 >> 4 & 1) != 0) {
      iVar34 = iVar21;
      if (iVar21 < 0) {
        iVar34 = iVar21 + 1;
      }
      this[0x4b4] = (btSoftBody)0x1;
      *(undefined4 *)(*(long *)(this + 0x380) + (long)(iVar34 >> 1) * 0x78 + 0x60) = 0;
    }
    if (((uint)param_8 >> 5 & 1) != 0) {
      iVar34 = iVar3;
      if (iVar3 < 0) {
        iVar34 = param_7;
      }
      this[0x4b4] = (btSoftBody)0x1;
      *(undefined4 *)(*(long *)(this + 0x380) + (long)((iVar34 >> 1) * param_6) * 0x78 + 0x60) = 0;
    }
    if (((uint)param_8 >> 6 & 1) != 0) {
      iVar34 = iVar3;
      if (iVar3 < 0) {
        iVar34 = param_7;
      }
      this[0x4b4] = (btSoftBody)0x1;
      *(undefined4 *)
       (*(long *)(this + 0x380) + (long)(iVar21 + (iVar34 >> 1) * param_6) * 0x78 + 0x60) = 0;
    }
    if (((uint)param_8 >> 7 & 1) != 0) {
      iVar34 = iVar21;
      if (iVar21 < 0) {
        iVar34 = iVar21 + 1;
      }
      this[0x4b4] = (btSoftBody)0x1;
      *(undefined4 *)
       (*(long *)(this + 0x380) + (long)(iVar3 * param_6 + (iVar34 >> 1)) * 0x78 + 0x60) = 0;
    }
    if (((uint)param_8 >> 8 & 1) != 0) {
      iVar34 = iVar3;
      if (iVar3 < 0) {
        iVar34 = param_7;
      }
      if (iVar21 < 0) {
        iVar21 = iVar21 + 1;
      }
      this[0x4b4] = (btSoftBody)0x1;
      *(undefined4 *)
       (*(long *)(this + 0x380) + (long)((iVar34 >> 1) * param_6 + (iVar21 >> 1)) * 0x78 + 0x60) = 0
      ;
    }
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(pfVar4);
    operator_delete__(puVar5);
    lVar11 = 0;
    lVar15 = 0;
    lVar6 = (long)param_6 * 0x78;
    iVar21 = 0;
    uVar14 = 0;
    local_b8 = uVar20;
    do {
      uVar16 = uVar14 + 1;
      if ((long)uVar16 < (long)param_7) {
        fVar24 = fVar25 * (float)(iVar3 - (uint)uVar14);
        fVar26 = fVar25 * (float)(iVar3 + ~(uint)uVar14);
        uVar14 = 0;
        lVar19 = lVar15;
        do {
          uVar10 = uVar14 + 1;
          if ((long)uVar10 < (long)param_6) {
            iVar36 = (int)lVar11;
            iVar37 = (int)uVar14;
            iVar35 = iVar36 + iVar37;
            iVar9 = (int)local_b8 + iVar37 + 1;
            lVar1 = *(long *)(this + 0x380) + lVar19;
            iVar34 = (int)local_b8 + iVar37;
            btSoftBody::appendLink(this,-1,(Material *)0x0);
            fVar27 = *(float *)(lVar1 + 0x10) - *(float *)(lVar1 + 0x88);
            fVar29 = *(float *)(lVar1 + 0x14) - *(float *)(lVar1 + 0x8c);
            fVar28 = *(float *)(lVar1 + 0x18);
            lVar12 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            fVar31 = *(float *)(lVar1 + 0x90);
            this[0x4b4] = (btSoftBody)0x1;
            fVar28 = fVar28 - fVar31;
            *(long *)(lVar12 + -0x38) = lVar1;
            *(long *)(lVar12 + -0x30) = lVar1 + 0x78;
            uVar22 = NEON_fmadd(fVar29,fVar29,fVar27 * fVar27);
            lVar1 = *(long *)(this + 0x380) + lVar19;
            lVar13 = *(long *)(this + 0x380) + lVar6 + lVar19;
            fVar27 = (float)NEON_fmadd(fVar28,fVar28,uVar22);
            *(float *)(lVar12 + -0x28) = SQRT(fVar27);
            btSoftBody::appendLink(this,-1,(Material *)0x0);
            fVar27 = *(float *)(lVar1 + 0x10) - *(float *)(lVar13 + 0x10);
            fVar29 = *(float *)(lVar1 + 0x14) - *(float *)(lVar13 + 0x14);
            fVar28 = *(float *)(lVar1 + 0x18);
            lVar12 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            fVar31 = *(float *)(lVar13 + 0x18);
            this[0x4b4] = (btSoftBody)0x1;
            fVar28 = fVar28 - fVar31;
            *(long *)(lVar12 + -0x38) = lVar1;
            *(long *)(lVar12 + -0x30) = lVar13;
            uVar22 = NEON_fmadd(fVar29,fVar29,fVar27 * fVar27);
            fVar27 = (float)NEON_fmadd(fVar28,fVar28,uVar22);
            *(float *)(lVar12 + -0x28) = SQRT(fVar27);
            btSoftBody::appendFace(this,iVar35,iVar34,iVar34 + 1,(Material *)0x0);
            if (param_10 == (float *)0x0) {
              btSoftBody::appendFace(this,iVar9,iVar36 + iVar37 + 1,iVar35,(Material *)0x0);
            }
            else {
              fVar27 = fVar40 * (float)iVar37;
              pfVar4 = param_10 + iVar21;
              fVar28 = fVar40 * (float)(iVar37 + 1);
              *pfVar4 = fVar27;
              pfVar4[1] = fVar24;
              pfVar4[2] = fVar27;
              pfVar4[3] = fVar26;
              pfVar4[4] = fVar28;
              pfVar4[5] = fVar26;
              btSoftBody::appendFace(this,iVar9,iVar36 + iVar37 + 1,iVar35,(Material *)0x0);
              pfVar4[6] = fVar28;
              pfVar4[7] = fVar26;
              pfVar4[8] = fVar28;
              pfVar4[9] = fVar24;
              pfVar4[10] = fVar27;
              pfVar4[0xb] = fVar24;
            }
            if (param_9) {
              lVar1 = *(long *)(this + 0x380) + lVar19;
              lVar13 = *(long *)(this + 0x380) + lVar6 + lVar19;
              btSoftBody::appendLink(this,-1,(Material *)0x0);
              fVar27 = *(float *)(lVar1 + 0x10) - *(float *)(lVar13 + 0x88);
              fVar29 = *(float *)(lVar1 + 0x14) - *(float *)(lVar13 + 0x8c);
              lVar12 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
              fVar28 = *(float *)(lVar1 + 0x18) - *(float *)(lVar13 + 0x90);
              *(long *)(lVar12 + -0x38) = lVar1;
              *(long *)(lVar12 + -0x30) = lVar13 + 0x78;
              uVar22 = NEON_fmadd(fVar29,fVar29,fVar27 * fVar27);
              fVar27 = (float)NEON_fmadd(fVar28,fVar28,uVar22);
              *(float *)(lVar12 + -0x28) = SQRT(fVar27);
              this[0x4b4] = (btSoftBody)0x1;
            }
            iVar21 = iVar21 + 0xc;
          }
          else {
            lVar1 = *(long *)(this + 0x380) + lVar19;
            lVar13 = *(long *)(this + 0x380) + lVar6 + lVar19;
            btSoftBody::appendLink(this,-1,(Material *)0x0);
            fVar27 = *(float *)(lVar1 + 0x10) - *(float *)(lVar13 + 0x10);
            fVar29 = *(float *)(lVar1 + 0x14) - *(float *)(lVar13 + 0x14);
            lVar12 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            fVar28 = *(float *)(lVar1 + 0x18) - *(float *)(lVar13 + 0x18);
            *(long *)(lVar12 + -0x38) = lVar1;
            *(long *)(lVar12 + -0x30) = lVar13;
            uVar22 = NEON_fmadd(fVar29,fVar29,fVar27 * fVar27);
            fVar27 = (float)NEON_fmadd(fVar28,fVar28,uVar22);
            *(float *)(lVar12 + -0x28) = SQRT(fVar27);
            this[0x4b4] = (btSoftBody)0x1;
          }
          lVar19 = lVar19 + 0x78;
          uVar14 = uVar10;
        } while (uVar20 != uVar10);
      }
      else {
        uVar14 = 0;
        lVar19 = lVar15;
        do {
          uVar14 = uVar14 + 1;
          if ((long)uVar14 < (long)param_6) {
            lVar1 = *(long *)(this + 0x380) + lVar19;
            btSoftBody::appendLink(this,-1,(Material *)0x0);
            fVar24 = *(float *)(lVar1 + 0x10) - *(float *)(lVar1 + 0x88);
            fVar27 = *(float *)(lVar1 + 0x14) - *(float *)(lVar1 + 0x8c);
            lVar13 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
            fVar26 = *(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x90);
            *(long *)(lVar13 + -0x38) = lVar1;
            *(long *)(lVar13 + -0x30) = lVar1 + 0x78;
            uVar22 = NEON_fmadd(fVar27,fVar27,fVar24 * fVar24);
            fVar24 = (float)NEON_fmadd(fVar26,fVar26,uVar22);
            *(float *)(lVar13 + -0x28) = SQRT(fVar24);
            this[0x4b4] = (btSoftBody)0x1;
          }
          lVar19 = lVar19 + 0x78;
        } while (uVar20 != uVar14);
      }
      lVar11 = lVar11 + uVar20;
      lVar15 = lVar15 + lVar6;
      local_b8 = local_b8 + uVar20;
      uVar14 = uVar16;
    } while (uVar16 != (uint)param_7);
  }
  return this;
}


