// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
// Entry Point: 008b25e4
// Size: 352 bytes
// Signature: void __cdecl __insertion_sort_3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>(LoopData * param_1, LoopData * param_2, SortByRpmRoot * param_3)


/* void std::__ndk1::__insertion_sort_3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,
   SteadyLoopRuntimeSettings::LoopData*>(SteadyLoopRuntimeSettings::LoopData*,
   SteadyLoopRuntimeSettings::LoopData*, SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&) */

void std::__ndk1::
     __insertion_sort_3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
               (LoopData *param_1,LoopData *param_2,SortByRpmRoot *param_3)

{
  long lVar1;
  long lVar2;
  LoopData *pLVar3;
  long lVar4;
  LoopData *pLVar5;
  LoopData *pLVar6;
  long lVar7;
  byte local_a0;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
            (param_1,param_1 + 0x48,param_1 + 0x90,param_3);
  if (param_1 + 0xd8 != param_2) {
    lVar7 = 0;
    pLVar3 = param_1 + 0xd8;
    pLVar6 = param_1 + 0x90;
    do {
      pLVar5 = pLVar3;
      if (*(float *)(pLVar5 + 0x20) < *(float *)(pLVar6 + 0x20)) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_a0);
        uStack_80 = *(undefined8 *)(pLVar5 + 0x20);
        local_88 = *(undefined8 *)(pLVar5 + 0x18);
        uStack_78 = *(undefined8 *)(pLVar5 + 0x28);
        uStack_64 = *(undefined8 *)(pLVar5 + 0x3c);
        uStack_70 = (undefined4)*(undefined8 *)(pLVar5 + 0x30);
        local_6c = (undefined4)*(undefined8 *)(pLVar5 + 0x34);
        uStack_68 = (undefined4)((ulong)*(undefined8 *)(pLVar5 + 0x34) >> 0x20);
        lVar2 = lVar7;
        do {
          lVar4 = lVar2;
                    /* try { // try from 008b26a0 to 008b26a3 has its CatchHandler @ 008b2748 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + lVar4 + 0xd8),(basic_string *)(param_1 + lVar4 + 0x90));
          *(undefined8 *)(param_1 + lVar4 + 0xf8) = *(undefined8 *)(param_1 + lVar4 + 0xb0);
          *(undefined8 *)(param_1 + lVar4 + 0xf0) = *(undefined8 *)(param_1 + lVar4 + 0xa8);
          *(undefined8 *)(param_1 + lVar4 + 0x108) = *(undefined8 *)(param_1 + lVar4 + 0xc0);
          *(undefined8 *)(param_1 + lVar4 + 0x100) = *(undefined8 *)(param_1 + lVar4 + 0xb8);
          *(undefined8 *)(param_1 + lVar4 + 0x114) = *(undefined8 *)(param_1 + lVar4 + 0xcc);
          *(undefined8 *)(param_1 + lVar4 + 0x10c) = *(undefined8 *)(param_1 + lVar4 + 0xc4);
          if (lVar4 == -0x90) break;
          lVar2 = lVar4 + -0x48;
        } while ((float)uStack_80 < *(float *)(param_1 + lVar4 + 0x68));
                    /* try { // try from 008b26e4 to 008b26eb has its CatchHandler @ 008b2744 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(param_1 + lVar4 + 0x90),(basic_string *)&local_a0);
        *(undefined8 *)(param_1 + lVar4 + 0xb0) = uStack_80;
        *(undefined8 *)(param_1 + lVar4 + 0xa8) = local_88;
        *(ulong *)(param_1 + lVar4 + 0xc0) = CONCAT44(local_6c,uStack_70);
        *(undefined8 *)(param_1 + lVar4 + 0xb8) = uStack_78;
        *(undefined8 *)(param_1 + lVar4 + 0xcc) = uStack_64;
        *(ulong *)(param_1 + lVar4 + 0xc4) = CONCAT44(uStack_68,local_6c);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      lVar7 = lVar7 + 0x48;
      pLVar3 = pLVar5 + 0x48;
      pLVar6 = pLVar5;
    } while (pLVar5 + 0x48 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


