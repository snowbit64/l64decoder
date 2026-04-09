// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
// Entry Point: 008b16bc
// Size: 1648 bytes
// Signature: void __cdecl __sort<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>(LoopData * param_1, LoopData * param_2, SortByRpmRoot * param_3)


/* void std::__ndk1::__sort<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,
   SteadyLoopRuntimeSettings::LoopData*>(SteadyLoopRuntimeSettings::LoopData*,
   SteadyLoopRuntimeSettings::LoopData*, SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&) */

void std::__ndk1::
     __sort<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
               (LoopData *param_1,LoopData *param_2,SortByRpmRoot *param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  basic_string *this;
  basic_string *pbVar6;
  basic_string *pbVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte local_b0;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
LAB_008b1700:
  this = (basic_string *)((long)param_2 + -0x48);
  puVar12 = (undefined8 *)((long)param_2 + -0x30);
  pbVar7 = (basic_string *)param_1;
LAB_008b1710:
  param_1 = (LoopData *)pbVar7;
  uVar5 = (long)param_2 - (long)param_1;
  switch(((long)uVar5 >> 3) * -0x71c71c71c71c71c7) {
  case 0:
  case 1:
    goto switchD_008b1c00_caseD_0;
  case 2:
    if (*(float *)((long)param_2 + -0x28) < *(float *)((long)param_1 + 0x20)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_b0);
      uStack_74 = *(undefined8 *)((long)param_1 + 0x3c);
      uStack_88 = *(undefined8 *)((long)param_1 + 0x28);
      uStack_90 = *(undefined8 *)((long)param_1 + 0x20);
      local_98 = *(undefined8 *)((long)param_1 + 0x18);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x34) >> 0x20);
      uStack_80 = (undefined4)*(undefined8 *)((long)param_1 + 0x30);
      local_7c = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x30) >> 0x20);
                    /* try { // try from 008b1c3c to 008b1c67 has its CatchHandler @ 008b1d2c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1,this);
      uVar18 = *(undefined8 *)((long)param_2 + -0x28);
      uVar17 = *(undefined8 *)((long)param_2 + -0x30);
      uVar16 = *(undefined8 *)((long)param_2 + -0x18);
      uVar15 = *(undefined8 *)((long)param_2 + -0x20);
      uVar14 = *(undefined8 *)((long)param_2 + -0x14);
      *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + -0xc);
      *(undefined8 *)((long)param_1 + 0x34) = uVar14;
      *(undefined8 *)((long)param_1 + 0x20) = uVar18;
      *(undefined8 *)((long)param_1 + 0x18) = uVar17;
      *(undefined8 *)((long)param_1 + 0x30) = uVar16;
      *(undefined8 *)((long)param_1 + 0x28) = uVar15;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                this,(basic_string *)&local_b0);
      *(undefined8 *)((long)param_2 + -0xc) = uStack_74;
      *(ulong *)((long)param_2 + -0x14) = CONCAT44(uStack_78,local_7c);
      *(undefined8 *)((long)param_2 + -0x28) = uStack_90;
      *puVar12 = local_98;
      *(ulong *)((long)param_2 + -0x18) = CONCAT44(local_7c,uStack_80);
      *(undefined8 *)((long)param_2 + -0x20) = uStack_88;
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    goto switchD_008b1c00_caseD_0;
  case 3:
    __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
              (param_1,(LoopData *)((long)param_1 + 0x48),(LoopData *)this,param_3);
    goto switchD_008b1c00_caseD_0;
  case 4:
    __sort4<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
              (param_1,(LoopData *)((long)param_1 + 0x48),(LoopData *)((long)param_1 + 0x90),
               (LoopData *)this,param_3);
    goto switchD_008b1c00_caseD_0;
  case 5:
    FUN_008b22f4(param_1,(basic_string *)((long)param_1 + 0x48),
                 (basic_string *)((long)param_1 + 0x90),(basic_string *)((long)param_1 + 0xd8),this,
                 param_3);
    goto switchD_008b1c00_caseD_0;
  }
  if ((long)uVar5 < 0x1f8) {
    __insertion_sort_3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
              (param_1,param_2,param_3);
    goto switchD_008b1c00_caseD_0;
  }
  if (uVar5 < 0x118f9) {
    pbVar7 = (basic_string *)((long)param_1 + ((uVar5 & 0xffffffff) / 0x90) * 0x12 * 4);
    uVar4 = __sort3<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
                      (param_1,(LoopData *)pbVar7,(LoopData *)this,param_3);
  }
  else {
    pbVar7 = (basic_string *)((long)param_1 + (uVar5 / 0x90) * 0x12 * 4);
    uVar4 = FUN_008b22f4(param_1,(basic_string *)((long)param_1 + (uVar5 / 0x120) * 0x12 * 4),pbVar7
                         ,pbVar7 + (uVar5 / 0x120) * 0x12,this,param_3);
  }
  fVar13 = *(float *)((long)param_1 + 0x20);
  pbVar6 = this;
  if ((float)pbVar7[8] <= fVar13) {
    do {
      pbVar8 = pbVar6;
      pbVar6 = pbVar8 + -0x12;
      if (pbVar6 == (basic_string *)param_1) {
        pbVar6 = (basic_string *)((long)param_1 + 0x48);
        if (*(float *)((long)param_2 + -0x28) <= fVar13) goto joined_r0x008b1a80;
        goto LAB_008b1b10;
      }
    } while ((float)pbVar7[8] <= (float)pbVar8[-10]);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_b0);
    uStack_74 = *(undefined8 *)((long)param_1 + 0x3c);
    uStack_88 = *(undefined8 *)((long)param_1 + 0x28);
    uStack_90 = *(undefined8 *)((long)param_1 + 0x20);
    local_98 = *(undefined8 *)((long)param_1 + 0x18);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x34) >> 0x20);
    uStack_80 = (undefined4)*(undefined8 *)((long)param_1 + 0x30);
    local_7c = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x30) >> 0x20);
                    /* try { // try from 008b1828 to 008b1857 has its CatchHandler @ 008b1d38 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1,pbVar6);
    uVar14 = *(undefined8 *)(pbVar8 + -5);
    uVar16 = *(undefined8 *)(pbVar8 + -6);
    uVar15 = *(undefined8 *)(pbVar8 + -8);
    uVar18 = *(undefined8 *)(pbVar8 + -10);
    uVar17 = *(undefined8 *)(pbVar8 + -0xc);
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)(pbVar8 + -3);
    *(undefined8 *)((long)param_1 + 0x34) = uVar14;
    *(undefined8 *)((long)param_1 + 0x20) = uVar18;
    *(undefined8 *)((long)param_1 + 0x18) = uVar17;
    *(undefined8 *)((long)param_1 + 0x30) = uVar16;
    *(undefined8 *)((long)param_1 + 0x28) = uVar15;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              pbVar6,(basic_string *)&local_b0);
    *(undefined8 *)(pbVar8 + -3) = uStack_74;
    *(ulong *)(pbVar8 + -5) = CONCAT44(uStack_78,local_7c);
    *(undefined8 *)(pbVar8 + -10) = uStack_90;
    *(undefined8 *)(pbVar8 + -0xc) = local_98;
    *(ulong *)(pbVar8 + -6) = CONCAT44(local_7c,uStack_80);
    *(undefined8 *)(pbVar8 + -8) = uStack_88;
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    uVar4 = uVar4 + 1;
  }
  pbVar8 = (basic_string *)((long)param_1 + 0x48);
  pbVar9 = pbVar7;
  pbVar10 = pbVar8;
  if (pbVar8 < pbVar6) {
    while( true ) {
      pbVar7 = pbVar9;
      pbVar8 = pbVar10 + -0x12;
      do {
        pbVar9 = pbVar8;
        pbVar8 = pbVar9 + 0x12;
      } while ((float)pbVar9[0x1a] < (float)pbVar7[8]);
      pbVar10 = pbVar9 + 0x24;
      do {
        pbVar11 = pbVar6;
        pbVar6 = pbVar11 + -0x12;
      } while ((float)pbVar7[8] <= (float)pbVar11[-10]);
      if (pbVar6 < pbVar8) break;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_b0);
      uStack_74 = *(undefined8 *)(pbVar9 + 0x21);
      uStack_88 = *(undefined8 *)(pbVar9 + 0x1c);
      uStack_90 = *(undefined8 *)(pbVar9 + 0x1a);
      local_98 = *(undefined8 *)(pbVar9 + 0x18);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)(pbVar9 + 0x1f) >> 0x20);
      uStack_80 = (undefined4)*(undefined8 *)(pbVar9 + 0x1e);
      local_7c = (undefined4)((ulong)*(undefined8 *)(pbVar9 + 0x1e) >> 0x20);
                    /* try { // try from 008b18f8 to 008b1927 has its CatchHandler @ 008b1d40 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                pbVar8,pbVar6);
      uVar14 = *(undefined8 *)(pbVar11 + -5);
      uVar16 = *(undefined8 *)(pbVar11 + -6);
      uVar15 = *(undefined8 *)(pbVar11 + -8);
      uVar18 = *(undefined8 *)(pbVar11 + -10);
      uVar17 = *(undefined8 *)(pbVar11 + -0xc);
      *(undefined8 *)(pbVar9 + 0x21) = *(undefined8 *)(pbVar11 + -3);
      *(undefined8 *)(pbVar9 + 0x1f) = uVar14;
      *(undefined8 *)(pbVar9 + 0x1a) = uVar18;
      *(undefined8 *)(pbVar9 + 0x18) = uVar17;
      *(undefined8 *)(pbVar9 + 0x1e) = uVar16;
      *(undefined8 *)(pbVar9 + 0x1c) = uVar15;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                pbVar6,(basic_string *)&local_b0);
      *(undefined8 *)(pbVar11 + -3) = uStack_74;
      *(ulong *)(pbVar11 + -5) = CONCAT44(uStack_78,local_7c);
      *(undefined8 *)(pbVar11 + -10) = uStack_90;
      *(undefined8 *)(pbVar11 + -0xc) = local_98;
      *(ulong *)(pbVar11 + -6) = CONCAT44(local_7c,uStack_80);
      *(undefined8 *)(pbVar11 + -8) = uStack_88;
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      uVar4 = uVar4 + 1;
      pbVar9 = pbVar6;
      if (pbVar8 != pbVar7) {
        pbVar9 = pbVar7;
      }
    }
  }
  if ((pbVar8 != pbVar7) && ((float)pbVar7[8] < (float)pbVar8[8])) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_b0);
    uStack_74 = *(undefined8 *)(pbVar8 + 0xf);
    uStack_88 = *(undefined8 *)(pbVar8 + 10);
    uStack_90 = *(undefined8 *)(pbVar8 + 8);
    local_98 = *(undefined8 *)(pbVar8 + 6);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)(pbVar8 + 0xd) >> 0x20);
    uStack_80 = (undefined4)*(undefined8 *)(pbVar8 + 0xc);
    local_7c = (undefined4)((ulong)*(undefined8 *)(pbVar8 + 0xc) >> 0x20);
                    /* try { // try from 008b1998 to 008b19c7 has its CatchHandler @ 008b1d34 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              pbVar8,pbVar7);
    uVar14 = *(undefined8 *)(pbVar7 + 0xd);
    uVar16 = *(undefined8 *)(pbVar7 + 0xc);
    uVar15 = *(undefined8 *)(pbVar7 + 10);
    uVar18 = *(undefined8 *)(pbVar7 + 8);
    uVar17 = *(undefined8 *)(pbVar7 + 6);
    *(undefined8 *)(pbVar8 + 0xf) = *(undefined8 *)(pbVar7 + 0xf);
    *(undefined8 *)(pbVar8 + 0xd) = uVar14;
    *(undefined8 *)(pbVar8 + 8) = uVar18;
    *(undefined8 *)(pbVar8 + 6) = uVar17;
    *(undefined8 *)(pbVar8 + 0xc) = uVar16;
    *(undefined8 *)(pbVar8 + 10) = uVar15;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              pbVar7,(basic_string *)&local_b0);
    *(undefined8 *)(pbVar7 + 0xf) = uStack_74;
    *(ulong *)(pbVar7 + 0xd) = CONCAT44(uStack_78,local_7c);
    *(undefined8 *)(pbVar7 + 8) = uStack_90;
    *(undefined8 *)(pbVar7 + 6) = local_98;
    *(ulong *)(pbVar7 + 0xc) = CONCAT44(local_7c,uStack_80);
    *(undefined8 *)(pbVar7 + 10) = uStack_88;
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    uVar4 = uVar4 + 1;
  }
  if (uVar4 == 0) {
    bVar2 = __insertion_sort_incomplete<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
                      (param_1,(LoopData *)pbVar8,param_3);
    bVar3 = __insertion_sort_incomplete<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
                      ((LoopData *)(pbVar8 + 0x12),param_2,param_3);
    if (bVar3) goto LAB_008b1be0;
    pbVar7 = pbVar8 + 0x12;
    if (bVar2) goto LAB_008b1710;
  }
  if (((long)param_2 - (long)pbVar8 >> 3) * -0x71c71c71c71c71c7 <=
      ((long)pbVar8 - (long)param_1 >> 3) * -0x71c71c71c71c71c7) {
    __sort<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
              ((LoopData *)(pbVar8 + 0x12),param_2,param_3);
    param_2 = (LoopData *)pbVar8;
    goto LAB_008b1700;
  }
  __sort<SteadyLoopRuntimeSettings::LoopData::SortByRpmRoot&,SteadyLoopRuntimeSettings::LoopData*>
            (param_1,(LoopData *)pbVar8,param_3);
  pbVar7 = pbVar8 + 0x12;
  goto LAB_008b1710;
joined_r0x008b1a80:
  if (pbVar6 == this) goto switchD_008b1c00_caseD_0;
  if (fVar13 < (float)pbVar6[8]) goto LAB_008b1aa0;
  pbVar6 = pbVar6 + 0x12;
  goto joined_r0x008b1a80;
LAB_008b1aa0:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_b0);
  uStack_74 = *(undefined8 *)(pbVar6 + 0xf);
  uStack_88 = *(undefined8 *)(pbVar6 + 10);
  uStack_90 = *(undefined8 *)(pbVar6 + 8);
  local_98 = *(undefined8 *)(pbVar6 + 6);
  uStack_78 = (undefined4)((ulong)*(undefined8 *)(pbVar6 + 0xd) >> 0x20);
  uStack_80 = (undefined4)*(undefined8 *)(pbVar6 + 0xc);
  local_7c = (undefined4)((ulong)*(undefined8 *)(pbVar6 + 0xc) >> 0x20);
                    /* try { // try from 008b1ac0 to 008b1aeb has its CatchHandler @ 008b1d30 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)pbVar6
            ,this);
  uVar18 = *(undefined8 *)((long)param_2 + -0x28);
  uVar17 = *puVar12;
  uVar16 = *(undefined8 *)((long)param_2 + -0x18);
  uVar15 = *(undefined8 *)((long)param_2 + -0x20);
  uVar14 = *(undefined8 *)((long)param_2 + -0x14);
  *(undefined8 *)(pbVar6 + 0xf) = *(undefined8 *)((long)param_2 + -0xc);
  *(undefined8 *)(pbVar6 + 0xd) = uVar14;
  *(undefined8 *)(pbVar6 + 8) = uVar18;
  *(undefined8 *)(pbVar6 + 6) = uVar17;
  *(undefined8 *)(pbVar6 + 0xc) = uVar16;
  *(undefined8 *)(pbVar6 + 10) = uVar15;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
            (basic_string *)&local_b0);
  *(undefined8 *)((long)param_2 + -0xc) = uStack_74;
  *(ulong *)((long)param_2 + -0x14) = CONCAT44(uStack_78,local_7c);
  *(undefined8 *)((long)param_2 + -0x28) = uStack_90;
  *puVar12 = local_98;
  *(ulong *)((long)param_2 + -0x18) = CONCAT44(local_7c,uStack_80);
  *(undefined8 *)((long)param_2 + -0x20) = uStack_88;
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  pbVar6 = pbVar6 + 0x12;
LAB_008b1b10:
  pbVar8 = this;
  if (pbVar6 == this) goto switchD_008b1c00_caseD_0;
  while( true ) {
    pbVar7 = pbVar6 + -0x12;
    do {
      pbVar10 = pbVar7;
      pbVar7 = pbVar10 + 0x12;
    } while ((float)pbVar10[0x1a] <= *(float *)((long)param_1 + 0x20));
    pbVar6 = pbVar10 + 0x24;
    do {
      pbVar9 = pbVar8;
      pbVar8 = pbVar9 + -0x12;
    } while (*(float *)((long)param_1 + 0x20) < (float)pbVar9[-10]);
    if (pbVar8 <= pbVar7) break;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_b0);
    uStack_74 = *(undefined8 *)(pbVar10 + 0x21);
    uStack_88 = *(undefined8 *)(pbVar10 + 0x1c);
    uStack_90 = *(undefined8 *)(pbVar10 + 0x1a);
    local_98 = *(undefined8 *)(pbVar10 + 0x18);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)(pbVar10 + 0x1f) >> 0x20);
    uStack_80 = (undefined4)*(undefined8 *)(pbVar10 + 0x1e);
    local_7c = (undefined4)((ulong)*(undefined8 *)(pbVar10 + 0x1e) >> 0x20);
                    /* try { // try from 008b1b70 to 008b1b9f has its CatchHandler @ 008b1d3c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              pbVar7,pbVar8);
    uVar14 = *(undefined8 *)(pbVar9 + -5);
    uVar16 = *(undefined8 *)(pbVar9 + -6);
    uVar15 = *(undefined8 *)(pbVar9 + -8);
    uVar18 = *(undefined8 *)(pbVar9 + -10);
    uVar17 = *(undefined8 *)(pbVar9 + -0xc);
    *(undefined8 *)(pbVar10 + 0x21) = *(undefined8 *)(pbVar9 + -3);
    *(undefined8 *)(pbVar10 + 0x1f) = uVar14;
    *(undefined8 *)(pbVar10 + 0x1a) = uVar18;
    *(undefined8 *)(pbVar10 + 0x18) = uVar17;
    *(undefined8 *)(pbVar10 + 0x1e) = uVar16;
    *(undefined8 *)(pbVar10 + 0x1c) = uVar15;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              pbVar8,(basic_string *)&local_b0);
    *(undefined8 *)(pbVar9 + -3) = uStack_74;
    *(ulong *)(pbVar9 + -5) = CONCAT44(uStack_78,local_7c);
    *(undefined8 *)(pbVar9 + -10) = uStack_90;
    *(undefined8 *)(pbVar9 + -0xc) = local_98;
    *(ulong *)(pbVar9 + -6) = CONCAT44(local_7c,uStack_80);
    *(undefined8 *)(pbVar9 + -8) = uStack_88;
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  goto LAB_008b1710;
LAB_008b1be0:
  param_2 = (LoopData *)pbVar8;
  if (bVar2) {
switchD_008b1c00_caseD_0:
    if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_008b1700;
}


