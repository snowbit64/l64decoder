// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<AnimalAnimationSystemSource::Trigger_const&>
// Entry Point: 0070931c
// Size: 464 bytes
// Signature: void __thiscall __push_back_slow_path<AnimalAnimationSystemSource::Trigger_const&>(vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>> * this, Trigger * param_1)


/* void std::__ndk1::vector<AnimalAnimationSystemSource::Trigger,
   std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>
   >::__push_back_slow_path<AnimalAnimationSystemSource::Trigger
   const&>(AnimalAnimationSystemSource::Trigger const&) */

void __thiscall
std::__ndk1::
vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
::__push_back_slow_path<AnimalAnimationSystemSource::Trigger_const&>
          (vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
           *this,Trigger *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * -0x6666666666666666;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
    uVar1 = 0x666666666666666;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x28);
  }
  puVar12 = (undefined8 *)((long)pvVar4 + lVar6 * 8);
  *puVar12 = *(undefined8 *)param_1;
                    /* try { // try from 007093f4 to 007093f7 has its CatchHandler @ 007094ec */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar12 + 1));
  puVar2 = puVar12 + 5;
  puVar7 = *(undefined8 **)this;
  puVar8 = *(undefined8 **)(this + 8);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  puVar11 = puVar7;
  if (puVar8 != puVar7) {
    do {
      puVar11 = puVar8 + -5;
      puVar12[-5] = *puVar11;
      uVar14 = puVar8[-3];
      uVar13 = puVar8[-4];
      puVar12[-2] = puVar8[-2];
      puVar12[-3] = uVar14;
      puVar12[-4] = uVar13;
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      puVar8[-4] = 0;
      puVar12[-1] = puVar8[-1];
      puVar12 = puVar12 + -5;
      puVar8 = puVar11;
    } while (puVar11 != puVar7);
    puVar7 = *(undefined8 **)(this + 8);
    puVar11 = *(undefined8 **)this;
  }
  *(undefined8 **)this = puVar12;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x28);
  while (puVar2 = puVar7, puVar2 != puVar11) {
    puVar7 = puVar2 + -5;
    if ((*(byte *)(puVar2 + -4) & 1) != 0) {
      operator_delete((void *)puVar2[-2]);
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


