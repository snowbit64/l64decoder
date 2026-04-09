// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateCustomRenderJob
// Entry Point: 00a0930c
// Size: 572 bytes
// Signature: undefined __thiscall allocateCustomRenderJob(RenderController * this, RenderTextureSetup * param_1, CustomRenderJob * param_2, CullingArgs * param_3)


/* RenderController::allocateCustomRenderJob(RenderTextureSetup*,
   RenderController::CustomRenderJob*, CullingArgs const*) */

void __thiscall
RenderController::allocateCustomRenderJob
          (RenderController *this,RenderTextureSetup *param_1,CustomRenderJob *param_2,
          CullingArgs *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  CullingArgs **ppCVar8;
  ulong uVar9;
  void *pvVar10;
  size_t sVar11;
  long lVar12;
  CullingArgs *pCVar13;
  
  if (param_3 != (CullingArgs *)0x0) {
    uVar5 = (ulong)*(uint *)(this + ((ulong)*(uint *)(param_3 + 0x3a8) & 1) * 4 + 0x120);
    if (*(uint *)(this + ((ulong)*(uint *)(param_3 + 0x3a8) & 1) * 4 + 0x120) != 0) {
      ppCVar8 = *(CullingArgs ***)(this + ((ulong)*(uint *)(param_3 + 0x3a8) & 1) * 0x18 + 0xf0);
      do {
        pCVar13 = *ppCVar8;
        if (pCVar13 == param_3) goto LAB_00a09378;
        ppCVar8 = ppCVar8 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  pCVar13 = (CullingArgs *)0x0;
LAB_00a09378:
  pvVar10 = *(void **)(this + 0x178);
  puVar2 = *(undefined8 **)(this + 0x180);
  uVar5 = (ulong)*(uint *)(this + 400);
  sVar11 = (long)puVar2 - (long)pvVar10;
  if (uVar5 == (long)sVar11 >> 3) {
    puVar3 = (undefined4 *)operator_new(0x18);
    puVar6 = *(undefined8 **)(this + 0x188);
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *puVar3 = 1;
    if (puVar2 < puVar6) {
      *puVar2 = puVar3;
      *(undefined8 **)(this + 0x180) = puVar2 + 1;
    }
    else {
      uVar9 = (long)puVar6 - (long)pvVar10;
      uVar7 = (long)uVar9 >> 2;
      if (uVar7 < uVar5 + 1) {
        uVar7 = uVar5 + 1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar7 = 0x1fffffffffffffff;
      }
      if (uVar7 >> 0x3d != 0) goto LAB_00a0953c;
      pvVar4 = operator_new(uVar7 * 8);
      puVar2 = (undefined8 *)((long)pvVar4 + uVar5 * 8);
      *puVar2 = puVar3;
      if (0 < (long)sVar11) {
        memcpy(pvVar4,pvVar10,sVar11);
      }
      *(void **)(this + 0x178) = pvVar4;
      *(undefined8 **)(this + 0x180) = puVar2 + 1;
      *(void **)(this + 0x188) = (void *)((long)pvVar4 + uVar7 * 8);
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
        uVar5 = (ulong)*(uint *)(this + 400);
      }
    }
  }
  lVar12 = *(long *)(*(long *)(this + 0x178) + uVar5 * 8);
  *(int *)(this + 400) = (int)uVar5 + 1;
  *(CullingArgs **)(lVar12 + 8) = pCVar13;
  *(CustomRenderJob **)(lVar12 + 0x10) = param_2;
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 < *(long **)(param_1 + 0x88)) {
    *plVar1 = lVar12;
    *(long **)(param_1 + 0x80) = plVar1 + 1;
  }
  else {
    pvVar10 = *(void **)(param_1 + 0x78);
    sVar11 = (long)plVar1 - (long)pvVar10;
    uVar5 = ((long)sVar11 >> 3) + 1;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (long)*(long **)(param_1 + 0x88) - (long)pvVar10;
    uVar9 = (long)uVar7 >> 2;
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3d != 0) {
LAB_00a0953c:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar5 << 3);
    }
    plVar1 = (long *)((long)pvVar4 + ((long)sVar11 >> 3) * 8);
    *plVar1 = lVar12;
    if (0 < (long)sVar11) {
      memcpy(pvVar4,pvVar10,sVar11);
    }
    *(void **)(param_1 + 0x78) = pvVar4;
    *(long **)(param_1 + 0x80) = plVar1 + 1;
    *(void **)(param_1 + 0x88) = (void *)((long)pvVar4 + uVar5 * 8);
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
      return;
    }
  }
  return;
}


