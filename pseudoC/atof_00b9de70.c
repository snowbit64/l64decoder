// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: atof
// Entry Point: 00b9de70
// Size: 580 bytes
// Signature: undefined __cdecl atof(char * param_1, char * param_2, double * param_3)


/* StringUtil::atof(char const*, char const*, double&) */

byte * StringUtil::atof(char *param_1,char *param_2,double *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (param_1 < param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    do {
      if (*param_1 != 0x20) {
        bVar4 = *param_1 == 0x2d;
        if (bVar4) {
          param_1 = (char *)((byte *)param_1 + 1);
        }
        goto switchD_00b9db68_caseD_c0;
      }
      param_1 = (char *)((byte *)param_1 + 1);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    bVar4 = false;
    param_1 = param_2;
  }
  else {
    bVar4 = false;
  }
switchD_00b9db68_caseD_c0:
  if ((param_2 <= param_1) || (uVar13 = (uint)(byte)*param_1, 9 < (byte)*param_1 - 0x30)) {
    *param_3 = 0.0;
    return (byte *)param_1;
  }
  pcVar8 = (char *)0x0;
  uVar11 = 0;
  do {
    uVar11 = (uVar13 + uVar11 * 10) - 0x30;
    if (param_2 + ~(ulong)param_1 == pcVar8) {
      dVar14 = (double)(ulong)uVar11;
      pbVar5 = (byte *)param_2;
      goto joined_r0x00b9dfb0;
    }
    pbVar5 = (byte *)param_1 + (long)pcVar8;
    pcVar8 = pcVar8 + 1;
    uVar13 = (uint)pbVar5[1];
  } while (uVar13 - 0x30 < 10);
  dVar14 = (double)(ulong)uVar11;
  pbVar5 = (byte *)param_1 + (long)pcVar8;
  if (uVar13 == 0x2e) {
    pbVar10 = pbVar5 + 1;
    if (pbVar10 < param_2) {
      pcVar9 = param_2 + (~(ulong)pcVar8 - (long)param_1);
      dVar16 = 0.1;
      dVar15 = 0.0;
      do {
        bVar2 = *pbVar10;
        if (9 < bVar2 - 0x30) goto LAB_00b9e050;
        pbVar10 = pbVar10 + 1;
        pcVar9 = pcVar9 + -1;
        dVar15 = (double)NEON_fmadd(dVar16,(double)(bVar2 - 0x30),dVar15);
        dVar16 = dVar16 * 0.1;
      } while (pcVar9 != (char *)0x0);
      dVar14 = dVar15 + dVar14;
      pbVar5 = pbVar5 + (long)(param_2 + (-(long)pcVar8 - (long)param_1));
    }
    else {
      dVar15 = 0.0;
LAB_00b9e050:
      dVar14 = dVar15 + dVar14;
      pbVar5 = pbVar10;
    }
  }
joined_r0x00b9dfb0:
  if ((pbVar5 < param_2) && (*pbVar5 == 0x65)) {
    pbVar10 = pbVar5 + 1;
    bVar2 = *pbVar10;
    bVar3 = param_2 <= pbVar10;
    if (!bVar3 && bVar2 == 0x2d || bVar2 == 0x2b) {
      pbVar10 = pbVar5 + 2;
    }
    if ((pbVar10 < param_2) && (*pbVar10 - 0x30 < 10)) {
      pcVar8 = param_2 + (-1 - (long)pbVar10);
      iVar7 = 0;
      uVar13 = (uint)*pbVar10;
      do {
        uVar11 = uVar13;
        iVar12 = iVar7;
        iVar7 = uVar11 + iVar12 * 10 + -0x30;
        pbVar5 = (byte *)param_2;
        if (pcVar8 == (char *)0x0) break;
        pbVar1 = pbVar10 + 1;
        pbVar5 = pbVar10 + 1;
        pcVar8 = pcVar8 + -1;
        pbVar10 = pbVar5;
        uVar13 = (uint)*pbVar1;
      } while (*pbVar1 - 0x30 < 10);
      if (iVar7 == 0) {
        dVar15 = 1.0;
      }
      else {
        dVar15 = 1.0;
        iVar7 = uVar11 + iVar12 * 10 + -0x30;
        do {
          dVar15 = dVar15 * 10.0;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (bVar3 || bVar2 != 0x2d) {
        dVar14 = dVar14 * dVar15;
      }
      else {
        dVar14 = dVar14 / dVar15;
      }
    }
  }
  dVar15 = -dVar14;
  if (!bVar4) {
    dVar15 = dVar14;
  }
  *param_3 = dVar15;
  return pbVar5;
}


