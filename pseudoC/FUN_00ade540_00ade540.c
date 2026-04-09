// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ade540
// Entry Point: 00ade540
// Size: 2036 bytes
// Signature: undefined FUN_00ade540(void)


ulong FUN_00ade540(ulong *param_1,int *param_2,long param_3,int *param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  
  uVar8 = param_2[0x2c];
  if (uVar8 != 0) {
    param_4[0x57] = uVar8;
    pvVar5 = calloc((ulong)uVar8,0x168);
    *(void **)(param_4 + 0x58) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 3;
    }
  }
  if (*param_4 == -1) {
    iVar4 = param_2[1];
    *param_4 = *param_2;
    param_4[1] = iVar4;
  }
  else {
    iVar4 = param_2[1];
  }
  uVar8 = (((*(ushort *)(param_2 + 0x14) & 0xff00) << 0x10) >> 8 |
          (uint)*(ushort *)(param_2 + 0x14) << 0x18) >> 0x10;
  if (*(char *)((long)param_2 + 0x52) != '\0') {
    uVar8 = uVar8 | 2;
  }
  if (*(char *)((long)param_2 + 0x53) != '\0') {
    uVar8 = uVar8 | 4;
  }
  if (*(char *)(param_2 + 0x15) != '\0') {
    uVar8 = uVar8 | 8;
  }
  if (*(char *)((long)param_2 + 0x55) != '\0') {
    uVar8 = uVar8 | 0x10;
  }
  if (*(char *)((long)param_2 + 0x56) != '\0') {
    uVar8 = uVar8 | 0x20;
  }
  if (*(char *)((long)param_2 + 0x57) != '\0') {
    uVar8 = uVar8 | 0x40;
  }
  if (*(char *)(param_2 + 0x16) != '\0') {
    uVar8 = uVar8 | 0x80;
  }
  if (*(char *)((long)param_2 + 0x59) != '\0') {
    uVar8 = uVar8 | 0x200;
  }
  param_4[8] = uVar8;
  switch(iVar4) {
  case 0x13:
    uVar8 = param_4[7] | 1;
    break;
  case 0x14:
    uVar8 = param_4[7] | 2;
    break;
  case 0x15:
    param_4[7] = param_4[7] | 4;
    if ((param_1 != (ulong *)0x0) && (uVar9 = param_1[1], uVar9 != 0)) {
      uVar12 = *param_1;
      if (param_2[5] + 2 < uVar12) {
        param_4[9] = *(int *)(uVar9 + (ulong)(param_2[5] + 2) * 4);
        if (param_2[5] + 3 < uVar12) {
          param_4[10] = *(int *)(uVar9 + (ulong)(param_2[5] + 3) * 4);
          goto switchD_00ade654_caseD_1f;
        }
      }
    }
    return 0xb;
  case 0x16:
    param_4[7] = param_4[7] | 8;
    if (param_1 == (ulong *)0x0) {
      return 0xb;
    }
    if (param_1[1] == 0) {
      return 0xb;
    }
    if (*param_1 <= (ulong)(param_2[5] + 2)) {
      return 0xb;
    }
    param_4[9] = *(int *)(param_1[1] + (ulong)(param_2[5] + 2) * 4);
    goto switchD_00ade654_caseD_1f;
  case 0x17:
    param_4[7] = param_4[7] | 0x100;
    if ((param_1 == (ulong *)0x0) || (uVar9 = param_1[1], uVar9 == 0)) {
LAB_00adea4c:
      iVar4 = -1;
    }
    else {
      uVar12 = (ulong)(param_2[5] + 2);
      if (*param_1 <= uVar12) goto LAB_00adea4c;
      iVar4 = *(int *)(uVar9 + uVar12 * 4);
      uVar12 = (ulong)(param_2[5] + 3);
      if (uVar12 < *param_1) {
        param_4[0xb] = *(int *)(uVar9 + uVar12 * 4);
      }
    }
    uVar9 = param_1[7];
    if (uVar9 == 0) {
      return 0xc;
    }
    piVar6 = (int *)param_1[8];
    while (*piVar6 != iVar4) {
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 0x32;
      if (uVar9 == 0) {
        return 0xc;
      }
    }
    goto LAB_00adebbc;
  case 0x18:
    param_4[7] = param_4[7] | 0x200;
    if ((param_1 == (ulong *)0x0) || (uVar9 = param_1[1], uVar9 == 0)) {
LAB_00adea7c:
      iVar4 = -1;
    }
    else {
      uVar12 = (ulong)(param_2[5] + 2);
      if (*param_1 <= uVar12) goto LAB_00adea7c;
      iVar4 = *(int *)(uVar9 + uVar12 * 4);
      uVar12 = (ulong)(param_2[5] + 3);
      if (uVar12 < *param_1) {
        param_4[0xc] = *(int *)(uVar9 + uVar12 * 4);
      }
    }
    uVar9 = param_1[7];
    if (uVar9 != 0) {
      piVar6 = (int *)param_1[8];
      do {
        if (*piVar6 == iVar4) {
          uVar12 = FUN_00ade540(param_1,piVar6,0,param_4);
          goto LAB_00adebe4;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 0x32;
      } while (uVar9 != 0);
    }
    uVar12 = 0xc;
LAB_00adebe4:
    iVar4 = param_2[0x29];
    param_4[0xd] = param_4[0xb];
    param_4[0xe] = iVar4;
    if (param_3 != 0) {
      param_4[0xe] = *(int *)(param_3 + 0x54);
    }
    goto LAB_00adebfc;
  case 0x19:
    param_4[7] = param_4[7] | 0x10000;
    if (((param_1 == (ulong *)0x0) || (param_1[1] == 0)) || (*param_1 <= (ulong)(param_2[5] + 2))) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(param_1[1] + (ulong)(param_2[5] + 2) * 4);
    }
    uVar9 = param_1[7];
    if (uVar9 == 0) {
      return 0xc;
    }
    piVar6 = (int *)param_1[8];
    while (*piVar6 != iVar4) {
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 0x32;
      if (uVar9 == 0) {
        return 0xc;
      }
    }
    uVar9 = FUN_00ade540(param_1,piVar6,0,param_4);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    if (param_1 == (ulong *)0x0) {
      return 0xb;
    }
    uVar9 = param_1[1];
    if (uVar9 == 0) {
      return 0xb;
    }
    uVar12 = *param_1;
    uVar14 = (ulong)(param_2[5] + 3);
    if (uVar12 <= uVar14) {
      return 0xb;
    }
    uVar11 = (ulong)(param_2[5] + 4);
    param_4[0xf] = *(int *)(uVar9 + uVar14 * 4);
    if (uVar12 <= uVar11) {
      return 0xb;
    }
    param_4[0x10] = *(int *)(uVar9 + uVar11 * 4);
    if (uVar12 <= param_2[5] + 5) {
      return 0xb;
    }
    param_4[0x11] = *(int *)(uVar9 + (ulong)(param_2[5] + 5) * 4);
    if (uVar12 <= param_2[5] + 6) {
      return 0xb;
    }
    param_4[0x12] = *(int *)(uVar9 + (ulong)(param_2[5] + 6) * 4);
    if (uVar12 <= param_2[5] + 7) {
      return 0xb;
    }
    param_4[0x13] = *(int *)(uVar9 + (ulong)(param_2[5] + 7) * 4);
    if (uVar12 <= param_2[5] + 8) {
      return 0xb;
    }
    param_4[0x14] = *(int *)(uVar9 + (ulong)(param_2[5] + 8) * 4);
    goto switchD_00ade654_caseD_1f;
  case 0x1a:
    uVar8 = param_4[7] | 0x20000;
    break;
  case 0x1b:
    param_4[7] = param_4[7] | 0x40000;
    if (((param_1 == (ulong *)0x0) || (param_1[1] == 0)) || (*param_1 <= (ulong)(param_2[5] + 2))) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(param_1[1] + (ulong)(param_2[5] + 2) * 4);
    }
    uVar9 = param_1[7];
    if (uVar9 == 0) {
      return 0xc;
    }
    piVar6 = (int *)param_1[8];
    while (*piVar6 != iVar4) {
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 0x32;
      if (uVar9 == 0) {
        return 0xc;
      }
    }
    goto LAB_00adebbc;
  case 0x1c:
    param_4[7] = param_4[7] | 0x20000000;
    if ((param_1 == (ulong *)0x0) || (uVar9 = param_1[1], uVar9 == 0)) {
LAB_00adea00:
      iVar4 = -1;
LAB_00adea0c:
      bVar3 = false;
      uVar8 = 0xb;
      iVar15 = -1;
    }
    else {
      uVar12 = (ulong)(param_2[5] + 2);
      if (*param_1 <= uVar12) goto LAB_00adea00;
      iVar4 = *(int *)(uVar9 + uVar12 * 4);
      uVar12 = (ulong)(param_2[5] + 3);
      if (*param_1 <= uVar12) goto LAB_00adea0c;
      iVar15 = *(int *)(uVar9 + uVar12 * 4);
      uVar8 = 0;
      bVar3 = true;
    }
    uVar9 = param_1[7];
    param_4[0x56] = param_2[0x28];
    if (uVar9 == 0) {
      return 0xc;
    }
    piVar6 = (int *)param_1[8];
    uVar12 = uVar9;
    piVar7 = piVar6;
    while (*piVar7 != iVar15) {
      piVar7 = piVar7 + 0x32;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return 0xc;
      }
    }
    iVar16 = -1;
    uVar1 = param_4[0x15];
    if ((piVar7[1] == 0x32) || (piVar7[1] == 0x34)) {
LAB_00adeb84:
      uVar12 = (ulong)uVar8;
      piVar7 = param_4 + 0x15;
      *piVar7 = uVar1 + 1;
      piVar7[(ulong)uVar1 + 1] = iVar16;
      piVar7[(ulong)uVar1 + 0x21] = iVar15;
    }
    else if (bVar3) {
      if (param_1 == (ulong *)0x0) {
        uVar12 = 0xc;
      }
      else if (param_1[1] == 0) {
        uVar12 = 0xc;
      }
      else {
        if ((ulong)(piVar7[5] + 3) < *param_1) {
          iVar16 = *(int *)(param_1[1] + (ulong)(piVar7[5] + 3) * 4);
          uVar8 = 0;
          iVar15 = -1;
          goto LAB_00adeb84;
        }
        uVar12 = 0xc;
      }
    }
    else {
      uVar12 = 0xc;
    }
    do {
      if (*piVar6 == iVar4) goto LAB_00adebbc;
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 0x32;
    } while (uVar9 != 0);
LAB_00adebfc:
    iVar4 = (int)uVar12;
    goto joined_r0x00adebfc;
  case 0x1d:
    param_4[7] = param_4[7] | 0x20000000;
    if (((param_1 == (ulong *)0x0) || (param_1[1] == 0)) || (*param_1 <= (ulong)(param_2[5] + 2))) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(param_1[1] + (ulong)(param_2[5] + 2) * 4);
    }
    uVar9 = param_1[7];
    puVar13 = (uint *)(param_4 + 0x15);
    uVar8 = *puVar13;
    param_4[0x56] = param_2[0x28];
    puVar13[(ulong)uVar8 + 1] = 0;
    puVar13[(ulong)uVar8 + 0x21] = 0;
    *puVar13 = uVar8 + 1;
    if (uVar9 == 0) {
      return 0xc;
    }
    piVar6 = (int *)param_1[8];
    while (*piVar6 != iVar4) {
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 0x32;
      if (uVar9 == 0) {
        return 0xc;
      }
    }
    goto LAB_00adebbc;
  case 0x1e:
    uVar8 = param_2[6];
    param_4[7] = param_4[7] | 0x10080000;
    if (2 < uVar8) {
      lVar17 = 0;
      uVar8 = 2;
      do {
        if (((param_1 == (ulong *)0x0) || (param_1[1] == 0)) ||
           (*param_1 <= (ulong)(param_2[5] + uVar8))) {
          iVar4 = -1;
        }
        else {
          iVar4 = *(int *)(param_1[1] + (ulong)(param_2[5] + uVar8) * 4);
        }
        uVar9 = param_1[7];
        if (uVar9 == 0) {
          return 0xc;
        }
        piVar6 = (int *)param_1[8];
        while (*piVar6 != iVar4) {
          piVar6 = piVar6 + 0x32;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            return 0xc;
          }
        }
        lVar18 = *(long *)(param_4 + 0x58);
        lVar10 = *(long *)(param_2 + 0x30);
        iVar15 = piVar6[1];
        piVar7 = (int *)(lVar18 + lVar17 * 0x168);
        *piVar7 = iVar4;
        piVar7[1] = iVar15;
        uVar9 = FUN_00ade540(param_1,piVar6,lVar10 + lVar17 * 0x60);
        if ((int)uVar9 != 0) {
          return uVar9;
        }
        lVar2 = lVar17 * 0x168;
        uVar1 = param_2[6];
        uVar8 = uVar8 + 1;
        lVar10 = lVar17 * 8;
        lVar17 = lVar17 + 1;
        *(undefined8 *)(lVar18 + lVar2 + 0x10) = *(undefined8 *)(*(long *)(param_2 + 0x2e) + lVar10)
        ;
      } while (uVar8 < uVar1);
    }
  case 0x1f:
    goto switchD_00ade654_caseD_1f;
  case 0x20:
    if ((param_1 == (ulong *)0x0) || (uVar9 = param_1[1], uVar9 == 0)) {
LAB_00ade9d0:
      iVar4 = -1;
    }
    else {
      uVar12 = *param_1;
      uVar14 = (ulong)(param_2[5] + 2);
      if (uVar12 <= uVar14) goto LAB_00ade9d0;
      uVar11 = (ulong)(param_2[5] + 3);
      param_4[6] = *(int *)(uVar9 + uVar14 * 4);
      if (uVar12 <= uVar11) goto LAB_00ade9d0;
      iVar4 = *(int *)(uVar9 + uVar11 * 4);
    }
    uVar9 = param_1[7];
    if (uVar9 == 0) {
      return 0xc;
    }
    piVar6 = (int *)param_1[8];
    while (*piVar6 != iVar4) {
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 0x32;
      if (uVar9 == 0) {
        return 0xc;
      }
    }
LAB_00adebbc:
    uVar12 = FUN_00ade540(param_1,piVar6,0,param_4);
    iVar4 = (int)uVar12;
joined_r0x00adebfc:
    if (iVar4 != 0) {
      return uVar12;
    }
    goto switchD_00ade654_caseD_1f;
  default:
    if (iVar4 != 0x14dd) goto switchD_00ade654_caseD_1f;
    uVar8 = param_4[7] | 0x100000;
  }
  param_4[7] = uVar8;
switchD_00ade654_caseD_1f:
  if (*(long *)(param_4 + 2) == 0) {
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_2 + 0x12);
    return 0;
  }
  return 0;
}


