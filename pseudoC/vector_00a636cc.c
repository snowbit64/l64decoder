// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00a636cc
// Size: 136 bytes
// Signature: undefined __thiscall vector(vector<FoliageSystem::Layer,std::__ndk1::allocator<FoliageSystem::Layer>> * this, vector * param_1)


/* std::__ndk1::vector<FoliageSystem::Layer, std::__ndk1::allocator<FoliageSystem::Layer>
   >::vector(std::__ndk1::vector<FoliageSystem::Layer, std::__ndk1::allocator<FoliageSystem::Layer>
   > const&) */

void __thiscall
std::__ndk1::vector<FoliageSystem::Layer,std::__ndk1::allocator<FoliageSystem::Layer>>::vector
          (vector<FoliageSystem::Layer,std::__ndk1::allocator<FoliageSystem::Layer>> *this,
          vector *param_1)

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
                    /* try { // try from 00a6374c to 00a63753 has its CatchHandler @ 00a63754 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00a636fc to 00a63703 has its CatchHandler @ 00a63754 */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 3) * 8);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + __n);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


