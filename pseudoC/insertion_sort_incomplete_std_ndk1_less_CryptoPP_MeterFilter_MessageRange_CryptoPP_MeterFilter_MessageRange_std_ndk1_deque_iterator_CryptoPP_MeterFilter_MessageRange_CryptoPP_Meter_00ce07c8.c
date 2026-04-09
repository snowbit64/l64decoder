// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
// Entry Point: 00ce07c8
// Size: 2168 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>(__deque_iterator param_1, __deque_iterator param_2, __less * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,
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

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
               (__deque_iterator param_1,__deque_iterator param_2,__less *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *in_x3;
  long lVar9;
  __less *p_Var10;
  long *plVar11;
  long *plVar12;
  uint **ppuVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  uint **ppuVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint **ppuVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  puVar7 = (undefined8 *)(ulong)param_2;
  plVar6 = (long *)(ulong)param_1;
  lVar3 = tpidr_el0;
  lVar17 = *(long *)(lVar3 + 0x28);
  if (in_x3 != puVar7) {
    puVar18 = *(undefined8 **)param_3;
    uVar22 = (long)puVar7 - *plVar6;
    lVar23 = (long)uVar22 >> 3;
    uVar25 = ((long)param_3 - (long)plVar6 >> 3) * 0xaa +
             ((long)in_x3 - (long)puVar18 >> 3) * -0x5555555555555555 + lVar23 * 0x5555555555555555;
    if (uVar25 < 6) {
      bVar4 = true;
      switch(uVar25) {
      default:
        goto switchD_00ce0860_caseD_0;
      case 2:
        if (puVar18 == in_x3) {
          in_x3 = (undefined8 *)(*(long *)(param_3 + -8) + 0xff0);
          puVar18 = (undefined8 *)(*(long *)(param_3 + -8) + 0xfd8);
          bVar4 = *(uint *)puVar18 == *(uint *)puVar7;
          if (*(uint *)puVar7 <= *(uint *)puVar18) goto LAB_00ce0d08;
        }
        else {
          puVar18 = in_x3 + -3;
          bVar4 = *(uint *)puVar18 == *(uint *)puVar7;
          if (*(uint *)puVar7 <= *(uint *)puVar18) {
LAB_00ce0d08:
            if ((!bVar4) || ((ulong)puVar7[1] <= (ulong)in_x3[-2])) goto LAB_00ce0b60;
          }
        }
        uVar30 = *puVar18;
        bVar4 = true;
        uVar21 = puVar18[2];
        uVar32 = puVar7[1];
        uVar31 = *puVar7;
        uVar26 = puVar7[2];
        puVar7[1] = puVar18[1];
        *puVar7 = uVar30;
        puVar7[2] = uVar21;
        puVar18[1] = uVar32;
        *puVar18 = uVar31;
        puVar18[2] = uVar26;
        goto switchD_00ce0860_caseD_0;
      case 3:
        if ((long)(uVar22 + 0x17) < 0 == SCARRY8(uVar22,0x17)) {
          uVar22 = lVar23 * -0x5555555555555555 + 1;
          plVar6 = plVar6 + uVar22 / 0xaa;
          p_Var10 = (__less *)(*plVar6 + (uVar22 % 0xaa) * 0x18);
        }
        else {
          uVar22 = lVar23 * 0x5555555555555555 + 0xa8;
          uVar25 = uVar22 / 0xaa;
          plVar6 = plVar6 + -uVar25;
          p_Var10 = (__less *)(*plVar6 + (uVar25 * 0xaa - uVar22) * 0x18 + 0xfd8);
        }
        uVar5 = __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                          (param_1,param_2,(__deque_iterator)plVar6,p_Var10);
        plVar6 = (long *)(ulong)uVar5;
        goto LAB_00ce0b60;
      case 4:
        goto switchD_00ce0860_caseD_4;
      case 5:
        lVar14 = lVar23 * -0x5555555555555555;
        if ((long)(uVar22 + 0x17) < 0 == SCARRY8(uVar22,0x17)) {
          plVar8 = plVar6 + (lVar14 + 1U) / 0xaa;
          lVar9 = *plVar8 + ((lVar14 + 1U) % 0xaa) * 0x18;
          uVar22 = lVar14 + 2;
LAB_00ce0ae0:
          uVar25 = lVar14 + 3;
          plVar11 = plVar6 + uVar22 / 0xaa;
          lVar14 = *plVar11 + (uVar22 % 0xaa) * 0x18;
LAB_00ce0b10:
          plVar12 = plVar6 + uVar25 / 0xaa;
          lVar23 = *plVar12 + (uVar25 % 0xaa) * 0x18;
        }
        else {
          uVar25 = lVar23 * 0x5555555555555555 + 0xa8;
          uVar19 = uVar25 / 0xaa;
          plVar8 = plVar6 + -uVar19;
          lVar9 = *plVar8 + (uVar19 * 0xaa - uVar25) * 0x18 + 0xfd8;
          if (0xffffffffffffffd0 < uVar22) {
            uVar22 = 1;
            goto LAB_00ce0ae0;
          }
          uVar19 = lVar23 * 0x5555555555555555 + 0xa7;
          uVar25 = uVar19 / 0xaa;
          plVar11 = plVar6 + -uVar25;
          lVar14 = *plVar11 + (uVar25 * 0xaa - uVar19) * 0x18 + 0xfd8;
          if (0xffffffffffffffb8 < uVar22) {
            uVar25 = 1;
            goto LAB_00ce0b10;
          }
          uVar22 = lVar23 * 0x5555555555555555 + 0xa6;
          uVar25 = uVar22 / 0xaa;
          plVar12 = plVar6 + -uVar25;
          lVar23 = *plVar12 + (uVar25 * 0xaa - uVar22) * 0x18 + 0xfd8;
        }
        if (puVar18 == in_x3) {
          param_3 = param_3 + -8;
          in_x3 = (undefined8 *)(*(long *)param_3 + 0xff0);
        }
        plVar6 = (long *)FUN_00ce0254(plVar6,puVar7,plVar8,lVar9,plVar11,lVar14,plVar12,lVar23,
                                      param_3,in_x3 + -3);
        goto LAB_00ce0b60;
      }
    }
    lVar14 = lVar23 * -0x5555555555555555;
    if (uVar22 == 0xffffffffffffffd0 || (long)(uVar22 + 0x30) < 0 != SCARRY8(uVar22,0x30)) {
      uVar25 = lVar23 * 0x5555555555555555 + 0xa7;
      uVar19 = uVar25 / 0xaa;
      ppuVar29 = (uint **)(plVar6 + -uVar19);
      uVar22 = lVar23 * 0x5555555555555555 + 0xa8;
      puVar18 = (undefined8 *)(*ppuVar29 + (uVar19 * 0xaa - uVar25) * 6 + 0x3f6);
LAB_00ce0a60:
      plVar6 = plVar6 + -(uVar22 / 0xaa);
      p_Var10 = (__less *)(*plVar6 + ((uVar22 / 0xaa) * 0xaa - uVar22) * 0x18 + 0xfd8);
    }
    else {
      ppuVar29 = (uint **)(plVar6 + (lVar14 + 2U) / 0xaa);
      puVar18 = (undefined8 *)(*ppuVar29 + ((lVar14 + 2U) % 0xaa) * 6);
      if (lVar14 == -1) {
        uVar22 = 0xa9;
        goto LAB_00ce0a60;
      }
      plVar6 = plVar6 + (lVar14 + 1U) / 0xaa;
      p_Var10 = (__less *)(*plVar6 + ((lVar14 + 1U) % 0xaa) * 0x18);
    }
    uVar5 = __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                      (param_1,param_2,(__deque_iterator)plVar6,p_Var10);
    plVar6 = (long *)(ulong)uVar5;
    lVar23 = (long)puVar18 - (long)*ppuVar29;
    if (lVar23 + 0x17 < 0 == SCARRY8(lVar23,0x17)) {
      uVar22 = (lVar23 >> 3) * -0x5555555555555555 + 1;
      ppuVar24 = ppuVar29 + uVar22 / 0xaa;
      puVar20 = (undefined8 *)*ppuVar24;
      puVar28 = puVar20 + (uVar22 % 0xaa) * 3;
    }
    else {
      uVar22 = (lVar23 >> 3) * 0x5555555555555555 + 0xa8;
      uVar25 = uVar22 / 0xaa;
      ppuVar24 = ppuVar29 + -uVar25;
      puVar20 = (undefined8 *)*ppuVar24;
      puVar28 = puVar20 + (uVar25 * 0xaa - uVar22) * 3 + 0x1fb;
    }
    if (puVar28 != in_x3) {
      iVar16 = 0;
      do {
        puVar15 = puVar28;
        ppuVar13 = ppuVar24;
        uVar5 = *(uint *)puVar15;
        if (uVar5 < *(uint *)puVar18) {
          uVar22 = puVar15[1];
LAB_00ce0e50:
          uVar1 = *(uint *)((long)puVar15 + 4);
          uVar30 = *puVar18;
          uVar26 = puVar18[2];
          uVar21 = puVar15[2];
          puVar15[1] = puVar18[1];
          *puVar15 = uVar30;
          puVar15[2] = uVar26;
          while (puVar28 = puVar7, puVar18 != puVar7) {
            if (puVar18 == (undefined8 *)*ppuVar29) {
              ppuVar29 = ppuVar29 + -1;
              puVar27 = (undefined8 *)(*ppuVar29 + 0x3f6);
              uVar2 = *(uint *)puVar27;
              puVar20 = (undefined8 *)(*ppuVar29 + 0x3fc);
            }
            else {
              puVar27 = puVar18 + -3;
              uVar2 = *(uint *)puVar27;
              puVar20 = puVar18;
            }
            if ((uVar2 <= uVar5) &&
               ((puVar28 = puVar18, uVar5 != uVar2 || ((ulong)puVar20[-2] <= uVar22)))) break;
            uVar30 = puVar27[1];
            uVar26 = *puVar27;
            puVar18[2] = puVar27[2];
            puVar18[1] = uVar30;
            *puVar18 = uVar26;
            puVar18 = puVar27;
          }
          iVar16 = iVar16 + 1;
          *(uint *)puVar28 = uVar5;
          *(uint *)((long)puVar28 + 4) = uVar1;
          puVar28[1] = uVar22;
          puVar28[2] = uVar21;
          if (iVar16 == 8) {
            puVar15 = puVar15 + 3;
            if ((long)puVar15 - (long)*ppuVar13 == 0xff0) {
              puVar15 = (undefined8 *)ppuVar13[1];
            }
            bVar4 = puVar15 == in_x3;
            goto switchD_00ce0860_caseD_0;
          }
          puVar20 = (undefined8 *)*ppuVar13;
        }
        else if ((uVar5 == *(uint *)puVar18) && (uVar22 = puVar15[1], uVar22 < (ulong)puVar18[1]))
        goto LAB_00ce0e50;
        puVar28 = puVar15 + 3;
        ppuVar24 = ppuVar13;
        if ((long)(puVar15 + 3) - (long)puVar20 == 0xff0) {
          ppuVar24 = ppuVar13 + 1;
          puVar20 = (undefined8 *)*ppuVar24;
          puVar28 = puVar20;
        }
        ppuVar29 = ppuVar13;
        puVar18 = puVar15;
      } while (puVar28 != in_x3);
    }
  }
LAB_00ce0b60:
  bVar4 = true;
switchD_00ce0860_caseD_0:
  if (*(long *)(lVar3 + 0x28) != lVar17) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar6);
  }
  return bVar4;
switchD_00ce0860_caseD_4:
  if ((long)(uVar22 + 0x17) < 0 == SCARRY8(uVar22,0x17)) {
    uVar25 = lVar23 * -0x5555555555555555 + 1;
    uVar22 = lVar23 * -0x5555555555555555 + 2;
    plVar8 = plVar6 + uVar25 / 0xaa;
    puVar28 = (undefined8 *)(*plVar8 + (uVar25 % 0xaa) * 0x18);
LAB_00ce0bd8:
    puVar20 = (undefined8 *)(plVar6[uVar22 / 0xaa] + (uVar22 % 0xaa) * 0x18);
  }
  else {
    uVar25 = lVar23 * 0x5555555555555555 + 0xa8;
    uVar19 = uVar25 / 0xaa;
    plVar8 = plVar6 + -uVar19;
    puVar28 = (undefined8 *)(*plVar8 + (uVar19 * 0xaa - uVar25) * 0x18 + 0xfd8);
    if (0xffffffffffffffd0 < uVar22) {
      uVar22 = 1;
      goto LAB_00ce0bd8;
    }
    uVar22 = lVar23 * 0x5555555555555555 + 0xa7;
    uVar25 = uVar22 / 0xaa;
    puVar20 = (undefined8 *)(plVar6[-uVar25] + (uVar25 * 0xaa - uVar22) * 0x18 + 0xfd8);
  }
  if (puVar18 == in_x3) {
    in_x3 = (undefined8 *)(*(long *)(param_3 + -8) + 0xff0);
  }
  uVar5 = __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                    (param_1,param_2,(__deque_iterator)plVar8,(__less *)puVar28);
  plVar6 = (long *)(ulong)uVar5;
  puVar18 = in_x3 + -3;
  if ((*(uint *)puVar18 < *(uint *)puVar20) ||
     ((*(uint *)puVar18 == *(uint *)puVar20 && ((ulong)in_x3[-2] < (ulong)puVar20[1])))) {
    uVar30 = *puVar18;
    uVar21 = in_x3[-1];
    uVar32 = puVar20[1];
    uVar31 = *puVar20;
    uVar26 = puVar20[2];
    puVar20[1] = in_x3[-2];
    *puVar20 = uVar30;
    puVar20[2] = uVar21;
    in_x3[-2] = uVar32;
    *puVar18 = uVar31;
    in_x3[-1] = uVar26;
    if ((*(uint *)puVar20 < *(uint *)puVar28) ||
       ((*(uint *)puVar20 == *(uint *)puVar28 && ((ulong)puVar20[1] < (ulong)puVar28[1])))) {
      uVar30 = *puVar20;
      uVar21 = puVar20[2];
      uVar32 = puVar28[1];
      uVar31 = *puVar28;
      uVar26 = puVar28[2];
      puVar28[1] = puVar20[1];
      *puVar28 = uVar30;
      puVar28[2] = uVar21;
      puVar20[1] = uVar32;
      *puVar20 = uVar31;
      puVar20[2] = uVar26;
      if ((*(uint *)puVar28 < *(uint *)puVar7) ||
         ((*(uint *)puVar28 == *(uint *)puVar7 && ((ulong)puVar28[1] < (ulong)puVar7[1])))) {
        uVar30 = *puVar28;
        bVar4 = true;
        uVar21 = puVar28[2];
        uVar32 = puVar7[1];
        uVar31 = *puVar7;
        uVar26 = puVar7[2];
        puVar7[1] = puVar28[1];
        *puVar7 = uVar30;
        puVar7[2] = uVar21;
        puVar28[1] = uVar32;
        *puVar28 = uVar31;
        puVar28[2] = uVar26;
        goto switchD_00ce0860_caseD_0;
      }
    }
  }
  goto LAB_00ce0b60;
}


