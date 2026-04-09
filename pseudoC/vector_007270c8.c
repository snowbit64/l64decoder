// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 007270c8
// Size: 136 bytes
// Signature: undefined __thiscall vector(vector<DynamicAvoidance::ObstacleWrapper,std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper>> * this, vector * param_1)


/* std::__ndk1::vector<DynamicAvoidance::ObstacleWrapper,
   std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper>
   >::vector(std::__ndk1::vector<DynamicAvoidance::ObstacleWrapper,
   std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper> > const&) */

void __thiscall
std::__ndk1::
vector<DynamicAvoidance::ObstacleWrapper,std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper>>
::vector(vector<DynamicAvoidance::ObstacleWrapper,std::__ndk1::allocator<DynamicAvoidance::ObstacleWrapper>>
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
    if ((long)uVar1 < 0) {
                    /* try { // try from 00727148 to 0072714f has its CatchHandler @ 00727150 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 007270f8 to 007270ff has its CatchHandler @ 00727150 */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 5) * 0x20);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + __n);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


