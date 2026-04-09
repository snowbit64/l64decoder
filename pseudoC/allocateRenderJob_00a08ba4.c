// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateRenderJob
// Entry Point: 00a08ba4
// Size: 856 bytes
// Signature: undefined __thiscall allocateRenderJob(RenderController * this, RenderTextureSetup * param_1, uint param_2, float * param_3, INFO_RENDERING param_4, char * param_5, CullingArgs * param_6)


/* RenderController::allocateRenderJob(RenderTextureSetup*, unsigned int, float const*,
   RenderArgs::INFO_RENDERING, char const*, CullingArgs const*) */

long __thiscall
RenderController::allocateRenderJob
          (RenderController *this,RenderTextureSetup *param_1,uint param_2,float *param_3,
          INFO_RENDERING param_4,char *param_5,CullingArgs *param_6)

{
  void **ppvVar1;
  undefined8 *puVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  SharedRenderArgs *pSVar11;
  ulong uVar12;
  ulong uVar13;
  CullingArgs **ppCVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  void *pvVar18;
  size_t sVar19;
  CullingArgs *pCVar20;
  long lVar21;
  
  uVar17 = (ulong)*(uint *)(param_6 + 0x3a8) & 1;
  uVar12 = (ulong)*(uint *)(this + uVar17 * 4 + 0x120);
  if (*(uint *)(this + uVar17 * 4 + 0x120) != 0) {
    ppCVar14 = *(CullingArgs ***)(this + uVar17 * 0x18 + 0xf0);
    do {
      pCVar20 = *ppCVar14;
      if (pCVar20 == param_6) goto LAB_00a08c14;
      ppCVar14 = ppCVar14 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  pCVar20 = (CullingArgs *)0x0;
LAB_00a08c14:
  ppvVar1 = (void **)(this + uVar17 * 0x18 + 0x140);
  if ((ulong)*(uint *)(this + uVar17 * 4 + 0x170) ==
      *(long *)(this + uVar17 * 0x18 + 0x148) - *(long *)(this + uVar17 * 0x18 + 0x140) >> 3) {
    puVar7 = (undefined4 *)operator_new(0x7a0);
    pSVar11 = *(SharedRenderArgs **)(this + 8);
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
                    /* try { // try from 00a08c5c to 00a08c5f has its CatchHandler @ 00a08f14 */
    RenderArgs::RenderArgs((RenderArgs *)(puVar7 + 4),pSVar11);
                    /* try { // try from 00a08c68 to 00a08c73 has its CatchHandler @ 00a08efc */
    RenderQueue::RenderQueue((RenderQueue *)(puVar7 + 0x16c),this,SUB81(uVar17,0));
    puVar2 = (undefined8 *)(this + uVar17 * 0x18 + 0x148);
    puVar15 = (undefined8 *)*puVar2;
    if (puVar15 < *(undefined8 **)(this + uVar17 * 0x18 + 0x150)) {
      *puVar15 = puVar7;
      *puVar2 = puVar15 + 1;
    }
    else {
      pvVar18 = *ppvVar1;
      sVar19 = (long)puVar15 - (long)pvVar18;
      uVar12 = ((long)sVar19 >> 3) + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar13 = (long)*(undefined8 **)(this + uVar17 * 0x18 + 0x150) - (long)pvVar18;
      uVar16 = (long)uVar13 >> 2;
      if (uVar12 <= uVar16) {
        uVar12 = uVar16;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) goto LAB_00a08ee8;
        pvVar10 = operator_new(uVar12 << 3);
      }
      puVar15 = (undefined8 *)((long)pvVar10 + ((long)sVar19 >> 3) * 8);
      *puVar15 = puVar7;
      if (0 < (long)sVar19) {
        memcpy(pvVar10,pvVar18,sVar19);
      }
      *(void **)(this + uVar17 * 0x18 + 0x150) = (void *)((long)pvVar10 + uVar12 * 8);
      *ppvVar1 = pvVar10;
      *puVar2 = puVar15 + 1;
      if (pvVar18 != (void *)0x0) {
        operator_delete(pvVar18);
      }
    }
  }
  uVar6 = *(uint *)(this + uVar17 * 4 + 0x170);
  lVar21 = *(long *)((long)*ppvVar1 + (ulong)uVar6 * 8);
  *(uint *)(this + uVar17 * 4 + 0x170) = uVar6 + 1;
  RenderArgs::init((uint)(lVar21 + 0x10),(float *)(ulong)param_2,(INFO_RENDERING)param_3,
                   (char *)(ulong)param_4);
  pplVar3 = (long **)(param_1 + 0x58);
  if (*(int *)(param_1 + 0xc) != 0) {
    pplVar3 = (long **)(param_1 + 0x10);
  }
  uVar6 = (**(code **)(**pplVar3 + 0x58))();
  *(uint *)(lVar21 + 0x3e0) = uVar6;
  uVar8 = getAlphaMaskBuffer(this,uVar6,2);
  *(undefined8 *)(lVar21 + 0x3d8) = uVar8;
  lVar9 = EngineManager::getInstance();
  *(CullingArgs **)(lVar21 + 8) = pCVar20;
  plVar4 = *(long **)(param_1 + 0x80);
  plVar5 = *(long **)(param_1 + 0x88);
  *(undefined4 *)(lVar21 + 0x3e4) = *(undefined4 *)(lVar9 + 600);
  if (plVar4 < plVar5) {
    *plVar4 = lVar21;
    *(long **)(param_1 + 0x80) = plVar4 + 1;
  }
  else {
    pvVar18 = *(void **)(param_1 + 0x78);
    sVar19 = (long)plVar4 - (long)pvVar18;
    uVar12 = ((long)sVar19 >> 3) + 1;
    if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar13 = (long)plVar5 - (long)pvVar18;
    uVar16 = (long)uVar13 >> 2;
    if (uVar12 <= uVar16) {
      uVar12 = uVar16;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar12 >> 0x3d != 0) {
LAB_00a08ee8:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar10 = operator_new(uVar12 << 3);
    }
    plVar4 = (long *)((long)pvVar10 + ((long)sVar19 >> 3) * 8);
    *plVar4 = lVar21;
    if (0 < (long)sVar19) {
      memcpy(pvVar10,pvVar18,sVar19);
    }
    *(void **)(param_1 + 0x78) = pvVar10;
    *(long **)(param_1 + 0x80) = plVar4 + 1;
    *(void **)(param_1 + 0x88) = (void *)((long)pvVar10 + uVar12 * 8);
    if (pvVar18 != (void *)0x0) {
      operator_delete(pvVar18);
    }
  }
  param_1[0xa9] = (RenderTextureSetup)((byte)param_1[0xa9] | SUB81(uVar17,0));
  return lVar21 + 0x10;
}


