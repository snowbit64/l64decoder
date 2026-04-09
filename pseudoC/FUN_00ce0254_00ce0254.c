// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ce0254
// Entry Point: 00ce0254
// Size: 660 bytes
// Signature: undefined FUN_00ce0254(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined param_9, undefined8 param_10)


void FUN_00ce0254(__deque_iterator param_1,undefined8 *param_2,__deque_iterator param_3,
                 undefined8 *param_4,undefined8 param_5,undefined8 *param_6,undefined8 param_7,
                 undefined8 *param_8,undefined8 param_9,undefined8 *param_10)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar2 = std::__ndk1::
          __sort3<std::__ndk1::__less<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange>&,std::__ndk1::__deque_iterator<CryptoPP::MeterFilter::MessageRange,CryptoPP::MeterFilter::MessageRange*,CryptoPP::MeterFilter::MessageRange&,CryptoPP::MeterFilter::MessageRange**,long,170l>>
                    (param_1,(__deque_iterator)param_2,param_3,(__less *)param_4);
  if ((*(uint *)param_8 < *(uint *)param_6) ||
     ((uVar3 = uVar2, *(uint *)param_8 == *(uint *)param_6 &&
      ((ulong)param_8[1] < (ulong)param_6[1])))) {
    uVar7 = *param_8;
    uVar5 = param_8[2];
    uVar9 = param_6[1];
    uVar8 = *param_6;
    uVar6 = param_6[2];
    param_6[1] = param_8[1];
    *param_6 = uVar7;
    param_6[2] = uVar5;
    param_8[1] = uVar9;
    *param_8 = uVar8;
    param_8[2] = uVar6;
    if ((*(uint *)param_6 < *(uint *)param_4) ||
       ((uVar3 = uVar2 + 1, *(uint *)param_6 == *(uint *)param_4 &&
        ((ulong)param_6[1] < (ulong)param_4[1])))) {
      uVar7 = *param_6;
      uVar5 = param_6[2];
      uVar9 = param_4[1];
      uVar8 = *param_4;
      uVar6 = param_4[2];
      param_4[1] = param_6[1];
      *param_4 = uVar7;
      param_4[2] = uVar5;
      param_6[1] = uVar9;
      *param_6 = uVar8;
      param_6[2] = uVar6;
      if ((*(uint *)param_4 < *(uint *)param_2) ||
         ((uVar3 = uVar2 + 2, *(uint *)param_4 == *(uint *)param_2 &&
          ((ulong)param_4[1] < (ulong)param_2[1])))) {
        uVar7 = *param_4;
        uVar5 = param_4[2];
        uVar9 = param_2[1];
        uVar8 = *param_2;
        uVar6 = param_2[2];
        param_2[1] = param_4[1];
        *param_2 = uVar7;
        param_2[2] = uVar5;
        param_4[1] = uVar9;
        *param_4 = uVar8;
        param_4[2] = uVar6;
        uVar3 = uVar2 + 3;
      }
    }
  }
  if ((*(uint *)param_10 < *(uint *)param_8) ||
     ((uVar2 = uVar3, *(uint *)param_10 == *(uint *)param_8 &&
      ((ulong)param_10[1] < (ulong)param_8[1])))) {
    uVar7 = *param_10;
    uVar5 = param_10[2];
    uVar9 = param_8[1];
    uVar8 = *param_8;
    uVar6 = param_8[2];
    param_8[1] = param_10[1];
    *param_8 = uVar7;
    param_8[2] = uVar5;
    param_10[1] = uVar9;
    *param_10 = uVar8;
    param_10[2] = uVar6;
    if ((*(uint *)param_8 < *(uint *)param_6) ||
       ((uVar2 = uVar3 + 1, *(uint *)param_8 == *(uint *)param_6 &&
        ((ulong)param_8[1] < (ulong)param_6[1])))) {
      uVar7 = *param_8;
      uVar5 = param_8[2];
      uVar9 = param_6[1];
      uVar8 = *param_6;
      uVar6 = param_6[2];
      param_6[1] = param_8[1];
      *param_6 = uVar7;
      param_6[2] = uVar5;
      param_8[1] = uVar9;
      *param_8 = uVar8;
      param_8[2] = uVar6;
      if ((*(uint *)param_6 < *(uint *)param_4) ||
         ((uVar2 = uVar3 + 2, *(uint *)param_6 == *(uint *)param_4 &&
          ((ulong)param_6[1] < (ulong)param_4[1])))) {
        uVar7 = *param_6;
        uVar5 = param_6[2];
        uVar9 = param_4[1];
        uVar8 = *param_4;
        uVar6 = param_4[2];
        param_4[1] = param_6[1];
        *param_4 = uVar7;
        param_4[2] = uVar5;
        param_6[1] = uVar9;
        *param_6 = uVar8;
        param_6[2] = uVar6;
        if ((*(uint *)param_4 < *(uint *)param_2) ||
           ((uVar2 = uVar3 + 3, *(uint *)param_4 == *(uint *)param_2 &&
            ((ulong)param_4[1] < (ulong)param_2[1])))) {
          uVar7 = *param_4;
          uVar5 = param_4[2];
          uVar9 = param_2[1];
          uVar8 = *param_2;
          uVar6 = param_2[2];
          param_2[1] = param_4[1];
          *param_2 = uVar7;
          param_2[2] = uVar5;
          param_4[1] = uVar9;
          *param_4 = uVar8;
          param_4[2] = uVar6;
          uVar2 = uVar3 + 4;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


