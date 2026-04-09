// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandomNoThrow
// Entry Point: 00cfa660
// Size: 4920 bytes
// Signature: undefined __thiscall GenerateRandomNoThrow(Integer * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::Integer::GenerateRandomNoThrow(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

uint __thiscall
CryptoPP::Integer::GenerateRandomNoThrow
          (Integer *this,RandomNumberGenerator *param_1,NameValuePairs *param_2)

{
  undefined **ppuVar1;
  ulong *puVar2;
  uchar *puVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uchar **ppuVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *puVar13;
  InvalidArgument *pIVar14;
  uchar *puVar15;
  uchar *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *local_328;
  char local_2f8 [8];
  uchar *local_2f0;
  ulong auStack_2e8 [2];
  ulong local_2d8;
  ulong local_2d0;
  uchar *local_2c8;
  undefined local_2bc [4];
  undefined **local_2b8;
  undefined **ppuStack_2b0;
  ulong local_2a8;
  ulong local_2a0;
  void *local_298;
  int local_290;
  undefined **local_260 [2];
  ulong local_250;
  ulong uStack_248;
  undefined4 *local_240;
  undefined4 local_238;
  undefined **local_218 [2];
  ulong local_208;
  ulong uStack_200;
  void *local_1f8;
  undefined **local_1e8 [2];
  ulong local_1d8;
  ulong local_1d0;
  void *local_1c8;
  int local_1c0;
  undefined **local_1b8 [2];
  ulong local_1a8;
  ulong uStack_1a0;
  void *local_198;
  undefined **local_188 [2];
  ulong local_178;
  ulong local_170;
  void *local_168;
  int local_160;
  undefined **local_158 [2];
  ulong local_148;
  ulong uStack_140;
  undefined8 *local_138;
  int local_130;
  undefined **local_128 [2];
  ulong local_118;
  ulong uStack_110;
  void *local_108;
  undefined **local_f8 [2];
  ulong local_e8;
  ulong local_e0;
  void *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uchar *local_b8;
  uchar *local_b0;
  void *local_a8;
  int local_a0;
  long local_70;
  
  uVar6 = tpidr_el0;
  local_70 = *(long *)(uVar6 + 0x28);
  Integer((Integer *)local_128,(Integer *)&DAT_02120810);
                    /* try { // try from 00cfa6a8 to 00cfa6bf has its CatchHandler @ 00cfbb34 */
  NameValuePairs::GetValueWithDefault<CryptoPP::Integer>(local_f8,param_2,&DAT_004ebf72,local_128);
  if (uStack_110 <= local_118) {
    local_118 = uStack_110;
  }
  local_128[0] = &PTR__Integer_0100c890;
  for (; local_118 != 0; local_118 = local_118 - 1) {
    *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
  }
                    /* try { // try from 00cfa6f8 to 00cfa6fb has its CatchHandler @ 00cfbb30 */
  UnalignedDeallocate(local_108);
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  local_158[0] = &PTR__Integer_0100c890;
  uStack_140 = 2;
  local_148 = 0x3fffffffffffffff;
                    /* try { // try from 00cfa7e8 to 00cfa7ef has its CatchHandler @ 00cfbb28 */
  local_138 = (undefined8 *)UnalignedAllocate(8);
  local_130 = 0;
  *local_138 = 0;
                    /* try { // try from 00cfa804 to 00cfa81f has its CatchHandler @ 00cfbb20 */
  uVar12 = (**(code **)(*(long *)param_2 + 0x10))(param_2,&DAT_004e962b,&typeinfo,local_158);
  if ((uVar12 & 1) == 0) {
                    /* try { // try from 00cfa82c to 00cfa847 has its CatchHandler @ 00cfbaa0 */
    uVar12 = (**(code **)(*(long *)param_2 + 0x10))(param_2,"BitLength",&int::typeinfo,&local_2b8);
    if ((uVar12 & 1) == 0) {
      pIVar14 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfb918 to 00cfb927 has its CatchHandler @ 00cfba3c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c8,"Integer: missing Max argument");
                    /* try { // try from 00cfb92c to 00cfb953 has its CatchHandler @ 00cfba20 */
      InvalidArgument::InvalidArgument(pIVar14,(basic_string *)&local_c8);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar14,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    uVar9 = (uint)local_2b8;
    uVar22 = (ulong)(int)(uint)local_2b8;
    uVar12 = uVar22 + 0x20;
    uVar21 = uVar12 >> 5;
                    /* try { // try from 00cfa858 to 00cfa86b has its CatchHandler @ 00cfba98 */
    Integer((Integer *)&local_c8,0,uVar21);
    if (uVar12 < 0x120) {
      uVar12 = (ulong)(uint)(&DAT_005443f4)[uVar21];
    }
    else if (uVar12 < 0x220) {
      uVar12 = 0x10;
    }
    else if (uVar12 < 0x420) {
      uVar12 = 0x20;
    }
    else if (uVar12 < 0x820) {
      uVar12 = 0x40;
    }
    else {
      uVar8 = 0;
      uVar12 = 0x40;
      do {
        uVar5 = uVar8 + (uint)uVar12 >> 1;
        uVar17 = uVar5;
        if (uVar21 - 1 >> ((ulong)uVar5 & 0x3f) != 0) {
          uVar17 = (uint)uVar12;
          uVar8 = uVar5;
        }
        uVar12 = (ulong)uVar17;
      } while (1 < uVar17 - uVar8);
      uVar12 = 1L << (uVar12 & 0x3f);
    }
                    /* try { // try from 00cfa8f0 to 00cfa8f3 has its CatchHandler @ 00cfba8c */
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)&local_c0
               ,uVar12);
    uVar12 = uVar22 >> 3 & 0x1ffffffffffffffc;
    *(uint *)((long)local_a8 + uVar12) =
         *(uint *)((long)local_a8 + uVar12) | 1 << (ulong)(uVar9 & 0x1f);
                    /* try { // try from 00cfa914 to 00cfa91f has its CatchHandler @ 00cfba88 */
    operator=((Integer *)local_158,(Integer *)&local_c8);
    local_c8 = &PTR__Integer_0100c890;
    puVar15 = local_b8;
    if (local_b0 <= local_b8) {
      puVar15 = local_b0;
    }
    for (; puVar15 != (uchar *)0x0; puVar15 = puVar15 + -1) {
      *(undefined4 *)((long)local_a8 + (long)puVar15 * 4 + -4) = 0;
    }
                    /* try { // try from 00cfa950 to 00cfa953 has its CatchHandler @ 00cfba84 */
    UnalignedDeallocate(local_a8);
  }
  if (local_d0 == 1) {
    uVar12 = local_e0;
    if (local_130 == 1) {
      do {
        uVar22 = uVar12;
        uVar21 = uStack_140;
        if (uVar22 == 0) break;
        uVar12 = uVar22 - 1;
      } while (*(int *)((long)local_d8 + uVar22 * 4 + -4) == 0);
      do {
        uVar12 = uVar21;
        if (uVar12 == 0) break;
        uVar21 = uVar12 - 1;
      } while (*(int *)((long)local_138 + uVar12 * 4 + -4) == 0);
      if ((uint)uVar22 == (uint)uVar12) {
        lVar18 = (uVar22 & 0xffffffff) << 2;
        do {
          if (lVar18 == 0) goto LAB_00cfaa54;
          uVar9 = *(uint *)((long)local_d8 + lVar18 + -4);
          uVar8 = *(uint *)((long)local_138 + lVar18 + -4);
          if (uVar8 < uVar9) goto LAB_00cfaa54;
          lVar18 = lVar18 + -4;
        } while (uVar8 <= uVar9);
LAB_00cfb1b8:
        pIVar14 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfb1c4 to 00cfb1d3 has its CatchHandler @ 00cfbb70 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_c8,"Integer: Min must be no greater than Max");
                    /* try { // try from 00cfb1d8 to 00cfb1ff has its CatchHandler @ 00cfbb5c */
        InvalidArgument::InvalidArgument(pIVar14,(basic_string *)&local_c8);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pIVar14,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      if ((uint)uVar22 <= (uint)uVar12) goto LAB_00cfb1b8;
    }
  }
  else {
    uVar12 = local_e0;
    if (local_130 == 1) goto LAB_00cfb1b8;
    do {
      uVar22 = uVar12;
      uVar21 = uStack_140;
      if (uVar22 == 0) break;
      uVar12 = uVar22 - 1;
    } while (*(int *)((long)local_d8 + uVar22 * 4 + -4) == 0);
    do {
      uVar12 = uVar21;
      if (uVar12 == 0) break;
      uVar21 = uVar12 - 1;
    } while (*(int *)((long)local_138 + uVar12 * 4 + -4) == 0);
    if ((uint)uVar22 == (uint)uVar12) {
      lVar18 = (uVar22 & 0xffffffff) << 2;
      do {
        if (lVar18 == 0) break;
        uVar9 = *(uint *)((long)local_d8 + lVar18 + -4);
        uVar8 = *(uint *)((long)local_138 + lVar18 + -4);
        if (uVar8 < uVar9) goto LAB_00cfb1b8;
        lVar18 = lVar18 + -4;
      } while (uVar8 <= uVar9);
    }
    else if ((uint)uVar12 < (uint)uVar22) goto LAB_00cfb1b8;
  }
LAB_00cfaa54:
                    /* try { // try from 00cfaa54 to 00cfaa63 has its CatchHandler @ 00cfbb18 */
  Integer((Integer *)local_1b8,(Integer *)&DAT_02120810);
                    /* try { // try from 00cfaa64 to 00cfaa7b has its CatchHandler @ 00cfbb0c */
  NameValuePairs::GetValueWithDefault<CryptoPP::Integer>(local_188,param_2,"EquivalentTo",local_1b8)
  ;
  local_1b8[0] = &PTR__Integer_0100c890;
  if (uStack_1a0 <= local_1a8) {
    local_1a8 = uStack_1a0;
  }
  for (; local_1a8 != 0; local_1a8 = local_1a8 - 1) {
    *(undefined4 *)((long)local_198 + local_1a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cfaaac to 00cfaaaf has its CatchHandler @ 00cfbb08 */
  UnalignedDeallocate(local_198);
                    /* try { // try from 00cfaab0 to 00cfaabf has its CatchHandler @ 00cfbb00 */
  Integer((Integer *)local_218,(Integer *)&DAT_02120840);
                    /* try { // try from 00cfaac0 to 00cfaad7 has its CatchHandler @ 00cfbaf4 */
  NameValuePairs::GetValueWithDefault<CryptoPP::Integer>(local_1e8,param_2,&DAT_004ebf76,local_218);
  local_218[0] = &PTR__Integer_0100c890;
  if (uStack_200 <= local_208) {
    local_208 = uStack_200;
  }
  for (; local_208 != 0; local_208 = local_208 - 1) {
    *(undefined4 *)((long)local_1f8 + local_208 * 4 + -4) = 0;
  }
                    /* try { // try from 00cfab08 to 00cfab0b has its CatchHandler @ 00cfbaf0 */
  UnalignedDeallocate(local_1f8);
  if ((local_160 == 1) || (uVar12 = local_170, local_1c0 == 1)) {
LAB_00cfb8c0:
    pIVar14 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfb8cc to 00cfb8db has its CatchHandler @ 00cfbc1c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_c8,"Integer: invalid EquivalentTo and/or Mod argument");
                    /* try { // try from 00cfb8e0 to 00cfb907 has its CatchHandler @ 00cfbbf8 */
    InvalidArgument::InvalidArgument(pIVar14,(basic_string *)&local_c8);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pIVar14,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  do {
    uVar22 = uVar12;
    uVar21 = local_1d0;
    if (uVar22 == 0) break;
    uVar12 = uVar22 - 1;
  } while (*(int *)((long)local_168 + uVar22 * 4 + -4) == 0);
  do {
    uVar12 = uVar21;
    if (uVar12 == 0) break;
    uVar21 = uVar12 - 1;
  } while (*(int *)((long)local_1c8 + uVar12 * 4 + -4) == 0);
  if ((uint)uVar22 == (uint)uVar12) {
    lVar18 = (uVar22 & 0xffffffff) << 2;
    do {
      if (lVar18 == 0) goto LAB_00cfb8c0;
      uVar9 = *(uint *)((long)local_168 + lVar18 + -4);
      uVar8 = *(uint *)((long)local_1c8 + lVar18 + -4);
      if (uVar8 < uVar9) goto LAB_00cfb8c0;
      lVar18 = lVar18 + -4;
    } while (uVar8 <= uVar9);
  }
  else if ((uint)uVar12 < (uint)uVar22) goto LAB_00cfb8c0;
                    /* try { // try from 00cfaba0 to 00cfabbb has its CatchHandler @ 00cfbae8 */
  uVar12 = (**(code **)(*(long *)param_2 + 0x10))
                     (param_2,"RandomNumberType",&RandomNumberType::typeinfo,&local_c8);
  local_2d0 = 0;
  local_2c8 = (uchar *)0x0;
  local_2d8 = 0xffffffffffffffff;
  uVar9 = (uint)local_c8;
  if ((uVar12 & 1) == 0) {
    uVar9 = 0;
  }
  local_2f0 = (uchar *)0x0;
  auStack_2e8[0] = 0;
  local_2f8[0] = '\0';
                    /* try { // try from 00cfabe4 to 00cfabff has its CatchHandler @ 00cfbae0 */
  uVar8 = (**(code **)(*(long *)param_2 + 0x10))
                    (param_2,&DAT_0050c245,&ConstByteArrayParameter::typeinfo,local_2f8);
  if ((uVar8 & 1) == 0) {
    local_328 = (long *)0x0;
    if (uVar9 != 0) goto LAB_00cfad74;
LAB_00cfb39c:
    iVar11 = Compare((Integer *)local_1e8,(Integer *)&DAT_02120840);
    if (iVar11 != 0) {
                    /* try { // try from 00cfb3b0 to 00cfb3bf has its CatchHandler @ 00cfba5c */
      Minus((Integer *)local_188);
                    /* try { // try from 00cfb3c0 to 00cfb3cf has its CatchHandler @ 00cfba54 */
      Modulo((Integer *)local_260);
                    /* try { // try from 00cfb3d0 to 00cfb3df has its CatchHandler @ 00cfba48 */
      Plus((Integer *)local_f8);
      local_c8 = &PTR__Integer_0100c890;
      puVar15 = local_b8;
      if (local_b0 <= local_b8) {
        puVar15 = local_b0;
      }
      for (; puVar15 != (uchar *)0x0; puVar15 = puVar15 + -1) {
        *(undefined4 *)((long)local_a8 + (long)puVar15 * 4 + -4) = 0;
      }
                    /* try { // try from 00cfb410 to 00cfb413 has its CatchHandler @ 00cfba44 */
      UnalignedDeallocate(local_a8);
      local_260[0] = &PTR__Integer_0100c890;
      uVar12 = local_250;
      if (uStack_248 <= local_250) {
        uVar12 = uStack_248;
      }
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        local_240[uVar12 - 1] = 0;
      }
                    /* try { // try from 00cfb444 to 00cfb447 has its CatchHandler @ 00cfba40 */
      UnalignedDeallocate(local_240);
      if (local_130 == 1) {
        uVar12 = uStack_140;
        if (local_290 == 1) {
          do {
            uVar22 = uVar12;
            uVar21 = local_2a0;
            if (uVar22 == 0) break;
            uVar12 = uVar22 - 1;
          } while (*(int *)((long)local_138 + uVar22 * 4 + -4) == 0);
          do {
            uVar12 = uVar21;
            if (uVar12 == 0) break;
            uVar21 = uVar12 - 1;
          } while (*(int *)((long)local_298 + uVar12 * 4 + -4) == 0);
          if ((uint)uVar22 == (uint)uVar12) {
            lVar18 = (uVar22 & 0xffffffff) << 2;
            do {
              if (lVar18 == 0) break;
              uVar9 = *(uint *)((long)local_138 + lVar18 + -4);
              uVar17 = *(uint *)((long)local_298 + lVar18 + -4);
              if (uVar17 < uVar9) goto LAB_00cfb640;
              lVar18 = lVar18 + -4;
            } while (uVar17 <= uVar9);
          }
          else if ((uint)uVar12 < (uint)uVar22) goto LAB_00cfb640;
LAB_00cfb4f0:
                    /* try { // try from 00cfb4f0 to 00cfb4ff has its CatchHandler @ 00cfb9e4 */
          Minus((Integer *)local_158);
                    /* try { // try from 00cfb500 to 00cfb50f has its CatchHandler @ 00cfb9d4 */
          DividedBy((Integer *)local_260);
                    /* try { // try from 00cfb510 to 00cfb527 has its CatchHandler @ 00cfb9c4 */
          Randomize(this,param_1,(Integer *)&DAT_02120810,(Integer *)&local_c8);
          local_c8 = &PTR__Integer_0100c890;
          puVar15 = local_b8;
          if (local_b0 <= local_b8) {
            puVar15 = local_b0;
          }
          for (; puVar15 != (uchar *)0x0; puVar15 = puVar15 + -1) {
            *(undefined4 *)((long)local_a8 + (long)puVar15 * 4 + -4) = 0;
          }
                    /* try { // try from 00cfb558 to 00cfb55b has its CatchHandler @ 00cfb9c0 */
          UnalignedDeallocate(local_a8);
          local_260[0] = &PTR__Integer_0100c890;
          uVar12 = local_250;
          if (uStack_248 <= local_250) {
            uVar12 = uStack_248;
          }
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            local_240[uVar12 - 1] = 0;
          }
                    /* try { // try from 00cfb58c to 00cfb58f has its CatchHandler @ 00cfb9bc */
          UnalignedDeallocate(local_240);
                    /* try { // try from 00cfb590 to 00cfb59f has its CatchHandler @ 00cfba60 */
          Times(this);
                    /* try { // try from 00cfb5a0 to 00cfb5ab has its CatchHandler @ 00cfb9b0 */
          operator=(this,(Integer *)&local_c8);
          local_c8 = &PTR__Integer_0100c890;
          puVar15 = local_b8;
          if (local_b0 <= local_b8) {
            puVar15 = local_b0;
          }
          for (; puVar15 != (uchar *)0x0; puVar15 = puVar15 + -1) {
            *(undefined4 *)((long)local_a8 + (long)puVar15 * 4 + -4) = 0;
          }
                    /* try { // try from 00cfb5dc to 00cfb5df has its CatchHandler @ 00cfb9ac */
          UnalignedDeallocate(local_a8);
                    /* try { // try from 00cfb5e8 to 00cfb613 has its CatchHandler @ 00cfba60 */
          SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                    ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
                     (this + 8),local_2a0);
          if (*(int *)(this + 0x28) == 1) {
            if (local_290 == 1) {
              PositiveAdd(this,this,(Integer *)&local_2b8);
              *(undefined4 *)(this + 0x28) = 1;
            }
            else {
              PositiveSubtract(this,(Integer *)&local_2b8,this);
            }
          }
          else if (local_290 == 1) {
            PositiveSubtract(this,this,(Integer *)&local_2b8);
          }
          else {
                    /* try { // try from 00cfb714 to 00cfb723 has its CatchHandler @ 00cfba60 */
            PositiveAdd(this,this,(Integer *)&local_2b8);
          }
          local_2b8 = &PTR__Integer_0100c890;
          if (local_2a0 <= local_2a8) {
            local_2a8 = local_2a0;
          }
          for (; local_2a8 != 0; local_2a8 = local_2a8 - 1) {
            *(undefined4 *)((long)local_298 + local_2a8 * 4 + -4) = 0;
          }
                    /* try { // try from 00cfb754 to 00cfb757 has its CatchHandler @ 00cfb9a8 */
          UnalignedDeallocate(local_298);
          goto LAB_00cfb758;
        }
      }
      else {
        uVar12 = uStack_140;
        if (local_290 == 1) goto LAB_00cfb4f0;
        do {
          uVar22 = uVar12;
          uVar21 = local_2a0;
          if (uVar22 == 0) break;
          uVar12 = uVar22 - 1;
        } while (*(int *)((long)local_138 + uVar22 * 4 + -4) == 0);
        do {
          uVar12 = uVar21;
          if (uVar12 == 0) break;
          uVar21 = uVar12 - 1;
        } while (*(int *)((long)local_298 + uVar12 * 4 + -4) == 0);
        if ((uint)uVar22 == (uint)uVar12) {
          lVar18 = (uVar22 & 0xffffffff) << 2;
          do {
            if (lVar18 == 0) goto LAB_00cfb4f0;
            uVar9 = *(uint *)((long)local_138 + lVar18 + -4);
            uVar17 = *(uint *)((long)local_298 + lVar18 + -4);
            if (uVar17 < uVar9) goto LAB_00cfb4f0;
            lVar18 = lVar18 + -4;
          } while (uVar17 <= uVar9);
        }
        else if ((uint)uVar12 < (uint)uVar22) goto LAB_00cfb4f0;
      }
LAB_00cfb640:
      local_2b8 = &PTR__Integer_0100c890;
      if (local_2a0 <= local_2a8) {
        local_2a8 = local_2a0;
      }
      for (; local_2a8 != 0; local_2a8 = local_2a8 - 1) {
        *(undefined4 *)((long)local_298 + local_2a8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cfb66c to 00cfb673 has its CatchHandler @ 00cfb9a4 */
      UnalignedDeallocate(local_298);
      uVar17 = 0;
LAB_00cfb678:
      uVar12 = local_2d8;
      if (local_2d0 <= local_2d8) {
        uVar12 = local_2d0;
      }
      goto joined_r0x00cfb688;
    }
                    /* try { // try from 00cfb4d0 to 00cfb4e3 has its CatchHandler @ 00cfb9e8 */
    Randomize(this,param_1,(Integer *)local_f8,(Integer *)local_158);
  }
  else {
                    /* try { // try from 00cfac08 to 00cfac13 has its CatchHandler @ 00cfba80 */
    ByteQueue::ByteQueue((ByteQueue *)local_260,0);
                    /* try { // try from 00cfac14 to 00cfac23 has its CatchHandler @ 00cfba78 */
    DERGeneralEncoder::DERGeneralEncoder
              ((DERGeneralEncoder *)&local_2b8,(BufferedTransformation *)local_260,'0');
    local_2b8 = &PTR__DERGeneralEncoder_01000c90;
    ppuStack_2b0 = &PTR__DERSequenceEncoder_01000e20;
                    /* try { // try from 00cfac38 to 00cfac47 has its CatchHandler @ 00cfbb80 */
    DERGeneralEncoder::DERGeneralEncoder
              ((DERGeneralEncoder *)&local_c8,(BufferedTransformation *)&local_2b8,'\x02');
                    /* try { // try from 00cfac48 to 00cfac6f has its CatchHandler @ 00cfbb4c */
    uVar12 = MinEncodedSize((Integer *)local_f8,1);
    Encode((Integer *)local_f8,(BufferedTransformation *)&local_c8,uVar12,1);
    DERGeneralEncoder::MessageEnd();
    DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_c8);
                    /* try { // try from 00cfac78 to 00cfac87 has its CatchHandler @ 00cfbb80 */
    DERGeneralEncoder::DERGeneralEncoder
              ((DERGeneralEncoder *)&local_c8,(BufferedTransformation *)&local_2b8,'\x02');
                    /* try { // try from 00cfac88 to 00cfacaf has its CatchHandler @ 00cfbb48 */
    uVar12 = MinEncodedSize((Integer *)local_158,1);
    Encode((Integer *)local_158,(BufferedTransformation *)&local_c8,uVar12,1);
    DERGeneralEncoder::MessageEnd();
    DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_c8);
                    /* try { // try from 00cfacb8 to 00cfacc7 has its CatchHandler @ 00cfbb80 */
    DERGeneralEncoder::DERGeneralEncoder
              ((DERGeneralEncoder *)&local_c8,(BufferedTransformation *)&local_2b8,'\x02');
                    /* try { // try from 00cfacc8 to 00cfacef has its CatchHandler @ 00cfbb44 */
    uVar12 = MinEncodedSize((Integer *)local_188,1);
    Encode((Integer *)local_188,(BufferedTransformation *)&local_c8,uVar12,1);
    DERGeneralEncoder::MessageEnd();
    DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_c8);
                    /* try { // try from 00cfacf8 to 00cfad07 has its CatchHandler @ 00cfbb80 */
    DERGeneralEncoder::DERGeneralEncoder
              ((DERGeneralEncoder *)&local_c8,(BufferedTransformation *)&local_2b8,'\x02');
                    /* try { // try from 00cfad08 to 00cfad2f has its CatchHandler @ 00cfbb40 */
    uVar12 = MinEncodedSize((Integer *)local_1e8,1);
    Encode((Integer *)local_1e8,(BufferedTransformation *)&local_c8,uVar12,1);
    DERGeneralEncoder::MessageEnd();
    DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_c8);
    local_c8 = (undefined **)
               ((ulong)CONCAT43(CONCAT31(local_c8._5_3_,(char)uVar9),
                                CONCAT12((char)(uVar9 >> 8),
                                         CONCAT11((char)(uVar9 >> 0x10),(char)(uVar9 >> 0x18)))) <<
               8);
    if (uVar9 >> 0x18 == 0) {
      if ((uVar9 >> 0x10 & 0xff) == 0) {
        uVar17 = 1;
        if ((uVar9 >> 8 & 0xff) != 0) {
          uVar17 = 2;
        }
      }
      else {
        uVar17 = 3;
      }
    }
    else {
      uVar17 = 4;
    }
    bVar4 = *(byte *)((long)&local_c8 + (5 - (ulong)uVar17));
    local_2bc[0] = 2;
                    /* try { // try from 00cfb230 to 00cfb2bb has its CatchHandler @ 00cfbb80 */
    (*(code *)local_2b8[7])(&local_2b8,local_2bc,1,0,1);
    uVar12 = (ulong)uVar17 + (ulong)(bVar4 >> 7);
    DERLengthEncode((BufferedTransformation *)&local_2b8,uVar12);
    (*(code *)local_2b8[7])(&local_2b8,(long)&local_c8 + (5 - uVar12),uVar12,0,1);
    puVar2 = auStack_2e8;
    ppuVar7 = &local_2f0;
    if (local_2f8[0] != '\0') {
      puVar2 = &local_2d0;
      ppuVar7 = &local_2c8;
    }
    DEREncodeOctetString((BufferedTransformation *)&local_2b8,*ppuVar7,*puVar2);
    DERGeneralEncoder::MessageEnd();
                    /* try { // try from 00cfb2bc to 00cfb2db has its CatchHandler @ 00cfbaa8 */
    puVar15 = (uchar *)ByteQueue::CurrentSize();
    local_c0 = 0xffffffffffffffff;
    local_b8 = puVar15;
    if (puVar15 == (uchar *)0x0) {
      puVar16 = (uchar *)0x0;
    }
    else {
      puVar16 = (uchar *)UnalignedAllocate((ulong)puVar15);
    }
                    /* try { // try from 00cfb2ec to 00cfb303 has its CatchHandler @ 00cfbad0 */
    local_b0 = puVar16;
    ByteQueue::Get((ByteQueue *)local_260,puVar16,(ulong)puVar15);
    param_1 = (RandomNumberGenerator *)operator_new(0x30);
                    /* try { // try from 00cfb304 to 00cfb343 has its CatchHandler @ 00cfbac0 */
    Algorithm::Algorithm((Algorithm *)param_1,true);
    puVar3 = puVar15;
    if ((ulong)puVar15 >> 0x18 != 0) {
      puVar3 = DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>-in-CryptoPP::
               DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>
               ::construction_vtable + 0xd8;
    }
    *(undefined4 *)((long)param_1 + 8) = 0;
    *(long *)((long)param_1 + 0x18) = -1;
    *(uchar **)((long)param_1 + 0x20) = puVar3 + 4;
    *(undefined ***)param_1 = &PTR__KDF2_RNG_0100cbb8;
    lVar18 = UnalignedAllocate((ulong)(puVar3 + 4));
    *(long *)((long)param_1 + 0x28) = lVar18;
    memcpy((void *)(lVar18 + 4),puVar16,(size_t)puVar3);
    if (puVar15 != (uchar *)0x0) {
      do {
        puVar3 = puVar15 + -1;
        (puVar16 + -1)[(long)puVar15] = '\0';
        puVar15 = puVar3;
      } while (puVar3 != (uchar *)0x0);
    }
                    /* try { // try from 00cfb378 to 00cfb37f has its CatchHandler @ 00cfba70 */
    UnalignedDeallocate(puVar16);
    DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)&local_2b8);
    ByteQueue::~ByteQueue((ByteQueue *)local_260);
    local_328 = (long *)param_1;
    if (uVar9 == 0) goto LAB_00cfb39c;
LAB_00cfad74:
    if (uVar9 != 1) {
      pIVar14 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfb964 to 00cfb973 has its CatchHandler @ 00cfba10 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c8,"Integer: invalid RandomNumberType argument");
                    /* try { // try from 00cfb978 to 00cfb99f has its CatchHandler @ 00cfb9ec */
      InvalidArgument::InvalidArgument(pIVar14,(basic_string *)&local_c8);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar14,&InvalidArgument::typeinfo,Exception::~Exception);
    }
                    /* try { // try from 00cfad84 to 00cfad9f has its CatchHandler @ 00cfba74 */
    uVar21 = (**(code **)(*(long *)param_2 + 0x10))
                       (param_2,"PointerToPrimeSelector",&PrimeSelector_const*::typeinfo,&local_c8);
    iVar11 = 0;
    uVar12 = uVar6;
    ppuVar1 = local_c8;
    if ((uVar21 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    do {
      iVar11 = iVar11 + 1;
      if (iVar11 == 0x10) {
                    /* try { // try from 00cfadc8 to 00cfadd3 has its CatchHandler @ 00cfbba4 */
        Integer((Integer *)&local_c8,(Integer *)local_f8);
                    /* try { // try from 00cfadd4 to 00cfae13 has its CatchHandler @ 00cfbbe8 */
        uVar21 = FirstPrime((Integer *)&local_c8,(Integer *)local_158,(Integer *)local_188,
                            (Integer *)local_1e8,(PrimeSelector *)ppuVar1);
        if ((uVar21 & 1) == 0) {
          uVar9 = 0;
          uVar12 = 0;
          puVar15 = local_b8;
          if (local_b0 <= local_b8) {
            puVar15 = local_b0;
          }
        }
        else {
          operator=(this,(Integer *)&local_c8);
          uVar9 = FirstPrime((Integer *)&local_c8,(Integer *)local_158,(Integer *)local_188,
                             (Integer *)local_1e8,(PrimeSelector *)ppuVar1);
          uVar12 = (ulong)(uVar9 ^ 1 | (uint)uVar12);
          puVar15 = local_b8;
          if (local_b0 <= local_b8) {
            puVar15 = local_b0;
          }
        }
        for (; puVar15 != (uchar *)0x0; puVar15 = puVar15 + -1) {
          *(undefined4 *)((long)local_a8 + (long)puVar15 * 4 + -4) = 0;
        }
        uVar17 = (uint)uVar12;
        local_c8 = &PTR__Integer_0100c890;
                    /* try { // try from 00cfae70 to 00cfae73 has its CatchHandler @ 00cfbba0 */
        UnalignedDeallocate(local_a8);
        if ((uVar9 & 1) == 0) goto LAB_00cfb678;
      }
                    /* try { // try from 00cfae78 to 00cfae8b has its CatchHandler @ 00cfbbb4 */
      Randomize(this,param_1,(Integer *)local_f8,(Integer *)local_158);
                    /* try { // try from 00cfae8c to 00cfaf8b has its CatchHandler @ 00cfbc2c */
      uVar10 = PrimeSearchInterval((Integer *)local_158);
      DataMemoryBarrier(2,3);
      if ((DAT_02120808 & 1) == 0) {
        DAT_02120978 = Baseline_MultiplyTop2;
        DAT_02120980 = Baseline_MultiplyTop4;
        DAT_021208a0 = Baseline_Multiply2;
        DAT_021208a8 = Baseline_Multiply4;
        DAT_021208b0 = Baseline_Multiply8;
        DAT_02120930 = Baseline_MultiplyBottom2;
        DAT_02120938 = Baseline_MultiplyBottom4;
        DAT_02120940 = Baseline_MultiplyBottom8;
        DAT_021208e8 = Baseline_Square2;
        DAT_021208f0 = Baseline_Square4;
        DAT_021208f8 = Baseline_Square8;
        DAT_02120988 = Baseline_MultiplyTop8;
        DAT_021208c0 = Baseline_Multiply16;
        DAT_02120950 = Baseline_MultiplyBottom16;
        DAT_02120908 = Baseline_Square16;
        DAT_02120998 = Baseline_MultiplyTop16;
        DAT_02120808 = 1;
        DataMemoryBarrier(2,3);
      }
      local_260[0] = &PTR__Integer_0100c890;
      uStack_248 = 2;
      local_250 = 0x3fffffffffffffff;
      puVar13 = (undefined4 *)UnalignedAllocate(8);
      local_238 = 0;
      *puVar13 = uVar10;
      puVar13[1] = 0;
                    /* try { // try from 00cfaf9c to 00cfafab has its CatchHandler @ 00cfbbb8 */
      local_240 = puVar13;
      Times((Integer *)local_1e8);
                    /* try { // try from 00cfafac to 00cfafbb has its CatchHandler @ 00cfbbc0 */
      Plus(this);
      if (local_130 == 1) {
        uVar21 = uStack_140;
        uVar22 = uStack_140;
        if (local_a0 != 1) goto LAB_00cfb0e8;
        do {
          uVar20 = uVar22;
          uVar19 = uVar21 & 0xffffffff;
          puVar15 = local_b0;
          if (uVar20 == 0) break;
          uVar21 = (ulong)((int)uVar21 - 1);
          uVar22 = uVar20 - 1;
        } while (*(int *)((long)local_138 + uVar20 * 4 + -4) == 0);
        do {
          puVar16 = puVar15;
          if (puVar16 == (uchar *)0x0) break;
          puVar15 = puVar16 + -1;
        } while (*(int *)((long)local_a8 + (long)puVar16 * 4 + -4) == 0);
        if ((uint)uVar20 == (uint)puVar16) {
          lVar18 = uVar19 << 2;
          do {
            if (lVar18 == 0) break;
            uVar9 = *(uint *)((long)local_138 + lVar18 + -4);
            uVar17 = *(uint *)((long)local_a8 + lVar18 + -4);
            if (uVar17 < uVar9) goto LAB_00cfb0e8;
            lVar18 = lVar18 + -4;
          } while (uVar17 <= uVar9);
        }
        else if ((uint)puVar16 < (uint)uVar20) goto LAB_00cfb0e8;
LAB_00cfb054:
        lVar18 = -0x68;
      }
      else {
        uVar21 = uStack_140;
        uVar22 = uStack_140;
        if (local_a0 == 1) goto LAB_00cfb054;
        do {
          uVar20 = uVar22;
          uVar19 = uVar21 & 0xffffffff;
          puVar15 = local_b0;
          if (uVar20 == 0) break;
          uVar21 = (ulong)((int)uVar21 - 1);
          uVar22 = uVar20 - 1;
        } while (*(int *)((long)local_138 + uVar20 * 4 + -4) == 0);
        do {
          puVar16 = puVar15;
          if (puVar16 == (uchar *)0x0) break;
          puVar15 = puVar16 + -1;
        } while (*(int *)((long)local_a8 + (long)puVar16 * 4 + -4) == 0);
        if ((uint)uVar20 == (uint)puVar16) {
          lVar18 = uVar19 << 2;
          do {
            if (lVar18 == 0) goto LAB_00cfb054;
            uVar9 = *(uint *)((long)local_138 + lVar18 + -4);
            uVar17 = *(uint *)((long)local_a8 + lVar18 + -4);
            if (uVar17 < uVar9) goto LAB_00cfb054;
            lVar18 = lVar18 + -4;
          } while (uVar17 <= uVar9);
        }
        else if ((uint)puVar16 < (uint)uVar20) goto LAB_00cfb054;
LAB_00cfb0e8:
        lVar18 = -0xf8;
      }
                    /* try { // try from 00cfb0ec to 00cfb0ff has its CatchHandler @ 00cfbbc8 */
      uVar21 = FirstPrime(this,(Integer *)(&stack0xffffffffffffffa0 + lVar18),(Integer *)local_188,
                          (Integer *)local_1e8,(PrimeSelector *)ppuVar1);
      local_c8 = &PTR__Integer_0100c890;
      puVar15 = local_b8;
      if (local_b0 <= local_b8) {
        puVar15 = local_b0;
      }
      for (; puVar15 != (uchar *)0x0; puVar15 = puVar15 + -1) {
        *(undefined4 *)((long)local_a8 + (long)puVar15 * 4 + -4) = 0;
      }
                    /* try { // try from 00cfb134 to 00cfb137 has its CatchHandler @ 00cfbba8 */
      UnalignedDeallocate(local_a8);
      local_2b8 = &PTR__Integer_0100c890;
      uVar22 = local_2a8;
      if (local_2a0 <= local_2a8) {
        uVar22 = local_2a0;
      }
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)((long)local_298 + uVar22 * 4 + -4) = 0;
      }
                    /* try { // try from 00cfb168 to 00cfb16b has its CatchHandler @ 00cfbbac */
      UnalignedDeallocate(local_298);
      uVar22 = local_250;
      if (uStack_248 <= local_250) {
        uVar22 = uStack_248;
      }
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        puVar13[uVar22 - 1] = 0;
      }
                    /* try { // try from 00cfb190 to 00cfb197 has its CatchHandler @ 00cfbbb0 */
      UnalignedDeallocate(puVar13);
    } while ((uVar21 & 1) == 0);
  }
LAB_00cfb758:
  uVar17 = 1;
  uVar12 = local_2d8;
  if (local_2d0 <= local_2d8) {
    uVar12 = local_2d0;
  }
joined_r0x00cfb688:
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    local_2c8[uVar12 - 1] = '\0';
  }
                    /* try { // try from 00cfb784 to 00cfb787 has its CatchHandler @ 00cfbabc */
  UnalignedDeallocate(local_2c8);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*local_328 + 8))();
  }
  local_1e8[0] = &PTR__Integer_0100c890;
  if (local_1d0 <= local_1d8) {
    local_1d8 = local_1d0;
  }
  for (; local_1d8 != 0; local_1d8 = local_1d8 - 1) {
    *(undefined4 *)((long)local_1c8 + local_1d8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cfb7d0 to 00cfb7d3 has its CatchHandler @ 00cfbab8 */
  UnalignedDeallocate(local_1c8);
  local_188[0] = &PTR__Integer_0100c890;
  if (local_170 <= local_178) {
    local_178 = local_170;
  }
  for (; local_178 != 0; local_178 = local_178 - 1) {
    *(undefined4 *)((long)local_168 + local_178 * 4 + -4) = 0;
  }
                    /* try { // try from 00cfb804 to 00cfb807 has its CatchHandler @ 00cfbab4 */
  UnalignedDeallocate(local_168);
  local_158[0] = &PTR__Integer_0100c890;
  uVar12 = local_148;
  if (uStack_140 <= local_148) {
    uVar12 = uStack_140;
  }
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)((long)local_138 + uVar12 * 4 + -4) = 0;
  }
                    /* try { // try from 00cfb838 to 00cfb83b has its CatchHandler @ 00cfbab0 */
  UnalignedDeallocate(local_138);
  local_f8[0] = &PTR__Integer_0100c890;
  if (local_e0 <= local_e8) {
    local_e8 = local_e0;
  }
  for (; local_e8 != 0; local_e8 = local_e8 - 1) {
    *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cfb86c to 00cfb86f has its CatchHandler @ 00cfbaac */
  UnalignedDeallocate(local_d8);
  if (*(long *)(uVar6 + 0x28) == local_70) {
    return uVar17 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


