// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageLayerGraphics::Shape_const&>
// Entry Point: 00a620c8
// Size: 408 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageLayerGraphics::Shape_const&>(vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>> * this, Shape * param_1)


/* void std::__ndk1::vector<FoliageLayerGraphics::Shape,
   std::__ndk1::allocator<FoliageLayerGraphics::Shape>
   >::__push_back_slow_path<FoliageLayerGraphics::Shape const&>(FoliageLayerGraphics::Shape const&)
    */

void __thiscall
std::__ndk1::vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
::__push_back_slow_path<FoliageLayerGraphics::Shape_const&>
          (vector<FoliageLayerGraphics::Shape,std::__ndk1::allocator<FoliageLayerGraphics::Shape>>
           *this,Shape *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar11 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = *(long *)(this + 0x10) - *(long *)this;
  uVar9 = (long)uVar7 >> 4;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x7fffffffffffffdf < uVar7) {
    uVar1 = 0x7ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 << 5);
  }
  puVar12 = (undefined4 *)((long)pvVar4 + lVar11 * 0x20);
  *puVar12 = *(undefined4 *)param_1;
                    /* try { // try from 00a62170 to 00a62177 has its CatchHandler @ 00a62260 */
  vector<FoliageLayerGraphics::Lod,std::__ndk1::allocator<FoliageLayerGraphics::Lod>>::vector
            ((vector<FoliageLayerGraphics::Lod,std::__ndk1::allocator<FoliageLayerGraphics::Lod>> *)
             (puVar12 + 2),(vector *)(param_1 + 8));
  puVar6 = *(undefined4 **)this;
  puVar2 = puVar12 + 8;
  puVar8 = *(undefined4 **)(this + 8);
  puVar10 = puVar6;
  if (*(undefined4 **)(this + 8) != puVar6) {
    do {
      puVar10 = puVar8 + -8;
      uVar13 = *puVar10;
      *(undefined8 *)(puVar12 + -4) = 0;
      *(undefined8 *)(puVar12 + -2) = 0;
      *(undefined8 *)(puVar12 + -6) = 0;
      puVar12[-8] = uVar13;
      *(undefined8 *)(puVar12 + -6) = *(undefined8 *)(puVar8 + -6);
      *(undefined8 *)(puVar12 + -4) = *(undefined8 *)(puVar8 + -4);
      *(undefined8 *)(puVar12 + -2) = *(undefined8 *)(puVar8 + -2);
      *(undefined8 *)(puVar8 + -6) = 0;
      *(undefined8 *)(puVar8 + -4) = 0;
      *(undefined8 *)(puVar8 + -2) = 0;
      puVar12 = puVar12 + -8;
      puVar8 = puVar10;
    } while (puVar10 != puVar6);
    puVar6 = *(undefined4 **)(this + 8);
    puVar10 = *(undefined4 **)this;
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x20);
  while (puVar2 = puVar6, puVar2 != puVar10) {
    pvVar4 = *(void **)(puVar2 + -6);
    puVar6 = puVar2 + -8;
    if (pvVar4 != (void *)0x0) {
      *(void **)(puVar2 + -4) = pvVar4;
      operator_delete(pvVar4);
    }
  }
  if (puVar10 != (undefined4 *)0x0) {
    operator_delete(puVar10);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


