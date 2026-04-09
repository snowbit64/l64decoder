// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ReflectionRenderController::ReflectionMapRequest_const&>
// Entry Point: 00a25f4c
// Size: 496 bytes
// Signature: void __thiscall __push_back_slow_path<ReflectionRenderController::ReflectionMapRequest_const&>(vector<ReflectionRenderController::ReflectionMapRequest,std::__ndk1::allocator<ReflectionRenderController::ReflectionMapRequest>> * this, ReflectionMapRequest * param_1)


/* void std::__ndk1::vector<ReflectionRenderController::ReflectionMapRequest,
   std::__ndk1::allocator<ReflectionRenderController::ReflectionMapRequest>
   >::__push_back_slow_path<ReflectionRenderController::ReflectionMapRequest
   const&>(ReflectionRenderController::ReflectionMapRequest const&) */

void __thiscall
std::__ndk1::
vector<ReflectionRenderController::ReflectionMapRequest,std::__ndk1::allocator<ReflectionRenderController::ReflectionMapRequest>>
::__push_back_slow_path<ReflectionRenderController::ReflectionMapRequest_const&>
          (vector<ReflectionRenderController::ReflectionMapRequest,std::__ndk1::allocator<ReflectionRenderController::ReflectionMapRequest>>
           *this,ReflectionMapRequest *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 5;
  uVar11 = lVar10 * 0x5555555555555556;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0x155555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar1 = 0x2aaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x60);
  }
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  puVar13 = (undefined8 *)((long)pvVar5 + lVar8 * 0x20);
  puVar13[5] = *(undefined8 *)(param_1 + 0x28);
  puVar13[4] = uVar14;
  puVar13[7] = uVar16;
  puVar13[6] = uVar15;
  uVar17 = *(undefined8 *)(param_1 + 8);
  uVar16 = *(undefined8 *)param_1;
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(param_1 + 0x40);
  puVar13[1] = uVar17;
  *puVar13 = uVar16;
  puVar13[3] = uVar15;
  puVar13[2] = uVar14;
                    /* try { // try from 00a26030 to 00a26033 has its CatchHandler @ 00a2613c */
  vector<GsShape_const*,std::__ndk1::allocator<GsShape_const*>>::vector
            ((vector<GsShape_const*,std::__ndk1::allocator<GsShape_const*>> *)(puVar13 + 9),
             (vector *)(param_1 + 0x48));
  pvVar9 = *(void **)this;
  puVar2 = puVar13 + 0xc;
  pvVar6 = *(void **)(this + 8);
  pvVar12 = pvVar9;
  if (*(void **)(this + 8) != pvVar9) {
    do {
      uVar14 = *(undefined8 *)((long)pvVar6 + -0x60);
      pvVar12 = (void *)((long)pvVar6 + -0x60);
      puVar13[-0xb] = *(undefined8 *)((long)pvVar6 + -0x58);
      puVar13[-0xc] = uVar14;
      uVar15 = *(undefined8 *)((long)pvVar6 + -0x48);
      uVar14 = *(undefined8 *)((long)pvVar6 + -0x50);
      uVar17 = *(undefined8 *)((long)pvVar6 + -0x38);
      uVar16 = *(undefined8 *)((long)pvVar6 + -0x40);
      uVar19 = *(undefined8 *)((long)pvVar6 + -0x28);
      uVar18 = *(undefined8 *)((long)pvVar6 + -0x30);
      uVar3 = *(undefined4 *)((long)pvVar6 + -0x20);
      puVar13[-2] = 0;
      puVar13[-1] = 0;
      puVar13[-3] = 0;
      puVar13[-7] = uVar17;
      puVar13[-8] = uVar16;
      puVar13[-5] = uVar19;
      puVar13[-6] = uVar18;
      *(undefined4 *)(puVar13 + -4) = uVar3;
      puVar13[-9] = uVar15;
      puVar13[-10] = uVar14;
      puVar13[-3] = *(undefined8 *)((long)pvVar6 + -0x18);
      puVar13[-2] = *(undefined8 *)((long)pvVar6 + -0x10);
      puVar13[-1] = *(undefined8 *)((long)pvVar6 + -8);
      *(undefined8 *)((long)pvVar6 + -0x18) = 0;
      *(undefined8 *)((long)pvVar6 + -0x10) = 0;
      *(undefined8 *)((long)pvVar6 + -8) = 0;
      puVar13 = puVar13 + -0xc;
      pvVar6 = pvVar12;
    } while (pvVar12 != pvVar9);
    pvVar9 = *(void **)(this + 8);
    pvVar12 = *(void **)this;
  }
  *(undefined8 **)this = puVar13;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x60);
  while (pvVar5 = pvVar9, pvVar5 != pvVar12) {
    pvVar6 = *(void **)((long)pvVar5 + -0x18);
    pvVar9 = (void *)((long)pvVar5 + -0x60);
    if (pvVar6 != (void *)0x0) {
      *(void **)((long)pvVar5 + -0x10) = pvVar6;
      operator_delete(pvVar6);
    }
  }
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


