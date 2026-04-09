// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CustomShader::Variation>
// Entry Point: 0094e630
// Size: 360 bytes
// Signature: void __thiscall __push_back_slow_path<CustomShader::Variation>(vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>> * this, Variation * param_1)


/* void std::__ndk1::vector<CustomShader::Variation, std::__ndk1::allocator<CustomShader::Variation>
   >::__push_back_slow_path<CustomShader::Variation>(CustomShader::Variation&&) */

void __thiscall
std::__ndk1::vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>>::
__push_back_slow_path<CustomShader::Variation>
          (vector<CustomShader::Variation,std::__ndk1::allocator<CustomShader::Variation>> *this,
          Variation *param_1)

{
  ulong uVar1;
  Variation *pVVar2;
  Variation *pVVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  Variation *this_00;
  Variation *pVVar8;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar5 * 0x6db6db6db6db6db7 + 1;
  if (0x124924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 5;
  uVar7 = lVar6 * -0x2492492492492492;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x92492492492491 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x124924924924924;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x124924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0xe0);
  }
  this_00 = (Variation *)((long)pvVar4 + lVar5 * 0x20);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0xe0);
  CustomShader::Variation::Variation(this_00,param_1);
  pVVar3 = *(Variation **)this;
  pVVar8 = *(Variation **)(this + 8);
  pVVar2 = this_00 + 0xe0;
  if (pVVar8 == pVVar3) {
    *(Variation **)this = this_00;
    *(Variation **)(this + 8) = pVVar2;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    do {
      this_00 = this_00 + -0xe0;
      pVVar8 = pVVar8 + -0xe0;
      CustomShader::Variation::Variation(this_00,pVVar8);
    } while (pVVar8 != pVVar3);
    pVVar3 = *(Variation **)this;
    pVVar8 = *(Variation **)(this + 8);
    *(Variation **)this = this_00;
    *(Variation **)(this + 8) = pVVar2;
    *(void **)(this + 0x10) = pvVar4;
    while (pVVar8 != pVVar3) {
      pVVar8 = pVVar8 + -0xe0;
      CustomShader::Variation::~Variation(pVVar8);
    }
  }
  if (pVVar3 == (Variation *)0x0) {
    return;
  }
  operator_delete(pVVar3);
  return;
}


