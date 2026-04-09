// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00af0460
// Entry Point: 00af0460
// Size: 1360 bytes
// Signature: undefined FUN_00af0460(void)


void FUN_00af0460(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  
LAB_00af0484:
  plVar11 = param_2 + -1;
  plVar15 = param_1;
LAB_00af0490:
  param_1 = plVar15;
  uVar10 = (long)param_2 - (long)param_1;
  uVar7 = (long)uVar10 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00af07b0_caseD_0;
  case 2:
    lVar8 = param_2[-1];
    lVar12 = *param_1;
    if (*(uint *)(lVar8 + 0x18) == *(uint *)(lVar12 + 0x18)) {
      if (*(uint *)(lVar12 + 0x10) <= *(uint *)(lVar8 + 0x10)) {
        return;
      }
    }
    else if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar8 + 0x18)) {
      return;
    }
    *param_1 = lVar8;
    param_2[-1] = lVar12;
    return;
  case 3:
    FUN_00af09b0(param_1,param_1 + 1,plVar11);
    return;
  case 4:
    plVar15 = param_1 + 2;
    FUN_00af09b0(param_1,param_1 + 1,plVar15);
    lVar8 = param_2[-1];
    lVar12 = param_1[2];
    if (*(uint *)(lVar8 + 0x18) == *(uint *)(lVar12 + 0x18)) {
      if (*(uint *)(lVar12 + 0x10) <= *(uint *)(lVar8 + 0x10)) {
        return;
      }
    }
    else if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar8 + 0x18)) {
      return;
    }
    *plVar15 = lVar8;
    param_2[-1] = lVar12;
    lVar8 = *plVar15;
    lVar12 = param_1[1];
    uVar3 = *(uint *)(lVar8 + 0x18);
    bVar5 = *(uint *)(lVar12 + 0x18) <= uVar3;
    if (uVar3 == *(uint *)(lVar12 + 0x18)) {
      bVar5 = *(uint *)(lVar12 + 0x10) <= *(uint *)(lVar8 + 0x10);
    }
    if (bVar5) {
      return;
    }
    lVar13 = *param_1;
    param_1[1] = lVar8;
    param_1[2] = lVar12;
    bVar5 = *(uint *)(lVar13 + 0x18) <= uVar3;
    if (uVar3 == *(uint *)(lVar13 + 0x18)) {
      bVar5 = *(uint *)(lVar13 + 0x10) <= *(uint *)(lVar8 + 0x10);
    }
    if (bVar5) {
      return;
    }
    *param_1 = lVar8;
    param_1[1] = lVar13;
    return;
  case 5:
    FUN_00af0ad0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar11);
    goto switchD_00af07b0_caseD_0;
  }
  if ((long)uVar10 < 0xf8) {
    FUN_00af09b0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar8 = 0;
    plVar15 = param_1 + 3;
    plVar11 = param_1 + 2;
    goto LAB_00af0894;
  }
  uVar1 = uVar7;
  if ((long)uVar7 < 0) {
    uVar1 = uVar7 + 1;
  }
  plVar15 = (long *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
  if (uVar10 < 0x1f39) {
    iVar6 = FUN_00af09b0(param_1,plVar15,plVar11);
  }
  else {
    uVar10 = uVar7 + 3;
    if (-1 < (long)uVar7) {
      uVar10 = uVar7;
    }
    lVar8 = (uVar10 & 0x7ffffffffffffffc) * 2;
    iVar6 = FUN_00af0ad0(param_1,(long)param_1 + lVar8,plVar15,(long)plVar15 + lVar8,plVar11);
  }
  lVar8 = *param_1;
  lVar12 = *plVar15;
  uVar3 = *(uint *)(lVar8 + 0x18);
  uVar4 = *(uint *)(lVar12 + 0x18);
  plVar9 = plVar11;
  plVar17 = param_2 + -2;
  if (uVar3 == uVar4) {
    if (*(uint *)(lVar12 + 0x10) <= *(uint *)(lVar8 + 0x10)) goto joined_r0x00af0538;
  }
  else if (uVar4 <= uVar3) {
joined_r0x00af0538:
    for (; param_1 != plVar17; plVar17 = plVar17 + -1) {
      lVar13 = *plVar17;
      if (*(uint *)(lVar13 + 0x18) == uVar4) {
        if (*(uint *)(lVar13 + 0x10) < *(uint *)(lVar12 + 0x10)) goto LAB_00af0594;
      }
      else if (*(uint *)(lVar13 + 0x18) < uVar4) {
LAB_00af0594:
        iVar6 = iVar6 + 1;
        *param_1 = lVar13;
        *plVar17 = lVar8;
        plVar9 = plVar17;
        goto LAB_00af05ac;
      }
    }
    lVar12 = *plVar11;
    plVar17 = param_1 + 1;
    plVar15 = plVar17;
    if (uVar3 == *(uint *)(lVar12 + 0x18)) {
      if (*(uint *)(lVar12 + 0x10) <= *(uint *)(lVar8 + 0x10)) {
LAB_00af06d0:
        do {
          if (plVar15 == plVar11) {
            return;
          }
          lVar13 = *plVar15;
          if (uVar3 == *(uint *)(lVar13 + 0x18)) {
            if (*(uint *)(lVar8 + 0x10) < *(uint *)(lVar13 + 0x10)) goto LAB_00af06f8;
          }
          else if (uVar3 < *(uint *)(lVar13 + 0x18)) goto LAB_00af06f8;
          plVar15 = plVar15 + 1;
        } while( true );
      }
    }
    else if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00af06d0;
    goto LAB_00af0700;
  }
LAB_00af05ac:
  plVar17 = param_1 + 1;
  plVar18 = plVar17;
  if (plVar17 < plVar9) {
LAB_00af05b8:
    lVar8 = *plVar15;
    uVar3 = *(uint *)(lVar8 + 0x18);
    plVar18 = plVar17;
    do {
      lVar12 = *plVar18;
      if (*(uint *)(lVar12 + 0x18) == uVar3) {
        if (*(uint *)(lVar8 + 0x10) <= *(uint *)(lVar12 + 0x10)) goto LAB_00af05f4;
      }
      else if (uVar3 <= *(uint *)(lVar12 + 0x18)) goto LAB_00af05f4;
      plVar18 = plVar18 + 1;
    } while( true );
  }
LAB_00af0634:
  if (plVar18 != plVar15) {
    lVar8 = *plVar15;
    lVar12 = *plVar18;
    bVar5 = *(uint *)(lVar12 + 0x18) <= *(uint *)(lVar8 + 0x18);
    if (*(uint *)(lVar8 + 0x18) == *(uint *)(lVar12 + 0x18)) {
      bVar5 = *(uint *)(lVar12 + 0x10) <= *(uint *)(lVar8 + 0x10);
    }
    if (!bVar5) {
      iVar6 = iVar6 + 1;
      *plVar18 = lVar8;
      *plVar15 = lVar12;
    }
  }
  if (iVar6 == 0) {
    uVar7 = FUN_00af0c8c(param_1,plVar18);
    uVar10 = FUN_00af0c8c(plVar18 + 1,param_2);
    if ((uVar10 & 1) != 0) goto LAB_00af0790;
    plVar15 = plVar18 + 1;
    if ((uVar7 & 1) != 0) goto LAB_00af0490;
  }
  if ((long)param_2 - (long)plVar18 <= (long)plVar18 - (long)param_1) {
    FUN_00af0460(plVar18 + 1,param_2);
    param_2 = plVar18;
    goto LAB_00af0484;
  }
  FUN_00af0460(param_1,plVar18);
  plVar15 = plVar18 + 1;
  goto LAB_00af0490;
LAB_00af0894:
  plVar17 = plVar15;
  lVar12 = *plVar17;
  lVar13 = *plVar11;
  uVar3 = *(uint *)(lVar12 + 0x18);
  bVar5 = *(uint *)(lVar13 + 0x18) <= uVar3;
  if (uVar3 == *(uint *)(lVar13 + 0x18)) {
    bVar5 = *(uint *)(lVar13 + 0x10) <= *(uint *)(lVar12 + 0x10);
  }
  if (!bVar5) {
    *plVar17 = lVar13;
    lVar13 = lVar8;
    plVar15 = param_1;
    if (plVar11 != param_1) {
      do {
        lVar16 = *(long *)((long)param_1 + lVar13 + 8);
        if (uVar3 == *(uint *)(lVar16 + 0x18)) {
          plVar15 = plVar11;
          if (*(uint *)(lVar16 + 0x10) <= *(uint *)(lVar12 + 0x10)) break;
        }
        else if (*(uint *)(lVar16 + 0x18) <= uVar3) {
          plVar15 = (long *)((long)param_1 + lVar13 + 0x10);
          break;
        }
        plVar11 = plVar11 + -1;
        lVar14 = lVar13 + -8;
        *(long *)((long)param_1 + lVar13 + 0x10) = lVar16;
        lVar13 = lVar14;
        plVar15 = param_1;
      } while (lVar14 != -0x10);
    }
    *plVar15 = lVar12;
  }
  lVar8 = lVar8 + 8;
  plVar15 = plVar17 + 1;
  plVar11 = plVar17;
  if (plVar17 + 1 == param_2) {
switchD_00af07b0_caseD_0:
    return;
  }
  goto LAB_00af0894;
LAB_00af06f8:
  plVar17 = plVar15 + 1;
  *plVar15 = lVar12;
  *plVar11 = lVar13;
LAB_00af0700:
  if (plVar17 == plVar11) {
    return;
  }
LAB_00af070c:
  lVar8 = *param_1;
  uVar3 = *(uint *)(lVar8 + 0x18);
  plVar15 = plVar17;
  do {
    lVar12 = *plVar15;
    if (uVar3 == *(uint *)(lVar12 + 0x18)) {
      if (*(uint *)(lVar8 + 0x10) < *(uint *)(lVar12 + 0x10)) break;
    }
    else if (uVar3 < *(uint *)(lVar12 + 0x18)) break;
    plVar15 = plVar15 + 1;
  } while( true );
  while (uVar3 < *(uint *)(lVar13 + 0x18)) {
LAB_00af0748:
    plVar9 = plVar9 + -1;
    lVar13 = *plVar9;
    if (uVar3 == *(uint *)(lVar13 + 0x18)) {
      if (*(uint *)(lVar13 + 0x10) <= *(uint *)(lVar8 + 0x10)) break;
      goto LAB_00af0748;
    }
  }
  if (plVar9 <= plVar15) goto LAB_00af0490;
  plVar17 = plVar15 + 1;
  *plVar15 = lVar13;
  *plVar9 = lVar12;
  goto LAB_00af070c;
  while (uVar3 <= *(uint *)(lVar13 + 0x18)) {
LAB_00af05f4:
    plVar9 = plVar9 + -1;
    lVar13 = *plVar9;
    if (*(uint *)(lVar13 + 0x18) == uVar3) {
      if (*(uint *)(lVar13 + 0x10) < *(uint *)(lVar8 + 0x10)) break;
      goto LAB_00af05f4;
    }
  }
  if (plVar9 < plVar18) goto LAB_00af0634;
  iVar6 = iVar6 + 1;
  plVar2 = plVar9;
  if (plVar18 != plVar15) {
    plVar2 = plVar15;
  }
  plVar17 = plVar18 + 1;
  *plVar18 = lVar13;
  *plVar9 = lVar12;
  plVar15 = plVar2;
  goto LAB_00af05b8;
LAB_00af0790:
  param_2 = plVar18;
  if ((uVar7 & 1) != 0) {
    return;
  }
  goto LAB_00af0484;
}


