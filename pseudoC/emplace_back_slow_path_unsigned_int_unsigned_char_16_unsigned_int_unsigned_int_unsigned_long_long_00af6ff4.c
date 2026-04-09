// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<unsigned_int&,unsigned_char(&)[16],unsigned_int&,unsigned_int&,unsigned_long_long&>
// Entry Point: 00af6ff4
// Size: 356 bytes
// Signature: void __thiscall __emplace_back_slow_path<unsigned_int&,unsigned_char(&)[16],unsigned_int&,unsigned_int&,unsigned_long_long&>(vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>> * this, uint * param_1, unsigned_char * param_2, uint * param_3, uint * param_4, ulonglong * param_5)


/* void std::__ndk1::vector<GiantsAdsProvider::Impression,
   std::__ndk1::allocator<GiantsAdsProvider::Impression> >::__emplace_back_slow_path<unsigned int&,
   unsigned char (&) [16], unsigned int&, unsigned int&, unsigned long long&>(unsigned int&,
   unsigned char (&) [16], unsigned int&, unsigned int&, unsigned long long&) */

void __thiscall
std::__ndk1::
vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>::
__emplace_back_slow_path<unsigned_int&,unsigned_char(&)[16],unsigned_int&,unsigned_int&,unsigned_long_long&>
          (vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>
           *this,uint *param_1,unsigned_char *param_2,uint *param_3,uint *param_4,ulonglong *param_5
          )

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *__src;
  size_t __n;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = *(long *)(this + 8);
  lVar6 = lVar2 - *(long *)this >> 3;
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
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x28);
  }
  __src = *(void **)this;
  uVar3 = *param_4;
  puVar9 = (uint *)((long)pvVar5 + lVar6 * 8);
  __n = lVar2 - (long)__src;
  uVar4 = *param_3;
  uVar12 = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)param_2;
  uVar10 = *param_5;
  *puVar9 = *param_1;
  puVar9[5] = uVar4;
  puVar9[6] = uVar3;
  *(ulonglong *)(puVar9 + 8) = uVar10;
  *(undefined8 *)(puVar9 + 3) = uVar12;
  *(undefined8 *)(puVar9 + 1) = uVar11;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar9 - __n),__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = (void *)((long)puVar9 - __n);
  *(uint **)(this + 8) = puVar9 + 10;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x28);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


