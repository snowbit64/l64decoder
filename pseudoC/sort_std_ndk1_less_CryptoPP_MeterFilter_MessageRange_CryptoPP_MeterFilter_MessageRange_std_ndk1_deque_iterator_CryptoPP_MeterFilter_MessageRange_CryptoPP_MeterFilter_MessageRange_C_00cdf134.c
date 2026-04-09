// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
// Entry Point: 00cdf134
// Size: 3964 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>(__deque_iterator param_1, __deque_iterator param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,
   CryptoPP::MeterFilter::MessageRange>&,
   std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,
   CryptoPP::MeterFilter::MessageRange*, CryptoPP::MeterFilter::MessageRange&,
   CryptoPP::MeterFilter::MessageRange**, long, 170l>
   >(std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,
   CryptoPP::MeterFilter::MessageRange*, CryptoPP::MeterFilter::MessageRange&,
   CryptoPP::MeterFilter::MessageRange**, long, 170l>,
   std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,
   CryptoPP::MeterFilter::MessageRange*, CryptoPP::MeterFilter::MessageRange&,
   CryptoPP::MeterFilter::MessageRange**, long, 170l>,
   std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange, CryptoPP::MeterFilter::MessageRange>&)
    */

void std::__ndk1::
     __sort<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
               (__deque_iterator param_1,__deque_iterator param_2,__less *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint **ppuVar6;
  uint **ppuVar7;
  __deque_iterator _Var8;
  __deque_iterator _Var9;
  uint **ppuVar10;
  uint **ppuVar11;
  uint **ppuVar12;
  undefined8 *in_x3;
  uint *puVar13;
  undefined8 in_x4;
  uint **ppuVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  puVar31 = (undefined8 *)(ulong)param_2;
  ppuVar6 = (uint **)(ulong)param_1;
  lVar2 = tpidr_el0;
  lVar17 = *(long *)(lVar2 + 0x28);
  if (in_x3 == puVar31) {
switchD_00cdfb70_caseD_0:
    if (*(long *)(lVar2 + 0x28) != lVar17) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00cdf194:
  ppuVar12 = (uint **)((long)param_3 + -8);
  do {
    puVar18 = *(undefined8 **)param_3;
    uVar22 = (long)puVar31 - (long)*ppuVar6;
    lVar25 = (long)uVar22 >> 3;
    uVar20 = ((long)param_3 - (long)ppuVar6 >> 3) * 0xaa +
             ((long)in_x3 - (long)puVar18 >> 3) * -0x5555555555555555 + lVar25 * 0x5555555555555555;
    _Var9 = (__deque_iterator)ppuVar6;
    _Var8 = (__deque_iterator)puVar31;
    switch(uVar20) {
    case 0:
    case 1:
      goto switchD_00cdfb70_caseD_0;
    case 2:
      if (in_x3 == puVar18) {
        in_x3 = (undefined8 *)(*(uint **)((long)param_3 + -8) + 0x3fc);
      }
      puVar18 = in_x3 + -3;
      if ((*(uint *)puVar18 < *(uint *)puVar31) ||
         ((*(uint *)puVar18 == *(uint *)puVar31 && ((ulong)in_x3[-2] < (ulong)puVar31[1])))) {
        uVar29 = puVar31[2];
        uVar34 = puVar31[1];
        uVar24 = *puVar31;
        uVar35 = in_x3[-2];
        uVar33 = *puVar18;
        puVar31[2] = in_x3[-1];
        puVar31[1] = uVar35;
        *puVar31 = uVar33;
        in_x3[-1] = uVar29;
        in_x3[-2] = uVar34;
        *puVar18 = uVar24;
      }
      goto switchD_00cdfb70_caseD_0;
    case 3:
      if ((long)(uVar22 + 0x17) < 0 == SCARRY8(uVar22,0x17)) {
        uVar20 = lVar25 * -0x5555555555555555 + 1;
        ppuVar6 = ppuVar6 + uVar20 / 0xaa;
        puVar19 = *ppuVar6 + (uVar20 % 0xaa) * 6;
      }
      else {
        uVar20 = lVar25 * 0x5555555555555555 + 0xa8;
        uVar22 = uVar20 / 0xaa;
        ppuVar6 = ppuVar6 + -uVar22;
        puVar19 = *ppuVar6 + (uVar22 * 0xaa - uVar20) * 6 + 0x3f6;
      }
      __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                (_Var9,_Var8,(__deque_iterator)ppuVar6,(__less *)puVar19);
      goto switchD_00cdfb70_caseD_0;
    case 4:
      if ((long)(uVar22 + 0x17) < 0 == SCARRY8(uVar22,0x17)) {
        uVar22 = lVar25 * -0x5555555555555555 + 1;
        uVar20 = lVar25 * -0x5555555555555555 + 2;
        ppuVar12 = ppuVar6 + uVar22 / 0xaa;
        puVar26 = (undefined8 *)(*ppuVar12 + (uVar22 % 0xaa) * 6);
LAB_00cdfd90:
        puVar28 = (undefined8 *)(ppuVar6[uVar20 / 0xaa] + (uVar20 % 0xaa) * 6);
      }
      else {
        uVar20 = lVar25 * 0x5555555555555555 + 0xa8;
        uVar23 = uVar20 / 0xaa;
        ppuVar12 = ppuVar6 + -uVar23;
        puVar26 = (undefined8 *)(*ppuVar12 + (uVar23 * 0xaa - uVar20) * 6 + 0x3f6);
        if (0xffffffffffffffd0 < uVar22) {
          uVar20 = 1;
          goto LAB_00cdfd90;
        }
        uVar20 = lVar25 * 0x5555555555555555 + 0xa7;
        uVar22 = uVar20 / 0xaa;
        puVar28 = (undefined8 *)(ppuVar6[-uVar22] + (uVar22 * 0xaa - uVar20) * 6 + 0x3f6);
      }
      if (in_x3 == puVar18) {
        in_x3 = (undefined8 *)(*(uint **)((long)param_3 + -8) + 0x3fc);
      }
      __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                (_Var9,_Var8,(__deque_iterator)ppuVar12,(__less *)puVar26);
      puVar18 = in_x3 + -3;
      if ((*(uint *)puVar18 < *(uint *)puVar28) ||
         ((*(uint *)puVar18 == *(uint *)puVar28 && ((ulong)in_x3[-2] < (ulong)puVar28[1])))) {
        uVar34 = puVar28[1];
        uVar33 = *puVar28;
        uVar29 = puVar28[2];
        uVar35 = *puVar18;
        uVar24 = in_x3[-1];
        puVar28[1] = in_x3[-2];
        *puVar28 = uVar35;
        puVar28[2] = uVar24;
        in_x3[-1] = uVar29;
        in_x3[-2] = uVar34;
        *puVar18 = uVar33;
        if ((*(uint *)puVar28 < *(uint *)puVar26) ||
           ((*(uint *)puVar28 == *(uint *)puVar26 && ((ulong)puVar28[1] < (ulong)puVar26[1])))) {
          uVar33 = *puVar28;
          uVar29 = puVar28[2];
          uVar35 = puVar26[1];
          uVar34 = *puVar26;
          uVar24 = puVar26[2];
          puVar26[1] = puVar28[1];
          *puVar26 = uVar33;
          puVar26[2] = uVar29;
          puVar28[1] = uVar35;
          *puVar28 = uVar34;
          puVar28[2] = uVar24;
          if ((*(uint *)puVar26 < *(uint *)puVar31) ||
             ((*(uint *)puVar26 == *(uint *)puVar31 && ((ulong)puVar26[1] < (ulong)puVar31[1])))) {
            uVar29 = puVar31[2];
            uVar33 = puVar31[1];
            uVar24 = *puVar31;
            uVar35 = puVar26[1];
            uVar34 = *puVar26;
            puVar31[2] = puVar26[2];
            puVar31[1] = uVar35;
            *puVar31 = uVar34;
            puVar26[1] = uVar33;
            *puVar26 = uVar24;
            puVar26[2] = uVar29;
          }
        }
      }
      goto switchD_00cdfb70_caseD_0;
    case 5:
      lVar21 = lVar25 * -0x5555555555555555;
      if ((long)(uVar22 + 0x17) < 0 == SCARRY8(uVar22,0x17)) {
        ppuVar12 = ppuVar6 + (lVar21 + 1U) / 0xaa;
        puVar19 = *ppuVar12 + ((lVar21 + 1U) % 0xaa) * 6;
        uVar20 = lVar21 + 2;
LAB_00cdfedc:
        uVar22 = lVar21 + 3;
        ppuVar7 = ppuVar6 + uVar20 / 0xaa;
        puVar13 = *ppuVar7 + (uVar20 % 0xaa) * 6;
LAB_00cdff0c:
        ppuVar11 = ppuVar6 + uVar22 / 0xaa;
        puVar15 = *ppuVar11 + (uVar22 % 0xaa) * 6;
      }
      else {
        uVar20 = lVar25 * 0x5555555555555555 + 0xa8;
        uVar23 = uVar20 / 0xaa;
        ppuVar12 = ppuVar6 + -uVar23;
        puVar19 = *ppuVar12 + (uVar23 * 0xaa - uVar20) * 6 + 0x3f6;
        if (0xffffffffffffffd0 < uVar22) {
          uVar20 = 1;
          goto LAB_00cdfedc;
        }
        uVar23 = lVar25 * 0x5555555555555555 + 0xa7;
        uVar20 = uVar23 / 0xaa;
        ppuVar7 = ppuVar6 + -uVar20;
        puVar13 = *ppuVar7 + (uVar20 * 0xaa - uVar23) * 6 + 0x3f6;
        if (0xffffffffffffffb8 < uVar22) {
          uVar22 = 1;
          goto LAB_00cdff0c;
        }
        uVar20 = lVar25 * 0x5555555555555555 + 0xa6;
        uVar22 = uVar20 / 0xaa;
        ppuVar11 = ppuVar6 + -uVar22;
        puVar15 = *ppuVar11 + (uVar22 * 0xaa - uVar20) * 6 + 0x3f6;
      }
      if (in_x3 == puVar18) {
        param_3 = (__less *)((long)param_3 + -8);
        in_x3 = (undefined8 *)(*(uint **)param_3 + 0x3fc);
      }
      FUN_00ce0254(ppuVar6,puVar31,ppuVar12,puVar19,ppuVar7,puVar13,ppuVar11,puVar15,param_3,
                   in_x3 + -3,in_x4);
      goto switchD_00cdfb70_caseD_0;
    default:
      if ((long)uVar20 < 0x1f) {
        __insertion_sort_3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                  ((__ndk1 *)ppuVar6,_Var8,(__deque_iterator)param_3,(__less *)in_x3);
        goto switchD_00cdfb70_caseD_0;
      }
      if (in_x3 == puVar18) {
        puVar18 = (undefined8 *)(*ppuVar12 + 0x3f6);
        uVar22 = lVar25 * -0x5555555555555555 + (uVar20 >> 1);
        ppuVar7 = ppuVar12;
        if (999 < uVar20) goto LAB_00cdf200;
LAB_00cdf2d0:
        if ((long)uVar22 < 1) {
          uVar20 = (0xa9 - uVar22) / 0xaa;
          ppuVar11 = ppuVar6 + -uVar20;
          puVar26 = (undefined8 *)(*ppuVar11 + (uVar20 * 0xaa - (0xa9 - uVar22)) * 6 + 0x3f6);
        }
        else {
          ppuVar11 = ppuVar6 + uVar22 / 0xaa;
          puVar26 = (undefined8 *)(*ppuVar11 + (uVar22 % 0xaa) * 6);
        }
        uVar5 = __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                          (_Var9,_Var8,(__deque_iterator)ppuVar11,(__less *)puVar26);
        uVar30 = *(uint *)puVar31;
        uVar16 = *(uint *)puVar26;
        bVar3 = uVar30 == uVar16;
        if (uVar30 < uVar16) goto LAB_00cdf718;
      }
      else {
        puVar18 = in_x3 + -3;
        uVar22 = lVar25 * -0x5555555555555555 + (uVar20 >> 1);
        ppuVar7 = (uint **)param_3;
        if (uVar20 < 1000) goto LAB_00cdf2d0;
LAB_00cdf200:
        if ((long)uVar22 < 1) {
          uVar23 = (0xa9 - uVar22) / 0xaa;
          ppuVar11 = ppuVar6 + -uVar23;
          puVar19 = *ppuVar11;
          puVar26 = (undefined8 *)(puVar19 + (uVar23 * 0xaa - (0xa9 - uVar22)) * 6 + 0x3f6);
          uVar22 = lVar25 * -0x5555555555555555 + (uVar20 >> 2);
          if (0 < (long)uVar22) goto LAB_00cdf248;
LAB_00cdf34c:
          uVar23 = (0xa9 - uVar22) / 0xaa;
          ppuVar10 = ppuVar6 + -uVar23;
          puVar13 = *ppuVar10 + (uVar23 * 0xaa - (0xa9 - uVar22)) * 6 + 0x3f6;
          uVar20 = (uVar20 >> 2) + ((long)puVar26 - (long)puVar19 >> 3) * -0x5555555555555555;
          if (0 < (long)uVar20) goto LAB_00cdf284;
LAB_00cdf398:
          uVar22 = (0xa9 - uVar20) / 0xaa;
          ppuVar14 = ppuVar11 + -uVar22;
          puVar19 = *ppuVar14 + (uVar22 * 0xaa - (0xa9 - uVar20)) * 6 + 0x3f6;
        }
        else {
          ppuVar11 = ppuVar6 + uVar22 / 0xaa;
          puVar19 = *ppuVar11;
          puVar26 = (undefined8 *)(puVar19 + (uVar22 % 0xaa) * 6);
          uVar22 = lVar25 * -0x5555555555555555 + (uVar20 >> 2);
          if ((long)uVar22 < 1) goto LAB_00cdf34c;
LAB_00cdf248:
          ppuVar10 = ppuVar6 + uVar22 / 0xaa;
          puVar13 = *ppuVar10 + (uVar22 % 0xaa) * 6;
          uVar20 = (uVar20 >> 2) + ((long)puVar26 - (long)puVar19 >> 3) * -0x5555555555555555;
          if ((long)uVar20 < 1) goto LAB_00cdf398;
LAB_00cdf284:
          ppuVar14 = ppuVar11 + uVar20 / 0xaa;
          puVar19 = *ppuVar14 + (uVar20 % 0xaa) * 6;
        }
        uVar5 = FUN_00ce0254(ppuVar6,puVar31,ppuVar10,puVar13,ppuVar11,puVar26,ppuVar14,puVar19,
                             ppuVar7,puVar18,in_x4);
        uVar30 = *(uint *)puVar31;
        uVar16 = *(uint *)puVar26;
        bVar3 = uVar30 == uVar16;
        if (uVar30 < uVar16) goto LAB_00cdf718;
      }
      if ((bVar3) && ((ulong)puVar31[1] < (ulong)puVar26[1])) goto LAB_00cdf718;
      puVar28 = (undefined8 *)*ppuVar7;
      while( true ) {
        if (puVar18 == puVar28) {
          ppuVar7 = ppuVar7 + -1;
          puVar28 = (undefined8 *)*ppuVar7;
          puVar27 = puVar28 + 0x1fe;
          puVar18 = puVar28 + 0x1fb;
        }
        else {
          puVar27 = puVar18;
          puVar18 = puVar18 + -3;
        }
        if (puVar31 == puVar18) break;
        if ((*(uint *)puVar18 < uVar16) ||
           ((*(uint *)puVar18 == uVar16 && ((ulong)puVar27[-2] < (ulong)puVar26[1])))) {
          uVar29 = puVar31[2];
          uVar5 = uVar5 + 1;
          uVar34 = puVar31[1];
          uVar24 = *puVar31;
          uVar35 = puVar18[1];
          uVar33 = *puVar18;
          puVar31[2] = puVar18[2];
          puVar31[1] = uVar35;
          *puVar31 = uVar33;
          puVar18[2] = uVar29;
          puVar18[1] = uVar34;
          *puVar18 = uVar24;
          goto LAB_00cdf718;
        }
      }
      puVar18 = puVar31 + 3;
      puVar26 = (undefined8 *)*ppuVar6;
      if ((long)puVar18 - (long)*ppuVar6 == 0xff0) {
        ppuVar6 = ppuVar6 + 1;
        puVar18 = (undefined8 *)*ppuVar6;
        puVar26 = puVar18;
      }
      if (in_x3 == *(undefined8 **)param_3) {
        puVar27 = (undefined8 *)(*ppuVar12 + 0x3f6);
        uVar5 = *(uint *)puVar27;
        ppuVar7 = ppuVar12;
        puVar28 = (undefined8 *)(*ppuVar12 + 0x3fc);
      }
      else {
        puVar27 = in_x3 + -3;
        uVar5 = *(uint *)puVar27;
        ppuVar7 = (uint **)param_3;
        puVar28 = in_x3;
      }
      if ((uVar5 <= uVar30) && ((uVar30 != uVar5 || ((ulong)puVar28[-2] <= (ulong)puVar31[1])))) {
        while( true ) {
          if (puVar18 == puVar27) goto switchD_00cdfb70_caseD_0;
          if ((uVar30 < *(uint *)puVar18) ||
             ((uVar30 == *(uint *)puVar18 && ((ulong)puVar31[1] < (ulong)puVar18[1])))) break;
          puVar18 = puVar18 + 3;
          if ((long)puVar18 - (long)puVar26 == 0xff0) {
            ppuVar6 = ppuVar6 + 1;
            puVar18 = (undefined8 *)*ppuVar6;
            puVar26 = puVar18;
          }
        }
        uVar29 = puVar18[2];
        uVar34 = puVar18[1];
        uVar24 = *puVar18;
        uVar35 = puVar27[1];
        uVar33 = *puVar27;
        puVar18[2] = puVar27[2];
        puVar28 = puVar18 + 3;
        puVar18[1] = uVar35;
        *puVar18 = uVar33;
        puVar27[2] = uVar29;
        puVar27[1] = uVar34;
        *puVar27 = uVar24;
        puVar18 = puVar28;
        puVar26 = (undefined8 *)*ppuVar6;
        if ((long)puVar28 - (long)*ppuVar6 == 0xff0) {
          ppuVar6 = ppuVar6 + 1;
          puVar18 = (undefined8 *)*ppuVar6;
          puVar26 = puVar18;
        }
      }
      if (puVar18 == puVar27) goto switchD_00cdfb70_caseD_0;
      while( true ) {
        uVar5 = *(uint *)puVar31;
        puVar28 = puVar18;
        while ((*(uint *)puVar28 <= uVar5 &&
               ((uVar5 != *(uint *)puVar28 || ((ulong)puVar28[1] <= (ulong)puVar31[1]))))) {
          puVar28 = puVar28 + 3;
          if ((long)puVar28 - (long)puVar26 == 0xff0) {
            ppuVar6 = ppuVar6 + 1;
            puVar28 = (undefined8 *)*ppuVar6;
            puVar26 = puVar28;
          }
        }
        puVar18 = (undefined8 *)*ppuVar7;
        do {
          if (puVar27 == puVar18) {
            ppuVar7 = ppuVar7 + -1;
            puVar18 = (undefined8 *)*ppuVar7;
            uVar30 = *(uint *)(puVar18 + 0x1fb);
            puVar26 = puVar18 + 0x1fe;
            puVar27 = puVar18 + 0x1fb;
          }
          else {
            uVar30 = *(uint *)(puVar27 + -3);
            puVar26 = puVar27;
            puVar27 = puVar27 + -3;
          }
        } while ((uVar5 < uVar30) || ((uVar5 == uVar30 && ((ulong)puVar31[1] < (ulong)puVar26[-2])))
                );
        if ((ppuVar7 <= ppuVar6) && ((ppuVar6 != ppuVar7 || (puVar27 <= puVar28)))) break;
        uVar29 = puVar28[2];
        uVar34 = puVar28[1];
        uVar24 = *puVar28;
        uVar35 = puVar27[1];
        uVar33 = *puVar27;
        puVar28[2] = puVar27[2];
        puVar18 = puVar28 + 3;
        puVar28[1] = uVar35;
        *puVar28 = uVar33;
        puVar27[2] = uVar29;
        puVar27[1] = uVar34;
        *puVar27 = uVar24;
        puVar26 = (undefined8 *)*ppuVar6;
        if ((long)puVar18 - (long)*ppuVar6 == 0xff0) {
          ppuVar6 = ppuVar6 + 1;
          puVar18 = (undefined8 *)*ppuVar6;
          puVar26 = puVar18;
        }
      }
      puVar31 = puVar28;
      if (in_x3 == puVar28) goto switchD_00cdfb70_caseD_0;
    }
  } while( true );
LAB_00cdf718:
  puVar27 = (undefined8 *)*ppuVar6;
  ppuVar12 = ppuVar6;
  puVar28 = puVar31 + 3;
  if ((long)(puVar31 + 3) - (long)puVar27 == 0xff0) {
    ppuVar12 = ppuVar6 + 1;
    puVar27 = (undefined8 *)*ppuVar12;
    puVar28 = puVar27;
  }
  if ((ppuVar12 < ppuVar7) || ((ppuVar12 == ppuVar7 && (puVar28 < puVar18)))) {
    do {
      uVar30 = *(uint *)puVar26;
      puVar32 = puVar28;
LAB_00cdf750:
      lVar25 = 0;
LAB_00cdf76c:
      if ((*(uint *)((long)puVar32 + lVar25) < uVar30) ||
         ((*(uint *)((long)puVar32 + lVar25) == uVar30 &&
          (*(ulong *)((long)puVar32 + lVar25 + 8) < (ulong)puVar26[1])))) goto LAB_00cdf760;
      puVar28 = (undefined8 *)*ppuVar7;
      do {
        if (puVar18 == puVar28) {
          ppuVar7 = ppuVar7 + -1;
          puVar28 = (undefined8 *)*ppuVar7;
          uVar16 = *(uint *)(puVar28 + 0x1fb);
          puVar27 = puVar28 + 0x1fe;
          puVar18 = puVar28 + 0x1fb;
        }
        else {
          uVar16 = *(uint *)(puVar18 + -3);
          puVar27 = puVar18;
          puVar18 = puVar18 + -3;
        }
      } while ((uVar30 <= uVar16) &&
              ((uVar16 != uVar30 || ((ulong)puVar26[1] <= (ulong)puVar27[-2]))));
      if ((ppuVar7 < ppuVar12) ||
         ((ppuVar7 == ppuVar12 && (puVar18 < (undefined8 *)((long)puVar32 + lVar25))))) {
        puVar28 = (undefined8 *)((long)puVar32 + lVar25);
        break;
      }
      puVar28 = (undefined8 *)((long)puVar32 + lVar25);
      uVar5 = uVar5 + 1;
      puVar1 = puVar18;
      if ((undefined8 *)((long)puVar32 + lVar25) != puVar26) {
        puVar1 = puVar26;
      }
      uVar29 = puVar28[2];
      uVar34 = puVar28[1];
      uVar24 = *puVar28;
      uVar35 = puVar18[1];
      uVar33 = *puVar18;
      puVar28[2] = puVar18[2];
      puVar28[1] = uVar35;
      *puVar28 = uVar33;
      puVar18[2] = uVar29;
      puVar18[1] = uVar34;
      *puVar18 = uVar24;
      puVar27 = (undefined8 *)*ppuVar12;
      puVar28 = puVar28 + 3;
      puVar26 = puVar1;
      if ((long)puVar27 + (0xfd8 - (long)puVar32) == lVar25) {
        ppuVar12 = ppuVar12 + 1;
        puVar27 = (undefined8 *)*ppuVar12;
        puVar28 = puVar27;
      }
    } while( true );
  }
  if ((puVar28 != puVar26) &&
     ((*(uint *)puVar26 < *(uint *)puVar28 ||
      ((*(uint *)puVar26 == *(uint *)puVar28 && ((ulong)puVar26[1] < (ulong)puVar28[1])))))) {
    uVar29 = puVar28[2];
    uVar5 = uVar5 + 1;
    uVar34 = puVar28[1];
    uVar24 = *puVar28;
    uVar35 = puVar26[1];
    uVar33 = *puVar26;
    puVar28[2] = puVar26[2];
    puVar28[1] = uVar35;
    *puVar28 = uVar33;
    puVar26[2] = uVar29;
    puVar26[1] = uVar34;
    *puVar26 = uVar24;
  }
  if (uVar5 == 0) {
    bVar3 = __insertion_sort_incomplete<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                      (_Var9,_Var8,(__less *)ppuVar12);
    lVar25 = (long)puVar28 - (long)*ppuVar12;
    if (lVar25 + 0x17 < 0 == SCARRY8(lVar25,0x17)) {
      uVar20 = (lVar25 >> 3) * -0x5555555555555555 + 1;
      uVar22 = uVar20 / 0xaa;
      bVar4 = __insertion_sort_incomplete<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                        ((__deque_iterator)(ppuVar12 + uVar22),
                         (int)ppuVar12[uVar22] + ((int)uVar20 + (int)uVar22 * -0xaa) * 0x18,param_3)
      ;
      if (bVar4) {
LAB_00cdfae0:
        if (bVar3) goto switchD_00cdfb70_caseD_0;
        goto joined_r0x00cdfaf4;
      }
    }
    else {
      uVar20 = (lVar25 >> 3) * 0x5555555555555555 + 0xa8;
      uVar22 = uVar20 / 0xaa;
      bVar4 = __insertion_sort_incomplete<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                        ((__deque_iterator)(ppuVar12 + -uVar22),
                         (int)ppuVar12[-uVar22] + ((int)uVar22 * 0xaa - (int)uVar20) * 0x18 + 0xfd8,
                         param_3);
      if (bVar4) goto LAB_00cdfae0;
    }
    if (bVar3) goto LAB_00cdf9ec;
  }
  if (puVar28 == puVar31) {
    lVar25 = 0;
    if (in_x3 != puVar28) goto LAB_00cdf920;
LAB_00cdfa38:
    if (-1 < lVar25) {
LAB_00cdfa44:
      lVar25 = (long)puVar28 - (long)*ppuVar12;
      if (lVar25 + 0x17 < 0 == SCARRY8(lVar25,0x17)) {
        uVar20 = (lVar25 >> 3) * -0x5555555555555555 + 1;
        ppuVar7 = ppuVar12 + uVar20 / 0xaa;
        _Var9 = (int)*ppuVar7 + (int)(uVar20 % 0xaa) * 0x18;
      }
      else {
        uVar20 = (lVar25 >> 3) * 0x5555555555555555 + 0xa8;
        uVar22 = uVar20 / 0xaa;
        ppuVar7 = ppuVar12 + -uVar22;
        _Var9 = (int)*ppuVar7 + ((int)uVar22 * 0xaa - (int)uVar20) * 0x18 + 0xfd8;
      }
      __sort<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                ((__deque_iterator)ppuVar7,_Var9,param_3);
joined_r0x00cdfaf4:
      param_3 = (__less *)ppuVar12;
      in_x3 = puVar28;
      if (puVar28 == puVar31) goto switchD_00cdfb70_caseD_0;
      goto LAB_00cdf194;
    }
  }
  else {
    lVar25 = ((long)ppuVar12 - (long)ppuVar6 >> 3) * 0xaa +
             ((long)puVar28 - (long)*ppuVar12 >> 3) * -0x5555555555555555 +
             ((long)puVar31 - (long)*ppuVar6 >> 3) * 0x5555555555555555;
    if (in_x3 == puVar28) goto LAB_00cdfa38;
LAB_00cdf920:
    if (((long)param_3 - (long)ppuVar12 >> 3) * 0xaa +
        ((long)in_x3 - (long)*(uint **)param_3 >> 3) * -0x5555555555555555 +
        ((long)puVar28 - (long)*ppuVar12 >> 3) * 0x5555555555555555 <= lVar25) goto LAB_00cdfa44;
  }
  __sort<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
            (_Var9,_Var8,(__less *)ppuVar12);
LAB_00cdf9ec:
  puVar31 = puVar28 + 3;
  ppuVar6 = ppuVar12;
  if ((long)puVar31 - (long)*ppuVar12 == 0xff0) {
    ppuVar6 = ppuVar12 + 1;
    puVar31 = (undefined8 *)*ppuVar6;
  }
  if (in_x3 == puVar31) goto switchD_00cdfb70_caseD_0;
  goto LAB_00cdf194;
LAB_00cdf760:
  lVar25 = lVar25 + 0x18;
  if ((long)puVar27 + (0xff0 - (long)puVar32) == lVar25) goto LAB_00cdf794;
  goto LAB_00cdf76c;
LAB_00cdf794:
  ppuVar12 = ppuVar12 + 1;
  puVar27 = (undefined8 *)*ppuVar12;
  puVar32 = puVar27;
  goto LAB_00cdf750;
}


