// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<DeferredDebugRenderer::DebugText_const&>
// Entry Point: 009fd4bc
// Size: 492 bytes
// Signature: void __thiscall __push_back_slow_path<DeferredDebugRenderer::DebugText_const&>(vector<DeferredDebugRenderer::DebugText,std::__ndk1::allocator<DeferredDebugRenderer::DebugText>> * this, DebugText * param_1)


/* void std::__ndk1::vector<DeferredDebugRenderer::DebugText,
   std::__ndk1::allocator<DeferredDebugRenderer::DebugText>
   >::__push_back_slow_path<DeferredDebugRenderer::DebugText
   const&>(DeferredDebugRenderer::DebugText const&) */

void __thiscall
std::__ndk1::
vector<DeferredDebugRenderer::DebugText,std::__ndk1::allocator<DeferredDebugRenderer::DebugText>>::
__push_back_slow_path<DeferredDebugRenderer::DebugText_const&>
          (vector<DeferredDebugRenderer::DebugText,std::__ndk1::allocator<DeferredDebugRenderer::DebugText>>
           *this,DebugText *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar9 = lVar7 * -0x2492492492492492;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x492492492492492;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x38);
  }
  pbVar12 = (basic_string *)((long)pvVar4 + lVar6 * 8);
                    /* try { // try from 009fd59c to 009fd5a7 has its CatchHandler @ 009fd6a8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar12);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x2d);
  uVar15 = *(undefined8 *)(param_1 + 0x25);
  pbVar2 = pbVar12 + 0xe;
  pbVar11 = *(byte **)this;
  pbVar8 = *(byte **)(this + 8);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x18) = uVar14;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x2d) = uVar16;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x25) = uVar15;
  pbVar10 = pbVar11;
  pbVar13 = pbVar12;
  if (pbVar8 != pbVar11) {
    do {
      uVar15 = *(undefined8 *)(pbVar8 + -0x30);
      uVar14 = *(undefined8 *)(pbVar8 + -0x38);
      *(undefined8 *)(pbVar13 + -10) = *(undefined8 *)(pbVar8 + -0x28);
      pbVar10 = pbVar8 + -0x38;
      *(undefined8 *)(pbVar13 + -0xc) = uVar15;
      *(undefined8 *)(pbVar13 + -0xe) = uVar14;
      pbVar12 = pbVar13 + -0xe;
      *(undefined8 *)(pbVar8 + -0x30) = 0;
      *(undefined8 *)(pbVar8 + -0x28) = 0;
      uVar14 = *(undefined8 *)(pbVar8 + -0x13);
      *(undefined8 *)(pbVar8 + -0x38) = 0;
      uVar16 = *(undefined8 *)(pbVar8 + -0x18);
      uVar15 = *(undefined8 *)(pbVar8 + -0x20);
      *(undefined8 *)((long)pbVar13 + -0xb) = *(undefined8 *)(pbVar8 + -0xb);
      *(undefined8 *)((long)pbVar13 + -0x13) = uVar14;
      *(undefined8 *)(pbVar13 + -6) = uVar16;
      *(undefined8 *)(pbVar13 + -8) = uVar15;
      pbVar8 = pbVar10;
      pbVar13 = pbVar12;
    } while (pbVar10 != pbVar11);
    pbVar11 = *(byte **)(this + 8);
    pbVar10 = *(byte **)this;
  }
  *(basic_string **)this = pbVar12;
  *(basic_string **)(this + 8) = pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x38);
  while (pbVar8 = pbVar11, pbVar8 != pbVar10) {
    pbVar11 = pbVar8 + -0x38;
    if ((*pbVar11 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + -0x28));
    }
  }
  if (pbVar10 != (byte *)0x0) {
    operator_delete(pbVar10);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


