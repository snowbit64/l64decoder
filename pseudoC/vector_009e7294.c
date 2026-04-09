// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 009e7294
// Size: 136 bytes
// Signature: undefined __thiscall vector(vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>> * this, vector * param_1)


/* std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>
   >::vector(std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*> > const&) */

void __thiscall
std::__ndk1::
vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>
::vector(vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>
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
                    /* try { // try from 009e7314 to 009e731b has its CatchHandler @ 009e731c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 009e72c4 to 009e72cb has its CatchHandler @ 009e731c */
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


