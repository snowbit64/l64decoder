// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 008d4360
// Size: 180 bytes
// Signature: undefined __thiscall vector(vector<Vector3,std::__ndk1::allocator<Vector3>> * this, vector * param_1)


/* std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3>
   >::vector(std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> > const&) */

void __thiscall
std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::vector
          (vector<Vector3,std::__ndk1::allocator<Vector3>> *this,vector *param_1)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar1 != 0) {
    if (0x1555555555555555 < (ulong)(((long)uVar1 >> 2) * -0x5555555555555555)) {
                    /* try { // try from 008d440c to 008d4413 has its CatchHandler @ 008d4414 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 008d43b0 to 008d43b3 has its CatchHandler @ 008d4414 */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 2) * 4);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + (__n / 0xc) * 0xc);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


