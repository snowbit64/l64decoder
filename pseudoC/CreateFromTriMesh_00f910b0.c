// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateFromTriMesh
// Entry Point: 00f910b0
// Size: 1604 bytes
// Signature: undefined __cdecl CreateFromTriMesh(btSoftBodyWorldInfo * param_1, float * param_2, int * param_3, int param_4, bool param_5)


/* btSoftBodyHelpers::CreateFromTriMesh(btSoftBodyWorldInfo&, float const*, int const*, int, bool)
    */

btSoftBody *
btSoftBodyHelpers::CreateFromTriMesh
          (btSoftBodyWorldInfo *param_1,float *param_2,int *param_3,int param_4,bool param_5)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [12];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined (*pauVar12) [12];
  undefined (*pauVar13) [12];
  undefined *puVar14;
  bool bVar15;
  float *pfVar16;
  btSoftBody *this;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  float *pfVar25;
  undefined (*pauVar26) [12];
  float *pfVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  undefined auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  undefined auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  void *local_b8;
  
  lVar6 = tpidr_el0;
  lVar18 = *(long *)(lVar6 + 0x28);
  uVar5 = param_4 * 3;
  if (param_4 < 1) {
    iVar37 = 0;
  }
  else {
    uVar2 = uVar5;
    if ((int)uVar5 < 2) {
      uVar2 = 1;
    }
    uVar19 = (ulong)uVar2;
    if (uVar2 < 8) {
      uVar23 = 0;
      iVar37 = 0;
    }
    else {
      uVar23 = uVar19 & 0x7ffffff8;
      auVar40 = ZEXT816(0);
      auVar45 = ZEXT816(0);
      pauVar26 = (undefined (*) [12])(param_3 + 4);
      uVar21 = uVar23;
      do {
        pauVar12 = pauVar26 + -2;
        pauVar13 = pauVar26 + -1;
        puVar14 = *pauVar26;
        auVar9 = *pauVar26;
        uVar21 = uVar21 - 8;
        pauVar26 = (undefined (*) [12])(pauVar26[2] + 8);
        auVar7._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar13 + 4) >> 0x20);
        auVar7._0_12_ = *(undefined (*) [12])(*pauVar12 + 8);
        auVar40 = NEON_smax(auVar7,auVar40,4);
        auVar8._12_4_ = (int)((ulong)*(undefined8 *)(puVar14 + 8) >> 0x20);
        auVar8._0_12_ = auVar9;
        auVar45 = NEON_smax(auVar8,auVar45,4);
      } while (uVar21 != 0);
      auVar40 = NEON_smax(auVar40,auVar45,4);
      iVar37 = NEON_smaxv(auVar40,4);
      if (uVar23 == uVar19) goto LAB_00f91184;
    }
    lVar20 = uVar19 - uVar23;
    piVar24 = param_3 + uVar23;
    iVar17 = iVar37;
    do {
      iVar37 = *piVar24;
      if (*piVar24 <= iVar17) {
        iVar37 = iVar17;
      }
      lVar20 = lVar20 + -1;
      piVar24 = piVar24 + 1;
      iVar17 = iVar37;
    } while (lVar20 != 0);
  }
LAB_00f91184:
  uVar19 = (long)iVar37 + 1;
  iVar17 = (int)uVar19;
  uVar2 = iVar17 * iVar17;
  if (uVar2 == 0) {
    local_b8 = (void *)0x0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    local_b8 = (void *)(*(code *)PTR_FUN_01048e38)((ulong)uVar2,0x10);
    memset(local_b8,0,(ulong)uVar2);
  }
  if (iVar37 < 0) {
    pfVar16 = (float *)0x0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    pfVar16 = (float *)(*(code *)PTR_FUN_01048e38)((uVar19 & 0xffffffff) << 4,0x10);
    iVar37 = iVar17 * 3;
    if (iVar37 < 4) {
      iVar37 = 3;
    }
    uVar21 = (ulong)((iVar37 - 1U) / 3 + 1);
    if ((iVar37 - 1U < 9) ||
       ((pfVar16 < param_2 + (uVar21 - 1) * 3 + 3 && (param_2 < pfVar16 + (uVar21 - 1) * 4 + 4)))) {
      uVar23 = 0;
      lVar20 = 0;
    }
    else {
      uVar23 = uVar21 & 0x7ffffffc;
      pfVar25 = param_2;
      pfVar27 = pfVar16;
      uVar28 = uVar23;
      do {
        fVar42 = *pfVar25;
        fVar44 = pfVar25[1];
        fVar50 = pfVar25[2];
        fVar43 = pfVar25[3];
        fVar46 = pfVar25[4];
        fVar51 = pfVar25[5];
        fVar49 = pfVar25[6];
        fVar47 = pfVar25[7];
        fVar52 = pfVar25[8];
        fVar41 = pfVar25[9];
        fVar48 = pfVar25[10];
        fVar53 = pfVar25[0xb];
        pfVar25 = pfVar25 + 0xc;
        *pfVar27 = fVar42;
        pfVar27[1] = fVar44;
        pfVar27[2] = fVar50;
        pfVar27[3] = 0.0;
        pfVar27[4] = fVar43;
        pfVar27[5] = fVar46;
        pfVar27[6] = fVar51;
        pfVar27[7] = 0.0;
        pfVar27[8] = fVar49;
        pfVar27[9] = fVar47;
        pfVar27[10] = fVar52;
        pfVar27[0xb] = 0.0;
        pfVar27[0xc] = fVar41;
        pfVar27[0xd] = fVar48;
        pfVar27[0xe] = fVar53;
        pfVar27[0xf] = 0.0;
        pfVar27 = pfVar27 + 0x10;
        uVar28 = uVar28 - 4;
      } while (uVar28 != 0);
      if (uVar23 == uVar21) goto LAB_00f912a4;
      lVar20 = uVar23 * 3;
    }
    lVar22 = uVar23 - uVar21;
    pfVar25 = param_2 + lVar20 + 2;
    pfVar27 = pfVar16 + uVar23 * 4 + 2;
    do {
      uVar39 = *(undefined8 *)(pfVar25 + -2);
      bVar15 = lVar22 != -1;
      lVar22 = lVar22 + 1;
      fVar42 = *pfVar25;
      pfVar27[1] = 0.0;
      *(undefined8 *)(pfVar27 + -2) = uVar39;
      *pfVar27 = fVar42;
      pfVar25 = pfVar25 + 3;
      pfVar27 = pfVar27 + 4;
    } while (bVar15);
  }
LAB_00f912a4:
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  this = (btSoftBody *)(*(code *)PTR_FUN_01048e38)(0x690,0x10);
  btSoftBody::btSoftBody(this,param_1,iVar17,(btVector3 *)pfVar16,(float *)0x0);
  if (0 < param_4) {
    lVar20 = 0;
    do {
      piVar24 = param_3 + lVar20;
      iVar37 = *piVar24;
      lVar33 = (long)iVar37;
      iVar3 = piVar24[2];
      lVar34 = (long)iVar3;
      iVar4 = piVar24[2];
      lVar36 = (long)iVar4;
      lVar22 = lVar33 * uVar19 + lVar36;
      if (*(char *)((long)local_b8 + lVar22) == '\0') {
        *(undefined *)((long)local_b8 + lVar22) = 1;
        *(undefined *)((long)local_b8 + (long)(iVar37 + iVar4 * iVar17)) = 1;
        lVar35 = *(long *)(this + 0x380) + lVar36 * 0x78;
        lVar32 = *(long *)(this + 0x380) + lVar33 * 0x78;
        btSoftBody::appendLink(this,-1,(Material *)0x0);
        lVar22 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
        *(long *)(lVar22 + -0x38) = lVar35;
        *(long *)(lVar22 + -0x30) = lVar32;
        fVar42 = *(float *)(lVar35 + 0x10) - *(float *)(lVar32 + 0x10);
        fVar49 = *(float *)(lVar35 + 0x14) - *(float *)(lVar32 + 0x14);
        fVar43 = *(float *)(lVar35 + 0x18) - *(float *)(lVar32 + 0x18);
        uVar38 = NEON_fmadd(fVar49,fVar49,fVar42 * fVar42);
        fVar42 = (float)NEON_fmadd(fVar43,fVar43,uVar38);
        *(float *)(lVar22 + -0x28) = SQRT(fVar42);
        this[0x4b4] = (btSoftBody)0x1;
      }
      lVar22 = iVar3 * iVar17 + lVar33;
      if (*(char *)((long)local_b8 + lVar22) == '\0') {
        *(undefined *)((long)local_b8 + lVar22) = 1;
        *(undefined *)((long)local_b8 + lVar33 * uVar19 + lVar34) = 1;
        lVar33 = *(long *)(this + 0x380) + lVar33 * 0x78;
        lVar32 = *(long *)(this + 0x380) + lVar34 * 0x78;
        btSoftBody::appendLink(this,-1,(Material *)0x0);
        lVar22 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
        *(long *)(lVar22 + -0x38) = lVar33;
        *(long *)(lVar22 + -0x30) = lVar32;
        fVar42 = *(float *)(lVar33 + 0x10) - *(float *)(lVar32 + 0x10);
        fVar49 = *(float *)(lVar33 + 0x14) - *(float *)(lVar32 + 0x14);
        fVar43 = *(float *)(lVar33 + 0x18) - *(float *)(lVar32 + 0x18);
        uVar38 = NEON_fmadd(fVar49,fVar49,fVar42 * fVar42);
        fVar42 = (float)NEON_fmadd(fVar43,fVar43,uVar38);
        *(float *)(lVar22 + -0x28) = SQRT(fVar42);
        this[0x4b4] = (btSoftBody)0x1;
      }
      lVar22 = (long)(iVar3 + iVar4 * iVar17);
      if (*(char *)((long)local_b8 + lVar22) == '\0') {
        *(undefined *)((long)local_b8 + lVar22) = 1;
        *(undefined *)((long)local_b8 + iVar3 * iVar17 + lVar36) = 1;
        lVar33 = *(long *)(this + 0x380) + lVar34 * 0x78;
        lVar34 = *(long *)(this + 0x380) + lVar36 * 0x78;
        btSoftBody::appendLink(this,-1,(Material *)0x0);
        lVar22 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
        *(long *)(lVar22 + -0x38) = lVar33;
        *(long *)(lVar22 + -0x30) = lVar34;
        fVar42 = *(float *)(lVar33 + 0x10) - *(float *)(lVar34 + 0x10);
        fVar49 = *(float *)(lVar33 + 0x14) - *(float *)(lVar34 + 0x14);
        fVar43 = *(float *)(lVar33 + 0x18) - *(float *)(lVar34 + 0x18);
        uVar38 = NEON_fmadd(fVar49,fVar49,fVar42 * fVar42);
        fVar42 = (float)NEON_fmadd(fVar43,fVar43,uVar38);
        *(float *)(lVar22 + -0x28) = SQRT(fVar42);
        this[0x4b4] = (btSoftBody)0x1;
      }
      btSoftBody::appendFace(this,iVar37,iVar3,iVar4,(Material *)0x0);
      lVar20 = lVar20 + 3;
    } while ((int)lVar20 < (int)uVar5);
  }
  if (param_5) {
    uVar5 = *(uint *)(this + 0x394);
    uVar19 = 0x3b7f7;
    if (0 < (int)uVar5) {
      lVar20 = 0;
      do {
        uVar2 = (int)uVar19 * 0x19660d + 0x3c6ef35f;
        uVar19 = (ulong)uVar2;
        iVar37 = 0;
        if ((long)(int)uVar5 != 0) {
          iVar37 = (int)(uVar19 / (ulong)(long)(int)uVar5);
        }
        pauVar1 = (undefined (*) [16])(*(long *)(this + 0x3a0) + lVar20);
        lVar20 = lVar20 + 0x48;
        auVar40 = pauVar1[2];
        auVar45 = pauVar1[3];
        puVar29 = (undefined8 *)
                  (*(long *)(this + 0x3a0) + (long)(int)(uVar2 - iVar37 * uVar5) * 0x48);
        uVar30 = *(undefined8 *)pauVar1[4];
        auVar8 = *pauVar1;
        auVar7 = pauVar1[1];
        uVar39 = *puVar29;
        *(undefined8 *)(*pauVar1 + 8) = puVar29[1];
        *(undefined8 *)*pauVar1 = uVar39;
        uVar39 = puVar29[2];
        auVar10 = *(undefined (*) [16])(puVar29 + 4);
        auVar11 = *(undefined (*) [16])(puVar29 + 6);
        uVar31 = puVar29[8];
        *(undefined8 *)(pauVar1[1] + 8) = puVar29[3];
        *(undefined8 *)pauVar1[1] = uVar39;
        *(long *)(pauVar1[2] + 8) = auVar10._8_8_;
        *(long *)pauVar1[2] = auVar10._0_8_;
        *(long *)(pauVar1[3] + 8) = auVar11._8_8_;
        *(long *)pauVar1[3] = auVar11._0_8_;
        *(undefined8 *)pauVar1[4] = uVar31;
        puVar29[1] = auVar8._8_8_;
        *puVar29 = auVar8._0_8_;
        puVar29[3] = auVar7._8_8_;
        puVar29[2] = auVar7._0_8_;
        puVar29[5] = auVar40._8_8_;
        puVar29[4] = auVar40._0_8_;
        puVar29[7] = auVar45._8_8_;
        puVar29[6] = auVar45._0_8_;
        puVar29[8] = uVar30;
      } while (((ulong)uVar5 + (ulong)uVar5 * 8) * 8 - lVar20 != 0);
    }
    uVar5 = *(uint *)(this + 0x3b4);
    if (0 < (int)uVar5) {
      lVar20 = 0;
      do {
        uVar2 = (int)uVar19 * 0x19660d + 0x3c6ef35f;
        uVar19 = (ulong)uVar2;
        iVar37 = 0;
        if ((long)(int)uVar5 != 0) {
          iVar37 = (int)(uVar19 / (ulong)(long)(int)uVar5);
        }
        pauVar1 = (undefined (*) [16])(*(long *)(this + 0x3c0) + lVar20);
        lVar20 = lVar20 + 0x48;
        auVar40 = pauVar1[2];
        auVar45 = pauVar1[3];
        puVar29 = (undefined8 *)
                  (*(long *)(this + 0x3c0) + (long)(int)(uVar2 - iVar37 * uVar5) * 0x48);
        uVar30 = *(undefined8 *)pauVar1[4];
        auVar8 = *pauVar1;
        auVar7 = pauVar1[1];
        uVar39 = *puVar29;
        *(undefined8 *)(*pauVar1 + 8) = puVar29[1];
        *(undefined8 *)*pauVar1 = uVar39;
        uVar39 = puVar29[2];
        auVar10 = *(undefined (*) [16])(puVar29 + 4);
        auVar11 = *(undefined (*) [16])(puVar29 + 6);
        uVar31 = puVar29[8];
        *(undefined8 *)(pauVar1[1] + 8) = puVar29[3];
        *(undefined8 *)pauVar1[1] = uVar39;
        *(long *)(pauVar1[2] + 8) = auVar10._8_8_;
        *(long *)pauVar1[2] = auVar10._0_8_;
        *(long *)(pauVar1[3] + 8) = auVar11._8_8_;
        *(long *)pauVar1[3] = auVar11._0_8_;
        *(undefined8 *)pauVar1[4] = uVar31;
        puVar29[1] = auVar8._8_8_;
        *puVar29 = auVar8._0_8_;
        puVar29[3] = auVar7._8_8_;
        puVar29[2] = auVar7._0_8_;
        puVar29[5] = auVar40._8_8_;
        puVar29[4] = auVar40._0_8_;
        puVar29[7] = auVar45._8_8_;
        puVar29[6] = auVar45._0_8_;
        puVar29[8] = uVar30;
      } while (((ulong)uVar5 + (ulong)uVar5 * 8) * 8 - lVar20 != 0);
    }
  }
  if (pfVar16 != (float *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (local_b8 != (void *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar6 + 0x28) == lVar18) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


