// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageLayerGraphics::Layer_const&>
// Entry Point: 00a627ac
// Size: 604 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageLayerGraphics::Layer_const&>(vector<FoliageLayerGraphics::Layer,std::__ndk1::allocator<FoliageLayerGraphics::Layer>> * this, Layer * param_1)


/* void std::__ndk1::vector<FoliageLayerGraphics::Layer,
   std::__ndk1::allocator<FoliageLayerGraphics::Layer>
   >::__push_back_slow_path<FoliageLayerGraphics::Layer const&>(FoliageLayerGraphics::Layer const&)
    */

void __thiscall
std::__ndk1::vector<FoliageLayerGraphics::Layer,std::__ndk1::allocator<FoliageLayerGraphics::Layer>>
::__push_back_slow_path<FoliageLayerGraphics::Layer_const&>
          (vector<FoliageLayerGraphics::Layer,std::__ndk1::allocator<FoliageLayerGraphics::Layer>>
           *this,Layer *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x1745d1745d1745c < (ulong)(lVar9 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x58);
  }
  puVar14 = (undefined4 *)((long)pvVar4 + lVar6 * 8);
  *puVar14 = *(undefined4 *)param_1;
                    /* try { // try from 00a6289c to 00a628a3 has its CatchHandler @ 00a62a28 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(puVar14 + 2);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)((long)pvVar4 + lVar6 * 8 + 0x28) = uVar2;
                    /* try { // try from 00a628c4 to 00a628c7 has its CatchHandler @ 00a62a08 */
  vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>::vector
            ((vector<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
              *)((long)pvVar4 + lVar6 * 8 + 0x30),(vector *)(param_1 + 0x30));
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  puVar12 = puVar14 + 0x16;
  puVar7 = *(undefined4 **)this;
  puVar8 = *(undefined4 **)(this + 8);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x48) = uVar11;
  puVar13 = puVar7;
  if (puVar8 != puVar7) {
    do {
      puVar13 = puVar8 + -0x16;
      puVar14[-0x16] = *puVar13;
      uVar15 = *(undefined8 *)(puVar8 + -0x12);
      uVar11 = *(undefined8 *)(puVar8 + -0x14);
      *(undefined8 *)(puVar14 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
      *(undefined8 *)(puVar14 + -0x12) = uVar15;
      *(undefined8 *)(puVar14 + -0x14) = uVar11;
      uVar2 = puVar8[-0xc];
      *(undefined8 *)(puVar8 + -0x12) = 0;
      *(undefined8 *)(puVar8 + -0x10) = 0;
      uVar11 = *(undefined8 *)(puVar8 + -0xe);
      *(undefined8 *)(puVar8 + -0x14) = 0;
      *(undefined8 *)(puVar14 + -8) = 0;
      *(undefined8 *)(puVar14 + -6) = 0;
      puVar14[-0xc] = uVar2;
      *(undefined8 *)(puVar14 + -0xe) = uVar11;
      *(undefined8 *)(puVar14 + -10) = 0;
      *(undefined8 *)(puVar14 + -10) = *(undefined8 *)(puVar8 + -10);
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar8 + -8);
      *(undefined8 *)(puVar14 + -6) = *(undefined8 *)(puVar8 + -6);
      uVar11 = *(undefined8 *)(puVar8 + -4);
      *(undefined8 *)(puVar8 + -10) = 0;
      *(undefined8 *)(puVar8 + -8) = 0;
      *(undefined8 *)(puVar8 + -6) = 0;
      *(undefined8 *)(puVar14 + -2) = *(undefined8 *)(puVar8 + -2);
      *(undefined8 *)(puVar14 + -4) = uVar11;
      puVar14 = puVar14 + -0x16;
      puVar8 = puVar13;
    } while (puVar13 != puVar7);
    puVar7 = *(undefined4 **)(this + 8);
    puVar13 = *(undefined4 **)this;
  }
  *(undefined4 **)this = puVar14;
  *(undefined4 **)(this + 8) = puVar12;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x58);
  if (puVar7 != puVar13) {
    puVar12 = puVar7 + -10;
    do {
      __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
      ::~__vector_base((__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
                        *)puVar12);
      if ((*(byte *)(puVar12 + -10) & 1) != 0) {
        operator_delete(*(void **)(puVar12 + -6));
      }
      puVar7 = puVar12 + -0xc;
      puVar12 = puVar12 + -0x16;
    } while (puVar7 != puVar13);
  }
  if (puVar13 != (undefined4 *)0x0) {
    operator_delete(puVar13);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


