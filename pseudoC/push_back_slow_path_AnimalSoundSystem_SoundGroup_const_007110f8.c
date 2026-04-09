// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<AnimalSoundSystem::SoundGroup_const&>
// Entry Point: 007110f8
// Size: 584 bytes
// Signature: void __thiscall __push_back_slow_path<AnimalSoundSystem::SoundGroup_const&>(vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>> * this, SoundGroup * param_1)


/* void std::__ndk1::vector<AnimalSoundSystem::SoundGroup,
   std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>
   >::__push_back_slow_path<AnimalSoundSystem::SoundGroup const&>(AnimalSoundSystem::SoundGroup
   const&) */

void __thiscall
std::__ndk1::
vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>::
__push_back_slow_path<AnimalSoundSystem::SoundGroup_const&>
          (vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>
           *this,SoundGroup *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar9 = lVar8 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x1745d1745d1745c < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x58);
  }
  puVar12 = (undefined4 *)((long)pvVar4 + lVar6 * 8);
  *puVar12 = *(undefined4 *)param_1;
                    /* try { // try from 007111e8 to 007111ef has its CatchHandler @ 00711360 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(puVar12 + 2);
                    /* try { // try from 00711200 to 00711203 has its CatchHandler @ 00711340 */
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)
             ((long)pvVar4 + lVar6 * 8 + 0x20),(vector *)(param_1 + 0x20));
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x4c);
  uVar14 = *(undefined8 *)(param_1 + 0x44);
  puVar2 = puVar12 + 0x16;
  puVar10 = *(undefined4 **)this;
  puVar7 = *(undefined4 **)(this + 8);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x38) = uVar13;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x4c) = uVar15;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x44) = uVar14;
  puVar11 = puVar10;
  if (puVar7 != puVar10) {
    do {
      puVar11 = puVar7 + -0x16;
      puVar12[-0x16] = *puVar11;
      uVar14 = *(undefined8 *)(puVar7 + -0x12);
      uVar13 = *(undefined8 *)(puVar7 + -0x14);
      *(undefined8 *)(puVar12 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar12 + -0x12) = uVar14;
      *(undefined8 *)(puVar12 + -0x14) = uVar13;
      *(undefined8 *)(puVar7 + -0x12) = 0;
      *(undefined8 *)(puVar7 + -0x10) = 0;
      *(undefined8 *)(puVar7 + -0x14) = 0;
      *(undefined8 *)(puVar12 + -0xe) = 0;
      *(undefined8 *)(puVar12 + -0xc) = 0;
      *(undefined8 *)(puVar12 + -10) = 0;
      *(undefined8 *)(puVar12 + -0xe) = *(undefined8 *)(puVar7 + -0xe);
      *(undefined8 *)(puVar12 + -0xc) = *(undefined8 *)(puVar7 + -0xc);
      *(undefined8 *)(puVar12 + -10) = *(undefined8 *)(puVar7 + -10);
      uVar13 = *(undefined8 *)(puVar7 + -5);
      *(undefined8 *)(puVar7 + -0xe) = 0;
      *(undefined8 *)(puVar7 + -0xc) = 0;
      uVar15 = *(undefined8 *)(puVar7 + -6);
      uVar14 = *(undefined8 *)(puVar7 + -8);
      *(undefined8 *)(puVar7 + -10) = 0;
      *(undefined8 *)(puVar12 + -3) = *(undefined8 *)(puVar7 + -3);
      *(undefined8 *)(puVar12 + -5) = uVar13;
      *(undefined8 *)(puVar12 + -6) = uVar15;
      *(undefined8 *)(puVar12 + -8) = uVar14;
      puVar12 = puVar12 + -0x16;
      puVar7 = puVar11;
    } while (puVar11 != puVar10);
    puVar10 = *(undefined4 **)this;
    puVar11 = *(undefined4 **)(this + 8);
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x58);
  while (puVar2 = puVar11, puVar2 != puVar10) {
    pvVar4 = *(void **)(puVar2 + -0xe);
    if (pvVar4 != (void *)0x0) {
      *(void **)(puVar2 + -0xc) = pvVar4;
      operator_delete(pvVar4);
    }
    puVar11 = puVar2 + -0x16;
    if ((*(byte *)(puVar2 + -0x14) & 1) != 0) {
      operator_delete(*(void **)(puVar2 + -0x10));
    }
  }
  if (puVar10 != (undefined4 *)0x0) {
    operator_delete(puVar10);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


