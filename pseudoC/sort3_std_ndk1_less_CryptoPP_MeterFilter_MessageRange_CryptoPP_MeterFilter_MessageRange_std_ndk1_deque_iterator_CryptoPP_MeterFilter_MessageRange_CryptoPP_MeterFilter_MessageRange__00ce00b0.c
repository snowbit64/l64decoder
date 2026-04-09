// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
// Entry Point: 00ce00b0
// Size: 420 bytes
// Signature: uint __cdecl __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>(__deque_iterator param_1, __deque_iterator param_2, __deque_iterator param_3, __less * param_4)


/* unsigned int std::__ndk1::__sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,
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
   std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,
   CryptoPP::MeterFilter::MessageRange*, CryptoPP::MeterFilter::MessageRange&,
   CryptoPP::MeterFilter::MessageRange**, long, 170l>,
   std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange, CryptoPP::MeterFilter::MessageRange>&)
    */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
               (__deque_iterator param_1,__deque_iterator param_2,__deque_iterator param_3,
               __less *param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *in_x5;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined8 *)(ulong)param_2;
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar2 = *(uint *)param_4;
  if ((uVar2 < *(uint *)puVar3) ||
     ((uVar2 == *(uint *)puVar3 && (*(ulong *)(param_4 + 8) < (ulong)puVar3[1])))) {
    if ((*(uint *)in_x5 < uVar2) ||
       ((*(uint *)in_x5 == uVar2 && ((ulong)in_x5[1] < *(ulong *)(param_4 + 8))))) {
      uVar7 = *in_x5;
      uVar2 = 1;
      uVar5 = in_x5[2];
      uVar9 = puVar3[1];
      uVar8 = *puVar3;
      uVar6 = puVar3[2];
      puVar3[1] = in_x5[1];
      *puVar3 = uVar7;
      puVar3[2] = uVar5;
    }
    else {
      uVar7 = *(undefined8 *)param_4;
      uVar5 = *(undefined8 *)(param_4 + 0x10);
      uVar9 = puVar3[1];
      uVar8 = *puVar3;
      uVar6 = puVar3[2];
      puVar3[1] = *(undefined8 *)(param_4 + 8);
      *puVar3 = uVar7;
      puVar3[2] = uVar5;
      *(undefined8 *)(param_4 + 8) = uVar9;
      *(undefined8 *)param_4 = uVar8;
      *(undefined8 *)(param_4 + 0x10) = uVar6;
      if ((*(uint *)param_4 <= *(uint *)in_x5) &&
         ((*(uint *)in_x5 != *(uint *)param_4 || (*(ulong *)(param_4 + 8) <= (ulong)in_x5[1]))))
      goto LAB_00ce0230;
      uVar7 = *in_x5;
      uVar2 = 2;
      uVar5 = in_x5[2];
      uVar9 = *(undefined8 *)(param_4 + 8);
      uVar8 = *(undefined8 *)param_4;
      uVar6 = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(param_4 + 8) = in_x5[1];
      *(undefined8 *)param_4 = uVar7;
      *(undefined8 *)(param_4 + 0x10) = uVar5;
    }
    in_x5[1] = uVar9;
    *in_x5 = uVar8;
    in_x5[2] = uVar6;
  }
  else {
    if ((uVar2 <= *(uint *)in_x5) &&
       ((*(uint *)in_x5 != uVar2 || (*(ulong *)(param_4 + 8) <= (ulong)in_x5[1])))) {
      uVar2 = 0;
      goto LAB_00ce0234;
    }
    uVar7 = *in_x5;
    uVar5 = in_x5[2];
    uVar9 = *(undefined8 *)(param_4 + 8);
    uVar8 = *(undefined8 *)param_4;
    uVar6 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_4 + 8) = in_x5[1];
    *(undefined8 *)param_4 = uVar7;
    *(undefined8 *)(param_4 + 0x10) = uVar5;
    in_x5[1] = uVar9;
    *in_x5 = uVar8;
    in_x5[2] = uVar6;
    if ((*(uint *)param_4 < *(uint *)puVar3) ||
       ((*(uint *)param_4 == *(uint *)puVar3 && (*(ulong *)(param_4 + 8) < (ulong)puVar3[1])))) {
      uVar7 = *(undefined8 *)param_4;
      uVar2 = 2;
      uVar5 = *(undefined8 *)(param_4 + 0x10);
      uVar9 = puVar3[1];
      uVar8 = *puVar3;
      uVar6 = puVar3[2];
      puVar3[1] = *(undefined8 *)(param_4 + 8);
      *puVar3 = uVar7;
      puVar3[2] = uVar5;
      *(undefined8 *)(param_4 + 8) = uVar9;
      *(undefined8 *)param_4 = uVar8;
      *(undefined8 *)(param_4 + 0x10) = uVar6;
      goto LAB_00ce0234;
    }
LAB_00ce0230:
    uVar2 = 1;
  }
LAB_00ce0234:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,puVar3,param_3);
  }
  return uVar2;
}


