// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateCullingJob
// Entry Point: 00a088cc
// Size: 688 bytes
// Signature: undefined __thiscall allocateCullingJob(RenderController * this, CullingArgs * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* RenderController::allocateCullingJob(CullingArgs const*, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int) */

CullingArgs * __thiscall
RenderController::allocateCullingJob
          (RenderController *this,CullingArgs *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6)

{
  uint uVar1;
  CullingArgs *pCVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  CullingArgs **ppCVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  void **ppvVar11;
  
  uVar7 = (ulong)(param_2 & 1);
  ppvVar11 = (void **)(this + uVar7 * 0x18 + 0xf0);
  plVar10 = (long *)(this + uVar7 * 0x18 + 0xf8);
  if ((ulong)*(uint *)(this + uVar7 * 4 + 0x120) == *plVar10 - (long)*ppvVar11 >> 3) {
    pCVar2 = (CullingArgs *)operator_new(2000);
                    /* try { // try from 00a0894c to 00a0894f has its CatchHandler @ 00a08b90 */
    CullingArgs::CullingArgs(pCVar2,*(SharedRenderArgs **)(this + 8));
                    /* try { // try from 00a08954 to 00a0895f has its CatchHandler @ 00a08b7c */
    RenderList::RenderList((RenderList *)(pCVar2 + 0x400),this,SUB41(param_2 & 1,0));
    ppCVar5 = (CullingArgs **)*plVar10;
    if (ppCVar5 < *(CullingArgs ***)(this + uVar7 * 0x18 + 0x100)) {
      *ppCVar5 = pCVar2;
      *plVar10 = (long)(ppCVar5 + 1);
    }
    else {
      pvVar8 = *ppvVar11;
      __n = (long)ppCVar5 - (long)pvVar8;
      uVar9 = ((long)__n >> 3) + 1;
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar4 = (long)*(CullingArgs ***)(this + uVar7 * 0x18 + 0x100) - (long)pvVar8;
      uVar6 = (long)uVar4 >> 2;
      if (uVar9 <= uVar6) {
        uVar9 = uVar6;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar9 >> 0x3d != 0) goto LAB_00a08b68;
        pvVar3 = operator_new(uVar9 << 3);
      }
      ppCVar5 = (CullingArgs **)((long)pvVar3 + ((long)__n >> 3) * 8);
      *ppCVar5 = pCVar2;
      if (0 < (long)__n) {
        memcpy(pvVar3,pvVar8,__n);
      }
      *ppvVar11 = pvVar3;
      *(void **)(this + uVar7 * 0x18 + 0x100) = (void *)((long)pvVar3 + uVar9 * 8);
      *plVar10 = (long)(ppCVar5 + 1);
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
    }
  }
  uVar1 = *(uint *)(this + uVar7 * 4 + 0x120);
  pCVar2 = *(CullingArgs **)((long)*ppvVar11 + (ulong)uVar1 * 8);
  *(uint *)(this + uVar7 * 4 + 0x120) = uVar1 + 1;
  CullingArgs::init(pCVar2,param_1,param_2,param_3,param_4,param_5,param_6);
  ppCVar5 = *(CullingArgs ***)(this + 0x130);
  if (ppCVar5 == *(CullingArgs ***)(this + 0x138)) {
    pvVar8 = *(void **)(this + 0x128);
    uVar9 = (long)ppCVar5 - (long)pvVar8;
    uVar7 = ((long)uVar9 >> 3) + 1;
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar7 <= (ulong)((long)uVar9 >> 2)) {
      uVar7 = (long)uVar9 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar7 >> 0x3d != 0) {
LAB_00a08b68:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar7 << 3);
    }
    ppCVar5 = (CullingArgs **)((long)pvVar3 + ((long)uVar9 >> 3) * 8);
    *ppCVar5 = pCVar2;
    if (0 < (long)uVar9) {
      memcpy(pvVar3,pvVar8,uVar9);
    }
    *(void **)(this + 0x128) = pvVar3;
    *(CullingArgs ***)(this + 0x130) = ppCVar5 + 1;
    *(void **)(this + 0x138) = (void *)((long)pvVar3 + uVar7 * 8);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  else {
    *ppCVar5 = pCVar2;
    *(CullingArgs ***)(this + 0x130) = ppCVar5 + 1;
  }
  return pCVar2;
}


