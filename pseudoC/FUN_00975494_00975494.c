// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00975494
// Entry Point: 00975494
// Size: 1108 bytes
// Signature: undefined FUN_00975494(void)


void FUN_00975494(undefined (*param_1) [16],undefined (*param_2) [16])

{
  undefined *puVar1;
  ulong uVar2;
  undefined (*pauVar3) [16];
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined (*pauVar9) [16];
  ulong uVar10;
  undefined8 uVar11;
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [16];
  long lVar14;
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [16];
  undefined auVar17 [16];
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
LAB_009754cc:
  pauVar12 = (undefined (*) [16])(param_2[-1] + 8);
  pauVar9 = param_1;
LAB_009754d4:
  param_1 = pauVar9;
  uVar10 = (long)param_2 - (long)param_1;
  uVar7 = (long)uVar10 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00975750_caseD_0;
  case 2:
    uVar7 = FUN_009758e8(pauVar12,param_1);
    if ((uVar7 & 1) != 0) {
      uVar11 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = *(undefined8 *)*pauVar12;
      *(undefined8 *)*pauVar12 = uVar11;
    }
    goto switchD_00975750_caseD_0;
  case 3:
    FUN_00975a08(param_1,*param_1 + 8,pauVar12);
    goto switchD_00975750_caseD_0;
  case 4:
    puVar1 = *param_1 + 8;
    pauVar9 = param_1 + 1;
    FUN_00975a08(param_1,puVar1,pauVar9);
    uVar7 = FUN_009758e8(pauVar12,pauVar9);
    if ((uVar7 & 1) != 0) {
      uVar11 = *(undefined8 *)*pauVar9;
      *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar12;
      *(undefined8 *)*pauVar12 = uVar11;
      uVar7 = FUN_009758e8(pauVar9,puVar1);
      if ((uVar7 & 1) != 0) {
        auVar17 = NEON_ext(*(undefined (*) [16])(*param_1 + 8),*(undefined (*) [16])(*param_1 + 8),8
                           ,1);
        *(long *)param_1[1] = auVar17._8_8_;
        *(long *)(*param_1 + 8) = auVar17._0_8_;
        uVar7 = FUN_009758e8(puVar1,param_1);
        if ((uVar7 & 1) != 0) {
          auVar17 = NEON_ext(*param_1,*param_1,8,1);
          *(long *)(*param_1 + 8) = auVar17._8_8_;
          *(long *)*param_1 = auVar17._0_8_;
        }
      }
    }
    goto switchD_00975750_caseD_0;
  case 5:
    FUN_00975aec(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,pauVar12);
    goto switchD_00975750_caseD_0;
  }
  if ((long)uVar10 < 0xf8) {
    FUN_00975a08(param_1,*param_1 + 8,param_1 + 1);
    if ((undefined (*) [16])(param_1[1] + 8) == param_2) goto switchD_00975750_caseD_0;
    lVar8 = 0;
    pauVar9 = (undefined (*) [16])(param_1[1] + 8);
    pauVar12 = param_1 + 1;
    goto LAB_00975860;
  }
  uVar2 = uVar7;
  if ((long)uVar7 < 0) {
    uVar2 = uVar7 + 1;
  }
  pauVar9 = (undefined (*) [16])(*param_1 + (uVar2 & 0x3ffffffffffffffe) * 4);
  if (uVar10 < 0x1f39) {
    iVar6 = FUN_00975a08(param_1,pauVar9,pauVar12);
  }
  else {
    uVar10 = uVar7 + 3;
    if (-1 < (long)uVar7) {
      uVar10 = uVar7;
    }
    lVar8 = (uVar10 & 0x7ffffffffffffffc) * 2;
    iVar6 = FUN_00975aec(param_1,*param_1 + lVar8,pauVar9,*pauVar9 + lVar8,pauVar12);
  }
  uVar7 = FUN_009758e8(param_1,pauVar9);
  pauVar13 = pauVar12;
  if ((uVar7 & 1) == 0) {
    do {
      pauVar13 = (undefined (*) [16])(pauVar13[-1] + 8);
      if (pauVar13 == param_1) {
        pauVar13 = (undefined (*) [16])(*param_1 + 8);
        uVar7 = FUN_009758e8(param_1,pauVar12);
        pauVar9 = pauVar13;
        if ((uVar7 & 1) == 0) goto joined_r0x00975690;
        goto LAB_009756c4;
      }
      uVar7 = FUN_009758e8(pauVar13,pauVar9);
    } while ((uVar7 & 1) == 0);
    iVar6 = iVar6 + 1;
    uVar11 = *(undefined8 *)*param_1;
    *(undefined8 *)*param_1 = *(undefined8 *)*pauVar13;
    *(undefined8 *)*pauVar13 = uVar11;
  }
  pauVar16 = (undefined (*) [16])(*param_1 + 8);
  pauVar15 = pauVar16;
  if (pauVar16 < pauVar13) {
    while( true ) {
      pauVar16 = (undefined (*) [16])(pauVar15[-1] + 8);
      do {
        pauVar15 = pauVar16;
        pauVar16 = (undefined (*) [16])(*pauVar15 + 8);
        uVar7 = FUN_009758e8(pauVar16,pauVar9);
      } while ((uVar7 & 1) != 0);
      pauVar15 = pauVar15 + 1;
      do {
        pauVar13 = (undefined (*) [16])(pauVar13[-1] + 8);
        uVar7 = FUN_009758e8(pauVar13,pauVar9);
      } while ((uVar7 & 1) == 0);
      if (pauVar13 < pauVar16) break;
      uVar11 = *(undefined8 *)*pauVar16;
      iVar6 = iVar6 + 1;
      pauVar3 = pauVar13;
      if (pauVar16 != pauVar9) {
        pauVar3 = pauVar9;
      }
      *(undefined8 *)*pauVar16 = *(undefined8 *)*pauVar13;
      *(undefined8 *)*pauVar13 = uVar11;
      pauVar9 = pauVar3;
    }
  }
  if ((pauVar16 != pauVar9) && (uVar7 = FUN_009758e8(pauVar9,pauVar16), (uVar7 & 1) != 0)) {
    iVar6 = iVar6 + 1;
    uVar11 = *(undefined8 *)*pauVar16;
    *(undefined8 *)*pauVar16 = *(undefined8 *)*pauVar9;
    *(undefined8 *)*pauVar9 = uVar11;
  }
  if (iVar6 == 0) {
    uVar7 = FUN_00975c44(param_1,pauVar16);
    uVar10 = FUN_00975c44((undefined (*) [16])(*pauVar16 + 8),param_2);
    if ((uVar10 & 1) != 0) goto LAB_00975730;
    pauVar9 = (undefined (*) [16])(*pauVar16 + 8);
    if ((uVar7 & 1) != 0) goto LAB_009754d4;
  }
  if ((long)param_2 - (long)pauVar16 <= (long)pauVar16 - (long)param_1) {
    FUN_00975494((long)*pauVar16 + 8,param_2);
    param_2 = pauVar16;
    goto LAB_009754cc;
  }
  FUN_00975494(param_1,pauVar16);
  pauVar9 = (undefined (*) [16])(*pauVar16 + 8);
  goto LAB_009754d4;
joined_r0x00975690:
  if (pauVar9 == pauVar12) goto switchD_00975750_caseD_0;
  uVar7 = FUN_009758e8(param_1,pauVar9);
  if ((uVar7 & 1) != 0) goto LAB_009756b4;
  pauVar9 = (undefined (*) [16])(*pauVar9 + 8);
  goto joined_r0x00975690;
LAB_009756b4:
  uVar11 = *(undefined8 *)*pauVar9;
  pauVar13 = (undefined (*) [16])(*pauVar9 + 8);
  *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar12;
  *(undefined8 *)*pauVar12 = uVar11;
LAB_009756c4:
  pauVar16 = pauVar12;
  if (pauVar13 == pauVar12) goto switchD_00975750_caseD_0;
  while( true ) {
    pauVar9 = (undefined (*) [16])(pauVar13[-1] + 8);
    do {
      pauVar13 = pauVar9;
      pauVar9 = (undefined (*) [16])(*pauVar13 + 8);
      uVar7 = FUN_009758e8(param_1,pauVar9);
    } while ((uVar7 & 1) == 0);
    pauVar13 = pauVar13 + 1;
    do {
      pauVar16 = (undefined (*) [16])(pauVar16[-1] + 8);
      uVar7 = FUN_009758e8(param_1,pauVar16);
    } while ((uVar7 & 1) != 0);
    if (pauVar16 <= pauVar9) break;
    uVar11 = *(undefined8 *)*pauVar9;
    *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar16;
    *(undefined8 *)*pauVar16 = uVar11;
  }
  goto LAB_009754d4;
LAB_00975730:
  param_2 = pauVar16;
  if ((uVar7 & 1) != 0) goto switchD_00975750_caseD_0;
  goto LAB_009754cc;
LAB_00975860:
  do {
    pauVar13 = pauVar9;
    uVar7 = FUN_009758e8(pauVar13,pauVar12);
    if ((uVar7 & 1) != 0) {
      local_70 = *(undefined8 *)*pauVar13;
      lVar5 = lVar8;
      do {
        lVar14 = lVar5;
        *(undefined8 *)(param_1[1] + lVar14 + 8) = *(undefined8 *)(param_1[1] + lVar14);
        pauVar9 = param_1;
        if (lVar14 == -0x10) goto LAB_00975848;
        uVar7 = FUN_009758e8(&local_70,*param_1 + lVar14 + 8);
        lVar5 = lVar14 + -8;
      } while ((uVar7 & 1) != 0);
      pauVar9 = (undefined (*) [16])(param_1[1] + lVar14);
LAB_00975848:
      *(undefined8 *)*pauVar9 = local_70;
    }
    lVar8 = lVar8 + 8;
    pauVar9 = (undefined (*) [16])(*pauVar13 + 8);
    pauVar12 = pauVar13;
  } while ((undefined (*) [16])(*pauVar13 + 8) != param_2);
switchD_00975750_caseD_0:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


