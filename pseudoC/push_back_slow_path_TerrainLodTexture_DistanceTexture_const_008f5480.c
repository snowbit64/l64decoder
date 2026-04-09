// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<TerrainLodTexture::DistanceTexture_const&>
// Entry Point: 008f5480
// Size: 392 bytes
// Signature: void __thiscall __push_back_slow_path<TerrainLodTexture::DistanceTexture_const&>(vector<TerrainLodTexture::DistanceTexture,std::__ndk1::allocator<TerrainLodTexture::DistanceTexture>> * this, DistanceTexture * param_1)


/* void std::__ndk1::vector<TerrainLodTexture::DistanceTexture,
   std::__ndk1::allocator<TerrainLodTexture::DistanceTexture>
   >::__push_back_slow_path<TerrainLodTexture::DistanceTexture
   const&>(TerrainLodTexture::DistanceTexture const&) */

void __thiscall
std::__ndk1::
vector<TerrainLodTexture::DistanceTexture,std::__ndk1::allocator<TerrainLodTexture::DistanceTexture>>
::__push_back_slow_path<TerrainLodTexture::DistanceTexture_const&>
          (vector<TerrainLodTexture::DistanceTexture,std::__ndk1::allocator<TerrainLodTexture::DistanceTexture>>
           *this,DistanceTexture *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
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
  puVar12 = (undefined8 *)((long)pvVar4 + lVar11 * 0x20);
  *puVar12 = *(undefined8 *)param_1;
                    /* try { // try from 008f5528 to 008f552f has its CatchHandler @ 008f5608 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar12 + 1));
  puVar6 = *(undefined8 **)this;
  puVar2 = puVar12 + 4;
  puVar8 = *(undefined8 **)(this + 8);
  puVar10 = puVar6;
  if (*(undefined8 **)(this + 8) != puVar6) {
    do {
      puVar10 = puVar8 + -4;
      puVar12[-4] = *puVar10;
      uVar14 = puVar8[-2];
      uVar13 = puVar8[-3];
      puVar12[-1] = puVar8[-1];
      puVar12[-2] = uVar14;
      puVar12[-3] = uVar13;
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      puVar8[-3] = 0;
      puVar12 = puVar12 + -4;
      puVar8 = puVar10;
    } while (puVar10 != puVar6);
    puVar6 = *(undefined8 **)(this + 8);
    puVar10 = *(undefined8 **)this;
  }
  *(undefined8 **)this = puVar12;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x20);
  while (puVar2 = puVar6, puVar2 != puVar10) {
    puVar6 = puVar2 + -4;
    if ((*(byte *)(puVar2 + -3) & 1) != 0) {
      operator_delete((void *)puVar2[-1]);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


