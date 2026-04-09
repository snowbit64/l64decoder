// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
// Entry Point: 008b1d5c
// Size: 796 bytes
// Signature: uint __cdecl __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>(LoopData * param_1, LoopData * param_2, LoopData * param_3, SortByRpmRoot * param_4)


/* unsigned int std::__ndk1::__sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,
   SteadyLoopRuntimeSettings::LoopData*>(SteadyLoopRuntimeSettings::LoopData*,
   SteadyLoopRuntimeSettings::LoopData*, SteadyLoopRuntimeSettings::LoopData*,
   SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&) */

uint std::__ndk1::
     __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
               (LoopData *param_1,LoopData *param_2,LoopData *param_3,SortByRpmRoot *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_90;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  fVar4 = *(float *)(param_2 + 0x20);
  if (*(float *)(param_1 + 0x20) <= fVar4) {
    if (fVar4 <= *(float *)(param_3 + 0x20)) {
      uVar3 = 0;
      goto LAB_008b204c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_90);
    uStack_70 = *(undefined8 *)(param_2 + 0x20);
    local_78 = *(undefined8 *)(param_2 + 0x18);
    local_68 = *(undefined8 *)(param_2 + 0x28);
    uStack_54 = *(undefined8 *)(param_2 + 0x3c);
    uStack_60 = (undefined4)*(undefined8 *)(param_2 + 0x30);
    uStack_5c = (undefined4)*(undefined8 *)(param_2 + 0x34);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
                    /* try { // try from 008b1e5c to 008b1e8b has its CatchHandler @ 008b2084 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_2,(basic_string *)param_3);
    puVar1 = (undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_3 + 0x34);
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_3 + 0x3c);
    *(undefined8 *)(param_2 + 0x34) = uVar5;
    *(undefined8 *)(param_2 + 0x20) = uVar9;
    *puVar1 = uVar8;
    *(undefined8 *)(param_2 + 0x30) = uVar7;
    *(undefined8 *)(param_2 + 0x28) = uVar6;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_3,(basic_string *)&local_90);
    *(undefined8 *)(param_3 + 0x20) = uStack_70;
    *(undefined8 *)(param_3 + 0x18) = local_78;
    *(ulong *)(param_3 + 0x30) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(param_3 + 0x28) = local_68;
    *(undefined8 *)(param_3 + 0x3c) = uStack_54;
    *(ulong *)(param_3 + 0x34) = CONCAT44(uStack_58,uStack_5c);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (*(float *)(param_2 + 0x20) < *(float *)(param_1 + 0x20)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_90);
      uStack_70 = *(undefined8 *)(param_1 + 0x20);
      local_78 = *(undefined8 *)(param_1 + 0x18);
      local_68 = *(undefined8 *)(param_1 + 0x28);
      uStack_54 = *(undefined8 *)(param_1 + 0x3c);
      uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x30);
      uStack_5c = (undefined4)*(undefined8 *)(param_1 + 0x34);
      uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
                    /* try { // try from 008b1eec to 008b1f17 has its CatchHandler @ 008b207c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1,(basic_string *)param_2);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      uVar8 = *puVar1;
      uVar7 = *(undefined8 *)(param_2 + 0x30);
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      uVar5 = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
      *(undefined8 *)(param_1 + 0x34) = uVar5;
      *(undefined8 *)(param_1 + 0x20) = uVar9;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x30) = uVar7;
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_2,(basic_string *)&local_90);
      *(undefined8 *)(param_2 + 0x20) = uStack_70;
      *puVar1 = local_78;
      *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_5c,uStack_60);
      *(undefined8 *)(param_2 + 0x28) = local_68;
      *(undefined8 *)(param_2 + 0x3c) = uStack_54;
      *(ulong *)(param_2 + 0x34) = CONCAT44(uStack_58,uStack_5c);
      goto joined_r0x008b1f30;
    }
  }
  else if (fVar4 <= *(float *)(param_3 + 0x20)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_90);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    local_78 = *(undefined8 *)(param_1 + 0x18);
    local_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_54 = *(undefined8 *)(param_1 + 0x3c);
    uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x30);
    uStack_5c = (undefined4)*(undefined8 *)(param_1 + 0x34);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
                    /* try { // try from 008b1f58 to 008b1f87 has its CatchHandler @ 008b2080 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1,(basic_string *)param_2);
    uVar5 = *(undefined8 *)(param_2 + 0x34);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x34) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_2,(basic_string *)&local_90);
    puVar1 = (undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x20) = uStack_70;
    *puVar1 = local_78;
    *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(param_2 + 0x28) = local_68;
    *(undefined8 *)(param_2 + 0x3c) = uStack_54;
    *(ulong *)(param_2 + 0x34) = CONCAT44(uStack_58,uStack_5c);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (*(float *)(param_3 + 0x20) < *(float *)(param_2 + 0x20)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_90);
      uStack_70 = *(undefined8 *)(param_2 + 0x20);
      local_78 = *puVar1;
      local_68 = *(undefined8 *)(param_2 + 0x28);
      uStack_54 = *(undefined8 *)(param_2 + 0x3c);
      uStack_60 = (undefined4)*(undefined8 *)(param_2 + 0x30);
      uStack_5c = (undefined4)*(undefined8 *)(param_2 + 0x34);
      uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
                    /* try { // try from 008b1fe4 to 008b200f has its CatchHandler @ 008b2078 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_2,(basic_string *)param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x34);
      uVar7 = *(undefined8 *)(param_3 + 0x30);
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_3 + 0x3c);
      *(undefined8 *)(param_2 + 0x34) = uVar5;
      *(undefined8 *)(param_2 + 0x20) = uVar9;
      *puVar1 = uVar8;
      *(undefined8 *)(param_2 + 0x30) = uVar7;
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_3,(basic_string *)&local_90);
      *(undefined8 *)(param_3 + 0x20) = uStack_70;
      *(undefined8 *)(param_3 + 0x18) = local_78;
      *(ulong *)(param_3 + 0x30) = CONCAT44(uStack_5c,uStack_60);
      *(undefined8 *)(param_3 + 0x28) = local_68;
      *(undefined8 *)(param_3 + 0x3c) = uStack_54;
      *(ulong *)(param_3 + 0x34) = CONCAT44(uStack_58,uStack_5c);
joined_r0x008b1f30:
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      uVar3 = 2;
      goto LAB_008b204c;
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_90);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    local_78 = *(undefined8 *)(param_1 + 0x18);
    local_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_54 = *(undefined8 *)(param_1 + 0x3c);
    uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x30);
    uStack_5c = (undefined4)*(undefined8 *)(param_1 + 0x34);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
                    /* try { // try from 008b1dd0 to 008b1dff has its CatchHandler @ 008b2088 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1,(basic_string *)param_3);
    uVar5 = *(undefined8 *)(param_3 + 0x34);
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_3 + 0x3c);
    *(undefined8 *)(param_1 + 0x34) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_3,(basic_string *)&local_90);
    *(undefined8 *)(param_3 + 0x20) = uStack_70;
    *(undefined8 *)(param_3 + 0x18) = local_78;
    *(ulong *)(param_3 + 0x30) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(param_3 + 0x28) = local_68;
    *(undefined8 *)(param_3 + 0x3c) = uStack_54;
    *(ulong *)(param_3 + 0x34) = CONCAT44(uStack_58,uStack_5c);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  uVar3 = 1;
LAB_008b204c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


