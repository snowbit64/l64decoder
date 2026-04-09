// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 008ce3c8
// Size: 100 bytes
// Signature: undefined __thiscall vector(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> * this, ulong param_1)


/* std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >::vector(unsigned
   long) */

void __thiscall
std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
          (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this,ulong param_1)

{
  void *__s;
  ulong __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if ((long)param_1 < 0) {
                    /* try { // try from 008ce424 to 008ce42b has its CatchHandler @ 008ce42c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __n = param_1 * 2;
                    /* try { // try from 008ce3f0 to 008ce3f7 has its CatchHandler @ 008ce42c */
    __s = operator_new(__n);
    *(void **)this = __s;
    *(void **)(this + 0x10) = (void *)((long)__s + __n);
    memset(__s,0,__n);
    *(void **)(this + 8) = (void *)((long)__s + __n);
  }
  return;
}


