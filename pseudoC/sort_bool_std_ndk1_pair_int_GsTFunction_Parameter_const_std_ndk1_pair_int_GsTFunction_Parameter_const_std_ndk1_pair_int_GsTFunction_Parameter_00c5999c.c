// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
// Entry Point: 00c5999c
// Size: 1700 bytes
// Signature: void __cdecl __sort<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>(pair * param_1, pair * param_2, _func_bool_pair_ptr_pair_ptr * param_3)


/* void std::__ndk1::__sort<bool (*&)(std::__ndk1::pair<int, GsTFunction::Parameter> const&,
   std::__ndk1::pair<int, GsTFunction::Parameter> const&), std::__ndk1::pair<int,
   GsTFunction::Parameter>*>(std::__ndk1::pair<int, GsTFunction::Parameter>*, std::__ndk1::pair<int,
   GsTFunction::Parameter>*, bool (*&)(std::__ndk1::pair<int, GsTFunction::Parameter> const&,
   std::__ndk1::pair<int, GsTFunction::Parameter> const&)) */

void std::__ndk1::
     __sort<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
               (pair *param_1,pair *param_2,_func_bool_pair_ptr_pair_ptr *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  pair pVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
LAB_00c599dc:
  puVar13 = (undefined8 *)((long)param_2 + -0x20);
  puVar11 = (undefined8 *)param_1;
LAB_00c599ec:
  param_1 = (pair *)puVar11;
  uVar12 = (long)param_2 - (long)param_1;
  uVar9 = (long)uVar12 >> 5;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00c59d9c_caseD_0;
  case 2:
    uVar9 = (**(code **)param_3)(puVar13,param_1);
    if ((uVar9 & 1) != 0) {
      pVar3 = *param_1;
      *param_1 = *(pair *)((long)param_2 + -0x20);
      *(pair *)((long)param_2 + -0x20) = pVar3;
      local_80 = *(undefined8 *)((long)param_1 + 0x18);
      uStack_88 = *(undefined8 *)((long)param_1 + 0x10);
      local_90 = *(undefined8 *)((long)param_1 + 8);
      uVar21 = *(undefined8 *)((long)param_2 + -0x18);
      uVar10 = *(undefined8 *)((long)param_2 + -8);
      *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 8) = uVar21;
      *(undefined8 *)((long)param_1 + 0x18) = uVar10;
      *(undefined8 *)((long)param_2 + -8) = local_80;
      *(undefined8 *)((long)param_2 + -0x10) = uStack_88;
      *(undefined8 *)((long)param_2 + -0x18) = local_90;
    }
    goto switchD_00c59d9c_caseD_0;
  case 3:
    __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
              (param_1,(pair *)((long)param_1 + 0x20),(pair *)puVar13,param_3);
    goto switchD_00c59d9c_caseD_0;
  case 4:
    puVar11 = (undefined8 *)((long)param_1 + 0x20);
    puVar14 = (undefined8 *)((long)param_1 + 0x40);
    __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
              (param_1,(pair *)puVar11,(pair *)puVar14,param_3);
    uVar9 = (**(code **)param_3)(puVar13,puVar14);
    if ((uVar9 & 1) != 0) {
      pVar3 = *(pair *)((long)param_1 + 0x40);
      *(pair *)((long)param_1 + 0x40) = *(pair *)((long)param_2 + -0x20);
      *(pair *)((long)param_2 + -0x20) = pVar3;
      uStack_88 = *(undefined8 *)((long)param_1 + 0x50);
      local_90 = *(undefined8 *)((long)param_1 + 0x48);
      local_80 = *(undefined8 *)((long)param_1 + 0x58);
      uVar21 = *(undefined8 *)((long)param_2 + -0x18);
      uVar10 = *(undefined8 *)((long)param_2 + -8);
      *(undefined8 *)((long)param_1 + 0x50) = *(undefined8 *)((long)param_2 + -0x10);
      *(undefined8 *)((long)param_1 + 0x48) = uVar21;
      *(undefined8 *)((long)param_1 + 0x58) = uVar10;
      *(undefined8 *)((long)param_2 + -8) = local_80;
      *(undefined8 *)((long)param_2 + -0x10) = uStack_88;
      *(undefined8 *)((long)param_2 + -0x18) = local_90;
      uVar9 = (**(code **)param_3)(puVar14,puVar11);
      if ((uVar9 & 1) != 0) {
        pVar3 = *(pair *)((long)param_1 + 0x20);
        *(pair *)((long)param_1 + 0x20) = *(pair *)((long)param_1 + 0x40);
        uVar22 = *(undefined8 *)((long)param_1 + 0x50);
        uVar21 = *(undefined8 *)((long)param_1 + 0x48);
        *(pair *)((long)param_1 + 0x40) = pVar3;
        uVar10 = *(undefined8 *)((long)param_1 + 0x38);
        *(undefined8 *)((long)param_1 + 0x50) = *(undefined8 *)((long)param_1 + 0x30);
        *(undefined8 *)((long)param_1 + 0x48) = *(undefined8 *)((long)param_1 + 0x28);
        *(undefined8 *)((long)param_1 + 0x30) = uVar22;
        *(undefined8 *)((long)param_1 + 0x28) = uVar21;
        *(undefined8 *)((long)param_1 + 0x38) = *(undefined8 *)((long)param_1 + 0x58);
        *(undefined8 *)((long)param_1 + 0x58) = uVar10;
        uVar9 = (**(code **)param_3)(puVar11,param_1);
        if ((uVar9 & 1) != 0) {
          uStack_88 = *(undefined8 *)((long)param_1 + 0x10);
          local_90 = *(undefined8 *)((long)param_1 + 8);
          pVar3 = *param_1;
          local_80 = *(undefined8 *)((long)param_1 + 0x18);
          *param_1 = *(pair *)((long)param_1 + 0x20);
          *(pair *)((long)param_1 + 0x20) = pVar3;
          *(undefined8 *)((long)param_1 + 0x18) = *(undefined8 *)((long)param_1 + 0x38);
          *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_1 + 0x30);
          *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_1 + 0x28);
          *(undefined8 *)((long)param_1 + 0x30) = uStack_88;
          *(undefined8 *)((long)param_1 + 0x28) = local_90;
          *(undefined8 *)((long)param_1 + 0x38) = local_80;
        }
      }
    }
    goto switchD_00c59d9c_caseD_0;
  case 5:
    FUN_00c5a20c(param_1,(undefined8 *)((long)param_1 + 0x20),(undefined8 *)((long)param_1 + 0x40),
                 (undefined8 *)((long)param_1 + 0x60),puVar13,param_3);
    goto switchD_00c59d9c_caseD_0;
  }
  if ((long)uVar12 < 0xe0) {
    __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
              (param_1,(pair *)((long)param_1 + 0x20),(pair *)(undefined8 *)((long)param_1 + 0x40),
               param_3);
    if ((undefined8 *)((long)param_1 + 0x60) == (undefined8 *)param_2)
    goto switchD_00c59d9c_caseD_0;
    lVar15 = 0;
    puVar11 = (undefined8 *)((long)param_1 + 0x60);
    puVar13 = (undefined8 *)((long)param_1 + 0x40);
    goto LAB_00c59f9c;
  }
  uVar1 = uVar9;
  if ((long)uVar9 < 0) {
    uVar1 = uVar9 + 1;
  }
  puVar11 = (undefined8 *)((long)param_1 + (uVar1 & 0xffffffffffffffe) * 2 * 8);
  if (uVar12 < 0x7ce1) {
    uVar8 = __sort3<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
                      (param_1,(pair *)puVar11,(pair *)puVar13,param_3);
  }
  else {
    uVar12 = uVar9 + 3;
    if (-1 < (long)uVar9) {
      uVar12 = uVar9;
    }
    uVar8 = FUN_00c5a20c(param_1,(undefined8 *)((long)param_1 + (uVar12 & 0x1ffffffffffffffc) * 8),
                         puVar11,puVar11 + (uVar12 & 0x1ffffffffffffffc),puVar13,param_3);
  }
  uVar9 = (**(code **)param_3)(param_1,puVar11);
  puVar14 = puVar13;
  if ((uVar9 & 1) == 0) {
    do {
      puVar17 = puVar14;
      puVar14 = puVar17 + -4;
      if (puVar14 == (undefined8 *)param_1) {
        puVar14 = (undefined8 *)((long)param_1 + 0x20);
        uVar9 = (**(code **)param_3)(param_1,puVar13);
        if ((uVar9 & 1) == 0) goto joined_r0x00c59c64;
        goto LAB_00c59cd4;
      }
      uVar9 = (**(code **)param_3)(puVar14,puVar11);
    } while ((uVar9 & 1) == 0);
    uVar8 = uVar8 + 1;
    pVar3 = *param_1;
    *param_1 = *(pair *)puVar14;
    *(pair *)puVar14 = pVar3;
    local_80 = *(undefined8 *)((long)param_1 + 0x18);
    uStack_88 = *(undefined8 *)((long)param_1 + 0x10);
    local_90 = *(undefined8 *)((long)param_1 + 8);
    uVar21 = puVar17[-3];
    uVar10 = puVar17[-1];
    *(undefined8 *)((long)param_1 + 0x10) = puVar17[-2];
    *(undefined8 *)((long)param_1 + 8) = uVar21;
    *(undefined8 *)((long)param_1 + 0x18) = uVar10;
    puVar17[-1] = local_80;
    puVar17[-2] = uStack_88;
    puVar17[-3] = local_90;
  }
  puVar17 = (undefined8 *)((long)param_1 + 0x20);
  puVar16 = puVar17;
  if (puVar17 < puVar14) {
    while( true ) {
      puVar17 = puVar16 + -4;
      do {
        puVar18 = puVar17;
        puVar17 = puVar18 + 4;
        uVar9 = (**(code **)param_3)(puVar17,puVar11);
      } while ((uVar9 & 1) != 0);
      puVar16 = puVar18 + 8;
      do {
        puVar19 = puVar14;
        puVar14 = puVar19 + -4;
        uVar9 = (**(code **)param_3)(puVar14,puVar11);
      } while ((uVar9 & 1) == 0);
      if (puVar14 < puVar17) break;
      pVar3 = *(pair *)puVar17;
      uVar8 = uVar8 + 1;
      puVar2 = puVar14;
      if (puVar17 != puVar11) {
        puVar2 = puVar11;
      }
      *(pair *)puVar17 = *(pair *)puVar14;
      *(pair *)puVar14 = pVar3;
      local_80 = puVar18[7];
      uStack_88 = puVar18[6];
      local_90 = puVar18[5];
      uVar21 = puVar19[-2];
      uVar10 = puVar19[-3];
      puVar18[7] = puVar19[-1];
      puVar18[6] = uVar21;
      puVar18[5] = uVar10;
      puVar19[-1] = local_80;
      puVar19[-2] = uStack_88;
      puVar19[-3] = local_90;
      puVar11 = puVar2;
    }
  }
  if ((puVar17 != puVar11) && (uVar9 = (**(code **)param_3)(puVar11,puVar17), (uVar9 & 1) != 0)) {
    uVar8 = uVar8 + 1;
    pVar3 = *(pair *)puVar17;
    *(pair *)puVar17 = *(pair *)puVar11;
    *(pair *)puVar11 = pVar3;
    local_80 = puVar17[3];
    uStack_88 = puVar17[2];
    local_90 = puVar17[1];
    uVar21 = puVar11[1];
    uVar10 = puVar11[3];
    puVar17[2] = puVar11[2];
    puVar17[1] = uVar21;
    puVar17[3] = uVar10;
    puVar11[3] = local_80;
    puVar11[2] = uStack_88;
    puVar11[1] = local_90;
  }
  if (uVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
                      (param_1,(pair *)puVar17,param_3);
    bVar7 = __insertion_sort_incomplete<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
                      ((pair *)(puVar17 + 4),param_2,param_3);
    if (bVar7) goto LAB_00c59d7c;
    puVar11 = puVar17 + 4;
    if (bVar6) goto LAB_00c599ec;
  }
  if ((long)param_2 - (long)puVar17 <= (long)puVar17 - (long)param_1) {
    __sort<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
              ((pair *)(puVar17 + 4),param_2,param_3);
    param_2 = (pair *)puVar17;
    goto LAB_00c599dc;
  }
  __sort<bool(*&)(std::__ndk1::pair<int,GsTFunction::Parameter>const&,std::__ndk1::pair<int,GsTFunction::Parameter>const&),std::__ndk1::pair<int,GsTFunction::Parameter>*>
            (param_1,(pair *)puVar17,param_3);
  puVar11 = puVar17 + 4;
  goto LAB_00c599ec;
joined_r0x00c59c64:
  if (puVar14 == puVar13) goto switchD_00c59d9c_caseD_0;
  uVar9 = (**(code **)param_3)(param_1,puVar14);
  if ((uVar9 & 1) != 0) goto LAB_00c59c8c;
  puVar14 = puVar14 + 4;
  goto joined_r0x00c59c64;
LAB_00c59c8c:
  pVar3 = *(pair *)puVar14;
  *(pair *)puVar14 = *(pair *)puVar13;
  *(pair *)puVar13 = pVar3;
  local_80 = puVar14[3];
  uStack_88 = puVar14[2];
  local_90 = puVar14[1];
  uVar21 = *(undefined8 *)((long)param_2 + -0x10);
  uVar10 = *(undefined8 *)((long)param_2 + -0x18);
  puVar14[3] = *(undefined8 *)((long)param_2 + -8);
  puVar14[2] = uVar21;
  puVar14[1] = uVar10;
  puVar14 = puVar14 + 4;
  *(undefined8 *)((long)param_2 + -8) = local_80;
  *(undefined8 *)((long)param_2 + -0x10) = uStack_88;
  *(undefined8 *)((long)param_2 + -0x18) = local_90;
LAB_00c59cd4:
  puVar17 = puVar13;
  if (puVar14 == puVar13) goto switchD_00c59d9c_caseD_0;
  while( true ) {
    puVar11 = puVar14 + -4;
    do {
      puVar16 = puVar11;
      puVar11 = puVar16 + 4;
      uVar9 = (**(code **)param_3)(param_1,puVar11);
    } while ((uVar9 & 1) == 0);
    puVar14 = puVar16 + 8;
    do {
      puVar18 = puVar17;
      puVar17 = puVar18 + -4;
      uVar9 = (**(code **)param_3)(param_1,puVar17);
    } while ((uVar9 & 1) != 0);
    if (puVar17 <= puVar11) break;
    pVar3 = *(pair *)puVar11;
    *(pair *)puVar11 = *(pair *)puVar17;
    *(pair *)puVar17 = pVar3;
    local_80 = puVar16[7];
    uStack_88 = puVar16[6];
    local_90 = puVar16[5];
    uVar21 = puVar18[-2];
    uVar10 = puVar18[-3];
    puVar16[7] = puVar18[-1];
    puVar16[6] = uVar21;
    puVar16[5] = uVar10;
    puVar18[-1] = local_80;
    puVar18[-2] = uStack_88;
    puVar18[-3] = local_90;
  }
  goto LAB_00c599ec;
LAB_00c59d7c:
  param_2 = (pair *)puVar17;
  if (bVar6) goto switchD_00c59d9c_caseD_0;
  goto LAB_00c599dc;
LAB_00c59f9c:
  do {
    puVar14 = puVar11;
    uVar9 = (**(code **)param_3)(puVar14,puVar13);
    if ((uVar9 & 1) != 0) {
      uStack_88 = puVar14[1];
      local_90 = *puVar14;
      local_78 = puVar14[3];
      local_80 = puVar14[2];
      lVar5 = lVar15;
      do {
        lVar20 = lVar5;
        *(undefined4 *)((long)param_1 + lVar20 + 0x60) =
             *(undefined4 *)((long)param_1 + lVar20 + 0x40);
        *(undefined8 *)((long)param_1 + lVar20 + 0x70) =
             *(undefined8 *)((long)param_1 + lVar20 + 0x50);
        *(undefined8 *)((long)param_1 + lVar20 + 0x68) =
             *(undefined8 *)((long)param_1 + lVar20 + 0x48);
        *(undefined8 *)((long)param_1 + lVar20 + 0x78) =
             *(undefined8 *)((long)param_1 + lVar20 + 0x58);
        puVar11 = (undefined8 *)param_1;
        if (lVar20 == -0x40) goto LAB_00c59f74;
        uVar9 = (**(code **)param_3)(&local_90,(long)param_1 + lVar20 + 0x20);
        lVar5 = lVar20 + -0x20;
      } while ((uVar9 & 1) != 0);
      puVar11 = (undefined8 *)((long)param_1 + lVar20 + 0x40);
LAB_00c59f74:
      *(pair *)puVar11 = (pair)local_90;
      *(undefined8 *)((long)param_1 + lVar20 + 0x58) = local_78;
      *(undefined8 *)((long)param_1 + lVar20 + 0x50) = local_80;
      *(undefined8 *)((long)param_1 + lVar20 + 0x48) = uStack_88;
    }
    lVar15 = lVar15 + 0x20;
    puVar11 = puVar14 + 4;
    puVar13 = puVar14;
  } while (puVar14 + 4 != (undefined8 *)param_2);
switchD_00c59d9c_caseD_0:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


