// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTrianglesScreenSpace
// Entry Point: 009fb788
// Size: 1448 bytes
// Signature: undefined __thiscall addTrianglesScreenSpace(DeferredDebugRenderer * this, float * param_1, float * param_2, uint param_3, CATEGORY param_4)


/* DeferredDebugRenderer::addTrianglesScreenSpace(float const*, float const*, unsigned int,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addTrianglesScreenSpace
          (DeferredDebugRenderer *this,float *param_1,float *param_2,uint param_3,CATEGORY param_4)

{
  void **ppvVar1;
  ulong uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  float *pfVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  uint uVar11;
  
  if (((*(uint *)(this + 0x2a0) & param_4) != 0 && this[0x1fa] == (DeferredDebugRenderer)0x0) &&
      param_3 * 6 != 0) {
    uVar10 = 0;
    uVar11 = 0;
    ppvVar1 = (void **)(this + 0xc0);
    do {
      pfVar9 = *(float **)(this + 200);
      pfVar5 = *(float **)(this + 0xd0);
      if (pfVar9 == pfVar5) {
        pvVar6 = *ppvVar1;
        uVar7 = (long)pfVar9 - (long)pvVar6;
        uVar2 = ((long)uVar7 >> 2) + 1;
        if (uVar2 >> 0x3e != 0) goto LAB_009fbd1c;
        if (uVar2 <= (ulong)((long)uVar7 >> 1)) {
          uVar2 = (long)uVar7 >> 1;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar2 = 0x3fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3e != 0) goto LAB_009fbd24;
          pvVar4 = operator_new(uVar2 << 2);
        }
        pfVar5 = (float *)((long)pvVar4 + ((long)uVar7 >> 2) * 4);
        pfVar8 = pfVar5 + 1;
        *pfVar5 = param_1[uVar10];
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar6,uVar7);
        }
        pfVar5 = (float *)((long)pvVar4 + uVar2 * 4);
        *(void **)(this + 0xc0) = pvVar4;
        *(float **)(this + 200) = pfVar8;
        *(float **)(this + 0xd0) = pfVar5;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
          pfVar8 = *(float **)(this + 200);
          pfVar5 = *(float **)(this + 0xd0);
        }
      }
      else {
        pfVar8 = pfVar9 + 1;
        *pfVar9 = param_1[uVar10];
        *(float **)(this + 200) = pfVar8;
      }
      if (pfVar8 == pfVar5) {
        pvVar6 = *ppvVar1;
        uVar7 = (long)pfVar5 - (long)pvVar6;
        uVar2 = ((long)uVar7 >> 2) + 1;
        if (uVar2 >> 0x3e != 0) goto LAB_009fbd1c;
        if (uVar2 <= (ulong)((long)uVar7 >> 1)) {
          uVar2 = (long)uVar7 >> 1;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar2 = 0x3fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3e != 0) goto LAB_009fbd24;
          pvVar4 = operator_new(uVar2 << 2);
        }
        pfVar5 = (float *)((long)pvVar4 + ((long)uVar7 >> 2) * 4);
        pfVar9 = pfVar5 + 1;
        *pfVar5 = param_1[uVar10 + 1];
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar6,uVar7);
        }
        pfVar5 = (float *)((long)pvVar4 + uVar2 * 4);
        *(void **)(this + 0xc0) = pvVar4;
        *(float **)(this + 200) = pfVar9;
        *(float **)(this + 0xd0) = pfVar5;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
          pfVar9 = *(float **)(this + 200);
          pfVar5 = *(float **)(this + 0xd0);
        }
      }
      else {
        pfVar9 = pfVar8 + 1;
        *pfVar8 = param_1[uVar10 + 1];
        *(float **)(this + 200) = pfVar9;
      }
      if (pfVar9 < pfVar5) {
        pfVar8 = pfVar9 + 1;
        *pfVar9 = 0.01;
        *(float **)(this + 200) = pfVar8;
      }
      else {
        pvVar6 = *ppvVar1;
        __n = (long)pfVar9 - (long)pvVar6;
        uVar2 = ((long)__n >> 2) + 1;
        if (uVar2 >> 0x3e != 0) goto LAB_009fbd1c;
        uVar7 = (long)pfVar5 - (long)pvVar6 >> 1;
        if (uVar2 <= uVar7) {
          uVar2 = uVar7;
        }
        if (0x7ffffffffffffffb < (ulong)((long)pfVar5 - (long)pvVar6)) {
          uVar2 = 0x3fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3e != 0) goto LAB_009fbd24;
          pvVar4 = operator_new(uVar2 << 2);
        }
        puVar3 = (undefined4 *)((long)pvVar4 + ((long)__n >> 2) * 4);
        pfVar8 = (float *)(puVar3 + 1);
        *puVar3 = 0x3c23d70a;
        if (0 < (long)__n) {
          memcpy(pvVar4,pvVar6,__n);
        }
        pfVar5 = (float *)((long)pvVar4 + uVar2 * 4);
        *(void **)(this + 0xc0) = pvVar4;
        *(float **)(this + 200) = pfVar8;
        *(float **)(this + 0xd0) = pfVar5;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
          pfVar8 = *(float **)(this + 200);
          pfVar5 = *(float **)(this + 0xd0);
        }
      }
      if (pfVar8 == pfVar5) {
        pvVar6 = *ppvVar1;
        uVar7 = (long)pfVar5 - (long)pvVar6;
        uVar2 = ((long)uVar7 >> 2) + 1;
        if (uVar2 >> 0x3e != 0) goto LAB_009fbd1c;
        if (uVar2 <= (ulong)((long)uVar7 >> 1)) {
          uVar2 = (long)uVar7 >> 1;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar2 = 0x3fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3e != 0) goto LAB_009fbd24;
          pvVar4 = operator_new(uVar2 << 2);
        }
        pfVar5 = (float *)((long)pvVar4 + ((long)uVar7 >> 2) * 4);
        pfVar9 = pfVar5 + 1;
        *pfVar5 = param_2[uVar11];
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar6,uVar7);
        }
        pfVar5 = (float *)((long)pvVar4 + uVar2 * 4);
        *(void **)(this + 0xc0) = pvVar4;
        *(float **)(this + 200) = pfVar9;
        *(float **)(this + 0xd0) = pfVar5;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
          pfVar9 = *(float **)(this + 200);
          pfVar5 = *(float **)(this + 0xd0);
        }
      }
      else {
        pfVar9 = pfVar8 + 1;
        *pfVar8 = param_2[uVar11];
        *(float **)(this + 200) = pfVar9;
      }
      if (pfVar9 == pfVar5) {
        pvVar6 = *ppvVar1;
        uVar7 = (long)pfVar5 - (long)pvVar6;
        uVar2 = ((long)uVar7 >> 2) + 1;
        if (uVar2 >> 0x3e != 0) goto LAB_009fbd1c;
        if (uVar2 <= (ulong)((long)uVar7 >> 1)) {
          uVar2 = (long)uVar7 >> 1;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar2 = 0x3fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3e != 0) goto LAB_009fbd24;
          pvVar4 = operator_new(uVar2 << 2);
        }
        pfVar5 = (float *)((long)pvVar4 + ((long)uVar7 >> 2) * 4);
        pfVar8 = pfVar5 + 1;
        *pfVar5 = param_2[uVar11 + 1];
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar6,uVar7);
        }
        pfVar5 = (float *)((long)pvVar4 + uVar2 * 4);
        *(void **)(this + 0xc0) = pvVar4;
        *(float **)(this + 200) = pfVar8;
        *(float **)(this + 0xd0) = pfVar5;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
          pfVar8 = *(float **)(this + 200);
          pfVar5 = *(float **)(this + 0xd0);
        }
      }
      else {
        pfVar8 = pfVar9 + 1;
        *pfVar9 = param_2[uVar11 + 1];
        *(float **)(this + 200) = pfVar8;
      }
      if (pfVar8 == pfVar5) {
        pvVar6 = *ppvVar1;
        uVar7 = (long)pfVar5 - (long)pvVar6;
        uVar2 = ((long)uVar7 >> 2) + 1;
        if (uVar2 >> 0x3e != 0) goto LAB_009fbd1c;
        if (uVar2 <= (ulong)((long)uVar7 >> 1)) {
          uVar2 = (long)uVar7 >> 1;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar2 = 0x3fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3e != 0) goto LAB_009fbd24;
          pvVar4 = operator_new(uVar2 << 2);
        }
        pfVar5 = (float *)((long)pvVar4 + ((long)uVar7 >> 2) * 4);
        pfVar9 = pfVar5 + 1;
        *pfVar5 = param_2[uVar11 + 2];
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar6,uVar7);
        }
        pfVar5 = (float *)((long)pvVar4 + uVar2 * 4);
        *(void **)(this + 0xc0) = pvVar4;
        *(float **)(this + 200) = pfVar9;
        *(float **)(this + 0xd0) = pfVar5;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
          pfVar9 = *(float **)(this + 200);
          pfVar5 = *(float **)(this + 0xd0);
        }
      }
      else {
        pfVar9 = pfVar8 + 1;
        *pfVar8 = param_2[uVar11 + 2];
        *(float **)(this + 200) = pfVar9;
      }
      if (pfVar9 == pfVar5) {
        pvVar6 = *ppvVar1;
        uVar7 = (long)pfVar5 - (long)pvVar6;
        uVar2 = ((long)uVar7 >> 2) + 1;
        if (uVar2 >> 0x3e != 0) {
LAB_009fbd1c:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar2 <= (ulong)((long)uVar7 >> 1)) {
          uVar2 = (long)uVar7 >> 1;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar2 = 0x3fffffffffffffff;
        }
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar2 >> 0x3e != 0) {
LAB_009fbd24:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar4 = operator_new(uVar2 << 2);
        }
        pfVar5 = (float *)((long)pvVar4 + ((long)uVar7 >> 2) * 4);
        *pfVar5 = param_2[uVar11 + 3];
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar6,uVar7);
        }
        *(void **)(this + 0xc0) = pvVar4;
        *(float **)(this + 200) = pfVar5 + 1;
        *(void **)(this + 0xd0) = (void *)((long)pvVar4 + uVar2 * 4);
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
      }
      else {
        *pfVar9 = param_2[uVar11 + 3];
        *(float **)(this + 200) = pfVar9 + 1;
      }
      uVar10 = uVar10 + 2;
      uVar11 = uVar11 + 4;
    } while (uVar10 < param_3 * 6);
  }
  return;
}


