// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00878ec0
// Size: 204 bytes
// Signature: undefined __thiscall vector(vector<AnimalSoundSystem::ActiveSound,std::__ndk1::allocator<AnimalSoundSystem::ActiveSound>> * this, vector * param_1)


/* std::__ndk1::vector<AnimalSoundSystem::ActiveSound,
   std::__ndk1::allocator<AnimalSoundSystem::ActiveSound>
   >::vector(std::__ndk1::vector<AnimalSoundSystem::ActiveSound,
   std::__ndk1::allocator<AnimalSoundSystem::ActiveSound> > const&) */

void __thiscall
std::__ndk1::
vector<AnimalSoundSystem::ActiveSound,std::__ndk1::allocator<AnimalSoundSystem::ActiveSound>>::
vector(vector<AnimalSoundSystem::ActiveSound,std::__ndk1::allocator<AnimalSoundSystem::ActiveSound>>
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
    if (0x924924924924924 < (ulong)(((long)uVar1 >> 2) * 0x6db6db6db6db6db7)) {
                    /* try { // try from 00878f84 to 00878f8b has its CatchHandler @ 00878f8c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00878f1c to 00878f1f has its CatchHandler @ 00878f8c */
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 2) * 4);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + (__n / 0x1c) * 0x1c);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


