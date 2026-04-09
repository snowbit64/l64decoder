// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
// Entry Point: 00868f40
// Size: 1384 bytes
// Signature: void __cdecl __sort<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>(RunningCallbackInfo * param_1, RunningCallbackInfo * param_2, _func_bool_RunningCallbackInfo_ptr_RunningCallbackInfo_ptr * param_3)


/* void std::__ndk1::__sort<bool (*&)(ConditionalAnimationItem::RunningCallbackInfo const&,
   ConditionalAnimationItem::RunningCallbackInfo const&),
   ConditionalAnimationItem::RunningCallbackInfo*>(ConditionalAnimationItem::RunningCallbackInfo*,
   ConditionalAnimationItem::RunningCallbackInfo*, bool
   (*&)(ConditionalAnimationItem::RunningCallbackInfo const&,
   ConditionalAnimationItem::RunningCallbackInfo const&)) */

void std::__ndk1::
     __sort<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
               (RunningCallbackInfo *param_1,RunningCallbackInfo *param_2,
               _func_bool_RunningCallbackInfo_ptr_RunningCallbackInfo_ptr *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
LAB_00868f88:
  puVar11 = (undefined8 *)((long)param_2 + -0x18);
  puVar9 = (undefined8 *)param_1;
LAB_00868f90:
  param_1 = (RunningCallbackInfo *)puVar9;
  uVar8 = (long)param_2 - (long)param_1;
  switch(((long)uVar8 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_008692fc_caseD_0;
  case 2:
    uVar8 = (**(code **)param_3)(puVar11,param_1);
    if ((uVar8 & 1) != 0) {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)((long)param_1 + 8);
      uVar10 = *(undefined8 *)((long)param_1 + 0x10);
      *(undefined8 *)param_1 = *puVar11;
      if (puVar11 != (undefined8 *)param_1) {
        *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + -0x10);
        *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)param_2 + -8);
      }
      *(undefined8 *)((long)param_2 + -0x18) = uVar1;
      *(undefined8 *)((long)param_2 + -0x10) = uVar2;
      *(undefined8 *)((long)param_2 + -8) = uVar10;
    }
    goto switchD_008692fc_caseD_0;
  case 3:
    __sort3<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
              (param_1,(RunningCallbackInfo *)((long)param_1 + 0x18),(RunningCallbackInfo *)puVar11,
               param_3);
    goto switchD_008692fc_caseD_0;
  case 4:
    __sort4<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
              (param_1,(RunningCallbackInfo *)((long)param_1 + 0x18),
               (RunningCallbackInfo *)((long)param_1 + 0x30),(RunningCallbackInfo *)puVar11,param_3)
    ;
    goto switchD_008692fc_caseD_0;
  case 5:
    FUN_00869730(param_1,(undefined8 *)((long)param_1 + 0x18),(undefined8 *)((long)param_1 + 0x30),
                 (undefined8 *)((long)param_1 + 0x48),puVar11,param_3);
    goto switchD_008692fc_caseD_0;
  }
  if ((long)uVar8 < 0xa8) {
    __sort3<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
              (param_1,(RunningCallbackInfo *)((long)param_1 + 0x18),
               (RunningCallbackInfo *)(undefined8 *)((long)param_1 + 0x30),param_3);
    if ((undefined8 *)((long)param_1 + 0x48) == (undefined8 *)param_2)
    goto switchD_008692fc_caseD_0;
    lVar13 = 0;
    puVar9 = (undefined8 *)((long)param_1 + 0x48);
    puVar11 = (undefined8 *)((long)param_1 + 0x30);
    goto LAB_008693dc;
  }
  if (uVar8 < 0x5da9) {
    puVar9 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar8 & 0xffff) / 0x30) * 3 * 8);
    uVar7 = __sort3<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
                      (param_1,(RunningCallbackInfo *)puVar9,(RunningCallbackInfo *)puVar11,param_3)
    ;
  }
  else {
    puVar9 = (undefined8 *)((long)param_1 + (uVar8 / 0x30) * 3 * 8);
    uVar7 = FUN_00869730(param_1,(undefined8 *)((long)param_1 + (uVar8 / 0x60) * 3 * 8),puVar9,
                         puVar9 + (uVar8 / 0x60) * 3,puVar11,param_3);
  }
  uVar8 = (**(code **)param_3)(param_1,puVar9);
  puVar12 = puVar11;
  if ((uVar8 & 1) == 0) {
    do {
      puVar15 = puVar12;
      puVar12 = puVar15 + -3;
      if (puVar12 == (undefined8 *)param_1) {
        puVar12 = (undefined8 *)((long)param_1 + 0x18);
        uVar8 = (**(code **)param_3)(param_1,puVar11);
        if ((uVar8 & 1) == 0) goto joined_r0x008691f8;
        goto LAB_0086924c;
      }
      uVar8 = (**(code **)param_3)(puVar12,puVar9);
    } while ((uVar8 & 1) == 0);
    uVar7 = uVar7 + 1;
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)((long)param_1 + 8);
    *(undefined8 *)param_1 = *puVar12;
    uVar10 = *(undefined8 *)((long)param_1 + 0x10);
    *(undefined8 *)((long)param_1 + 8) = puVar15[-2];
    *(undefined8 *)((long)param_1 + 0x10) = puVar15[-1];
    *puVar12 = uVar1;
    puVar15[-2] = uVar2;
    puVar15[-1] = uVar10;
  }
  puVar15 = (undefined8 *)((long)param_1 + 0x18);
  puVar14 = puVar15;
  if (puVar15 < puVar12) {
    while( true ) {
      puVar15 = puVar14 + -3;
      do {
        puVar16 = puVar15;
        puVar15 = puVar16 + 3;
        uVar8 = (**(code **)param_3)(puVar15,puVar9);
      } while ((uVar8 & 1) != 0);
      puVar14 = puVar16 + 6;
      do {
        puVar18 = puVar12;
        puVar12 = puVar18 + -3;
        uVar8 = (**(code **)param_3)(puVar12,puVar9);
      } while ((uVar8 & 1) == 0);
      if (puVar12 < puVar15) break;
      uVar1 = *puVar15;
      uVar2 = puVar16[4];
      uVar10 = puVar16[5];
      *puVar15 = *puVar12;
      if (puVar12 != puVar15) {
        puVar16[4] = puVar18[-2];
        puVar16[5] = puVar18[-1];
      }
      uVar7 = uVar7 + 1;
      puVar16 = puVar12;
      if (puVar15 != puVar9) {
        puVar16 = puVar9;
      }
      *puVar12 = uVar1;
      puVar18[-2] = uVar2;
      puVar18[-1] = uVar10;
      puVar9 = puVar16;
    }
    if (puVar15 != puVar9) goto LAB_00869130;
  }
  else if (puVar15 != puVar9) {
LAB_00869130:
    uVar8 = (**(code **)param_3)(puVar9,puVar15);
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar7 + 1;
      uVar1 = *puVar15;
      uVar2 = puVar15[1];
      *puVar15 = *puVar9;
      uVar10 = puVar15[2];
      puVar15[1] = puVar9[1];
      puVar15[2] = puVar9[2];
      *puVar9 = uVar1;
      puVar9[1] = uVar2;
      puVar9[2] = uVar10;
    }
  }
  if (uVar7 == 0) {
    bVar5 = __insertion_sort_incomplete<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
                      (param_1,(RunningCallbackInfo *)puVar15,param_3);
    bVar6 = __insertion_sort_incomplete<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
                      ((RunningCallbackInfo *)(puVar15 + 3),param_2,param_3);
    if (bVar6) goto LAB_008692dc;
    puVar9 = puVar15 + 3;
    if (bVar5) goto LAB_00868f90;
  }
  if (((long)param_2 - (long)puVar15 >> 3) * -0x5555555555555555 <=
      ((long)puVar15 - (long)param_1 >> 3) * -0x5555555555555555) {
    __sort<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
              ((RunningCallbackInfo *)(puVar15 + 3),param_2,param_3);
    param_2 = (RunningCallbackInfo *)puVar15;
    goto LAB_00868f88;
  }
  __sort<bool(*&)(ConditionalAnimationItem::RunningCallbackInfo_const&,ConditionalAnimationItem::RunningCallbackInfo_const&),ConditionalAnimationItem::RunningCallbackInfo*>
            (param_1,(RunningCallbackInfo *)puVar15,param_3);
  puVar9 = puVar15 + 3;
  goto LAB_00868f90;
joined_r0x008691f8:
  if (puVar12 == puVar11) goto switchD_008692fc_caseD_0;
  uVar8 = (**(code **)param_3)(param_1,puVar12);
  if ((uVar8 & 1) != 0) goto LAB_00869220;
  puVar12 = puVar12 + 3;
  goto joined_r0x008691f8;
LAB_00869220:
  uVar1 = *puVar12;
  uVar2 = puVar12[1];
  *puVar12 = *(undefined8 *)((long)param_2 + -0x18);
  uVar10 = puVar12[2];
  puVar12[1] = *(undefined8 *)((long)param_2 + -0x10);
  puVar12[2] = *(undefined8 *)((long)param_2 + -8);
  puVar12 = puVar12 + 3;
  *(undefined8 *)((long)param_2 + -0x18) = uVar1;
  *(undefined8 *)((long)param_2 + -0x10) = uVar2;
  *(undefined8 *)((long)param_2 + -8) = uVar10;
LAB_0086924c:
  puVar15 = puVar11;
  if (puVar12 == puVar11) goto switchD_008692fc_caseD_0;
  while( true ) {
    puVar9 = puVar12 + -3;
    do {
      puVar14 = puVar9;
      puVar9 = puVar14 + 3;
      uVar8 = (**(code **)param_3)(param_1,puVar9);
    } while ((uVar8 & 1) == 0);
    puVar12 = puVar14 + 6;
    do {
      puVar16 = puVar15;
      puVar15 = puVar16 + -3;
      uVar8 = (**(code **)param_3)(param_1,puVar15);
    } while ((uVar8 & 1) != 0);
    if (puVar15 <= puVar9) break;
    uVar1 = *puVar9;
    uVar2 = puVar14[4];
    *puVar9 = *puVar15;
    uVar10 = puVar14[5];
    puVar14[4] = puVar16[-2];
    puVar14[5] = puVar16[-1];
    *puVar15 = uVar1;
    puVar16[-2] = uVar2;
    puVar16[-1] = uVar10;
  }
  goto LAB_00868f90;
LAB_008692dc:
  param_2 = (RunningCallbackInfo *)puVar15;
  if (bVar5) goto switchD_008692fc_caseD_0;
  goto LAB_00868f88;
LAB_008693dc:
  do {
    puVar12 = puVar9;
    uVar8 = (**(code **)param_3)(puVar12,puVar11);
    if ((uVar8 & 1) != 0) {
      local_70 = puVar12[2];
      uStack_78 = puVar12[1];
      local_80 = *puVar12;
      lVar4 = lVar13;
      do {
        lVar17 = lVar4;
        *(undefined8 *)((long)param_1 + lVar17 + 0x50) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x38);
        *(undefined8 *)((long)param_1 + lVar17 + 0x48) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x30);
        *(undefined8 *)((long)param_1 + lVar17 + 0x58) =
             *(undefined8 *)((long)param_1 + lVar17 + 0x40);
        puVar9 = (undefined8 *)param_1;
        if (lVar17 == -0x30) goto LAB_0086944c;
        uVar8 = (**(code **)param_3)(&local_80,(long)param_1 + lVar17 + 0x18);
        lVar4 = lVar17 + -0x18;
      } while ((uVar8 & 1) != 0);
      puVar9 = (undefined8 *)((long)param_1 + lVar17 + 0x30);
LAB_0086944c:
      *puVar9 = local_80;
      if (&local_80 != puVar9) {
        puVar9[1] = uStack_78;
        puVar9[2] = local_70;
      }
    }
    lVar13 = lVar13 + 0x18;
    puVar9 = puVar12 + 3;
    puVar11 = puVar12;
  } while (puVar12 + 3 != (undefined8 *)param_2);
switchD_008692fc_caseD_0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


