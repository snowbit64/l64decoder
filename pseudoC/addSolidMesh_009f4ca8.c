// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSolidMesh
// Entry Point: 009f4ca8
// Size: 4340 bytes
// Signature: undefined __thiscall addSolidMesh(DeferredDebugRenderer * this, Matrix4x4 * param_1, float * param_2, float * param_3, ushort * param_4, uint param_5, float param_6, CATEGORY param_7, bool param_8)


/* DeferredDebugRenderer::addSolidMesh(Matrix4x4 const&, float const*, float const*, unsigned short
   const*, unsigned int, float, DeferredDebugRenderer::CATEGORY, bool) */

void __thiscall
DeferredDebugRenderer::addSolidMesh
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,float *param_2,float *param_3,
          ushort *param_4,uint param_5,float param_6,CATEGORY param_7,bool param_8)

{
  void **ppvVar1;
  float **ppfVar2;
  float **ppfVar3;
  ulong uVar4;
  void *pvVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  void *pvVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  if (!param_8) {
    this = this + 0xf0;
  }
  if (param_5 != 0) {
    uVar7 = 0;
    ppvVar1 = (void **)(this + 0x48);
    ppfVar2 = (float **)(this + 0x50);
    ppfVar3 = (float **)(this + 0x58);
    do {
      pfVar8 = *ppfVar2;
      pfVar6 = param_3 + (ushort)(param_4[uVar7 & 0xffffffff] * 3);
      pfVar9 = param_3 + (ushort)(param_4[(int)uVar7 + 1] * 3);
      pfVar10 = param_3 + (ushort)(param_4[(int)uVar7 + 2] * 3);
      fVar28 = *pfVar9;
      fVar29 = pfVar9[1];
      fVar34 = pfVar6[1] * param_6;
      fVar19 = pfVar9[2];
      fVar30 = *pfVar6 * param_6;
      fVar13 = pfVar10[1];
      fVar35 = pfVar6[2] * param_6;
      fVar27 = *pfVar10;
      fVar20 = *(float *)(param_1 + 0x10);
      fVar14 = *(float *)(param_1 + 0x14);
      uVar31 = *(undefined4 *)param_1;
      uVar25 = *(undefined4 *)(param_1 + 4);
      fVar21 = pfVar10[2];
      pfVar6 = *ppfVar3;
      uVar15 = NEON_fmadd(fVar30,uVar31,fVar34 * fVar20);
      uVar32 = *(undefined4 *)(param_1 + 0x20);
      uVar22 = *(undefined4 *)(param_1 + 0x24);
      fVar16 = (float)NEON_fmadd(fVar35,uVar32,uVar15);
      fVar33 = *(float *)(param_1 + 0x30);
      fVar26 = *(float *)(param_1 + 0x34);
      uVar23 = *(undefined4 *)(param_1 + 8);
      uVar15 = *(undefined4 *)(param_1 + 0x28);
      fVar24 = *(float *)(param_1 + 0x18);
      fVar17 = *(float *)(param_1 + 0x38);
      if (pfVar8 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar8 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = fVar33 + fVar16;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar8 + 1;
        *pfVar8 = fVar33 + fVar16;
        *ppfVar2 = pfVar9;
      }
      uVar18 = NEON_fmadd(fVar30,uVar25,fVar34 * fVar14);
      fVar16 = (float)NEON_fmadd(fVar35,uVar22,uVar18);
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = fVar26 + fVar16;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = fVar26 + fVar16;
        *ppfVar2 = pfVar10;
      }
      uVar18 = NEON_fmadd(fVar30,uVar23,fVar34 * fVar24);
      fVar16 = (float)NEON_fmadd(fVar35,uVar15,uVar18);
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = fVar17 + fVar16;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = fVar17 + fVar16;
        *ppfVar2 = pfVar9;
      }
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = *param_2;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = *param_2;
        *ppfVar2 = pfVar10;
      }
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = param_2[1];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = param_2[1];
        *ppfVar2 = pfVar9;
      }
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = param_2[2];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = param_2[2];
        *ppfVar2 = pfVar10;
      }
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = param_2[3];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = param_2[3];
        *ppfVar2 = pfVar9;
      }
      fVar29 = fVar29 * param_6;
      fVar19 = fVar19 * param_6;
      fVar28 = fVar28 * param_6;
      uVar18 = NEON_fmadd(fVar28,uVar31,fVar29 * fVar20);
      fVar16 = (float)NEON_fmadd(fVar19,uVar32,uVar18);
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = fVar33 + fVar16;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = fVar33 + fVar16;
        *ppfVar2 = pfVar10;
      }
      uVar18 = NEON_fmadd(fVar28,uVar25,fVar29 * fVar14);
      fVar16 = (float)NEON_fmadd(fVar19,uVar22,uVar18);
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = fVar26 + fVar16;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = fVar26 + fVar16;
        *ppfVar2 = pfVar9;
      }
      uVar18 = NEON_fmadd(fVar28,uVar23,fVar29 * fVar24);
      fVar16 = (float)NEON_fmadd(fVar19,uVar15,uVar18);
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = fVar17 + fVar16;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = fVar17 + fVar16;
        *ppfVar2 = pfVar10;
      }
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = *param_2;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = *param_2;
        *ppfVar2 = pfVar9;
      }
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = param_2[1];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = param_2[1];
        *ppfVar2 = pfVar10;
      }
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = param_2[2];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = param_2[2];
        *ppfVar2 = pfVar9;
      }
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = param_2[3];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = param_2[3];
        *ppfVar2 = pfVar10;
      }
      fVar13 = fVar13 * param_6;
      fVar21 = fVar21 * param_6;
      fVar27 = fVar27 * param_6;
      uVar31 = NEON_fmadd(fVar27,uVar31,fVar13 * fVar20);
      fVar16 = (float)NEON_fmadd(fVar21,uVar32,uVar31);
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = fVar33 + fVar16;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = fVar33 + fVar16;
        *ppfVar2 = pfVar9;
      }
      uVar25 = NEON_fmadd(fVar27,uVar25,fVar13 * fVar14);
      fVar14 = (float)NEON_fmadd(fVar21,uVar22,uVar25);
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = fVar26 + fVar14;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = fVar26 + fVar14;
        *ppfVar2 = pfVar10;
      }
      uVar22 = NEON_fmadd(fVar27,uVar23,fVar13 * fVar24);
      fVar13 = (float)NEON_fmadd(fVar21,uVar15,uVar22);
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = fVar17 + fVar13;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = fVar17 + fVar13;
        *ppfVar2 = pfVar9;
      }
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = *param_2;
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = *param_2;
        *ppfVar2 = pfVar10;
      }
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar9 = pfVar6 + 1;
        *pfVar6 = param_2[1];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar9;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar9 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar9 = pfVar10 + 1;
        *pfVar10 = param_2[1];
        *ppfVar2 = pfVar9;
      }
      if (pfVar9 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_009f5d88;
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) goto LAB_009f5d90;
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        pfVar10 = pfVar6 + 1;
        *pfVar6 = param_2[2];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        pfVar6 = (float *)((long)pvVar5 + uVar4 * 4);
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar10;
        *ppfVar3 = pfVar6;
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
          pfVar10 = *ppfVar2;
          pfVar6 = *ppfVar3;
        }
      }
      else {
        pfVar10 = pfVar9 + 1;
        *pfVar9 = param_2[2];
        *ppfVar2 = pfVar10;
      }
      if (pfVar10 == pfVar6) {
        pvVar11 = *ppvVar1;
        uVar12 = (long)pfVar6 - (long)pvVar11;
        uVar4 = ((long)uVar12 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) {
LAB_009f5d88:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar4 <= (ulong)((long)uVar12 >> 1)) {
          uVar4 = (long)uVar12 >> 1;
        }
        if (0x7ffffffffffffffb < uVar12) {
          uVar4 = 0x3fffffffffffffff;
        }
        if (uVar4 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3e != 0) {
LAB_009f5d90:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar5 = operator_new(uVar4 << 2);
        }
        pfVar6 = (float *)((long)pvVar5 + ((long)uVar12 >> 2) * 4);
        *pfVar6 = param_2[3];
        if (0 < (long)uVar12) {
          memcpy(pvVar5,pvVar11,uVar12);
        }
        *ppvVar1 = pvVar5;
        *ppfVar2 = pfVar6 + 1;
        *ppfVar3 = (float *)((long)pvVar5 + uVar4 * 4);
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
        }
      }
      else {
        *pfVar10 = param_2[3];
        *ppfVar2 = pfVar10 + 1;
      }
      uVar7 = uVar7 + 3;
    } while ((ulong)param_5 + (ulong)param_5 * 2 != uVar7);
  }
  return;
}


