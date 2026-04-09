// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008b22f4
// Entry Point: 008b22f4
// Size: 712 bytes
// Signature: undefined FUN_008b22f4(void)


uint FUN_008b22f4(LoopData *param_1,basic_string *param_2,basic_string *param_3,
                 basic_string *param_4,basic_string *param_5,SortByRpmRoot *param_6)

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
  byte local_b0;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = std::__ndk1::
          __sort4<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
                    (param_1,(LoopData *)param_2,(LoopData *)param_3,(LoopData *)param_4,param_6);
  if ((float)param_5[8] < (float)param_4[8]) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_b0);
    uStack_90 = *(undefined8 *)(param_4 + 8);
    local_98 = *(undefined8 *)(param_4 + 6);
    local_88 = *(undefined8 *)(param_4 + 10);
    uStack_74 = *(undefined8 *)(param_4 + 0xf);
    uStack_80 = (undefined4)*(undefined8 *)(param_4 + 0xc);
    uStack_7c = (undefined4)*(undefined8 *)(param_4 + 0xd);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xd) >> 0x20);
                    /* try { // try from 008b2378 to 008b23a7 has its CatchHandler @ 008b25c8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_4,param_5);
    puVar1 = (undefined8 *)(param_4 + 6);
    uVar5 = *(undefined8 *)(param_5 + 0xd);
    uVar7 = *(undefined8 *)(param_5 + 0xc);
    uVar6 = *(undefined8 *)(param_5 + 10);
    uVar9 = *(undefined8 *)(param_5 + 8);
    uVar8 = *(undefined8 *)(param_5 + 6);
    *(undefined8 *)(param_4 + 0xf) = *(undefined8 *)(param_5 + 0xf);
    *(undefined8 *)(param_4 + 0xd) = uVar5;
    *(undefined8 *)(param_4 + 8) = uVar9;
    *puVar1 = uVar8;
    *(undefined8 *)(param_4 + 0xc) = uVar7;
    *(undefined8 *)(param_4 + 10) = uVar6;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_5,(basic_string *)&local_b0);
    *(undefined8 *)(param_5 + 8) = uStack_90;
    *(undefined8 *)(param_5 + 6) = local_98;
    *(ulong *)(param_5 + 0xc) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(param_5 + 10) = local_88;
    *(undefined8 *)(param_5 + 0xf) = uStack_74;
    *(ulong *)(param_5 + 0xd) = CONCAT44(uStack_78,uStack_7c);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((float)param_3[8] <= (float)param_4[8]) {
      uVar4 = uVar4 + 1;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_b0);
      uStack_90 = *(undefined8 *)(param_3 + 8);
      local_98 = *(undefined8 *)(param_3 + 6);
      local_88 = *(undefined8 *)(param_3 + 10);
      uStack_74 = *(undefined8 *)(param_3 + 0xf);
      uStack_80 = (undefined4)*(undefined8 *)(param_3 + 0xc);
      uStack_7c = (undefined4)*(undefined8 *)(param_3 + 0xd);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xd) >> 0x20);
                    /* try { // try from 008b2408 to 008b2433 has its CatchHandler @ 008b25c4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_3,param_4);
      uVar9 = *(undefined8 *)(param_4 + 8);
      uVar8 = *puVar1;
      uVar7 = *(undefined8 *)(param_4 + 0xc);
      uVar6 = *(undefined8 *)(param_4 + 10);
      puVar2 = (undefined8 *)(param_3 + 6);
      uVar5 = *(undefined8 *)(param_4 + 0xd);
      *(undefined8 *)(param_3 + 0xf) = *(undefined8 *)(param_4 + 0xf);
      *(undefined8 *)(param_3 + 0xd) = uVar5;
      *(undefined8 *)(param_3 + 8) = uVar9;
      *puVar2 = uVar8;
      *(undefined8 *)(param_3 + 0xc) = uVar7;
      *(undefined8 *)(param_3 + 10) = uVar6;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_4,(basic_string *)&local_b0);
      *(undefined8 *)(param_4 + 8) = uStack_90;
      *puVar1 = local_98;
      *(ulong *)(param_4 + 0xc) = CONCAT44(uStack_7c,uStack_80);
      *(undefined8 *)(param_4 + 10) = local_88;
      *(undefined8 *)(param_4 + 0xf) = uStack_74;
      *(ulong *)(param_4 + 0xd) = CONCAT44(uStack_78,uStack_7c);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((float)param_2[8] <= (float)param_3[8]) {
        uVar4 = uVar4 + 2;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_b0);
        uStack_90 = *(undefined8 *)(param_2 + 8);
        local_98 = *(undefined8 *)(param_2 + 6);
        local_88 = *(undefined8 *)(param_2 + 10);
        uStack_74 = *(undefined8 *)(param_2 + 0xf);
        uStack_80 = (undefined4)*(undefined8 *)(param_2 + 0xc);
        uStack_7c = (undefined4)*(undefined8 *)(param_2 + 0xd);
        uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xd) >> 0x20);
                    /* try { // try from 008b2490 to 008b24bb has its CatchHandler @ 008b25c0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_2,param_3);
        uVar9 = *(undefined8 *)(param_3 + 8);
        uVar8 = *puVar2;
        uVar7 = *(undefined8 *)(param_3 + 0xc);
        uVar6 = *(undefined8 *)(param_3 + 10);
        puVar1 = (undefined8 *)(param_2 + 6);
        uVar5 = *(undefined8 *)(param_3 + 0xd);
        *(undefined8 *)(param_2 + 0xf) = *(undefined8 *)(param_3 + 0xf);
        *(undefined8 *)(param_2 + 0xd) = uVar5;
        *(undefined8 *)(param_2 + 8) = uVar9;
        *puVar1 = uVar8;
        *(undefined8 *)(param_2 + 0xc) = uVar7;
        *(undefined8 *)(param_2 + 10) = uVar6;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_3,(basic_string *)&local_b0);
        *(undefined8 *)(param_3 + 8) = uStack_90;
        *puVar2 = local_98;
        *(ulong *)(param_3 + 0xc) = CONCAT44(uStack_7c,uStack_80);
        *(undefined8 *)(param_3 + 10) = local_88;
        *(undefined8 *)(param_3 + 0xf) = uStack_74;
        *(ulong *)(param_3 + 0xd) = CONCAT44(uStack_78,uStack_7c);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        if (*(float *)(param_1 + 0x20) <= (float)param_2[8]) {
          uVar4 = uVar4 + 3;
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_b0);
          uStack_90 = *(undefined8 *)(param_1 + 0x20);
          local_98 = *(undefined8 *)(param_1 + 0x18);
          local_88 = *(undefined8 *)(param_1 + 0x28);
          uStack_74 = *(undefined8 *)(param_1 + 0x3c);
          uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x30);
          uStack_7c = (undefined4)*(undefined8 *)(param_1 + 0x34);
          uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
                    /* try { // try from 008b2518 to 008b2543 has its CatchHandler @ 008b25bc */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_1,param_2);
          uVar9 = *(undefined8 *)(param_2 + 8);
          uVar8 = *puVar1;
          uVar7 = *(undefined8 *)(param_2 + 0xc);
          uVar6 = *(undefined8 *)(param_2 + 10);
          uVar5 = *(undefined8 *)(param_2 + 0xd);
          *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0xf);
          *(undefined8 *)(param_1 + 0x34) = uVar5;
          *(undefined8 *)(param_1 + 0x20) = uVar9;
          *(undefined8 *)(param_1 + 0x18) = uVar8;
          *(undefined8 *)(param_1 + 0x30) = uVar7;
          *(undefined8 *)(param_1 + 0x28) = uVar6;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_2,(basic_string *)&local_b0);
          *(undefined8 *)(param_2 + 8) = uStack_90;
          *puVar1 = local_98;
          *(ulong *)(param_2 + 0xc) = CONCAT44(uStack_7c,uStack_80);
          *(undefined8 *)(param_2 + 10) = local_88;
          *(undefined8 *)(param_2 + 0xf) = uStack_74;
          *(ulong *)(param_2 + 0xd) = CONCAT44(uStack_78,uStack_7c);
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
          uVar4 = uVar4 + 4;
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


