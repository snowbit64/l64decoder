// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTriangle
// Entry Point: 009f1f54
// Size: 4164 bytes
// Signature: undefined __thiscall addTriangle(DeferredDebugRenderer * this, float * param_1, float * param_2, float * param_3, float * param_4, float * param_5, float * param_6, CATEGORY param_7)


/* DeferredDebugRenderer::addTriangle(float const*, float const*, float const*, float const*, float
   const*, float const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addTriangle
          (DeferredDebugRenderer *this,float *param_1,float *param_2,float *param_3,float *param_4,
          float *param_5,float *param_6,CATEGORY param_7)

{
  ulong uVar1;
  void *pvVar2;
  float **ppfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float **ppfVar8;
  void *pvVar9;
  ulong uVar10;
  void **ppvVar11;
  
  if ((*(uint *)(this + 0x2a0) & param_7) != 0) {
    if (this[0x1fa] == (DeferredDebugRenderer)0x0) {
      if (this[0x1f8] != (DeferredDebugRenderer)0x0) {
        this = this + 0xf0;
      }
    }
    else {
      this = this + 0x168;
    }
    ppfVar8 = (float **)(this + 0x58);
    pfVar7 = *ppfVar8;
    ppvVar11 = (void **)(this + 0x48);
    ppfVar3 = (float **)(this + 0x50);
    pfVar4 = *ppfVar3;
    if (pfVar4 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar4 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = *param_1;
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar4 + 1;
      *pfVar4 = *param_1;
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = param_1[1];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = param_1[1];
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = param_1[2];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = param_1[2];
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = *param_2;
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = *param_2;
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = param_2[1];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = param_2[1];
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = param_2[2];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = param_2[2];
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = param_2[3];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = param_2[3];
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = *param_3;
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = *param_3;
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = param_3[1];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = param_3[1];
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = param_3[2];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = param_3[2];
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = *param_4;
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = *param_4;
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = param_4[1];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = param_4[1];
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = param_4[2];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = param_4[2];
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = param_4[3];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = param_4[3];
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = *param_5;
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = *param_5;
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = param_5[1];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = param_5[1];
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = param_5[2];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = param_5[2];
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = *param_6;
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = *param_6;
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = param_6[1];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar5;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar5 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar5 = pfVar6 + 1;
      *pfVar6 = param_6[1];
      *ppfVar3 = pfVar5;
    }
    if (pfVar5 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_009f2f84;
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_009f2f8c;
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar4 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      pfVar7 = (float *)((long)pvVar2 + uVar1 * 4);
      pfVar6 = pfVar4 + 1;
      *pfVar4 = param_6[2];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar6;
      *ppfVar8 = pfVar7;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        pfVar6 = *ppfVar3;
        pfVar7 = *ppfVar8;
      }
    }
    else {
      pfVar6 = pfVar5 + 1;
      *pfVar5 = param_6[2];
      *ppfVar3 = pfVar6;
    }
    if (pfVar6 == pfVar7) {
      pvVar9 = *ppvVar11;
      uVar10 = (long)pfVar7 - (long)pvVar9;
      uVar1 = ((long)uVar10 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
LAB_009f2f84:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)uVar10 >> 1)) {
        uVar1 = (long)uVar10 >> 1;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
LAB_009f2f8c:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar2 = operator_new(uVar1 << 2);
      }
      pfVar7 = (float *)((long)pvVar2 + ((long)uVar10 >> 2) * 4);
      *pfVar7 = param_6[3];
      if (0 < (long)uVar10) {
        memcpy(pvVar2,pvVar9,uVar10);
      }
      *ppvVar11 = pvVar2;
      *ppfVar3 = pfVar7 + 1;
      *ppfVar8 = (float *)((long)pvVar2 + uVar1 * 4);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        return;
      }
    }
    else {
      *pfVar6 = param_6[3];
      *ppfVar3 = pfVar6 + 1;
    }
  }
  return;
}


