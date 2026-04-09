// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<AnimalSoundSystem,AnimalSoundSystem_const&>
// Entry Point: 00878be0
// Size: 104 bytes
// Signature: void __thiscall construct<AnimalSoundSystem,AnimalSoundSystem_const&>(allocator<AnimalSoundSystem> * this, AnimalSoundSystem * param_1, AnimalSoundSystem * param_2)


/* void std::__ndk1::allocator<AnimalSoundSystem>::construct<AnimalSoundSystem, AnimalSoundSystem
   const&>(AnimalSoundSystem*, AnimalSoundSystem const&) */

void __thiscall
std::__ndk1::allocator<AnimalSoundSystem>::construct<AnimalSoundSystem,AnimalSoundSystem_const&>
          (allocator<AnimalSoundSystem> *this,AnimalSoundSystem *param_1,AnimalSoundSystem *param_2)

{
  undefined8 uVar1;
  
  vector<AudioSource*,std::__ndk1::allocator<AudioSource*>>::vector
            ((vector<AudioSource*,std::__ndk1::allocator<AudioSource*>> *)param_1,(vector *)param_2)
  ;
                    /* try { // try from 00878c10 to 00878c17 has its CatchHandler @ 00878ccc */
  vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>::
  vector((vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>
          *)(param_1 + 0x18),(vector *)(param_2 + 0x18));
                    /* try { // try from 00878c20 to 00878c23 has its CatchHandler @ 00878c48 */
  vector<AnimalSoundSystem::ActiveSound,std::__ndk1::allocator<AnimalSoundSystem::ActiveSound>>::
  vector((vector<AnimalSoundSystem::ActiveSound,std::__ndk1::allocator<AnimalSoundSystem::ActiveSound>>
          *)(param_1 + 0x30),(vector *)(param_2 + 0x30));
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}


