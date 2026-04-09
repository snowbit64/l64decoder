// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00878d90
// Size: 248 bytes
// Signature: undefined __thiscall vector(vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>> * this, vector * param_1)


/* std::__ndk1::vector<AnimalSoundSystem::SoundGroup,
   std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>
   >::vector(std::__ndk1::vector<AnimalSoundSystem::SoundGroup,
   std::__ndk1::allocator<AnimalSoundSystem::SoundGroup> > const&) */

void __thiscall
std::__ndk1::
vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>::vector
          (vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>
           *this,vector *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if (0x2e8ba2e8ba2e8ba < (ulong)(((long)uVar2 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
                    /* try { // try from 00878e80 to 00878e87 has its CatchHandler @ 00878e88 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00878df0 to 00878df3 has its CatchHandler @ 00878e88 */
    puVar4 = (undefined4 *)operator_new(uVar2);
    *(undefined4 **)this = puVar4;
    *(undefined4 **)(this + 8) = puVar4;
    *(undefined4 **)(this + 0x10) = puVar4 + ((long)uVar2 >> 3) * 2;
    puVar6 = *(undefined4 **)param_1;
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (puVar6 != puVar1) {
      do {
        puVar5 = puVar4;
        *puVar5 = *puVar6;
                    /* try { // try from 00878e24 to 00878e2f has its CatchHandler @ 00878e90 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(puVar5 + 2);
                    /* try { // try from 00878e38 to 00878e43 has its CatchHandler @ 00878e98 */
        vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(puVar5 + 8),
                   (vector *)(puVar6 + 8));
        puVar3 = (undefined8 *)(puVar6 + 0x13);
        uVar7 = *(undefined8 *)(puVar6 + 0x11);
        uVar9 = *(undefined8 *)(puVar6 + 0x10);
        uVar8 = *(undefined8 *)(puVar6 + 0xe);
        puVar6 = puVar6 + 0x16;
        *(undefined8 *)(puVar5 + 0x13) = *puVar3;
        *(undefined8 *)(puVar5 + 0x11) = uVar7;
        *(undefined8 *)(puVar5 + 0x10) = uVar9;
        *(undefined8 *)(puVar5 + 0xe) = uVar8;
        puVar4 = puVar5 + 0x16;
      } while (puVar6 != puVar1);
      puVar4 = puVar5 + 0x16;
    }
    *(undefined4 **)(this + 8) = puVar4;
  }
  return;
}


