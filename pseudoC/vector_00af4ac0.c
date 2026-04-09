// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00af4ac0
// Size: 180 bytes
// Signature: undefined __thiscall vector(vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>> * this, vector * param_1)


/* std::__ndk1::vector<GiantsAdsProvider::Impression,
   std::__ndk1::allocator<GiantsAdsProvider::Impression>
   >::vector(std::__ndk1::vector<GiantsAdsProvider::Impression,
   std::__ndk1::allocator<GiantsAdsProvider::Impression> > const&) */

void __thiscall
std::__ndk1::
vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>::vector
          (vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>
           *this,vector *param_1)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar1 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar1 >> 3) * -0x3333333333333333)) {
                    /* try { // try from 00af4b6c to 00af4b73 has its CatchHandler @ 00af4b74 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00af4b10 to 00af4b13 has its CatchHandler @ 00af4b74 */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 3) * 8);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + (__n / 0x28) * 0x28);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


