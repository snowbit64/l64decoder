// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<unsigned_int,unsigned_char_const*,unsigned_int,unsigned_int&,unsigned_long_long>
// Entry Point: 00af6d24
// Size: 360 bytes
// Signature: void __thiscall __emplace_back_slow_path<unsigned_int,unsigned_char_const*,unsigned_int,unsigned_int&,unsigned_long_long>(vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>> * this, uint * param_1, uchar * * param_2, uint * param_3, uint * param_4, ulonglong * param_5)


/* void std::__ndk1::vector<GiantsAdsProvider::Impression,
   std::__ndk1::allocator<GiantsAdsProvider::Impression> >::__emplace_back_slow_path<unsigned int,
   unsigned char const*, unsigned int, unsigned int&, unsigned long long>(unsigned int&&, unsigned
   char const*&&, unsigned int&&, unsigned int&, unsigned long long&&) */

void __thiscall
std::__ndk1::
vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>::
__emplace_back_slow_path<unsigned_int,unsigned_char_const*,unsigned_int,unsigned_int&,unsigned_long_long>
          (vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>
           *this,uint *param_1,uchar **param_2,uint *param_3,uint *param_4,ulonglong *param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *__src;
  size_t __n;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  
  lVar2 = *(long *)(this + 8);
  lVar6 = lVar2 - *(long *)this >> 3;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar9 = lVar8 * -0x6666666666666666;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
    uVar1 = 0x666666666666666;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x28);
  }
  uVar3 = *param_3;
  puVar7 = (uint *)((long)pvVar5 + lVar6 * 8);
  uVar4 = *param_4;
  uVar11 = *param_5;
  __src = *(void **)this;
  puVar10 = (undefined8 *)*param_2;
  *puVar7 = *param_1;
  puVar7[5] = uVar3;
  puVar7[6] = uVar4;
  __n = lVar2 - (long)__src;
  *(ulonglong *)(puVar7 + 8) = uVar11;
  uVar12 = *puVar10;
  *(undefined8 *)(puVar7 + 3) = puVar10[1];
  *(undefined8 *)(puVar7 + 1) = uVar12;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar7 - __n),__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = (void *)((long)puVar7 - __n);
  *(uint **)(this + 8) = puVar7 + 10;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x28);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


