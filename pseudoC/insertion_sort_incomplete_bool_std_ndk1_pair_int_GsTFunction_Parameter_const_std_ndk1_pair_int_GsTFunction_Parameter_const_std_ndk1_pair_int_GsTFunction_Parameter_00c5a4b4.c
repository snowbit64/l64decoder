// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
// Entry Point: 00c5a4b4
// Size: 776 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>(pair * param_1, pair * param_2, _func_bool_pair_ptr_pair_ptr * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(std::__ndk1::pair<int,
   GsTFunction::Parameter> const&, std::__ndk1::pair<int, GsTFunction::Parameter> const&),
   std::__ndk1::pair<int, GsTFunction::Parameter>*>(std::__ndk1::pair<int, GsTFunction::Parameter>*,
   std::__ndk1::pair<int, GsTFunction::Parameter>*, bool (*&)(std::__ndk1::pair<int,
   GsTFunction::Parameter> const&, std::__ndk1::pair<int, GsTFunction::Parameter> const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
               (pair *param_1,pair *param_2,_func_bool_pair_ptr_pair_ptr *param_3)

{
  pair *ppVar1;
  pair pVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  pair *ppVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = (long)param_2 - (long)param_1 >> 5;
  if (uVar7 < 6) {
    bVar6 = true;
    switch(uVar7) {
    default:
      goto switchD_00c5a514_caseD_0;
    case 2:
      uVar7 = (**(code **)param_3)(param_2 + -8,param_1);
      if ((uVar7 & 1) != 0) {
        bVar6 = true;
        pVar2 = *param_1;
        *param_1 = param_2[-8];
        param_2[-8] = pVar2;
        uVar16 = *(undefined8 *)(param_2 + -6);
        uVar10 = *(undefined8 *)(param_2 + -2);
        uVar18 = *(undefined8 *)(param_1 + 4);
        uVar17 = *(undefined8 *)(param_1 + 2);
        uVar11 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(param_1 + 2) = uVar16;
        *(undefined8 *)(param_1 + 6) = uVar10;
        *(undefined8 *)(param_2 + -4) = uVar18;
        *(undefined8 *)(param_2 + -6) = uVar17;
        *(undefined8 *)(param_2 + -2) = uVar11;
        goto switchD_00c5a514_caseD_0;
      }
      break;
    case 3:
      __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
                (param_1,param_1 + 8,param_2 + -8,param_3);
      break;
    case 4:
      ppVar8 = param_1 + 8;
      ppVar1 = param_1 + 0x10;
      __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
                (param_1,ppVar8,ppVar1,param_3);
      uVar7 = (**(code **)param_3)(param_2 + -8,ppVar1);
      if ((uVar7 & 1) != 0) {
        pVar2 = param_1[0x10];
        param_1[0x10] = param_2[-8];
        param_2[-8] = pVar2;
        uVar16 = *(undefined8 *)(param_2 + -6);
        uVar10 = *(undefined8 *)(param_2 + -2);
        uVar18 = *(undefined8 *)(param_1 + 0x14);
        uVar17 = *(undefined8 *)(param_1 + 0x12);
        uVar11 = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(param_1 + 0x12) = uVar16;
        *(undefined8 *)(param_1 + 0x16) = uVar10;
        *(undefined8 *)(param_2 + -4) = uVar18;
        *(undefined8 *)(param_2 + -6) = uVar17;
        *(undefined8 *)(param_2 + -2) = uVar11;
        uVar7 = (**(code **)param_3)(ppVar1,ppVar8);
        if ((uVar7 & 1) != 0) {
          pVar2 = param_1[8];
          param_1[8] = param_1[0x10];
          uVar16 = *(undefined8 *)(param_1 + 0x14);
          uVar11 = *(undefined8 *)(param_1 + 0x12);
          param_1[0x10] = pVar2;
          uVar10 = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0xc);
          *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)(param_1 + 0xc) = uVar16;
          *(undefined8 *)(param_1 + 10) = uVar11;
          *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)(param_1 + 0x16) = uVar10;
          uVar7 = (**(code **)param_3)(ppVar8,param_1);
          if ((uVar7 & 1) != 0) {
            pVar2 = *param_1;
            bVar6 = true;
            *param_1 = param_1[8];
            uVar16 = *(undefined8 *)(param_1 + 0xc);
            uVar11 = *(undefined8 *)(param_1 + 10);
            param_1[8] = pVar2;
            uVar10 = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)(param_1 + 4) = uVar16;
            *(undefined8 *)(param_1 + 2) = uVar11;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
            *(undefined8 *)(param_1 + 0xe) = uVar10;
            goto switchD_00c5a514_caseD_0;
          }
        }
      }
      break;
    case 5:
      FUN_00c5a20c(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -8,param_3);
    }
  }
  else {
    __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
              (param_1,param_1 + 8,param_1 + 0x10,param_3);
    if (param_1 + 0x18 != param_2) {
      lVar13 = 0;
      iVar14 = 0;
      puVar4 = (undefined8 *)(param_1 + 0x18);
      puVar12 = (undefined8 *)(param_1 + 0x10);
      do {
        puVar9 = puVar4;
        uVar7 = (**(code **)param_3)(puVar9,puVar12);
        if ((uVar7 & 1) != 0) {
          uStack_f8 = puVar9[1];
          local_100 = *puVar9;
          local_e8 = puVar9[3];
          uStack_f0 = puVar9[2];
          lVar5 = lVar13;
          do {
            lVar15 = lVar5;
            *(undefined4 *)((long)param_1 + lVar15 + 0x60) =
                 *(undefined4 *)((long)param_1 + lVar15 + 0x40);
            *(undefined8 *)((long)param_1 + lVar15 + 0x70) =
                 *(undefined8 *)((long)param_1 + lVar15 + 0x50);
            *(undefined8 *)((long)param_1 + lVar15 + 0x68) =
                 *(undefined8 *)((long)param_1 + lVar15 + 0x48);
            *(undefined8 *)((long)param_1 + lVar15 + 0x78) =
                 *(undefined8 *)((long)param_1 + lVar15 + 0x58);
            ppVar8 = param_1;
            if (lVar15 == -0x40) goto LAB_00c5a5b8;
            uVar7 = (**(code **)param_3)(&local_100,(long)param_1 + lVar15 + 0x20);
            lVar5 = lVar15 + -0x20;
          } while ((uVar7 & 1) != 0);
          ppVar8 = (pair *)((long)param_1 + lVar15 + 0x40);
LAB_00c5a5b8:
          iVar14 = iVar14 + 1;
          *ppVar8 = (pair)local_100;
          *(undefined8 *)((long)param_1 + lVar15 + 0x58) = local_e8;
          *(undefined8 *)((long)param_1 + lVar15 + 0x50) = uStack_f0;
          *(undefined8 *)((long)param_1 + lVar15 + 0x48) = uStack_f8;
          if (iVar14 == 8) {
            bVar6 = puVar9 + 4 == (undefined8 *)param_2;
            goto switchD_00c5a514_caseD_0;
          }
        }
        lVar13 = lVar13 + 0x20;
        puVar4 = puVar9 + 4;
        puVar12 = puVar9;
      } while (puVar9 + 4 != (undefined8 *)param_2);
    }
  }
  bVar6 = true;
switchD_00c5a514_caseD_0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


