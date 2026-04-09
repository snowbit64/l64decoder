// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00abfd3c
// Entry Point: 00abfd3c
// Size: 1556 bytes
// Signature: undefined FUN_00abfd3c(void)


void FUN_00abfd3c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  
LAB_00abfd60:
  plVar11 = param_2 + -1;
  plVar17 = param_1;
LAB_00abfd68:
  param_1 = plVar17;
  uVar12 = (long)param_2 - (long)param_1;
  uVar7 = (long)uVar12 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00ac00f0_caseD_0;
  case 2:
    lVar8 = *param_1;
    if (*(uint *)(param_2[-1] + 0x28) < *(uint *)(lVar8 + 0x28)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar8;
      return;
    }
    return;
  case 3:
    lVar8 = *param_1;
    lVar13 = param_1[1];
    lVar15 = param_2[-1];
    uVar4 = *(uint *)(lVar8 + 0x28);
    uVar3 = *(uint *)(lVar13 + 0x28);
    if (uVar4 <= uVar3) {
      if (uVar3 <= *(uint *)(lVar15 + 0x28)) {
        return;
      }
      param_1[1] = lVar15;
      param_2[-1] = lVar13;
      lVar8 = *param_1;
      if (*(uint *)(param_1[1] + 0x28) < *(uint *)(lVar8 + 0x28)) {
        *param_1 = param_1[1];
        param_1[1] = lVar8;
        return;
      }
      return;
    }
    if (*(uint *)(lVar15 + 0x28) < uVar3) {
      *param_1 = lVar15;
      param_2[-1] = lVar8;
      return;
    }
    *param_1 = lVar13;
    param_1[1] = lVar8;
    if (*(uint *)(param_2[-1] + 0x28) < uVar4) {
      param_1[1] = param_2[-1];
      param_2[-1] = lVar8;
      return;
    }
    return;
  case 4:
    FUN_00ac0350(param_1,param_1 + 1,param_1 + 2,plVar11);
    return;
  case 5:
    plVar17 = param_1 + 2;
    plVar11 = param_1 + 3;
    FUN_00ac0350(param_1,param_1 + 1,plVar17,plVar11);
    lVar8 = param_1[3];
    if (*(uint *)(lVar8 + 0x28) <= *(uint *)(param_2[-1] + 0x28)) {
      return;
    }
    *plVar11 = param_2[-1];
    param_2[-1] = lVar8;
    lVar8 = *plVar11;
    lVar13 = *plVar17;
    uVar4 = *(uint *)(lVar8 + 0x28);
    if (*(uint *)(lVar13 + 0x28) <= uVar4) {
      return;
    }
    lVar15 = param_1[1];
    *plVar17 = lVar8;
    *plVar11 = lVar13;
    if (*(uint *)(lVar15 + 0x28) <= uVar4) {
      return;
    }
    lVar13 = *param_1;
    param_1[1] = lVar8;
    param_1[2] = lVar15;
    if (*(uint *)(lVar13 + 0x28) <= uVar4) {
      return;
    }
    *param_1 = lVar8;
    param_1[1] = lVar13;
    return;
  default:
    if (0xf7 < (long)uVar12) {
      uVar1 = uVar7;
      if ((long)uVar7 < 0) {
        uVar1 = uVar7 + 1;
      }
      plVar17 = (long *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
      if (uVar12 < 0x1f39) {
        lVar13 = *plVar17;
        lVar8 = *param_1;
        lVar15 = *plVar11;
        uVar4 = *(uint *)(lVar13 + 0x28);
        uVar3 = *(uint *)(lVar8 + 0x28);
        if (uVar4 < uVar3) {
          if (*(uint *)(lVar15 + 0x28) < uVar4) {
            iVar6 = 1;
            *param_1 = lVar15;
          }
          else {
            *param_1 = lVar13;
            *plVar17 = lVar8;
            if (uVar3 <= *(uint *)(*plVar11 + 0x28)) {
LAB_00abfefc:
              iVar6 = 1;
              goto LAB_00abff10;
            }
            iVar6 = 2;
            *plVar17 = *plVar11;
          }
          *plVar11 = lVar8;
        }
        else if (*(uint *)(lVar15 + 0x28) < uVar4) {
          *plVar17 = lVar15;
          *plVar11 = lVar13;
          lVar8 = *param_1;
          if (*(uint *)(lVar8 + 0x28) <= *(uint *)(*plVar17 + 0x28)) goto LAB_00abfefc;
          iVar6 = 2;
          *param_1 = *plVar17;
          *plVar17 = lVar8;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        uVar12 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar12 = uVar7;
        }
        lVar8 = (uVar12 & 0x7ffffffffffffffc) * 2;
        plVar9 = (long *)((long)param_1 + lVar8);
        plVar14 = (long *)((long)plVar17 + lVar8);
        iVar6 = FUN_00ac0350(param_1,plVar9,plVar17,plVar14);
        lVar8 = *plVar14;
        if (*(uint *)(*plVar11 + 0x28) < *(uint *)(lVar8 + 0x28)) {
          *plVar14 = *plVar11;
          *plVar11 = lVar8;
          lVar8 = *plVar17;
          if (*(uint *)(*plVar14 + 0x28) < *(uint *)(lVar8 + 0x28)) {
            *plVar17 = *plVar14;
            *plVar14 = lVar8;
            lVar8 = *plVar9;
            if (*(uint *)(*plVar17 + 0x28) < *(uint *)(lVar8 + 0x28)) {
              *plVar9 = *plVar17;
              *plVar17 = lVar8;
              lVar8 = *param_1;
              if (*(uint *)(*plVar9 + 0x28) < *(uint *)(lVar8 + 0x28)) {
                iVar6 = iVar6 + 4;
                *param_1 = *plVar9;
                *plVar9 = lVar8;
              }
              else {
                iVar6 = iVar6 + 3;
              }
            }
            else {
              iVar6 = iVar6 + 2;
            }
          }
          else {
            iVar6 = iVar6 + 1;
          }
        }
      }
LAB_00abff10:
      lVar8 = *param_1;
      uVar4 = *(uint *)(lVar8 + 0x28);
      plVar9 = plVar11;
      if (*(uint *)(*plVar17 + 0x28) <= uVar4) break;
      goto LAB_00abff54;
    }
    lVar16 = *param_1;
    plVar9 = param_1 + 1;
    lVar13 = *plVar9;
    plVar17 = param_1 + 2;
    lVar15 = *plVar17;
    uVar4 = *(uint *)(lVar16 + 0x28);
    uVar3 = *(uint *)(lVar13 + 0x28);
    uVar5 = *(uint *)(lVar15 + 0x28);
    lVar8 = lVar15;
    plVar11 = param_1;
    if (uVar3 < uVar4) {
      lVar10 = lVar16;
      if (uVar3 <= uVar5) {
        *param_1 = lVar13;
        param_1[1] = lVar16;
        plVar11 = plVar9;
        if (uVar4 <= uVar5) goto LAB_00ac02c0;
      }
LAB_00ac02b0:
      *plVar11 = lVar15;
      *plVar17 = lVar16;
      lVar8 = lVar10;
    }
    else if (uVar5 < uVar3) {
      *plVar9 = lVar15;
      *plVar17 = lVar13;
      lVar10 = lVar13;
      lVar8 = lVar13;
      plVar17 = plVar9;
      if (uVar5 < uVar4) goto LAB_00ac02b0;
    }
LAB_00ac02c0:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar13 = 0x18;
    plVar17 = param_1 + 3;
    goto LAB_00ac02d0;
  }
  while (plVar9 = plVar9 + -1, plVar9 != param_1) {
    if (*(uint *)(*plVar9 + 0x28) < *(uint *)(*plVar17 + 0x28)) goto code_r0x00abff48;
  }
  plVar9 = param_1 + 1;
  plVar17 = plVar9;
  if (*(uint *)(*plVar11 + 0x28) <= uVar4) {
    while( true ) {
      if (plVar17 == plVar11) {
        return;
      }
      lVar8 = *plVar17;
      if (uVar4 < *(uint *)(lVar8 + 0x28)) break;
      plVar17 = plVar17 + 1;
    }
    plVar9 = plVar17 + 1;
    *plVar17 = *plVar11;
    *plVar11 = lVar8;
  }
  plVar14 = plVar11;
  if (plVar9 == plVar11) {
    return;
  }
  while( true ) {
    do {
      plVar17 = plVar9;
      plVar9 = plVar17 + 1;
      lVar8 = *plVar17;
    } while (*(uint *)(lVar8 + 0x28) <= *(uint *)(*param_1 + 0x28));
    do {
      plVar14 = plVar14 + -1;
    } while (*(uint *)(*param_1 + 0x28) < *(uint *)(*plVar14 + 0x28));
    if (plVar14 <= plVar17) break;
    *plVar17 = *plVar14;
    *plVar14 = lVar8;
  }
  goto LAB_00abfd68;
code_r0x00abff48:
  iVar6 = iVar6 + 1;
  *param_1 = *plVar9;
  *plVar9 = lVar8;
LAB_00abff54:
  plVar14 = param_1 + 1;
  plVar18 = plVar14;
  if (plVar14 < plVar9) {
    while( true ) {
      do {
        plVar14 = plVar18;
        plVar18 = plVar14 + 1;
        lVar8 = *plVar14;
      } while (*(uint *)(lVar8 + 0x28) < *(uint *)(*plVar17 + 0x28));
      do {
        plVar9 = plVar9 + -1;
      } while (*(uint *)(*plVar17 + 0x28) <= *(uint *)(*plVar9 + 0x28));
      if (plVar9 < plVar14) break;
      iVar6 = iVar6 + 1;
      plVar2 = plVar9;
      if (plVar14 != plVar17) {
        plVar2 = plVar17;
      }
      *plVar14 = *plVar9;
      *plVar9 = lVar8;
      plVar17 = plVar2;
    }
  }
  if (plVar14 != plVar17) {
    lVar8 = *plVar14;
    if (*(uint *)(*plVar17 + 0x28) < *(uint *)(lVar8 + 0x28)) {
      iVar6 = iVar6 + 1;
      *plVar14 = *plVar17;
      *plVar17 = lVar8;
    }
  }
  if (iVar6 == 0) {
    uVar7 = FUN_00ac047c(param_1,plVar14);
    uVar12 = FUN_00ac047c(plVar14 + 1,param_2);
    if ((uVar12 & 1) != 0) goto LAB_00ac00d0;
    plVar17 = plVar14 + 1;
    if ((uVar7 & 1) != 0) goto LAB_00abfd68;
  }
  if ((long)param_2 - (long)plVar14 <= (long)plVar14 - (long)param_1) {
    FUN_00abfd3c(plVar14 + 1,param_2);
    param_2 = plVar14;
    goto LAB_00abfd60;
  }
  FUN_00abfd3c(param_1,plVar14);
  plVar17 = plVar14 + 1;
  goto LAB_00abfd68;
LAB_00ac00d0:
  param_2 = plVar14;
  if ((uVar7 & 1) != 0) {
    return;
  }
  goto LAB_00abfd60;
LAB_00ac02d0:
  lVar16 = *plVar17;
  uVar4 = *(uint *)(lVar16 + 0x28);
  lVar15 = lVar13;
  if (uVar4 < *(uint *)(lVar8 + 0x28)) {
    do {
      lVar10 = lVar15 + -8;
      *(long *)((long)param_1 + lVar15) = lVar8;
      plVar11 = param_1;
      if (lVar10 == 0) goto LAB_00ac0318;
      lVar8 = *(long *)((long)param_1 + lVar15 + -0x10);
      lVar15 = lVar10;
    } while (uVar4 < *(uint *)(lVar8 + 0x28));
    plVar11 = (long *)((long)param_1 + lVar10);
LAB_00ac0318:
    *plVar11 = lVar16;
  }
  if (plVar17 + 1 == param_2) {
switchD_00ac00f0_caseD_0:
    return;
  }
  lVar8 = *plVar17;
  lVar13 = lVar13 + 8;
  plVar17 = plVar17 + 1;
  goto LAB_00ac02d0;
}


