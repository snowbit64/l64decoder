// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<AnimalSoundSource::Group_const&>
// Entry Point: 0070f238
// Size: 520 bytes
// Signature: void __thiscall __push_back_slow_path<AnimalSoundSource::Group_const&>(vector<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>> * this, Group * param_1)


/* void std::__ndk1::vector<AnimalSoundSource::Group,
   std::__ndk1::allocator<AnimalSoundSource::Group>
   >::__push_back_slow_path<AnimalSoundSource::Group const&>(AnimalSoundSource::Group const&) */

void __thiscall
std::__ndk1::vector<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>::
__push_back_slow_path<AnimalSoundSource::Group_const&>
          (vector<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>> *this,
          Group *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  undefined4 uVar3;
  basic_string bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  basic_string *pbVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *local_80;
  basic_string *local_78;
  basic_string *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_60 = (long *)(this + 0x10);
  lVar8 = *local_60 - *(long *)this >> 3;
  uVar9 = lVar8 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x1745d1745d1745c < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar1 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar6 = operator_new(uVar1 * 0x58);
  }
  pbVar10 = (basic_string *)((long)pvVar6 + lVar7 * 8);
  pvVar11 = (void *)((long)pvVar6 + uVar1 * 0x58);
  local_80 = pvVar6;
  local_78 = pbVar10;
  local_70 = pbVar10;
  pvStack_68 = pvVar11;
                    /* try { // try from 0070f318 to 0070f323 has its CatchHandler @ 0070f460 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar10);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x18) = uVar12;
  *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x30) = uVar14;
  *(undefined8 *)((long)pvVar6 + lVar7 * 8 + 0x28) = uVar13;
  *(undefined4 *)((long)pvVar6 + lVar7 * 8 + 0x38) = uVar3;
                    /* try { // try from 0070f34c to 0070f34f has its CatchHandler @ 0070f440 */
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            *)((long)pvVar6 + lVar7 * 8 + 0x40),(vector *)(param_1 + 0x40));
  local_70 = *(basic_string **)this;
  pbVar2 = pbVar10 + 0x16;
  local_80 = local_70;
  pvVar6 = *(void **)(this + 8);
  if ((basic_string *)*(void **)(this + 8) != local_70) {
    do {
      pvVar11 = (void *)((long)pvVar6 + -0x58);
      uVar13 = *(undefined8 *)((long)pvVar6 + -0x50);
      uVar12 = *(undefined8 *)((long)pvVar6 + -0x58);
      *(undefined8 *)(pbVar10 + -0x12) = *(undefined8 *)((long)pvVar6 + -0x48);
      *(undefined8 *)(pbVar10 + -0x14) = uVar13;
      *(undefined8 *)(pbVar10 + -0x16) = uVar12;
      uVar14 = *(undefined8 *)((long)pvVar6 + -0x40);
      uVar13 = *(undefined8 *)((long)pvVar6 + -0x28);
      uVar12 = *(undefined8 *)((long)pvVar6 + -0x30);
      *(undefined8 *)((long)pvVar6 + -0x50) = 0;
      *(undefined8 *)((long)pvVar6 + -0x48) = 0;
      *(undefined8 *)((long)pvVar6 + -0x58) = 0;
      bVar4 = *(basic_string *)((long)pvVar6 + -0x20);
      *(undefined8 *)(pbVar10 + -0xe) = *(undefined8 *)((long)pvVar6 + -0x38);
      *(undefined8 *)(pbVar10 + -0x10) = uVar14;
      *(undefined8 *)(pbVar10 + -10) = uVar13;
      *(undefined8 *)(pbVar10 + -0xc) = uVar12;
      *(undefined8 *)(pbVar10 + -4) = 0;
      *(undefined8 *)(pbVar10 + -2) = 0;
      *(undefined8 *)(pbVar10 + -6) = 0;
      pbVar10[-8] = bVar4;
      *(undefined8 *)(pbVar10 + -6) = *(undefined8 *)((long)pvVar6 + -0x18);
      *(undefined8 *)(pbVar10 + -4) = *(undefined8 *)((long)pvVar6 + -0x10);
      *(undefined8 *)(pbVar10 + -2) = *(undefined8 *)((long)pvVar6 + -8);
      *(undefined8 *)((long)pvVar6 + -0x18) = 0;
      *(undefined8 *)((long)pvVar6 + -0x10) = 0;
      *(undefined8 *)((long)pvVar6 + -8) = 0;
      pbVar10 = local_78 + -0x16;
      pvVar6 = pvVar11;
      local_78 = pbVar10;
    } while ((basic_string *)pvVar11 != local_70);
    local_70 = *(basic_string **)(this + 8);
    local_80 = *(void **)this;
    pvVar11 = pvStack_68;
  }
  *(basic_string **)this = pbVar10;
  *(basic_string **)(this + 8) = pbVar2;
  pvStack_68 = *(void **)(this + 0x10);
  *(void **)(this + 0x10) = pvVar11;
  local_78 = (basic_string *)local_80;
  __split_buffer<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>&>::
  ~__split_buffer((__split_buffer<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>&>
                   *)&local_80);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


