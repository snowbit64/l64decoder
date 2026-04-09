// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
// Entry Point: 00ce04e8
// Size: 736 bytes
// Signature: void __thiscall __insertion_sort_3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>(__ndk1 * this, __deque_iterator param_1, __deque_iterator param_2, __less * param_3)


/* void std::__ndk1::__insertion_sort_3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,
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

void __thiscall
std::__ndk1::
__insertion_sort_3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
          (__ndk1 *this,__deque_iterator param_1,__deque_iterator param_2,__less *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  __less *p_Var9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  uint **ppuVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  
  puVar7 = (undefined8 *)(ulong)param_1;
  lVar12 = (long)puVar7 - *(long *)this;
  lVar13 = lVar12 >> 3;
  lVar10 = lVar13 * -0x5555555555555555;
  if (lVar12 == -0x30 || lVar12 + 0x30 < 0 != SCARRY8(lVar12,0x30)) {
    uVar15 = lVar13 * 0x5555555555555555 + 0xa7;
    uVar14 = uVar15 / 0xaa;
    ppuVar20 = (uint **)(this + uVar14 * -8);
    uVar11 = lVar13 * 0x5555555555555555 + 0xa8;
    puVar21 = (undefined8 *)(*ppuVar20 + (uVar14 * 0xaa - uVar15) * 6 + 0x3f6);
  }
  else {
    ppuVar20 = (uint **)(this + ((lVar10 + 2U) / 0xaa) * 8);
    puVar21 = (undefined8 *)(*ppuVar20 + ((lVar10 + 2U) % 0xaa) * 6);
    if (lVar10 != -1) {
      plVar8 = (long *)(this + ((lVar10 + 1U) / 0xaa) * 8);
      p_Var9 = (__less *)(*plVar8 + ((lVar10 + 1U) % 0xaa) * 0x18);
      goto LAB_00ce0604;
    }
    uVar11 = 0xa9;
  }
  plVar8 = (long *)(this + (uVar11 / 0xaa) * -8);
  p_Var9 = (__less *)(*plVar8 + ((uVar11 / 0xaa) * 0xaa - uVar11) * 0x18 + 0xfd8);
LAB_00ce0604:
  __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
            ((__deque_iterator)this,param_1,(__deque_iterator)plVar8,p_Var9);
  lVar10 = (long)puVar21 - (long)*ppuVar20;
  if (lVar10 + 0x17 < 0 == SCARRY8(lVar10,0x17)) {
    uVar11 = (lVar10 >> 3) * -0x5555555555555555 + 1;
    puVar16 = (undefined8 *)ppuVar20[uVar11 / 0xaa];
    ppuVar5 = ppuVar20 + uVar11 / 0xaa;
    puVar6 = puVar16 + (uVar11 % 0xaa) * 3;
  }
  else {
    uVar11 = (lVar10 >> 3) * 0x5555555555555555 + 0xa8;
    uVar15 = uVar11 / 0xaa;
    puVar16 = (undefined8 *)ppuVar20[-uVar15];
    ppuVar5 = ppuVar20 + -uVar15;
    puVar6 = puVar16 + (uVar15 * 0xaa - uVar11) * 3 + 0x1fb;
  }
  do {
    if (puVar6 == (undefined8 *)param_3) {
      return;
    }
    uVar1 = *(uint *)puVar6;
    if (uVar1 < *(uint *)puVar21) {
      uVar11 = puVar6[1];
LAB_00ce0708:
      uVar2 = *(uint *)((long)puVar6 + 4);
      uVar22 = *puVar21;
      uVar18 = puVar21[2];
      uVar17 = puVar6[2];
      puVar6[1] = puVar21[1];
      *puVar6 = uVar22;
      puVar6[2] = uVar18;
      while (puVar16 = puVar7, puVar21 != puVar7) {
        if (puVar21 == (undefined8 *)*ppuVar20) {
          ppuVar20 = ppuVar20 + -1;
          puVar19 = (undefined8 *)(*ppuVar20 + 0x3f6);
          uVar3 = *(uint *)puVar19;
          puVar4 = (undefined8 *)(*ppuVar20 + 0x3fc);
        }
        else {
          puVar19 = puVar21 + -3;
          uVar3 = *(uint *)puVar19;
          puVar4 = puVar21;
        }
        if ((uVar3 <= uVar1) &&
           ((puVar16 = puVar21, uVar1 != uVar3 || ((ulong)puVar4[-2] <= uVar11)))) break;
        uVar22 = puVar19[1];
        uVar18 = *puVar19;
        puVar21[2] = puVar19[2];
        puVar21[1] = uVar22;
        *puVar21 = uVar18;
        puVar21 = puVar19;
      }
      *(uint *)puVar16 = uVar1;
      *(uint *)((long)puVar16 + 4) = uVar2;
      puVar16[1] = uVar11;
      puVar16[2] = uVar17;
      puVar16 = (undefined8 *)*ppuVar5;
    }
    else if ((uVar1 == *(uint *)puVar21) && (uVar11 = puVar6[1], uVar11 < (ulong)puVar21[1]))
    goto LAB_00ce0708;
    ppuVar20 = ppuVar5;
    puVar21 = puVar6;
    puVar6 = puVar6 + 3;
    if ((long)(puVar6 + 3) - (long)puVar16 == 0xff0) {
      puVar16 = (undefined8 *)ppuVar5[1];
      ppuVar5 = ppuVar5 + 1;
      puVar6 = puVar16;
    }
  } while( true );
}


