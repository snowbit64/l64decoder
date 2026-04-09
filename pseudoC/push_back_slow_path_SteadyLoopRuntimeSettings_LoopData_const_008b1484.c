// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<SteadyLoopRuntimeSettings::LoopData_const&>
// Entry Point: 008b1484
// Size: 544 bytes
// Signature: void __thiscall __push_back_slow_path<SteadyLoopRuntimeSettings::LoopData_const&>(vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>> * this, LoopData * param_1)


/* void std::__ndk1::vector<SteadyLoopRuntimeSettings::LoopData,
   std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>
   >::__push_back_slow_path<SteadyLoopRuntimeSettings::LoopData
   const&>(SteadyLoopRuntimeSettings::LoopData const&) */

void __thiscall
std::__ndk1::
vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
::__push_back_slow_path<SteadyLoopRuntimeSettings::LoopData_const&>
          (vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
           *this,LoopData *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  byte *pbVar3;
  long lVar4;
  basic_string *pbVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  basic_string *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  lVar6 = (*(long *)(this + 8) - *(long *)this) / 0x48;
  uVar1 = lVar6 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x1c71c71c71c71c6 < (ulong)(lVar9 * -0x71c71c71c71c71c7)) {
    uVar1 = 0x38e38e38e38e38e;
  }
  if (uVar1 == 0) {
    pvVar7 = (void *)0x0;
  }
  else {
    if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar7 = operator_new(uVar1 * 0x48);
  }
  pbVar13 = (basic_string *)((long)pvVar7 + lVar6 * 0x48);
                    /* try { // try from 008b157c to 008b1587 has its CatchHandler @ 008b16a4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  pbVar2 = pbVar13 + 0x12;
  uVar18 = *(undefined8 *)(param_1 + 0x3c);
  uVar17 = *(undefined8 *)(param_1 + 0x34);
  pbVar12 = *(byte **)this;
  pbVar3 = *(byte **)(this + 8);
  *(undefined8 *)((long)pvVar7 + lVar6 * 0x48 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)pvVar7 + lVar6 * 0x48 + 0x18) = uVar14;
  *(undefined8 *)((long)pvVar7 + lVar6 * 0x48 + 0x30) = uVar16;
  *(undefined8 *)((long)pvVar7 + lVar6 * 0x48 + 0x28) = uVar15;
  *(undefined8 *)((long)pvVar7 + lVar6 * 0x48 + 0x3c) = uVar18;
  *(undefined8 *)((long)pvVar7 + lVar6 * 0x48 + 0x34) = uVar17;
  pbVar11 = pbVar12;
  if (pbVar3 != pbVar12) {
    pbVar5 = (basic_string *)((long)pvVar7 + lVar6 * 0x48);
    do {
                    /* try { // try from 008b15cc to 008b15d7 has its CatchHandler @ 008b16a8 */
      pbVar13 = pbVar5 + -0x12;
      pbVar11 = pbVar3 + -0x48;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(pbVar13);
      uVar14 = *(undefined8 *)(pbVar3 + -0x20);
      uVar16 = *(undefined8 *)(pbVar3 + -0x28);
      uVar15 = *(undefined8 *)(pbVar3 + -0x30);
      uVar18 = *(undefined8 *)(pbVar3 + -0xc);
      uVar17 = *(undefined8 *)(pbVar3 + -0x14);
      *(undefined8 *)(pbVar5 + -6) = *(undefined8 *)(pbVar3 + -0x18);
      *(undefined8 *)(pbVar5 + -8) = uVar14;
      *(undefined8 *)(pbVar5 + -10) = uVar16;
      *(undefined8 *)(pbVar5 + -0xc) = uVar15;
      *(undefined8 *)(pbVar5 + -3) = uVar18;
      *(undefined8 *)(pbVar5 + -5) = uVar17;
      pbVar3 = pbVar11;
      pbVar5 = pbVar13;
    } while (pbVar11 != pbVar12);
    pbVar12 = *(byte **)this;
    pbVar11 = *(byte **)(this + 8);
  }
  *(basic_string **)this = pbVar13;
  *(basic_string **)(this + 8) = pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar7 + uVar1 * 0x48);
  while (pbVar3 = pbVar11, pbVar3 != pbVar12) {
    pbVar11 = pbVar3 + -0x48;
    if ((*pbVar11 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + -0x38));
    }
  }
  if (pbVar12 != (byte *)0x0) {
    operator_delete(pbVar12);
  }
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


