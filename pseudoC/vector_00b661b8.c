// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00b661b8
// Size: 132 bytes
// Signature: undefined __thiscall vector(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> * this, vector * param_1)


/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>
   >::vector(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */

void __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::vector
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,vector *param_1)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
                    /* try { // try from 00b66234 to 00b6623b has its CatchHandler @ 00b6623c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00b661e8 to 00b661ef has its CatchHandler @ 00b6623c */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(ulong *)(this + 0x10) = (long)__dest + uVar1;
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + __n);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


