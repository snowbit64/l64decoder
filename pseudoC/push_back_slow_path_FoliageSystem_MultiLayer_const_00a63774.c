// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageSystem::MultiLayer_const&>
// Entry Point: 00a63774
// Size: 496 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageSystem::MultiLayer_const&>(vector<FoliageSystem::MultiLayer,std::__ndk1::allocator<FoliageSystem::MultiLayer>> * this, MultiLayer * param_1)


/* void std::__ndk1::vector<FoliageSystem::MultiLayer,
   std::__ndk1::allocator<FoliageSystem::MultiLayer>
   >::__push_back_slow_path<FoliageSystem::MultiLayer const&>(FoliageSystem::MultiLayer const&) */

void __thiscall
std::__ndk1::vector<FoliageSystem::MultiLayer,std::__ndk1::allocator<FoliageSystem::MultiLayer>>::
__push_back_slow_path<FoliageSystem::MultiLayer_const&>
          (vector<FoliageSystem::MultiLayer,std::__ndk1::allocator<FoliageSystem::MultiLayer>> *this
          ,MultiLayer *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar12 = lVar10 * 0x5555555555555556;
  if (uVar1 <= uVar12) {
    uVar1 = uVar12;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x30);
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  puVar14 = (undefined8 *)((long)pvVar5 + lVar7 * 0x10);
  *puVar14 = *(undefined8 *)param_1;
  *(undefined4 *)(puVar14 + 1) = uVar3;
                    /* try { // try from 00a63854 to 00a63857 has its CatchHandler @ 00a63964 */
  vector<FoliageSystem::Layer,std::__ndk1::allocator<FoliageSystem::Layer>>::vector
            ((vector<FoliageSystem::Layer,std::__ndk1::allocator<FoliageSystem::Layer>> *)
             (puVar14 + 2),(vector *)(param_1 + 0x10));
  puVar2 = puVar14 + 6;
  puVar8 = *(undefined8 **)this;
  puVar9 = *(undefined8 **)(this + 8);
  *(undefined8 *)((long)pvVar5 + lVar7 * 0x10 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  puVar13 = puVar8;
  if (puVar9 != puVar8) {
    do {
      puVar13 = puVar9 + -6;
      uVar11 = *puVar13;
      uVar3 = *(undefined4 *)(puVar9 + -5);
      puVar14[-3] = 0;
      puVar14[-2] = 0;
      puVar14[-4] = 0;
      puVar14[-6] = uVar11;
      *(undefined4 *)(puVar14 + -5) = uVar3;
      puVar14[-4] = puVar9[-4];
      puVar14[-3] = puVar9[-3];
      puVar14[-2] = puVar9[-2];
      puVar9[-4] = 0;
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      puVar14[-1] = puVar9[-1];
      puVar14 = puVar14 + -6;
      puVar9 = puVar13;
    } while (puVar13 != puVar8);
    puVar8 = *(undefined8 **)(this + 8);
    puVar13 = *(undefined8 **)this;
  }
  *(undefined8 **)this = puVar14;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x30);
  while (puVar2 = puVar8, puVar2 != puVar13) {
    pvVar5 = (void *)puVar2[-4];
    puVar8 = puVar2 + -6;
    if (pvVar5 != (void *)0x0) {
      puVar2[-3] = pvVar5;
      operator_delete(pvVar5);
    }
  }
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


