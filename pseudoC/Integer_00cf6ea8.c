// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Integer
// Entry Point: 00cf6ea8
// Size: 4640 bytes
// Signature: undefined __thiscall Integer(Integer * this, char * param_1, ByteOrder param_2)


/* CryptoPP::Integer::Integer(char const*, CryptoPP::ByteOrder) */

void __thiscall CryptoPP::Integer::Integer(Integer *this,char *param_1,ByteOrder param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
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
    DAT_02120808 = 1;
    DAT_02120998 = Baseline_MultiplyTop16;
    DataMemoryBarrier(2,3);
  }
  *(undefined8 *)(this + 0x18) = 2;
  *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  *(undefined ***)this = &PTR__Integer_0100c890;
  uVar8 = UnalignedAllocate(8);
  *(undefined8 *)(this + 0x20) = uVar8;
  *(undefined4 *)(this + 0x28) = 0;
  uVar17 = 0xffffffff;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (param_1[uVar17] != '\0');
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
  local_d0 = &PTR__Integer_0100c890;
  uStack_b8 = 2;
  local_c0 = 0x3fffffffffffffff;
                    /* try { // try from 00cf70f8 to 00cf70ff has its CatchHandler @ 00cf8138 */
  local_b0 = (undefined8 *)UnalignedAllocate(8);
  local_a8 = 0;
  *local_b0 = 0;
  if (uVar17 == 0) {
                    /* try { // try from 00cf715c to 00cf716b has its CatchHandler @ 00cf8130 */
    Integer((Integer *)local_160,(Integer *)&DAT_02120810);
    goto LAB_00cf7fe8;
  }
  uVar14 = (ulong)((byte)param_1[uVar11] - 0x42);
  if ((byte)param_1[uVar11] - 0x42 < 0x2e) {
    if ((1L << (uVar14 & 0x3f) & 0x100000001U) == 0) {
      if ((1L << (uVar14 & 0x3f) & 0x4000000040U) == 0) {
        if ((1L << (uVar14 & 0x3f) & 0x200000002000U) == 0) goto LAB_00cf7180;
        uVar19 = 8;
      }
      else {
        uVar19 = 0x10;
      }
    }
    else {
      uVar19 = 2;
    }
  }
  else {
LAB_00cf7180:
    uVar19 = 10;
  }
  cVar3 = *param_1;
  if (cVar3 == '-') {
    param_1 = param_1 + 1;
    uVar17 = uVar11;
  }
  if (((2 < uVar17) && (*param_1 == '0')) && ((byte)(param_1[1] | 0x20U) == 0x78)) {
    param_1 = param_1 + 2;
    uVar17 = uVar17 - 2;
    uVar19 = 0x10;
  }
  if (param_2 == 1) {
    if (uVar17 != 0) {
      uVar14 = 0;
      do {
        bVar4 = param_1[uVar14];
        uVar11 = bVar4 - 0x30;
        if (9 < uVar11) {
          uVar10 = (uint)bVar4;
          uVar11 = uVar10 - 0x37;
          if (5 < bVar4 - 0x41) {
            uVar11 = uVar19;
          }
          if (uVar10 - 0x61 < 6) {
            uVar11 = uVar10 - 0x57;
          }
        }
        if ((int)uVar11 < (int)uVar19) {
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
                    /* try { // try from 00cf7330 to 00cf7337 has its CatchHandler @ 00cf818c */
          puVar9 = (uint *)UnalignedAllocate(8);
          local_d8 = 0;
          *puVar9 = uVar19;
          puVar9[1] = 0;
                    /* try { // try from 00cf7348 to 00cf7357 has its CatchHandler @ 00cf8180 */
          local_e0 = puVar9;
          Times((Integer *)&local_d0);
                    /* try { // try from 00cf7358 to 00cf7363 has its CatchHandler @ 00cf8170 */
          operator=((Integer *)&local_d0,(Integer *)&local_a0);
          uVar16 = local_90;
          if (uStack_88 <= local_90) {
            uVar16 = uStack_88;
          }
          local_a0 = &PTR__Integer_0100c890;
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            local_80[uVar16 - 1] = 0;
          }
                    /* try { // try from 00cf739c to 00cf739f has its CatchHandler @ 00cf816c */
          UnalignedDeallocate(local_80);
          uVar16 = local_f0;
          if (uStack_e8 <= local_f0) {
            uVar16 = uStack_e8;
          }
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar9[uVar16 - 1] = 0;
          }
                    /* try { // try from 00cf73c4 to 00cf73cb has its CatchHandler @ 00cf8168 */
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
                    /* try { // try from 00cf74bc to 00cf74c3 has its CatchHandler @ 00cf8164 */
          puVar9 = (uint *)UnalignedAllocate(8);
          lVar12 = (long)(int)uVar11;
          local_78 = uVar11 >> 0x1f;
          lVar18 = -lVar12;
          if (-1 < lVar12) {
            lVar18 = lVar12;
          }
          *puVar9 = (uint)lVar18;
          puVar9[1] = (uint)((ulong)lVar18 >> 0x20);
          local_80 = puVar9;
                    /* try { // try from 00cf74e8 to 00cf7573 has its CatchHandler @ 00cf8198 */
          SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                    (aSStack_c8,2);
          if (local_a8 == 1) {
            if ((int)uVar11 < 0) {
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
          else if ((int)uVar11 < 0) {
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
                    /* try { // try from 00cf7200 to 00cf7207 has its CatchHandler @ 00cf8194 */
          UnalignedDeallocate(puVar9);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar17);
    }
  }
  else if ((param_2 == 0) && (uVar19 == 0x10)) {
                    /* try { // try from 00cf75bc to 00cf75cf has its CatchHandler @ 00cf8114 */
    Integer((Integer *)&local_a0,(Integer *)&DAT_02120840);
    if (uVar17 != 0) {
      bVar1 = false;
      uVar16 = (ulong)uVar17 - 1;
      uVar14 = 0;
      uVar11 = 0;
LAB_00cf762c:
      do {
        bVar4 = param_1[uVar14];
        uVar10 = (uint)bVar4;
        uVar19 = uVar10 - 0x30;
        if (uVar19 < 10) {
LAB_00cf7618:
          if ((int)uVar19 < 0x10) {
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
              uStack_118 = 2;
              local_120 = 0x3fffffffffffffff;
              local_130[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00cf775c to 00cf7763 has its CatchHandler @ 00cf80f0 */
              puVar9 = (uint *)UnalignedAllocate(8);
              local_108 = 0;
              *puVar9 = uVar19 | uVar11 << 4;
              puVar9[1] = 0;
                    /* try { // try from 00cf7778 to 00cf7787 has its CatchHandler @ 00cf80e8 */
              local_110 = puVar9;
              Times((Integer *)&local_a0);
                    /* try { // try from 00cf778c to 00cf7823 has its CatchHandler @ 00cf80f8 */
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
                    /* try { // try from 00cf785c to 00cf785f has its CatchHandler @ 00cf80e4 */
              UnalignedDeallocate(local_e0);
              uVar13 = local_120;
              if (uStack_118 <= local_120) {
                uVar13 = uStack_118;
              }
              for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                puVar9[uVar13 - 1] = 0;
              }
                    /* try { // try from 00cf7884 to 00cf788b has its CatchHandler @ 00cf80e0 */
              UnalignedDeallocate(puVar9);
              uVar13 = uStack_88;
              do {
                if (uVar13 == 0) {
                  lVar18 = 1;
                  goto LAB_00cf78d4;
                }
                uVar15 = uVar13 - 1;
                lVar18 = uVar13 - 1;
                uVar13 = uVar15;
              } while (local_80[lVar18] == 0);
              uVar19 = (int)uVar15 + 1;
              uVar13 = (ulong)uVar19;
              lVar18 = uVar13 + 1;
              if (uVar19 < 8) {
LAB_00cf78d4:
                uVar13 = (ulong)(uint)(&DAT_005443f4)[lVar18];
              }
              else if (uVar13 < 0x10) {
                uVar13 = 0x10;
              }
              else if (uVar13 < 0x20) {
                uVar13 = 0x20;
              }
              else if (uVar13 < 0x40) {
                uVar13 = 0x40;
              }
              else {
                uVar10 = 0;
                uVar13 = 0x40;
                do {
                  uVar5 = uVar10 + (uint)uVar13 >> 1;
                  uVar2 = uVar5;
                  if (uVar19 >> ((ulong)uVar5 & 0x3f) != 0) {
                    uVar2 = (uint)uVar13;
                    uVar10 = uVar5;
                  }
                  uVar13 = (ulong)uVar2;
                } while (1 < uVar2 - uVar10);
                uVar13 = 1L << (uVar13 & 0x3f);
              }
                    /* try { // try from 00cf78e0 to 00cf78e7 has its CatchHandler @ 00cf80dc */
              SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                        (aSStack_98,uVar13);
              uVar19 = 0;
              puVar9 = local_80;
              do {
                lVar18 = lVar18 + -1;
                uVar10 = uVar19 | *puVar9 << 8;
                uVar19 = *puVar9 >> 0x18;
                *puVar9 = uVar10;
                puVar9 = puVar9 + 1;
              } while (lVar18 != 0);
              bVar1 = false;
              bVar7 = uVar16 == uVar14;
              uVar14 = uVar14 + 1;
              if (bVar7) goto LAB_00cf7f6c;
            }
            else {
              bVar7 = uVar16 == uVar14;
              bVar1 = true;
              uVar14 = uVar14 + 1;
              uVar11 = uVar19;
              if (bVar7) goto LAB_00cf7d68;
            }
            goto LAB_00cf762c;
          }
        }
        else {
          if (uVar10 - 0x61 < 6) {
            uVar19 = bVar4 - 0x57;
            goto LAB_00cf7618;
          }
          if (bVar4 - 0x41 < 6) {
            uVar19 = uVar10 - 0x37;
            goto LAB_00cf7618;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar17 != uVar14);
      uVar19 = uVar11;
      if (bVar1) {
LAB_00cf7d68:
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
                    /* try { // try from 00cf7e5c to 00cf7e63 has its CatchHandler @ 00cf80d8 */
        puVar9 = (uint *)UnalignedAllocate(8);
        local_108 = 0;
        *puVar9 = uVar19;
        puVar9[1] = 0;
                    /* try { // try from 00cf7e74 to 00cf7e83 has its CatchHandler @ 00cf80d0 */
        local_110 = puVar9;
        Times((Integer *)local_130);
                    /* try { // try from 00cf7e88 to 00cf7f03 has its CatchHandler @ 00cf80f4 */
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
        uVar14 = local_f0;
        if (uStack_e8 <= local_f0) {
          uVar14 = uStack_e8;
        }
        local_100[0] = &PTR__Integer_0100c890;
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          local_e0[uVar14 - 1] = 0;
        }
                    /* try { // try from 00cf7f3c to 00cf7f3f has its CatchHandler @ 00cf80cc */
        UnalignedDeallocate(local_e0);
        uVar14 = local_120;
        if (uStack_118 <= local_120) {
          uVar14 = uStack_118;
        }
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          puVar9[uVar14 - 1] = 0;
        }
                    /* try { // try from 00cf7f64 to 00cf7f6b has its CatchHandler @ 00cf80c8 */
        UnalignedDeallocate(puVar9);
      }
    }
LAB_00cf7f6c:
    uVar14 = local_90;
    if (uStack_88 <= local_90) {
      uVar14 = uStack_88;
    }
    local_a0 = &PTR__Integer_0100c890;
    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
      local_80[uVar14 - 1] = 0;
    }
                    /* try { // try from 00cf7fa4 to 00cf7fa7 has its CatchHandler @ 00cf8110 */
    UnalignedDeallocate(local_80);
  }
  else if (0 < (int)uVar17) {
    uVar14 = (ulong)uVar17;
    do {
      bVar4 = param_1[uVar14 - 1 & 0xffffffff];
      uVar17 = bVar4 - 0x30;
      if (9 < uVar17) {
        uVar11 = (uint)bVar4;
        uVar17 = uVar11 - 0x37;
        if (5 < bVar4 - 0x41) {
          uVar17 = uVar19;
        }
        if (uVar11 - 0x61 < 6) {
          uVar17 = uVar11 - 0x57;
        }
      }
      if ((int)uVar17 < (int)uVar19) {
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
                    /* try { // try from 00cf7ae0 to 00cf7ae7 has its CatchHandler @ 00cf8158 */
        puVar9 = (uint *)UnalignedAllocate(8);
        local_d8 = 0;
        *puVar9 = uVar19;
        puVar9[1] = 0;
                    /* try { // try from 00cf7af8 to 00cf7b07 has its CatchHandler @ 00cf8154 */
        local_e0 = puVar9;
        Times((Integer *)&local_d0);
                    /* try { // try from 00cf7b08 to 00cf7b13 has its CatchHandler @ 00cf8150 */
        operator=((Integer *)&local_d0,(Integer *)&local_a0);
        uVar16 = local_90;
        if (uStack_88 <= local_90) {
          uVar16 = uStack_88;
        }
        local_a0 = &PTR__Integer_0100c890;
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          local_80[uVar16 - 1] = 0;
        }
                    /* try { // try from 00cf7b4c to 00cf7b4f has its CatchHandler @ 00cf814c */
        UnalignedDeallocate(local_80);
        uVar16 = local_f0;
        if (uStack_e8 <= local_f0) {
          uVar16 = uStack_e8;
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          puVar9[uVar16 - 1] = 0;
        }
                    /* try { // try from 00cf7b74 to 00cf7b7b has its CatchHandler @ 00cf8148 */
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
                    /* try { // try from 00cf7c6c to 00cf7c73 has its CatchHandler @ 00cf8144 */
        puVar9 = (uint *)UnalignedAllocate(8);
        lVar12 = (long)(int)uVar17;
        local_78 = uVar17 >> 0x1f;
        lVar18 = -lVar12;
        if (-1 < lVar12) {
          lVar18 = lVar12;
        }
        *puVar9 = (uint)lVar18;
        puVar9[1] = (uint)((ulong)lVar18 >> 0x20);
        local_80 = puVar9;
                    /* try { // try from 00cf7c98 to 00cf7d23 has its CatchHandler @ 00cf8160 */
        SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                  (aSStack_c8,2);
        if (local_a8 == 1) {
          if ((int)uVar17 < 0) {
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
        else if ((int)uVar17 < 0) {
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
                    /* try { // try from 00cf79ac to 00cf79b3 has its CatchHandler @ 00cf815c */
        UnalignedDeallocate(puVar9);
      }
      bVar1 = 1 < (long)uVar14;
      uVar14 = uVar14 - 1;
    } while (bVar1);
  }
  if (cVar3 == '-') {
    if ((local_a8 != 1) && (uVar14 = uStack_b8, *(int *)local_b0 == 0)) {
      do {
        if (uVar14 == 0) goto LAB_00cf7fdc;
        uVar16 = uVar14 - 1;
        lVar18 = uVar14 * 4;
        uVar14 = uVar16;
      } while (*(int *)((long)local_b0 + lVar18 + -4) == 0);
      if ((int)uVar16 == -1) goto LAB_00cf7fdc;
    }
    local_a8 = 1 - local_a8;
  }
LAB_00cf7fdc:
                    /* try { // try from 00cf7fdc to 00cf7fe7 has its CatchHandler @ 00cf8130 */
  Integer((Integer *)local_160,(Integer *)&local_d0);
LAB_00cf7fe8:
  uVar14 = local_c0;
  if (uStack_b8 <= local_c0) {
    uVar14 = uStack_b8;
  }
  local_d0 = &PTR__Integer_0100c890;
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)((long)local_b0 + uVar14 * 4 + -4) = 0;
  }
                    /* try { // try from 00cf8020 to 00cf8023 has its CatchHandler @ 00cf812c */
  UnalignedDeallocate(local_b0);
                    /* try { // try from 00cf8024 to 00cf802f has its CatchHandler @ 00cf811c */
  operator=(this,(Integer *)local_160);
  if (uStack_148 <= local_150) {
    local_150 = uStack_148;
  }
  local_160[0] = &PTR__Integer_0100c890;
  for (; local_150 != 0; local_150 = local_150 - 1) {
    *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
  }
                    /* try { // try from 00cf8068 to 00cf806b has its CatchHandler @ 00cf8118 */
  UnalignedDeallocate(local_140);
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


