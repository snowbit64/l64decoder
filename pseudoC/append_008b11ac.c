// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008b11ac
// Size: 604 bytes
// Signature: undefined __thiscall __append(vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>> * this, ulong param_1)


/* std::__ndk1::vector<SteadyLoopRuntimeSettings::LoopData,
   std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
::__append(vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
           *this,ulong param_1)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  basic_string *pbVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar7 = *(undefined2 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar7 >> 3) * -0x71c71c71c71c71c7) < param_1) {
    lVar6 = (long)puVar7 - *(long *)this >> 3;
    uVar1 = lVar6 * -0x71c71c71c71c71c7 + param_1;
    if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar12 = lVar11 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar12) {
      uVar1 = uVar12;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
      uVar1 = 0x38e38e38e38e38e;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar1 * 0x48);
    }
    pbVar9 = (basic_string *)((long)pvVar4 + lVar6 * 8);
    pbVar15 = pbVar9 + param_1 * 0x12;
    pbVar10 = pbVar9;
    do {
      *(undefined2 *)pbVar10 = 0;
      *(undefined8 *)(pbVar10 + 8) = 0x3f80000000000000;
      *(undefined8 *)(pbVar10 + 6) = 0;
      *(undefined8 *)(pbVar10 + 0xc) = 0;
      *(undefined8 *)(pbVar10 + 0xe) = 0;
      *(undefined8 *)(pbVar10 + 10) = 0;
      pbVar10[0x10] = 0;
      pbVar10 = pbVar10 + 0x12;
    } while (pbVar10 != pbVar15);
    pbVar14 = *(byte **)this;
    pbVar2 = *(byte **)(this + 8);
    pbVar13 = pbVar14;
    pbVar10 = pbVar9;
    if (pbVar2 != pbVar14) {
      do {
                    /* try { // try from 008b1334 to 008b133f has its CatchHandler @ 008b1408 */
        pbVar9 = pbVar10 + -0x12;
        pbVar13 = pbVar2 + -0x48;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar9);
        uVar16 = *(undefined8 *)(pbVar2 + -0x20);
        uVar18 = *(undefined8 *)(pbVar2 + -0x28);
        uVar17 = *(undefined8 *)(pbVar2 + -0x30);
        uVar20 = *(undefined8 *)(pbVar2 + -0xc);
        uVar19 = *(undefined8 *)(pbVar2 + -0x14);
        *(undefined8 *)(pbVar10 + -6) = *(undefined8 *)(pbVar2 + -0x18);
        *(undefined8 *)(pbVar10 + -8) = uVar16;
        *(undefined8 *)(pbVar10 + -10) = uVar18;
        *(undefined8 *)(pbVar10 + -0xc) = uVar17;
        *(undefined8 *)(pbVar10 + -3) = uVar20;
        *(undefined8 *)(pbVar10 + -5) = uVar19;
        pbVar2 = pbVar13;
        pbVar10 = pbVar9;
      } while (pbVar13 != pbVar14);
      pbVar14 = *(byte **)this;
      pbVar13 = *(byte **)(this + 8);
    }
    *(basic_string **)this = pbVar9;
    *(basic_string **)(this + 8) = pbVar15;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x48);
    while (pbVar2 = pbVar13, pbVar2 != pbVar14) {
      pbVar13 = pbVar2 + -0x48;
      if ((*pbVar13 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -0x38));
      }
    }
    if (pbVar14 != (byte *)0x0) {
      operator_delete(pbVar14);
    }
  }
  else {
    puVar8 = puVar7;
    if (param_1 != 0) {
      puVar8 = puVar7 + param_1 * 0x24;
      do {
        *puVar7 = 0;
        *(undefined8 *)(puVar7 + 0x10) = 0x3f80000000000000;
        *(undefined8 *)(puVar7 + 0xc) = 0;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        *(undefined8 *)(puVar7 + 0x1c) = 0;
        *(undefined8 *)(puVar7 + 0x14) = 0;
        *(undefined4 *)(puVar7 + 0x20) = 0;
        puVar7 = puVar7 + 0x24;
      } while (puVar7 != puVar8);
    }
    *(undefined2 **)(this + 8) = puVar8;
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


