// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageSystemDesc::Layer>
// Entry Point: 00a67f34
// Size: 412 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageSystemDesc::Layer>(vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>> * this, Layer * param_1)


/* void std::__ndk1::vector<FoliageSystemDesc::Layer,
   std::__ndk1::allocator<FoliageSystemDesc::Layer>
   >::__push_back_slow_path<FoliageSystemDesc::Layer>(FoliageSystemDesc::Layer&&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>>::
__push_back_slow_path<FoliageSystemDesc::Layer>
          (vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>> *this,
          Layer *param_1)

{
  ulong uVar1;
  Layer *pLVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  Layer *this_00;
  Layer *this_01;
  Layer *pLVar9;
  Layer *pLVar10;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar8 = lVar7 * -0x2492492492492492;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x124924924924923 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x249249249249249;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x70);
  }
  this_00 = (Layer *)((long)pvVar4 + lVar6 * 0x10);
                    /* try { // try from 00a68010 to 00a6801b has its CatchHandler @ 00a680d0 */
  FoliageSystemDesc::Layer::Layer(this_00,param_1);
  this_01 = *(Layer **)this;
  pLVar9 = *(Layer **)(this + 8);
  pLVar2 = this_00 + 0x70;
  pLVar10 = this_01;
  if (pLVar9 != this_01) {
    do {
      this_00 = this_00 + -0x70;
      pLVar9 = pLVar9 + -0x70;
                    /* try { // try from 00a68038 to 00a68043 has its CatchHandler @ 00a680d4 */
      FoliageSystemDesc::Layer::Layer(this_00,pLVar9);
    } while (pLVar9 != this_01);
    this_01 = *(Layer **)(this + 8);
    pLVar10 = *(Layer **)this;
  }
  *(Layer **)this = this_00;
  *(Layer **)(this + 8) = pLVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x70);
  while (this_01 != pLVar10) {
    this_01 = this_01 + -0x70;
    FoliageSystemDesc::Layer::~Layer(this_01);
  }
  if (pLVar10 != (Layer *)0x0) {
    operator_delete(pLVar10);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


