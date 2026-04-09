// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
// Entry Point: 00c5a040
// Size: 460 bytes
// Signature: uint __cdecl __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>(pair * param_1, pair * param_2, pair * param_3, _func_bool_pair_ptr_pair_ptr * param_4)


/* unsigned int std::__ndk1::__sort3<bool (*&)(std::__ndk1::pair<int, GsTFunction::Parameter>
   const&, std::__ndk1::pair<int, GsTFunction::Parameter> const&), std::__ndk1::pair<int,
   GsTFunction::Parameter>*>(std::__ndk1::pair<int, GsTFunction::Parameter>*, std::__ndk1::pair<int,
   GsTFunction::Parameter>*, std::__ndk1::pair<int, GsTFunction::Parameter>*, bool
   (*&)(std::__ndk1::pair<int, GsTFunction::Parameter> const&, std::__ndk1::pair<int,
   GsTFunction::Parameter> const&)) */

uint std::__ndk1::
     __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
               (pair *param_1,pair *param_2,pair *param_3,_func_bool_pair_ptr_pair_ptr *param_4)

{
  pair pVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)param_4)(param_2,param_1);
  uVar5 = (**(code **)param_4)(param_3,param_2);
  if ((uVar4 & 1) == 0) {
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
      goto LAB_00c5a1e0;
    }
    pVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = pVar1;
    uVar9 = *(undefined8 *)(param_3 + 2);
    uVar7 = *(undefined8 *)(param_3 + 6);
    uVar11 = *(undefined8 *)(param_2 + 4);
    uVar10 = *(undefined8 *)(param_2 + 2);
    uVar8 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 2) = uVar9;
    *(undefined8 *)(param_2 + 6) = uVar7;
    *(undefined8 *)(param_3 + 4) = uVar11;
    *(undefined8 *)(param_3 + 2) = uVar10;
    *(undefined8 *)(param_3 + 6) = uVar8;
    uVar4 = (**(code **)param_4)(param_2,param_1);
    if ((uVar4 & 1) != 0) {
      pVar1 = *param_1;
      uVar3 = 2;
      *param_1 = *param_2;
      *param_2 = pVar1;
      uVar9 = *(undefined8 *)(param_2 + 2);
      uVar7 = *(undefined8 *)(param_2 + 6);
      uVar11 = *(undefined8 *)(param_1 + 4);
      uVar10 = *(undefined8 *)(param_1 + 2);
      uVar8 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = uVar9;
      *(undefined8 *)(param_1 + 6) = uVar7;
      *(undefined8 *)(param_2 + 4) = uVar11;
      *(undefined8 *)(param_2 + 2) = uVar10;
      *(undefined8 *)(param_2 + 6) = uVar8;
      goto LAB_00c5a1e0;
    }
LAB_00c5a1dc:
    uVar3 = 1;
  }
  else {
    if ((uVar5 & 1) == 0) {
      pVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = pVar1;
      uVar9 = *(undefined8 *)(param_2 + 2);
      uVar7 = *(undefined8 *)(param_2 + 6);
      uVar11 = *(undefined8 *)(param_1 + 4);
      uVar10 = *(undefined8 *)(param_1 + 2);
      uVar8 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = uVar9;
      *(undefined8 *)(param_1 + 6) = uVar7;
      *(undefined8 *)(param_2 + 4) = uVar11;
      *(undefined8 *)(param_2 + 2) = uVar10;
      *(undefined8 *)(param_2 + 6) = uVar8;
      uVar4 = (**(code **)param_4)(param_3,param_2);
      if ((uVar4 & 1) == 0) goto LAB_00c5a1dc;
      pVar1 = *param_2;
      uVar3 = 2;
      *param_2 = *param_3;
      *param_3 = pVar1;
      uVar9 = *(undefined8 *)(param_3 + 2);
      uVar7 = *(undefined8 *)(param_3 + 6);
      uVar11 = *(undefined8 *)(param_2 + 4);
      uVar10 = *(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_2 + 2) = uVar9;
      *(undefined8 *)(param_2 + 6) = uVar7;
    }
    else {
      uVar3 = 1;
      pVar1 = *param_1;
      *param_1 = *param_3;
      uVar9 = *(undefined8 *)(param_3 + 2);
      *param_3 = pVar1;
      uVar7 = *(undefined8 *)(param_3 + 6);
      uVar11 = *(undefined8 *)(param_1 + 4);
      uVar10 = *(undefined8 *)(param_1 + 2);
      uVar8 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_1 + 2) = uVar9;
      *(undefined8 *)(param_1 + 6) = uVar7;
    }
    *(undefined8 *)(param_3 + 4) = uVar11;
    *(undefined8 *)(param_3 + 2) = uVar10;
    *(undefined8 *)(param_3 + 6) = uVar8;
  }
LAB_00c5a1e0:
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


