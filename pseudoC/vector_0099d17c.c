// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 0099d17c
// Size: 104 bytes
// Signature: undefined __thiscall vector(vector<GsShape*,std::__ndk1::allocator<GsShape*>> * this, ulong param_1)


/* std::__ndk1::vector<GsShape*, std::__ndk1::allocator<GsShape*> >::vector(unsigned long) */

void __thiscall
std::__ndk1::vector<GsShape*,std::__ndk1::allocator<GsShape*>>::vector
          (vector<GsShape*,std::__ndk1::allocator<GsShape*>> *this,ulong param_1)

{
  void *__s;
  ulong __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != 0) {
    if (param_1 >> 0x3d != 0) {
                    /* try { // try from 0099d1dc to 0099d1e3 has its CatchHandler @ 0099d1e4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __n = param_1 * 8;
                    /* try { // try from 0099d1a8 to 0099d1af has its CatchHandler @ 0099d1e4 */
    __s = operator_new(__n);
    *(void **)this = __s;
    *(void **)(this + 0x10) = (void *)((long)__s + __n);
    memset(__s,0,__n);
    *(void **)(this + 8) = (void *)((long)__s + __n);
  }
  return;
}


