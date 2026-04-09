// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldBuiltin
// Entry Point: 00f02248
// Size: 2784 bytes
// Signature: undefined __cdecl foldBuiltin(int param_1, Constant * param_2, ulong param_3)


/* Luau::Compile::foldBuiltin(int, Luau::Compile::Constant const*, unsigned long) */

undefined  [16] Luau::Compile::foldBuiltin(int param_1,Constant *param_2,ulong param_3)

{
  uint uVar1;
  double dVar2;
  double *pdVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  double dVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  ulong local_28;
  
  dVar2 = 0.0;
  if (0x2e < param_1 - 2U) {
LAB_00f02cd8:
    return ZEXT816(0);
  }
  dVar8 = 0.0;
  switch(param_1) {
  case 2:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar2 = (double)(*(ulong *)(param_2 + 8) & 0x7fffffffffffffff);
    goto LAB_00f02b04;
  case 3:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = acos(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 4:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = asin(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 5:
    if (((param_3 != 2) || (*(int *)param_2 != 3)) || (*(int *)(param_2 + 0x10) != 3)) break;
    dVar8 = atan2(*(double *)(param_2 + 8),*(double *)(param_2 + 0x18));
    goto LAB_00f02634;
  case 6:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = atan(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 7:
    if ((param_3 == 1) && (*(int *)param_2 == 3)) {
      dVar2 = (double)(long)*(double *)(param_2 + 8);
      goto LAB_00f02b04;
    }
    break;
  case 8:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = cosh(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 9:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = cos(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 10:
    if ((param_3 == 1) && (*(int *)param_2 == 3)) {
      dVar2 = *(double *)(param_2 + 8) / 0.0174532925199433;
      goto LAB_00f02b04;
    }
    break;
  case 0xb:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = exp(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 0xc:
    if ((param_3 == 1) && (*(int *)param_2 == 3)) {
      dVar2 = (double)(long)*(double *)(param_2 + 8);
      goto LAB_00f02b04;
    }
    break;
  case 0xd:
    if (((param_3 != 2) || (*(int *)param_2 != 3)) || (*(int *)(param_2 + 0x10) != 3)) break;
    dVar8 = fmod(*(double *)(param_2 + 8),*(double *)(param_2 + 0x18));
    goto LAB_00f02634;
  default:
    goto switchD_00f02288_caseD_e;
  case 0xf:
    if (((param_3 != 2) || (*(int *)param_2 != 3)) || (*(int *)(param_2 + 0x10) != 3)) break;
    dVar8 = ldexp(*(double *)(param_2 + 8),(int)*(double *)(param_2 + 0x18));
    goto LAB_00f02634;
  case 0x10:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = *(double *)(param_2 + 8);
LAB_00f02480:
    dVar8 = log10(dVar8);
    goto LAB_00f02634;
  case 0x11:
    if (param_3 == 2) {
      if ((*(int *)param_2 != 3) || (*(int *)(param_2 + 0x10) != 3)) break;
      dVar2 = *(double *)(param_2 + 0x18);
      if (dVar2 != 2.0) {
        dVar8 = *(double *)(param_2 + 8);
        if (dVar2 != 10.0) {
          dVar8 = log(dVar8);
          dVar2 = log(dVar2);
          auVar16._8_8_ = dVar8 / dVar2;
          auVar16._0_8_ = 3;
          return auVar16;
        }
        goto LAB_00f02480;
      }
      dVar8 = log2(*(double *)(param_2 + 8));
    }
    else {
      if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
      dVar8 = log(*(double *)(param_2 + 8));
    }
    goto LAB_00f02634;
  case 0x12:
    if ((param_3 != 0) && (*(int *)param_2 == 3)) {
      dVar2 = *(double *)(param_2 + 8);
      if (1 < param_3) {
        lVar7 = param_3 - 1;
        pdVar3 = (double *)(param_2 + 0x18);
        dVar8 = *(double *)(param_2 + 8);
        do {
          if (*(int *)(pdVar3 + -1) != 3) goto LAB_00f02cc0;
          dVar2 = *pdVar3;
          if (*pdVar3 <= dVar8) {
            dVar2 = dVar8;
          }
          lVar7 = lVar7 + -1;
          pdVar3 = pdVar3 + 2;
          dVar8 = dVar2;
        } while (lVar7 != 0);
      }
      goto LAB_00f02b04;
    }
    break;
  case 0x13:
    if ((param_3 != 0) && (*(int *)param_2 == 3)) {
      dVar2 = *(double *)(param_2 + 8);
      if (1 < param_3) {
        lVar7 = param_3 - 1;
        pdVar3 = (double *)(param_2 + 0x18);
        dVar8 = *(double *)(param_2 + 8);
        do {
          if (*(int *)(pdVar3 + -1) != 3) goto LAB_00f02cc0;
          dVar2 = *pdVar3;
          if (dVar8 <= *pdVar3) {
            dVar2 = dVar8;
          }
          lVar7 = lVar7 + -1;
          pdVar3 = pdVar3 + 2;
          dVar8 = dVar2;
        } while (lVar7 != 0);
      }
      goto LAB_00f02b04;
    }
    break;
  case 0x15:
    if (((param_3 != 2) || (*(int *)param_2 != 3)) || (*(int *)(param_2 + 0x10) != 3)) break;
    dVar8 = pow(*(double *)(param_2 + 8),*(double *)(param_2 + 0x18));
    goto LAB_00f02634;
  case 0x16:
    if ((param_3 == 1) && (*(int *)param_2 == 3)) {
      dVar2 = *(double *)(param_2 + 8) * 0.0174532925199433;
      goto LAB_00f02b04;
    }
    break;
  case 0x17:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = sinh(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 0x18:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = sin(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 0x19:
    if ((param_3 == 1) && (*(int *)param_2 == 3)) {
      dVar2 = SQRT(*(double *)(param_2 + 8));
      goto LAB_00f02b04;
    }
    break;
  case 0x1a:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = tanh(*(double *)(param_2 + 8));
    goto LAB_00f02634;
  case 0x1b:
    if ((param_3 != 1) || (*(int *)param_2 != 3)) break;
    dVar8 = tan(*(double *)(param_2 + 8));
LAB_00f02634:
    dVar2 = 1.48219693752374e-323;
switchD_00f02288_caseD_e:
    auVar9._8_8_ = dVar8;
    auVar9._0_8_ = dVar2;
    return auVar9;
  case 0x1c:
    if ((((param_3 == 2) && (*(int *)param_2 == 3)) && (*(int *)(param_2 + 0x10) == 3)) &&
       ((uint)(int)*(double *)(param_2 + 0x18) < 0x20)) {
      dVar2 = (double)(ulong)(uint)((int)(long)*(double *)(param_2 + 8) >>
                                   ((int)*(double *)(param_2 + 0x18) & 0x1fU));
      goto LAB_00f02b04;
    }
    break;
  case 0x1d:
    if ((param_3 == 0) || (*(int *)param_2 != 3)) break;
    uVar4 = (ulong)*(double *)(param_2 + 8);
    if (1 < param_3) {
      lVar7 = param_3 - 1;
      pdVar3 = (double *)(param_2 + 0x18);
      do {
        if (*(int *)(pdVar3 + -1) != 3) goto LAB_00f02cc0;
        lVar7 = lVar7 + -1;
        uVar4 = (ulong)((uint)uVar4 & (uint)(long)*pdVar3);
        pdVar3 = pdVar3 + 2;
      } while (lVar7 != 0);
    }
    goto LAB_00f02798;
  case 0x1e:
    if ((param_3 == 1) && (*(int *)param_2 == 3)) {
      dVar2 = (double)(ulong)~(uint)(long)*(double *)(param_2 + 8);
      goto LAB_00f02b04;
    }
    break;
  case 0x1f:
    if ((param_3 == 0) || (*(int *)param_2 != 3)) break;
    uVar4 = (ulong)*(double *)(param_2 + 8);
    if (1 < param_3) {
      lVar7 = param_3 - 1;
      pdVar3 = (double *)(param_2 + 0x18);
      do {
        if (*(int *)(pdVar3 + -1) != 3) goto LAB_00f02cc0;
        lVar7 = lVar7 + -1;
        uVar4 = (ulong)((uint)uVar4 | (uint)(long)*pdVar3);
        pdVar3 = pdVar3 + 2;
      } while (lVar7 != 0);
    }
    goto LAB_00f02798;
  case 0x20:
    if ((param_3 == 0) || (*(int *)param_2 != 3)) break;
    uVar4 = (ulong)*(double *)(param_2 + 8);
    if (1 < param_3) {
      lVar7 = param_3 - 1;
      pdVar3 = (double *)(param_2 + 0x18);
      do {
        if (*(int *)(pdVar3 + -1) != 3) goto LAB_00f02cc0;
        lVar7 = lVar7 + -1;
        uVar4 = (ulong)((uint)uVar4 ^ (uint)(long)*pdVar3);
        pdVar3 = pdVar3 + 2;
      } while (lVar7 != 0);
    }
LAB_00f02798:
    dVar2 = (double)(uVar4 & 0xffffffff);
LAB_00f02b04:
    auVar12._8_8_ = dVar2;
    auVar12._0_8_ = 3;
    return auVar12;
  case 0x21:
    if ((param_3 != 0) && (*(int *)param_2 == 3)) {
      uVar4 = (ulong)*(double *)(param_2 + 8);
      uVar5 = (uint)uVar4;
      if (1 < param_3) {
        lVar7 = param_3 - 1;
        pdVar3 = (double *)(param_2 + 0x18);
        do {
          if (*(int *)(pdVar3 + -1) != 3) goto LAB_00f02cc0;
          lVar7 = lVar7 + -1;
          uVar5 = (uint)uVar4 & (uint)(long)*pdVar3;
          uVar4 = (ulong)uVar5;
          pdVar3 = pdVar3 + 2;
        } while (lVar7 != 0);
      }
      local_28 = CONCAT71(0,uVar5 != 0);
      auVar10._8_8_ = local_28;
      auVar10._0_8_ = 2;
      return auVar10;
    }
    break;
  case 0x22:
    if (((1 < param_3) && (*(int *)param_2 == 3)) && (*(int *)(param_2 + 0x10) == 3)) {
      if (param_3 == 2) {
        iVar6 = 1;
      }
      else {
        if (*(int *)(param_2 + 0x20) != 3) break;
        iVar6 = (int)*(double *)(param_2 + 0x28);
      }
      dVar2 = 0.0;
      uVar5 = (uint)*(double *)(param_2 + 0x18);
      if (((int)uVar5 < 0) || (iVar6 < 1)) goto LAB_00f02cd8;
      dVar8 = 0.0;
      if ((int)(iVar6 + uVar5) < 0x21) {
        dVar2 = (double)(ulong)((uint)(long)*(double *)(param_2 + 8) >> (ulong)(uVar5 & 0x1f) &
                               (-2 << (ulong)(iVar6 - 1U & 0x1f) ^ 0xffffffffU));
        goto LAB_00f02b04;
      }
      goto switchD_00f02288_caseD_e;
    }
    break;
  case 0x23:
    if (((param_3 == 2) && (*(int *)param_2 == 3)) && (*(int *)(param_2 + 0x10) == 3)) {
      dVar2 = (double)(ulong)((uint)(long)*(double *)(param_2 + 8) >>
                              (-(int)*(double *)(param_2 + 0x18) & 0x1fU) |
                             (uint)(long)*(double *)(param_2 + 8) <<
                             0x20 - (-(int)*(double *)(param_2 + 0x18) & 0x1fU));
      goto LAB_00f02b04;
    }
    break;
  case 0x24:
    if ((((param_3 == 2) && (*(int *)param_2 == 3)) && (*(int *)(param_2 + 0x10) == 3)) &&
       ((uint)(int)*(double *)(param_2 + 0x18) < 0x20)) {
      dVar2 = (double)(ulong)(uint)((int)(long)*(double *)(param_2 + 8) <<
                                   (ulong)((int)*(double *)(param_2 + 0x18) & 0x1f));
      goto LAB_00f02b04;
    }
    break;
  case 0x25:
    if (((2 < param_3) && (*(int *)param_2 == 3)) &&
       ((*(int *)(param_2 + 0x10) == 3 && (*(int *)(param_2 + 0x20) == 3)))) {
      if (param_3 == 3) {
        iVar6 = 1;
      }
      else {
        if (*(int *)(param_2 + 0x30) != 3) break;
        iVar6 = (int)*(double *)(param_2 + 0x38);
      }
      dVar2 = 0.0;
      uVar5 = (uint)*(double *)(param_2 + 0x28);
      if (((int)uVar5 < 0) || (iVar6 < 1)) goto LAB_00f02cd8;
      dVar8 = dVar2;
      if ((int)(iVar6 + uVar5) < 0x21) {
        uVar1 = -2 << (ulong)(iVar6 - 1U & 0x1f);
        dVar2 = (double)(ulong)(((uint)(long)*(double *)(param_2 + 0x18) & (uVar1 ^ 0xffffffff)) <<
                                (ulong)(uVar5 & 0x1f) |
                               (uint)(long)*(double *)(param_2 + 8) &
                               (~uVar1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffff));
        goto LAB_00f02b04;
      }
      goto switchD_00f02288_caseD_e;
    }
    break;
  case 0x26:
    if (((param_3 == 2) && (*(int *)param_2 == 3)) && (*(int *)(param_2 + 0x10) == 3)) {
      dVar2 = (double)(ulong)((uint)(long)*(double *)(param_2 + 8) >>
                              ((int)*(double *)(param_2 + 0x18) & 0x1fU) |
                             (uint)(long)*(double *)(param_2 + 8) <<
                             0x20 - ((int)*(double *)(param_2 + 0x18) & 0x1fU));
      goto LAB_00f02b04;
    }
    break;
  case 0x27:
    if (((param_3 == 2) && (*(int *)param_2 == 3)) &&
       ((*(int *)(param_2 + 0x10) == 3 && ((uint)(int)*(double *)(param_2 + 0x18) < 0x20)))) {
      dVar2 = (double)(ulong)((uint)(long)*(double *)(param_2 + 8) >>
                             (ulong)((int)*(double *)(param_2 + 0x18) & 0x1f));
      goto LAB_00f02b04;
    }
    break;
  case 0x28:
    if ((param_3 == 1) && (*(uint *)param_2 < 5)) {
      dVar2 = 0.0;
      dVar8 = 0.0;
      switch(*(uint *)param_2) {
      case 1:
switchD_00f02a38_caseD_1:
        auVar11._8_8_ = &DAT_0050a199;
        auVar11._0_8_ = 0x300000004;
        return auVar11;
      case 2:
switchD_00f02a38_caseD_2:
        auVar13._8_8_ = "boolean";
        auVar13._0_8_ = 0x700000004;
        return auVar13;
      case 3:
switchD_00f02a38_caseD_3:
        auVar14._8_8_ = "number";
        auVar14._0_8_ = 0x600000004;
        return auVar14;
      case 4:
switchD_00f02a38_caseD_4:
        auVar15._8_8_ = "string";
        auVar15._0_8_ = 0x600000004;
        return auVar15;
      }
      goto switchD_00f02288_caseD_e;
    }
    break;
  case 0x29:
    if (param_3 == 2) {
      if ((*(int *)param_2 == 4) && (*(int *)(param_2 + 0x10) == 3)) {
        uVar5 = (uint)*(double *)(param_2 + 0x18);
        if ((0 < (int)uVar5) && (uVar5 <= *(uint *)(param_2 + 4))) {
          dVar2 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(param_2 + 8) + (ulong)(uVar5 - 1)));
          goto LAB_00f02b04;
        }
      }
    }
    else if (((param_3 == 1) && (*(int *)param_2 == 4)) && (*(int *)(param_2 + 4) != 0)) {
      dVar2 = (double)NEON_ucvtf((ulong)**(byte **)(param_2 + 8));
      goto LAB_00f02b04;
    }
    break;
  case 0x2b:
    if ((param_3 == 1) && (*(int *)param_2 == 4)) {
      dVar2 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 4));
      goto LAB_00f02b04;
    }
    break;
  case 0x2c:
    if ((param_3 == 1) && (*(uint *)param_2 < 5)) {
      dVar2 = 0.0;
      dVar8 = 0.0;
      switch(*(uint *)param_2) {
      case 1:
        goto switchD_00f02a38_caseD_1;
      case 2:
        goto switchD_00f02a38_caseD_2;
      case 3:
        goto switchD_00f02a38_caseD_3;
      case 4:
        goto switchD_00f02a38_caseD_4;
      }
      goto switchD_00f02288_caseD_e;
    }
    break;
  case 0x2e:
    if ((((param_3 == 3) && (*(int *)param_2 == 3)) && (*(int *)(param_2 + 0x10) == 3)) &&
       (*(int *)(param_2 + 0x20) == 3)) {
      dVar8 = *(double *)(param_2 + 0x18);
      dVar2 = *(double *)(param_2 + 0x28);
      if (dVar8 <= dVar2) {
        if (dVar8 <= *(double *)(param_2 + 8)) {
          dVar8 = *(double *)(param_2 + 8);
        }
        if (dVar8 <= dVar2) {
          dVar2 = dVar8;
        }
        goto LAB_00f02b04;
      }
    }
    break;
  case 0x2f:
    if ((param_3 == 1) && (*(int *)param_2 == 3)) {
      dVar8 = -1.0;
      if (0.0 <= *(double *)(param_2 + 8)) {
        dVar8 = 0.0;
      }
      dVar2 = 1.0;
      if (*(double *)(param_2 + 8) <= 0.0) {
        dVar2 = dVar8;
      }
      goto LAB_00f02b04;
    }
    break;
  case 0x30:
    if ((param_3 == 1) && (*(int *)param_2 == 3)) {
      dVar2 = (double)(long)*(double *)(param_2 + 8);
      goto LAB_00f02b04;
    }
  }
LAB_00f02cc0:
  return ZEXT816(0);
}


