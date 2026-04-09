// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageSystemDesc::MultiLayer>
// Entry Point: 00a689d4
// Size: 396 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageSystemDesc::MultiLayer>(vector<FoliageSystemDesc::MultiLayer,std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>> * this, MultiLayer * param_1)


/* void std::__ndk1::vector<FoliageSystemDesc::MultiLayer,
   std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>
   >::__push_back_slow_path<FoliageSystemDesc::MultiLayer>(FoliageSystemDesc::MultiLayer&&) */

void __thiscall
std::__ndk1::
vector<FoliageSystemDesc::MultiLayer,std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>>::
__push_back_slow_path<FoliageSystemDesc::MultiLayer>
          (vector<FoliageSystemDesc::MultiLayer,std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>>
           *this,MultiLayer *param_1)

{
  ulong uVar1;
  MultiLayer *pMVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  MultiLayer *pMVar9;
  MultiLayer *pMVar10;
  MultiLayer *this_00;
  MultiLayer *pMVar11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar8 = lVar7 * -0x6666666666666666;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
    uVar1 = 0x666666666666666;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x28);
  }
  pMVar10 = (MultiLayer *)((long)pvVar4 + lVar6 * 8);
                    /* try { // try from 00a68a98 to 00a68aa7 has its CatchHandler @ 00a68b60 */
  allocator<FoliageSystemDesc::MultiLayer>::
  construct<FoliageSystemDesc::MultiLayer,FoliageSystemDesc::MultiLayer>
            ((allocator<FoliageSystemDesc::MultiLayer> *)(this + 0x10),pMVar10,param_1);
  pMVar9 = *(MultiLayer **)this;
  pMVar11 = *(MultiLayer **)(this + 8);
  pMVar2 = pMVar10 + 0x28;
  this_00 = pMVar9;
  if (pMVar11 != pMVar9) {
    do {
      pMVar10 = pMVar10 + -0x28;
      pMVar11 = pMVar11 + -0x28;
                    /* try { // try from 00a68ac4 to 00a68ad3 has its CatchHandler @ 00a68b64 */
      allocator<FoliageSystemDesc::MultiLayer>::
      construct<FoliageSystemDesc::MultiLayer,FoliageSystemDesc::MultiLayer_const&>
                ((allocator<FoliageSystemDesc::MultiLayer> *)(this + 0x10),pMVar10,pMVar11);
    } while (pMVar11 != pMVar9);
    pMVar9 = *(MultiLayer **)this;
    this_00 = *(MultiLayer **)(this + 8);
  }
  *(MultiLayer **)this = pMVar10;
  *(MultiLayer **)(this + 8) = pMVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x28);
  while (this_00 != pMVar9) {
    this_00 = this_00 + -0x28;
    FoliageSystemDesc::MultiLayer::~MultiLayer(this_00);
  }
  if (pMVar9 != (MultiLayer *)0x0) {
    operator_delete(pMVar9);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


