// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Integer
// Entry Point: 00cf81c0
// Size: 4632 bytes
// Signature: undefined __thiscall Integer(Integer * this, wchar_t * param_1, ByteOrder param_2)


/* CryptoPP::Integer::Integer(wchar_t const*, CryptoPP::ByteOrder) */

void __thiscall CryptoPP::Integer::Integer(Integer *this,wchar_t *param_1,ByteOrder param_2)

{
  bool bVar1;
  uint uVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  wchar_t *pwVar20;
  uint uVar21;
  undefined **local_160 [2];
  ulong local_150;
  ulong uStack_148;
  void *local_140;
  undefined **local_130 [2];
  ulong local_120;
  ulong uStack_118;
  uint *local_110;
  undefined4 local_108;
  undefined **local_100 [2];
  ulong local_f0;
  ulong uStack_e8;
  uint *local_e0;
  int local_d8;
  undefined **local_d0;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> aSStack_c8 [8];
  ulong local_c0;
  ulong uStack_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined **local_a0;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> aSStack_98 [8];
  ulong local_90;
  ulong uStack_88;
  uint *local_80;
  uint local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
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
  *(undefined8 *)(this + 0x18) = 2;
  *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  *(undefined ***)this = &PTR__Integer_0100c890;
  uVar8 = UnalignedAllocate(8);
  *(undefined8 *)(this + 0x20) = uVar8;
  *(undefined4 *)(this + 0x28) = 0;
  uVar19 = 0xffffffff;
  do {
    uVar17 = uVar19;
    uVar19 = uVar17 + 1;
  } while (param_1[uVar19] != L'\0');
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
  local_d0 = &PTR__Integer_0100c890;
  uStack_b8 = 2;
  local_c0 = 0x3fffffffffffffff;
                    /* try { // try from 00cf83f8 to 00cf83ff has its CatchHandler @ 00cf9448 */
  local_b0 = (undefined8 *)UnalignedAllocate(8);
  local_a8 = 0;
  *local_b0 = 0;
  if (uVar19 == 0) {
                    /* try { // try from 00cf8460 to 00cf846f has its CatchHandler @ 00cf9440 */
    Integer((Integer *)local_160,(Integer *)&DAT_02120810);
    goto LAB_00cf92f8;
  }
  uVar13 = (ulong)(uint)(param_1[uVar17] + L'\xffffffbe');
  if ((uint)(param_1[uVar17] + L'\xffffffbe') < 0x2e) {
    if ((1L << (uVar13 & 0x3f) & 0x100000001U) == 0) {
      if ((1L << (uVar13 & 0x3f) & 0x4000000040U) == 0) {
        if ((1L << (uVar13 & 0x3f) & 0x200000002000U) == 0) goto LAB_00cf8484;
        uVar21 = 8;
      }
      else {
        uVar21 = 0x10;
      }
    }
    else {
      uVar21 = 2;
    }
  }
  else {
LAB_00cf8484:
    uVar21 = 10;
  }
  wVar3 = *param_1;
  if (wVar3 != L'-') {
    uVar17 = uVar19;
  }
  pwVar20 = param_1 + (wVar3 == L'-');
  if (((2 < uVar17) && (*pwVar20 == L'0')) && ((pwVar20[1] | 0x20U) == 0x78)) {
    pwVar20 = pwVar20 + 2;
    uVar17 = uVar17 - 2;
    uVar21 = 0x10;
  }
  if (param_2 == 1) {
    if (uVar17 != 0) {
      uVar13 = 0;
      do {
        wVar4 = pwVar20[uVar13];
        uVar19 = wVar4 + L'\xffffffd0';
        if (9 < (uint)(wVar4 + L'\xffffffd0')) {
          uVar19 = wVar4 + L'\xffffffc9';
          if (5 < (uint)(wVar4 + L'\xffffffbf')) {
            uVar19 = uVar21;
          }
          if ((uint)(wVar4 + L'\xffffff9f') < 6) {
            uVar19 = wVar4 + L'\xffffffa9';
          }
        }
        if ((int)uVar19 < (int)uVar21) {
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
            DAT_02120808 = 1;
            DAT_02120998 = Baseline_MultiplyTop16;
            DataMemoryBarrier(2,3);
          }
          uStack_e8 = 2;
          local_f0 = 0x3fffffffffffffff;
          local_100[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00cf863c to 00cf8643 has its CatchHandler @ 00cf949c */
          puVar9 = (uint *)UnalignedAllocate(8);
          local_d8 = 0;
          *puVar9 = uVar21;
          puVar9[1] = 0;
                    /* try { // try from 00cf8654 to 00cf8663 has its CatchHandler @ 00cf9490 */
          local_e0 = puVar9;
          Times((Integer *)&local_d0);
                    /* try { // try from 00cf8664 to 00cf866f has its CatchHandler @ 00cf9480 */
          operator=((Integer *)&local_d0,(Integer *)&local_a0);
          uVar16 = local_90;
          if (uStack_88 <= local_90) {
            uVar16 = uStack_88;
          }
          local_a0 = &PTR__Integer_0100c890;
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            local_80[uVar16 - 1] = 0;
          }
                    /* try { // try from 00cf86a8 to 00cf86ab has its CatchHandler @ 00cf947c */
          UnalignedDeallocate(local_80);
          uVar16 = local_f0;
          if (uStack_e8 <= local_f0) {
            uVar16 = uStack_e8;
          }
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar9[uVar16 - 1] = 0;
          }
                    /* try { // try from 00cf86d0 to 00cf86d7 has its CatchHandler @ 00cf9478 */
          UnalignedDeallocate(puVar9);
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
            DAT_02120808 = 1;
            DAT_02120998 = Baseline_MultiplyTop16;
            DataMemoryBarrier(2,3);
          }
          local_a0 = &PTR__Integer_0100c890;
          uStack_88 = 2;
          local_90 = 0x3fffffffffffffff;
                    /* try { // try from 00cf87c8 to 00cf87cf has its CatchHandler @ 00cf9474 */
          puVar9 = (uint *)UnalignedAllocate(8);
          lVar10 = (long)(int)uVar19;
          local_78 = uVar19 >> 0x1f;
          lVar18 = -lVar10;
          if (-1 < lVar10) {
            lVar18 = lVar10;
          }
          *puVar9 = (uint)lVar18;
          puVar9[1] = (uint)((ulong)lVar18 >> 0x20);
          local_80 = puVar9;
                    /* try { // try from 00cf87f4 to 00cf887f has its CatchHandler @ 00cf94a8 */
          SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                    (aSStack_c8,2);
          if (local_a8 == 1) {
            if ((int)uVar19 < 0) {
              PositiveAdd((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)&local_a0);
              local_a8 = 1;
              uVar16 = local_90;
              if (uStack_88 <= local_90) {
                uVar16 = uStack_88;
              }
            }
            else {
              PositiveSubtract((Integer *)&local_d0,(Integer *)&local_a0,(Integer *)&local_d0);
              uVar16 = local_90;
              if (uStack_88 <= local_90) {
                uVar16 = uStack_88;
              }
            }
          }
          else if ((int)uVar19 < 0) {
            PositiveSubtract((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)&local_a0);
            uVar16 = local_90;
            if (uStack_88 <= local_90) {
              uVar16 = uStack_88;
            }
          }
          else {
            PositiveAdd((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)&local_a0);
            uVar16 = local_90;
            if (uStack_88 <= local_90) {
              uVar16 = uStack_88;
            }
          }
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar9[uVar16 - 1] = 0;
          }
                    /* try { // try from 00cf850c to 00cf8513 has its CatchHandler @ 00cf94a4 */
          UnalignedDeallocate(puVar9);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar17);
    }
  }
  else if ((param_2 == 0) && (uVar21 == 0x10)) {
                    /* try { // try from 00cf88c8 to 00cf88db has its CatchHandler @ 00cf93f4 */
    Integer((Integer *)&local_a0,(Integer *)&DAT_02120840);
    if (uVar17 != 0) {
      bVar1 = false;
      uVar19 = 0;
      uVar21 = 0;
      uVar16 = (ulong)uVar17 - 1;
      uVar13 = 0;
      do {
        while( true ) {
          wVar4 = pwVar20[uVar13];
          uVar12 = wVar4 + L'\xffffffd0';
          if (9 < uVar12) break;
LAB_00cf8958:
          if (bVar1) {
            uVar19 = uVar12;
            uVar12 = uVar21;
          }
joined_r0x00cf8af4:
          uVar21 = uVar12;
          if (bVar1) {
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
            local_130[0] = &PTR__Integer_0100c890;
            uStack_118 = 2;
            local_120 = 0x3fffffffffffffff;
                    /* try { // try from 00cf8a58 to 00cf8a5f has its CatchHandler @ 00cf940c */
            puVar9 = (uint *)UnalignedAllocate(8);
            local_108 = 0;
            *puVar9 = uVar19 | uVar21 << 4;
            puVar9[1] = 0;
                    /* try { // try from 00cf8a74 to 00cf8a83 has its CatchHandler @ 00cf9404 */
            local_110 = puVar9;
            Times((Integer *)&local_a0);
                    /* try { // try from 00cf8a88 to 00cf8b33 has its CatchHandler @ 00cf9410 */
            SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                      (aSStack_c8,uStack_e8);
            if (local_a8 == 1) {
              if (local_d8 == 1) {
                PositiveAdd((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)local_100);
                local_a8 = 1;
              }
              else {
                PositiveSubtract((Integer *)&local_d0,(Integer *)local_100,(Integer *)&local_d0);
              }
            }
            else if (local_d8 == 1) {
              PositiveSubtract((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)local_100);
            }
            else {
              PositiveAdd((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)local_100);
            }
            uVar11 = local_f0;
            if (uStack_e8 <= local_f0) {
              uVar11 = uStack_e8;
            }
            local_100[0] = &PTR__Integer_0100c890;
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              local_e0[uVar11 - 1] = 0;
            }
                    /* try { // try from 00cf8b6c to 00cf8b6f has its CatchHandler @ 00cf9400 */
            UnalignedDeallocate(local_e0);
            uVar11 = local_120;
            if (uStack_118 <= local_120) {
              uVar11 = uStack_118;
            }
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              puVar9[uVar11 - 1] = 0;
            }
                    /* try { // try from 00cf8b94 to 00cf8b9b has its CatchHandler @ 00cf93fc */
            UnalignedDeallocate(puVar9);
            uVar11 = uStack_88;
            do {
              if (uVar11 == 0) {
                lVar18 = 1;
                goto LAB_00cf8be4;
              }
              uVar15 = uVar11 - 1;
              lVar18 = uVar11 - 1;
              uVar11 = uVar15;
            } while (local_80[lVar18] == 0);
            uVar12 = (int)uVar15 + 1;
            uVar11 = (ulong)uVar12;
            lVar18 = uVar11 + 1;
            if (uVar12 < 8) {
LAB_00cf8be4:
              uVar11 = (ulong)(uint)(&DAT_005443f4)[lVar18];
            }
            else if (uVar11 < 0x10) {
              uVar11 = 0x10;
            }
            else if (uVar11 < 0x20) {
              uVar11 = 0x20;
            }
            else if (uVar11 < 0x40) {
              uVar11 = 0x40;
            }
            else {
              uVar14 = 0;
              uVar11 = 0x40;
              do {
                uVar5 = uVar14 + (uint)uVar11 >> 1;
                uVar2 = uVar5;
                if (uVar12 >> ((ulong)uVar5 & 0x3f) != 0) {
                  uVar2 = (uint)uVar11;
                  uVar14 = uVar5;
                }
                uVar11 = (ulong)uVar2;
              } while (1 < uVar2 - uVar14);
              uVar11 = 1L << (uVar11 & 0x3f);
            }
                    /* try { // try from 00cf8bf0 to 00cf8bf7 has its CatchHandler @ 00cf93f8 */
            SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                      (aSStack_98,uVar11);
            uVar12 = 0;
            puVar9 = local_80;
            do {
              lVar18 = lVar18 + -1;
              uVar14 = uVar12 | *puVar9 << 8;
              uVar12 = *puVar9 >> 0x18;
              *puVar9 = uVar14;
              puVar9 = puVar9 + 1;
            } while (lVar18 != 0);
            bVar1 = false;
            bVar7 = uVar16 == uVar13;
            uVar13 = uVar13 + 1;
            if (bVar7) goto LAB_00cf927c;
          }
          else {
            bVar7 = uVar16 == uVar13;
            bVar1 = true;
            uVar13 = uVar13 + 1;
            if (bVar7) goto LAB_00cf9078;
          }
        }
        if ((uint)(wVar4 + L'\xffffff9f') < 6) {
          uVar12 = wVar4 + L'\xffffffa9';
          goto LAB_00cf8958;
        }
        if ((uint)(wVar4 + L'\xffffffbf') < 6) {
          uVar12 = wVar4 + L'\xffffffc9';
          if (bVar1) {
            uVar19 = wVar4 + L'\xffffffc9';
            uVar12 = uVar21;
          }
          goto joined_r0x00cf8af4;
        }
        uVar13 = uVar13 + 1;
      } while (uVar17 != uVar13);
      if (bVar1) {
LAB_00cf9078:
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
          DAT_02120808 = 1;
          DAT_02120998 = Baseline_MultiplyTop16;
          DataMemoryBarrier(2,3);
        }
        local_130[0] = &PTR__Integer_0100c890;
        uStack_118 = 2;
        local_120 = 0x3fffffffffffffff;
                    /* try { // try from 00cf916c to 00cf9173 has its CatchHandler @ 00cf93e8 */
        puVar9 = (uint *)UnalignedAllocate(8);
        local_108 = 0;
        *puVar9 = uVar21;
        puVar9[1] = 0;
                    /* try { // try from 00cf9184 to 00cf9193 has its CatchHandler @ 00cf93e0 */
        local_110 = puVar9;
        Times((Integer *)local_130);
                    /* try { // try from 00cf9198 to 00cf9213 has its CatchHandler @ 00cf93ec */
        SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                  (aSStack_c8,uStack_e8);
        if (local_a8 == 1) {
          if (local_d8 == 1) {
            PositiveAdd((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)local_100);
            local_a8 = 1;
          }
          else {
            PositiveSubtract((Integer *)&local_d0,(Integer *)local_100,(Integer *)&local_d0);
          }
        }
        else if (local_d8 == 1) {
          PositiveSubtract((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)local_100);
        }
        else {
          PositiveAdd((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)local_100);
        }
        uVar13 = local_f0;
        if (uStack_e8 <= local_f0) {
          uVar13 = uStack_e8;
        }
        local_100[0] = &PTR__Integer_0100c890;
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          local_e0[uVar13 - 1] = 0;
        }
                    /* try { // try from 00cf924c to 00cf924f has its CatchHandler @ 00cf93dc */
        UnalignedDeallocate(local_e0);
        uVar13 = local_120;
        if (uStack_118 <= local_120) {
          uVar13 = uStack_118;
        }
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          puVar9[uVar13 - 1] = 0;
        }
                    /* try { // try from 00cf9274 to 00cf927b has its CatchHandler @ 00cf93d8 */
        UnalignedDeallocate(puVar9);
      }
    }
LAB_00cf927c:
    uVar13 = local_90;
    if (uStack_88 <= local_90) {
      uVar13 = uStack_88;
    }
    local_a0 = &PTR__Integer_0100c890;
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      local_80[uVar13 - 1] = 0;
    }
                    /* try { // try from 00cf92b4 to 00cf92b7 has its CatchHandler @ 00cf93f0 */
    UnalignedDeallocate(local_80);
  }
  else if (0 < (int)uVar17) {
    uVar13 = (ulong)uVar17;
    do {
      wVar4 = pwVar20[uVar13 - 1 & 0xffffffff];
      uVar19 = wVar4 + L'\xffffffd0';
      if (9 < (uint)(wVar4 + L'\xffffffd0')) {
        uVar19 = wVar4 + L'\xffffffc9';
        if (5 < (uint)(wVar4 + L'\xffffffbf')) {
          uVar19 = uVar21;
        }
        if ((uint)(wVar4 + L'\xffffff9f') < 6) {
          uVar19 = wVar4 + L'\xffffffa9';
        }
      }
      if ((int)uVar19 < (int)uVar21) {
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
          DAT_02120808 = 1;
          DAT_02120998 = Baseline_MultiplyTop16;
          DataMemoryBarrier(2,3);
        }
        uStack_e8 = 2;
        local_f0 = 0x3fffffffffffffff;
        local_100[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00cf8df0 to 00cf8df7 has its CatchHandler @ 00cf9468 */
        puVar9 = (uint *)UnalignedAllocate(8);
        local_d8 = 0;
        *puVar9 = uVar21;
        puVar9[1] = 0;
                    /* try { // try from 00cf8e08 to 00cf8e17 has its CatchHandler @ 00cf9464 */
        local_e0 = puVar9;
        Times((Integer *)&local_d0);
                    /* try { // try from 00cf8e18 to 00cf8e23 has its CatchHandler @ 00cf9460 */
        operator=((Integer *)&local_d0,(Integer *)&local_a0);
        uVar16 = local_90;
        if (uStack_88 <= local_90) {
          uVar16 = uStack_88;
        }
        local_a0 = &PTR__Integer_0100c890;
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          local_80[uVar16 - 1] = 0;
        }
                    /* try { // try from 00cf8e5c to 00cf8e5f has its CatchHandler @ 00cf945c */
        UnalignedDeallocate(local_80);
        uVar16 = local_f0;
        if (uStack_e8 <= local_f0) {
          uVar16 = uStack_e8;
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          puVar9[uVar16 - 1] = 0;
        }
                    /* try { // try from 00cf8e84 to 00cf8e8b has its CatchHandler @ 00cf9458 */
        UnalignedDeallocate(puVar9);
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
          DAT_02120808 = 1;
          DAT_02120998 = Baseline_MultiplyTop16;
          DataMemoryBarrier(2,3);
        }
        local_a0 = &PTR__Integer_0100c890;
        uStack_88 = 2;
        local_90 = 0x3fffffffffffffff;
                    /* try { // try from 00cf8f7c to 00cf8f83 has its CatchHandler @ 00cf9454 */
        puVar9 = (uint *)UnalignedAllocate(8);
        lVar10 = (long)(int)uVar19;
        local_78 = uVar19 >> 0x1f;
        lVar18 = -lVar10;
        if (-1 < lVar10) {
          lVar18 = lVar10;
        }
        *puVar9 = (uint)lVar18;
        puVar9[1] = (uint)((ulong)lVar18 >> 0x20);
        local_80 = puVar9;
                    /* try { // try from 00cf8fa8 to 00cf9033 has its CatchHandler @ 00cf9470 */
        SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                  (aSStack_c8,2);
        if (local_a8 == 1) {
          if ((int)uVar19 < 0) {
            PositiveAdd((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)&local_a0);
            local_a8 = 1;
            uVar16 = local_90;
            if (uStack_88 <= local_90) {
              uVar16 = uStack_88;
            }
          }
          else {
            PositiveSubtract((Integer *)&local_d0,(Integer *)&local_a0,(Integer *)&local_d0);
            uVar16 = local_90;
            if (uStack_88 <= local_90) {
              uVar16 = uStack_88;
            }
          }
        }
        else if ((int)uVar19 < 0) {
          PositiveSubtract((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)&local_a0);
          uVar16 = local_90;
          if (uStack_88 <= local_90) {
            uVar16 = uStack_88;
          }
        }
        else {
          PositiveAdd((Integer *)&local_d0,(Integer *)&local_d0,(Integer *)&local_a0);
          uVar16 = local_90;
          if (uStack_88 <= local_90) {
            uVar16 = uStack_88;
          }
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          puVar9[uVar16 - 1] = 0;
        }
                    /* try { // try from 00cf8cbc to 00cf8cc3 has its CatchHandler @ 00cf946c */
        UnalignedDeallocate(puVar9);
      }
      bVar1 = 1 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
  }
  if (wVar3 == L'-') {
    if ((local_a8 != 1) && (uVar13 = uStack_b8, *(int *)local_b0 == 0)) {
      do {
        if (uVar13 == 0) goto LAB_00cf92ec;
        uVar16 = uVar13 - 1;
        lVar18 = uVar13 * 4;
        uVar13 = uVar16;
      } while (*(int *)((long)local_b0 + lVar18 + -4) == 0);
      if ((int)uVar16 == -1) goto LAB_00cf92ec;
    }
    local_a8 = 1 - local_a8;
  }
LAB_00cf92ec:
                    /* try { // try from 00cf92ec to 00cf92f7 has its CatchHandler @ 00cf9440 */
  Integer((Integer *)local_160,(Integer *)&local_d0);
LAB_00cf92f8:
  uVar13 = local_c0;
  if (uStack_b8 <= local_c0) {
    uVar13 = uStack_b8;
  }
  local_d0 = &PTR__Integer_0100c890;
  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)((long)local_b0 + uVar13 * 4 + -4) = 0;
  }
                    /* try { // try from 00cf9330 to 00cf9333 has its CatchHandler @ 00cf943c */
  UnalignedDeallocate(local_b0);
                    /* try { // try from 00cf9334 to 00cf933f has its CatchHandler @ 00cf942c */
  operator=(this,(Integer *)local_160);
  if (uStack_148 <= local_150) {
    local_150 = uStack_148;
  }
  local_160[0] = &PTR__Integer_0100c890;
  for (; local_150 != 0; local_150 = local_150 - 1) {
    *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
  }
                    /* try { // try from 00cf9378 to 00cf937b has its CatchHandler @ 00cf9428 */
  UnalignedDeallocate(local_140);
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


