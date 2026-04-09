// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<MultiresTexture::GridLayer_const&>
// Entry Point: 0095ec8c
// Size: 392 bytes
// Signature: void __thiscall __push_back_slow_path<MultiresTexture::GridLayer_const&>(vector<MultiresTexture::GridLayer,std::__ndk1::allocator<MultiresTexture::GridLayer>> * this, GridLayer * param_1)


/* void std::__ndk1::vector<MultiresTexture::GridLayer,
   std::__ndk1::allocator<MultiresTexture::GridLayer>
   >::__push_back_slow_path<MultiresTexture::GridLayer const&>(MultiresTexture::GridLayer const&) */

void __thiscall
std::__ndk1::vector<MultiresTexture::GridLayer,std::__ndk1::allocator<MultiresTexture::GridLayer>>::
__push_back_slow_path<MultiresTexture::GridLayer_const&>
          (vector<MultiresTexture::GridLayer,std::__ndk1::allocator<MultiresTexture::GridLayer>>
           *this,GridLayer *param_1)

{
  ulong uVar1;
  GridLayer *pGVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  GridLayer *pGVar9;
  GridLayer *this_00;
  GridLayer *pGVar10;
  GridLayer *pGVar11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * -0x1111111111111111 + 1;
  if (0x111111111111111 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar8 = lVar7 * -0x2222222222222222;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x88888888888887 < (ulong)(lVar7 * -0x1111111111111111)) {
    uVar1 = 0x111111111111111;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x111111111111111 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0xf0);
  }
  this_00 = (GridLayer *)((long)pvVar4 + lVar6 * 0x10);
                    /* try { // try from 0095ed50 to 0095ed5b has its CatchHandler @ 0095ee14 */
  MultiresTexture::GridLayer::GridLayer(this_00,param_1);
  pGVar9 = *(GridLayer **)this;
  pGVar10 = *(GridLayer **)(this + 8);
  pGVar2 = this_00 + 0xf0;
  pGVar11 = pGVar9;
  if (pGVar10 != pGVar9) {
    do {
      this_00 = this_00 + -0xf0;
      pGVar10 = pGVar10 + -0xf0;
                    /* try { // try from 0095ed78 to 0095ed83 has its CatchHandler @ 0095ee18 */
      MultiresTexture::GridLayer::GridLayer(this_00,pGVar10);
    } while (pGVar10 != pGVar9);
    pGVar9 = *(GridLayer **)(this + 8);
    pGVar11 = *(GridLayer **)this;
  }
  *(GridLayer **)this = this_00;
  *(GridLayer **)(this + 8) = pGVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0xf0);
  while (pGVar9 != pGVar11) {
    pGVar9 = pGVar9 + -0xf0;
    FUN_0095ec20(this + 0x10,pGVar9);
  }
  if (pGVar11 != (GridLayer *)0x0) {
    operator_delete(pGVar11);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


