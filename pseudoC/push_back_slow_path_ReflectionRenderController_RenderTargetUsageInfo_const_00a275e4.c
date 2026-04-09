// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ReflectionRenderController::RenderTargetUsageInfo_const&>
// Entry Point: 00a275e4
// Size: 464 bytes
// Signature: void __thiscall __push_back_slow_path<ReflectionRenderController::RenderTargetUsageInfo_const&>(vector<ReflectionRenderController::RenderTargetUsageInfo,std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>> * this, RenderTargetUsageInfo * param_1)


/* void std::__ndk1::vector<ReflectionRenderController::RenderTargetUsageInfo,
   std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>
   >::__push_back_slow_path<ReflectionRenderController::RenderTargetUsageInfo
   const&>(ReflectionRenderController::RenderTargetUsageInfo const&) */

void __thiscall
std::__ndk1::
vector<ReflectionRenderController::RenderTargetUsageInfo,std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>>
::__push_back_slow_path<ReflectionRenderController::RenderTargetUsageInfo_const&>
          (vector<ReflectionRenderController::RenderTargetUsageInfo,std::__ndk1::allocator<ReflectionRenderController::RenderTargetUsageInfo>>
           *this,RenderTargetUsageInfo *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar11 = lVar10 * 0x5555555555555556;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x30);
  }
  uVar14 = *(undefined8 *)param_1;
  puVar13 = (undefined8 *)((long)pvVar4 + lVar7 * 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puVar13[1] = *(undefined8 *)(param_1 + 8);
  *puVar13 = uVar14;
  puVar13[2] = uVar8;
                    /* try { // try from 00a276bc to 00a276bf has its CatchHandler @ 00a277b4 */
  vector<ReflectionRenderController::Rect,std::__ndk1::allocator<ReflectionRenderController::Rect>>
  ::vector((vector<ReflectionRenderController::Rect,std::__ndk1::allocator<ReflectionRenderController::Rect>>
            *)(puVar13 + 3),(vector *)(param_1 + 0x18));
  pvVar9 = *(void **)this;
  puVar2 = puVar13 + 6;
  pvVar5 = *(void **)(this + 8);
  pvVar12 = pvVar9;
  if (*(void **)(this + 8) != pvVar9) {
    do {
      uVar15 = *(undefined8 *)((long)pvVar5 + -0x28);
      uVar14 = *(undefined8 *)((long)pvVar5 + -0x30);
      pvVar12 = (void *)((long)pvVar5 + -0x30);
      uVar8 = *(undefined8 *)((long)pvVar5 + -0x20);
      puVar13[-2] = 0;
      puVar13[-1] = 0;
      puVar13[-5] = uVar15;
      puVar13[-6] = uVar14;
      puVar13[-4] = uVar8;
      puVar13[-3] = 0;
      puVar13[-3] = *(undefined8 *)((long)pvVar5 + -0x18);
      puVar13[-2] = *(undefined8 *)((long)pvVar5 + -0x10);
      puVar13[-1] = *(undefined8 *)((long)pvVar5 + -8);
      *(undefined8 *)((long)pvVar5 + -0x18) = 0;
      *(undefined8 *)((long)pvVar5 + -0x10) = 0;
      *(undefined8 *)((long)pvVar5 + -8) = 0;
      puVar13 = puVar13 + -6;
      pvVar5 = pvVar12;
    } while (pvVar12 != pvVar9);
    pvVar9 = *(void **)(this + 8);
    pvVar12 = *(void **)this;
  }
  *(undefined8 **)this = puVar13;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x30);
  while (pvVar4 = pvVar9, pvVar4 != pvVar12) {
    pvVar5 = *(void **)((long)pvVar4 + -0x18);
    pvVar9 = (void *)((long)pvVar4 + -0x30);
    if (pvVar5 != (void *)0x0) {
      *(void **)((long)pvVar4 + -0x10) = pvVar5;
      operator_delete(pvVar5);
    }
  }
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


