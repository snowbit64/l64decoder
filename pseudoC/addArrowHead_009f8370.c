// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addArrowHead
// Entry Point: 009f8370
// Size: 8300 bytes
// Signature: undefined __thiscall addArrowHead(DeferredDebugRenderer * this, Vector3 * param_1, Vector3 * param_2, float param_3, float param_4, float param_5, uint param_6, float * param_7, Matrix4x4 * param_8)


/* DeferredDebugRenderer::addArrowHead(Vector3&, Vector3&, float, float, float, unsigned int, float
   const*, Matrix4x4 const&) */

void __thiscall
DeferredDebugRenderer::addArrowHead
          (DeferredDebugRenderer *this,Vector3 *param_1,Vector3 *param_2,float param_3,float param_4
          ,float param_5,uint param_6,float *param_7,Matrix4x4 *param_8)

{
  uint uVar1;
  uint uVar2;
  void **ppvVar3;
  float **ppfVar4;
  float **ppfVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 uVar9;
  void *pvVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  void *pvVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0 [4];
  float local_c0 [4];
  long local_b0;
  
  uVar1 = param_6 + 1;
  uVar2 = param_6 + 2;
  lVar8 = tpidr_el0;
  uVar12 = 0;
  uVar1 = uVar1 - (uVar1 / 3 + ((uint)((ulong)uVar1 * 0xaaaaaaab >> 0x20) & 0xfffffffe));
  uVar2 = uVar2 - (uVar2 / 3 + ((uint)((ulong)uVar2 * 0xaaaaaaab >> 0x20) & 0xfffffffe));
  local_b0 = *(long *)(lVar8 + 0x28);
  ppvVar3 = (void **)(this + 0x138);
  ppfVar4 = (float **)(this + 0x140);
  ppfVar5 = (float **)(this + 0x148);
  do {
    sincosf((float)(ulong)uVar12 * 0.3926991,&local_d4,&local_d8);
    fVar23 = local_d4;
    fVar32 = local_d8 * param_5;
    sincosf((float)(ulong)uVar12 * 0.3926991 + 0.3926991,&fStack_dc,&local_e0);
    local_c0[param_6] = param_3;
    pfVar13 = *ppfVar4;
    local_c0[uVar1] = fVar32;
    local_c0[uVar2] = fVar23 * param_5;
    uVar20 = local_c0[2];
    fVar21 = local_c0[1];
    fVar19 = local_c0[0];
    fVar22 = *(float *)(param_8 + 0x10);
    fVar36 = *(float *)(param_8 + 0x14);
    uVar26 = *(undefined4 *)param_8;
    uVar35 = *(undefined4 *)(param_8 + 4);
    uVar30 = *(undefined4 *)(param_8 + 0x20);
    uVar33 = *(undefined4 *)(param_8 + 0x24);
    fVar31 = *(float *)(param_8 + 0x30);
    fVar34 = *(float *)(param_8 + 0x34);
    fVar23 = local_c0[1] * fVar22;
    local_d0[param_6] = param_3;
    local_d0[uVar1] = local_e0 * param_5;
    pfVar11 = *ppfVar5;
    uVar24 = NEON_fmadd(fVar19,uVar26,fVar23);
    uVar27 = *(undefined4 *)(param_8 + 8);
    local_d0[uVar2] = fStack_dc * param_5;
    uVar9 = local_d0[2];
    fVar32 = local_d0[1];
    fVar23 = local_d0[0];
    fVar28 = *(float *)(param_8 + 0x18);
    fVar25 = (float)NEON_fmadd(uVar20,uVar30,uVar24);
    uVar24 = *(undefined4 *)(param_8 + 0x28);
    fVar25 = fVar25 + fVar31;
    fVar29 = *(float *)(param_8 + 0x38);
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar13 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = fVar25;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = fVar25;
      *ppfVar4 = pfVar14;
    }
    uVar17 = NEON_fmadd(fVar19,uVar35,fVar21 * fVar36);
    fVar18 = (float)NEON_fmadd(uVar20,uVar33,uVar17);
    fVar18 = fVar34 + fVar18;
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = fVar18;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = fVar18;
      *ppfVar4 = pfVar13;
    }
    uVar17 = NEON_fmadd(fVar19,uVar27,fVar21 * fVar28);
    fVar19 = (float)NEON_fmadd(uVar20,uVar24,uVar17);
    fVar19 = fVar29 + fVar19;
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = fVar19;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = fVar19;
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = *param_7;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = *param_7;
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[1];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[1];
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = param_7[2];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = param_7[2];
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[3];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[3];
      *ppfVar4 = pfVar14;
    }
    uVar20 = NEON_fmadd(fVar23,uVar26,fVar22 * fVar32);
    fVar21 = (float)NEON_fmadd(uVar9,uVar30,uVar20);
    fVar31 = fVar31 + fVar21;
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = fVar31;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = fVar31;
      *ppfVar4 = pfVar13;
    }
    uVar20 = NEON_fmadd(fVar23,uVar35,fVar36 * fVar32);
    fVar21 = (float)NEON_fmadd(uVar9,uVar33,uVar20);
    fVar34 = fVar34 + fVar21;
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = fVar34;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = fVar34;
      *ppfVar4 = pfVar14;
    }
    uVar20 = NEON_fmadd(fVar23,uVar27,fVar28 * fVar32);
    fVar23 = (float)NEON_fmadd(uVar9,uVar24,uVar20);
    fVar29 = fVar29 + fVar23;
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = fVar29;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = fVar29;
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = *param_7;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = *param_7;
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = param_7[1];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = param_7[1];
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[2];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[2];
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = param_7[3];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = param_7[3];
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      puVar7 = (undefined4 *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = (float *)(puVar7 + 1);
      *puVar7 = *(undefined4 *)param_2;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = *(float *)param_2;
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      puVar7 = (undefined4 *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = (float *)(puVar7 + 1);
      *puVar7 = *(undefined4 *)(param_2 + 4);
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = *(float *)(param_2 + 4);
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      puVar7 = (undefined4 *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = (float *)(puVar7 + 1);
      *puVar7 = *(undefined4 *)(param_2 + 8);
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = *(float *)(param_2 + 8);
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = *param_7;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = *param_7;
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[1];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[1];
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = param_7[2];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = param_7[2];
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[3];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[3];
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = fVar25;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = fVar25;
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = fVar18;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = fVar18;
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = fVar19;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = fVar19;
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = *param_7;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = *param_7;
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = param_7[1];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = param_7[1];
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[2];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[2];
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = param_7[3];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = param_7[3];
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      puVar7 = (undefined4 *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = (float *)(puVar7 + 1);
      *puVar7 = *(undefined4 *)param_1;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = *(float *)param_1;
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      puVar7 = (undefined4 *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = (float *)(puVar7 + 1);
      *puVar7 = *(undefined4 *)(param_1 + 4);
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = *(float *)(param_1 + 4);
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      puVar7 = (undefined4 *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = (float *)(puVar7 + 1);
      *puVar7 = *(undefined4 *)(param_1 + 8);
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = *(float *)(param_1 + 8);
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = *param_7;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = *param_7;
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[1];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[1];
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = param_7[2];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = param_7[2];
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[3];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[3];
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = fVar31;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = fVar31;
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = fVar34;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = fVar34;
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = fVar29;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = fVar29;
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = *param_7;
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = *param_7;
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar13 = pfVar11 + 1;
      *pfVar11 = param_7[1];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar13;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar13 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar13 = pfVar14 + 1;
      *pfVar14 = param_7[1];
      *ppfVar4 = pfVar13;
    }
    if (pfVar13 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) goto LAB_009fa3c4;
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) goto LAB_009fa3cc;
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      pfVar14 = pfVar11 + 1;
      *pfVar11 = param_7[2];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      pfVar11 = (float *)((long)pvVar10 + uVar6 * 4);
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar14;
      *ppfVar5 = pfVar11;
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
        pfVar14 = *ppfVar4;
        pfVar11 = *ppfVar5;
      }
    }
    else {
      pfVar14 = pfVar13 + 1;
      *pfVar13 = param_7[2];
      *ppfVar4 = pfVar14;
    }
    if (pfVar14 == pfVar11) {
      pvVar15 = *ppvVar3;
      uVar16 = (long)pfVar11 - (long)pvVar15;
      uVar6 = ((long)uVar16 >> 2) + 1;
      if (uVar6 >> 0x3e != 0) {
LAB_009fa3c4:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar6 <= (ulong)((long)uVar16 >> 1)) {
        uVar6 = (long)uVar16 >> 1;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3e != 0) {
LAB_009fa3cc:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar10 = operator_new(uVar6 << 2);
      }
      pfVar11 = (float *)((long)pvVar10 + ((long)uVar16 >> 2) * 4);
      *pfVar11 = param_7[3];
      if (0 < (long)uVar16) {
        memcpy(pvVar10,pvVar15,uVar16);
      }
      *ppvVar3 = pvVar10;
      *ppfVar4 = pfVar11 + 1;
      *ppfVar5 = (float *)((long)pvVar10 + uVar6 * 4);
      if (pvVar15 != (void *)0x0) {
        operator_delete(pvVar15);
      }
    }
    else {
      *pfVar14 = param_7[3];
      *ppfVar4 = pfVar14 + 1;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 0x10) {
      if (*(long *)(lVar8 + 0x28) == local_b0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


