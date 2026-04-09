// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SteadyLoopRuntimeSettings
// Entry Point: 008b048c
// Size: 348 bytes
// Signature: undefined __thiscall SteadyLoopRuntimeSettings(SteadyLoopRuntimeSettings * this, SteadyLoopRuntimeSettings * param_1)


/* SteadyLoopRuntimeSettings::SteadyLoopRuntimeSettings(SteadyLoopRuntimeSettings const&) */

void __thiscall
SteadyLoopRuntimeSettings::SteadyLoopRuntimeSettings
          (SteadyLoopRuntimeSettings *this,SteadyLoopRuntimeSettings *param_1)

{
  basic_string *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  void **ppvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  lVar6 = *(long *)param_1;
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 - lVar6 != 0) {
                    /* try { // try from 008b04d8 to 008b04df has its CatchHandler @ 008b05e8 */
    std::__ndk1::
    vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
    ::__append((vector<SteadyLoopRuntimeSettings::LoopData,std::__ndk1::allocator<SteadyLoopRuntimeSettings::LoopData>>
                *)this,(lVar8 - lVar6 >> 3) * -0x71c71c71c71c71c7);
    lVar6 = *(long *)param_1;
    lVar8 = *(long *)(param_1 + 8);
  }
  if (lVar8 != lVar6) {
    uVar7 = 0;
    do {
      lVar8 = uVar7 * 0x48;
      pbVar1 = (basic_string *)(lVar6 + lVar8);
      this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (*(long *)this + lVar8);
                    /* try { // try from 008b0538 to 008b0577 has its CatchHandler @ 008b05ec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=(this_00,pbVar1);
      uVar10 = *(undefined8 *)(pbVar1 + 0xd);
      uVar12 = *(undefined8 *)(pbVar1 + 0xc);
      uVar11 = *(undefined8 *)(pbVar1 + 10);
      uVar14 = *(undefined8 *)(pbVar1 + 8);
      uVar13 = *(undefined8 *)(pbVar1 + 6);
      *(undefined8 *)(this_00 + 0x3c) = *(undefined8 *)(pbVar1 + 0xf);
      *(undefined8 *)(this_00 + 0x34) = uVar10;
      *(undefined8 *)(this_00 + 0x30) = uVar12;
      *(undefined8 *)(this_00 + 0x28) = uVar11;
      *(undefined8 *)(this_00 + 0x20) = uVar14;
      *(undefined8 *)(this_00 + 0x18) = uVar13;
      lVar6 = *(long *)param_1;
      ppvVar5 = (void **)(lVar6 + lVar8 + 0x28);
      if (*ppvVar5 != (void *)0x0) {
        puVar9 = (uint *)(lVar6 + uVar7 * 0x48 + 0x3c);
        pvVar3 = operator_new__((ulong)*puVar9);
        uVar2 = *puVar9;
        *(void **)(*(long *)this + uVar7 * 0x48 + 0x28) = pvVar3;
        memcpy(pvVar3,*ppvVar5,(ulong)uVar2);
      }
      ppvVar5 = (void **)(lVar6 + uVar7 * 0x48 + 0x30);
      if (*ppvVar5 != (void *)0x0) {
        puVar9 = (uint *)(lVar6 + uVar7 * 0x48 + 0x3c);
                    /* try { // try from 008b05ac to 008b05af has its CatchHandler @ 008b05ec */
        pvVar3 = operator_new__((ulong)*puVar9 << 1);
        uVar2 = *puVar9;
        *(void **)(*(long *)this + uVar7 * 0x48 + 0x30) = pvVar3;
        memcpy(pvVar3,*ppvVar5,(ulong)uVar2);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar4 = (*(long *)(param_1 + 8) - lVar6 >> 3) * -0x71c71c71c71c71c7;
    } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
  }
  return;
}


