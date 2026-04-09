// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c5a20c
// Entry Point: 00c5a20c
// Size: 680 bytes
// Signature: undefined FUN_00c5a20c(void)


uint FUN_00c5a20c(pair *param_1,pair *param_2,pair *param_3,pair *param_4,pair *param_5,
                 code **param_6)

{
  pair pVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar3 = std::__ndk1::
          __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
                    (param_1,param_2,param_3,(_func_bool_pair_ptr_pair_ptr *)param_6);
  uVar4 = (**param_6)(param_4,param_3);
  if ((uVar4 & 1) != 0) {
    pVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = pVar1;
    uVar8 = *(undefined8 *)(param_4 + 2);
    uVar6 = *(undefined8 *)(param_4 + 6);
    uVar10 = *(undefined8 *)(param_3 + 4);
    uVar9 = *(undefined8 *)(param_3 + 2);
    uVar7 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(param_3 + 2) = uVar8;
    *(undefined8 *)(param_3 + 6) = uVar6;
    *(undefined8 *)(param_4 + 4) = uVar10;
    *(undefined8 *)(param_4 + 2) = uVar9;
    *(undefined8 *)(param_4 + 6) = uVar7;
    uVar4 = (**param_6)(param_3,param_2);
    if ((uVar4 & 1) == 0) {
      uVar3 = uVar3 + 1;
    }
    else {
      pVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = pVar1;
      uVar8 = *(undefined8 *)(param_3 + 2);
      uVar6 = *(undefined8 *)(param_3 + 6);
      uVar10 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 2);
      uVar7 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_2 + 2) = uVar8;
      *(undefined8 *)(param_2 + 6) = uVar6;
      *(undefined8 *)(param_3 + 4) = uVar10;
      *(undefined8 *)(param_3 + 2) = uVar9;
      *(undefined8 *)(param_3 + 6) = uVar7;
      uVar4 = (**param_6)(param_2,param_1);
      if ((uVar4 & 1) == 0) {
        uVar3 = uVar3 + 2;
      }
      else {
        pVar1 = *param_1;
        uVar3 = uVar3 + 3;
        *param_1 = *param_2;
        *param_2 = pVar1;
        uVar8 = *(undefined8 *)(param_2 + 2);
        uVar6 = *(undefined8 *)(param_2 + 6);
        uVar10 = *(undefined8 *)(param_1 + 4);
        uVar9 = *(undefined8 *)(param_1 + 2);
        uVar7 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 2) = uVar8;
        *(undefined8 *)(param_1 + 6) = uVar6;
        *(undefined8 *)(param_2 + 4) = uVar10;
        *(undefined8 *)(param_2 + 2) = uVar9;
        *(undefined8 *)(param_2 + 6) = uVar7;
      }
    }
  }
  uVar4 = (**param_6)(param_5,param_4);
  if ((uVar4 & 1) != 0) {
    pVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = pVar1;
    uVar8 = *(undefined8 *)(param_5 + 2);
    uVar6 = *(undefined8 *)(param_5 + 6);
    uVar10 = *(undefined8 *)(param_4 + 4);
    uVar9 = *(undefined8 *)(param_4 + 2);
    uVar7 = *(undefined8 *)(param_4 + 6);
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_5 + 4);
    *(undefined8 *)(param_4 + 2) = uVar8;
    *(undefined8 *)(param_4 + 6) = uVar6;
    *(undefined8 *)(param_5 + 4) = uVar10;
    *(undefined8 *)(param_5 + 2) = uVar9;
    *(undefined8 *)(param_5 + 6) = uVar7;
    uVar4 = (**param_6)(param_4,param_3);
    if ((uVar4 & 1) == 0) {
      uVar3 = uVar3 + 1;
    }
    else {
      pVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = pVar1;
      uVar8 = *(undefined8 *)(param_4 + 2);
      uVar6 = *(undefined8 *)(param_4 + 6);
      uVar10 = *(undefined8 *)(param_3 + 4);
      uVar9 = *(undefined8 *)(param_3 + 2);
      uVar7 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_4 + 4);
      *(undefined8 *)(param_3 + 2) = uVar8;
      *(undefined8 *)(param_3 + 6) = uVar6;
      *(undefined8 *)(param_4 + 4) = uVar10;
      *(undefined8 *)(param_4 + 2) = uVar9;
      *(undefined8 *)(param_4 + 6) = uVar7;
      uVar4 = (**param_6)(param_3,param_2);
      if ((uVar4 & 1) == 0) {
        uVar3 = uVar3 + 2;
      }
      else {
        pVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = pVar1;
        uVar8 = *(undefined8 *)(param_3 + 2);
        uVar6 = *(undefined8 *)(param_3 + 6);
        uVar10 = *(undefined8 *)(param_2 + 4);
        uVar9 = *(undefined8 *)(param_2 + 2);
        uVar7 = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(param_2 + 2) = uVar8;
        *(undefined8 *)(param_2 + 6) = uVar6;
        *(undefined8 *)(param_3 + 4) = uVar10;
        *(undefined8 *)(param_3 + 2) = uVar9;
        *(undefined8 *)(param_3 + 6) = uVar7;
        uVar4 = (**param_6)(param_2,param_1);
        if ((uVar4 & 1) == 0) {
          uVar3 = uVar3 + 3;
        }
        else {
          pVar1 = *param_1;
          uVar3 = uVar3 + 4;
          *param_1 = *param_2;
          *param_2 = pVar1;
          uVar8 = *(undefined8 *)(param_2 + 2);
          uVar6 = *(undefined8 *)(param_2 + 6);
          uVar10 = *(undefined8 *)(param_1 + 4);
          uVar9 = *(undefined8 *)(param_1 + 2);
          uVar7 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 2) = uVar8;
          *(undefined8 *)(param_1 + 6) = uVar6;
          *(undefined8 *)(param_2 + 4) = uVar10;
          *(undefined8 *)(param_2 + 2) = uVar9;
          *(undefined8 *)(param_2 + 6) = uVar7;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


