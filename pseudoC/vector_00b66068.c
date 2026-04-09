// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00b66068
// Size: 136 bytes
// Signature: undefined __thiscall vector(vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>> * this, vector * param_1)


/* std::__ndk1::vector<Brep::Vertex, std::__ndk1::allocator<Brep::Vertex>
   >::vector(std::__ndk1::vector<Brep::Vertex, std::__ndk1::allocator<Brep::Vertex> > const&) */

void __thiscall
std::__ndk1::vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>>::vector
          (vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>> *this,vector *param_1)

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
                    /* try { // try from 00b660e8 to 00b660ef has its CatchHandler @ 00b660f0 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00b66098 to 00b6609f has its CatchHandler @ 00b660f0 */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 4) * 0x10);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + __n);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


