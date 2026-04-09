// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
// Entry Point: 008b2764
// Size: 700 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>(LoopData * param_1, LoopData * param_2, SortByRpmRoot * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,
   SteadyLoopRuntimeSettings::LoopData*>(SteadyLoopRuntimeSettings::LoopData*,
   SteadyLoopRuntimeSettings::LoopData*, SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&) */

bool std::__ndk1::
     __insertion_sort_incomplete<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
               (LoopData *param_1,LoopData *param_2,SortByRpmRoot *param_3)

{
  long lVar1;
  long lVar2;
  LoopData *pLVar3;
  bool bVar4;
  ulong uVar5;
  LoopData *pLVar6;
  long lVar7;
  LoopData *pLVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = ((long)param_2 - (long)param_1 >> 3) * -0x71c71c71c71c71c7;
  if (5 < uVar5) {
    __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
              (param_1,param_1 + 0x48,param_1 + 0x90,param_3);
    if (param_1 + 0xd8 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      pLVar3 = param_1 + 0xd8;
      pLVar8 = param_1 + 0x90;
      do {
        pLVar6 = pLVar3;
        if (*(float *)(pLVar6 + 0x20) < *(float *)(pLVar8 + 0x20)) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_b0);
          uStack_90 = *(undefined8 *)(pLVar6 + 0x20);
          local_98 = *(undefined8 *)(pLVar6 + 0x18);
          local_88 = *(undefined8 *)(pLVar6 + 0x28);
          uStack_74 = *(undefined8 *)(pLVar6 + 0x3c);
          uStack_80 = (undefined4)*(undefined8 *)(pLVar6 + 0x30);
          uStack_7c = (undefined4)*(undefined8 *)(pLVar6 + 0x34);
          uStack_78 = (undefined4)((ulong)*(undefined8 *)(pLVar6 + 0x34) >> 0x20);
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
                    /* try { // try from 008b292c to 008b292f has its CatchHandler @ 008b2a34 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(param_1 + lVar7 + 0xd8),(basic_string *)(param_1 + lVar7 + 0x90));
            *(undefined8 *)(param_1 + lVar7 + 0xf8) = *(undefined8 *)(param_1 + lVar7 + 0xb0);
            *(undefined8 *)(param_1 + lVar7 + 0xf0) = *(undefined8 *)(param_1 + lVar7 + 0xa8);
            *(undefined8 *)(param_1 + lVar7 + 0x108) = *(undefined8 *)(param_1 + lVar7 + 0xc0);
            *(undefined8 *)(param_1 + lVar7 + 0x100) = *(undefined8 *)(param_1 + lVar7 + 0xb8);
            *(undefined8 *)(param_1 + lVar7 + 0x114) = *(undefined8 *)(param_1 + lVar7 + 0xcc);
            *(undefined8 *)(param_1 + lVar7 + 0x10c) = *(undefined8 *)(param_1 + lVar7 + 0xc4);
            if (lVar7 == -0x90) break;
            lVar2 = lVar7 + -0x48;
          } while ((float)uStack_90 < *(float *)(param_1 + lVar7 + 0x68));
                    /* try { // try from 008b2970 to 008b2977 has its CatchHandler @ 008b2a30 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(param_1 + lVar7 + 0x90),(basic_string *)&local_b0);
          *(undefined8 *)(param_1 + lVar7 + 0xb0) = uStack_90;
          *(undefined8 *)(param_1 + lVar7 + 0xa8) = local_98;
          *(ulong *)(param_1 + lVar7 + 0xc0) = CONCAT44(uStack_7c,uStack_80);
          *(undefined8 *)(param_1 + lVar7 + 0xb8) = local_88;
          *(undefined8 *)(param_1 + lVar7 + 0xcc) = uStack_74;
          *(ulong *)(param_1 + lVar7 + 0xc4) = CONCAT44(uStack_78,uStack_7c);
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            bVar4 = pLVar6 + 0x48 == param_2;
            goto switchD_008b27d8_caseD_0;
          }
        }
        lVar9 = lVar9 + 0x48;
        pLVar3 = pLVar6 + 0x48;
        pLVar8 = pLVar6;
      } while (pLVar6 + 0x48 != param_2);
    }
    goto LAB_008b29d8;
  }
  bVar4 = true;
  switch(uVar5) {
  case 2:
    if (*(float *)(param_2 + -0x28) < *(float *)(param_1 + 0x20)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_b0);
      uStack_90 = *(undefined8 *)(param_1 + 0x20);
      local_98 = *(undefined8 *)(param_1 + 0x18);
      local_88 = *(undefined8 *)(param_1 + 0x28);
      uStack_74 = *(undefined8 *)(param_1 + 0x3c);
      uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x30);
      uStack_7c = (undefined4)*(undefined8 *)(param_1 + 0x34);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
                    /* try { // try from 008b2818 to 008b2843 has its CatchHandler @ 008b2a20 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1,(basic_string *)(param_2 + -0x48));
      uVar15 = *(undefined8 *)(param_2 + -0x28);
      uVar14 = *(undefined8 *)(param_2 + -0x30);
      uVar13 = *(undefined8 *)(param_2 + -0x18);
      uVar12 = *(undefined8 *)(param_2 + -0x20);
      uVar11 = *(undefined8 *)(param_2 + -0x14);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + -0xc);
      *(undefined8 *)(param_1 + 0x34) = uVar11;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      *(undefined8 *)(param_1 + 0x18) = uVar14;
      *(undefined8 *)(param_1 + 0x30) = uVar13;
      *(undefined8 *)(param_1 + 0x28) = uVar12;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_2 + -0x48),(basic_string *)&local_b0);
      *(undefined8 *)(param_2 + -0x28) = uStack_90;
      *(undefined8 *)(param_2 + -0x30) = local_98;
      *(ulong *)(param_2 + -0x18) = CONCAT44(uStack_7c,uStack_80);
      *(undefined8 *)(param_2 + -0x20) = local_88;
      *(undefined8 *)(param_2 + -0xc) = uStack_74;
      *(ulong *)(param_2 + -0x14) = CONCAT44(uStack_78,uStack_7c);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    goto LAB_008b29d8;
  case 3:
    __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
              (param_1,param_1 + 0x48,param_2 + -0x48,param_3);
    bVar4 = true;
    break;
  case 4:
    __sort4<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
              (param_1,param_1 + 0x48,param_1 + 0x90,param_2 + -0x48,param_3);
LAB_008b29d8:
    bVar4 = true;
    break;
  case 5:
    FUN_008b22f4(param_1,param_1 + 0x48,param_1 + 0x90,param_1 + 0xd8,param_2 + -0x48);
    bVar4 = true;
  }
switchD_008b27d8_caseD_0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


