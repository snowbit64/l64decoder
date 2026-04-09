// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
// Entry Point: 008b20a4
// Size: 556 bytes
// Signature: uint __cdecl __sort4<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>(LoopData * param_1, LoopData * param_2, LoopData * param_3, LoopData * param_4, SortByRpmRoot * param_5)


/* unsigned int std::__ndk1::__sort4<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,
   SteadyLoopRuntimeSettings::LoopData*>(SteadyLoopRuntimeSettings::LoopData*,
   SteadyLoopRuntimeSettings::LoopData*, SteadyLoopRuntimeSettings::LoopData*,
   SteadyLoopRuntimeSettings::LoopData*, SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&) */

uint std::__ndk1::
     __sort4<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
               (LoopData *param_1,LoopData *param_2,LoopData *param_3,LoopData *param_4,
               SortByRpmRoot *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_a0;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
                    (param_1,param_2,param_3,param_5);
  if (*(float *)(param_4 + 0x20) < *(float *)(param_3 + 0x20)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_a0);
    uStack_80 = *(undefined8 *)(param_3 + 0x20);
    local_88 = *(undefined8 *)(param_3 + 0x18);
    local_78 = *(undefined8 *)(param_3 + 0x28);
    uStack_64 = *(undefined8 *)(param_3 + 0x3c);
    uStack_70 = (undefined4)*(undefined8 *)(param_3 + 0x30);
    uStack_6c = (undefined4)*(undefined8 *)(param_3 + 0x34);
    uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20);
                    /* try { // try from 008b2120 to 008b214f has its CatchHandler @ 008b22d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_3,(basic_string *)param_4);
    puVar1 = (undefined8 *)(param_3 + 0x18);
    uVar5 = *(undefined8 *)(param_4 + 0x34);
    uVar7 = *(undefined8 *)(param_4 + 0x30);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    uVar9 = *(undefined8 *)(param_4 + 0x20);
    uVar8 = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_4 + 0x3c);
    *(undefined8 *)(param_3 + 0x34) = uVar5;
    *(undefined8 *)(param_3 + 0x20) = uVar9;
    *puVar1 = uVar8;
    *(undefined8 *)(param_3 + 0x30) = uVar7;
    *(undefined8 *)(param_3 + 0x28) = uVar6;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_4,(basic_string *)&local_a0);
    *(undefined8 *)(param_4 + 0x20) = uStack_80;
    *(undefined8 *)(param_4 + 0x18) = local_88;
    *(ulong *)(param_4 + 0x30) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(param_4 + 0x28) = local_78;
    *(undefined8 *)(param_4 + 0x3c) = uStack_64;
    *(ulong *)(param_4 + 0x34) = CONCAT44(uStack_68,uStack_6c);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (*(float *)(param_2 + 0x20) <= *(float *)(param_3 + 0x20)) {
      uVar4 = uVar4 + 1;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_a0);
      uStack_80 = *(undefined8 *)(param_2 + 0x20);
      local_88 = *(undefined8 *)(param_2 + 0x18);
      local_78 = *(undefined8 *)(param_2 + 0x28);
      uStack_64 = *(undefined8 *)(param_2 + 0x3c);
      uStack_70 = (undefined4)*(undefined8 *)(param_2 + 0x30);
      uStack_6c = (undefined4)*(undefined8 *)(param_2 + 0x34);
      uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
                    /* try { // try from 008b21b0 to 008b21db has its CatchHandler @ 008b22d4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_2,(basic_string *)param_3);
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      uVar8 = *puVar1;
      uVar7 = *(undefined8 *)(param_3 + 0x30);
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      puVar2 = (undefined8 *)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_3 + 0x34);
      *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_3 + 0x3c);
      *(undefined8 *)(param_2 + 0x34) = uVar5;
      *(undefined8 *)(param_2 + 0x20) = uVar9;
      *puVar2 = uVar8;
      *(undefined8 *)(param_2 + 0x30) = uVar7;
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_3,(basic_string *)&local_a0);
      *(undefined8 *)(param_3 + 0x20) = uStack_80;
      *puVar1 = local_88;
      *(ulong *)(param_3 + 0x30) = CONCAT44(uStack_6c,uStack_70);
      *(undefined8 *)(param_3 + 0x28) = local_78;
      *(undefined8 *)(param_3 + 0x3c) = uStack_64;
      *(ulong *)(param_3 + 0x34) = CONCAT44(uStack_68,uStack_6c);
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if (*(float *)(param_1 + 0x20) <= *(float *)(param_2 + 0x20)) {
        uVar4 = uVar4 + 2;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_a0);
        uStack_80 = *(undefined8 *)(param_1 + 0x20);
        local_88 = *(undefined8 *)(param_1 + 0x18);
        local_78 = *(undefined8 *)(param_1 + 0x28);
        uStack_64 = *(undefined8 *)(param_1 + 0x3c);
        uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x30);
        uStack_6c = (undefined4)*(undefined8 *)(param_1 + 0x34);
        uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
                    /* try { // try from 008b2238 to 008b2263 has its CatchHandler @ 008b22d0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_1,(basic_string *)param_2);
        uVar9 = *(undefined8 *)(param_2 + 0x20);
        uVar8 = *puVar2;
        uVar7 = *(undefined8 *)(param_2 + 0x30);
        uVar6 = *(undefined8 *)(param_2 + 0x28);
        uVar5 = *(undefined8 *)(param_2 + 0x34);
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
        *(undefined8 *)(param_1 + 0x34) = uVar5;
        *(undefined8 *)(param_1 + 0x20) = uVar9;
        *(undefined8 *)(param_1 + 0x18) = uVar8;
        *(undefined8 *)(param_1 + 0x30) = uVar7;
        *(undefined8 *)(param_1 + 0x28) = uVar6;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_2,(basic_string *)&local_a0);
        *(undefined8 *)(param_2 + 0x20) = uStack_80;
        *puVar2 = local_88;
        *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_6c,uStack_70);
        *(undefined8 *)(param_2 + 0x28) = local_78;
        *(undefined8 *)(param_2 + 0x3c) = uStack_64;
        *(ulong *)(param_2 + 0x34) = CONCAT44(uStack_68,uStack_6c);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        uVar4 = uVar4 + 3;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


