// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: atof
// Entry Point: 00b9dc34
// Size: 572 bytes
// Signature: undefined __cdecl atof(char * param_1, char * param_2, float * param_3)


/* StringUtil::atof(char const*, char const*, float&) */

byte * StringUtil::atof(char *param_1,char *param_2,float *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  
  if (param_1 < param_2) {
    lVar6 = (long)param_2 - (long)param_1;
    do {
      if (*param_1 != 0x20) {
        bVar3 = *param_1 == 0x2d;
        if (bVar3) {
          param_1 = (char *)((byte *)param_1 + 1);
        }
        goto switchD_00b9db68_caseD_14;
      }
      param_1 = (char *)((byte *)param_1 + 1);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    bVar3 = false;
    param_1 = param_2;
  }
  else {
    bVar3 = false;
  }
switchD_00b9db68_caseD_14:
  if ((param_2 <= param_1) || (uVar13 = (uint)(byte)*param_1, 9 < (byte)*param_1 - 0x30)) {
    *param_3 = 0.0;
    return (byte *)param_1;
  }
  pcVar8 = (char *)0x0;
  uVar11 = 0;
  do {
    uVar11 = (uVar13 + uVar11 * 10) - 0x30;
    if (param_2 + ~(ulong)param_1 == pcVar8) {
      fVar14 = (float)(ulong)uVar11;
      pbVar5 = (byte *)param_2;
      goto joined_r0x00b9dd68;
    }
    pbVar5 = (byte *)param_1 + (long)pcVar8;
    pcVar8 = pcVar8 + 1;
    uVar13 = (uint)pbVar5[1];
  } while (uVar13 - 0x30 < 10);
  fVar14 = (float)(ulong)uVar11;
  pbVar5 = (byte *)param_1 + (long)pcVar8;
  if (uVar13 == 0x2e) {
    pbVar10 = pbVar5 + 1;
    if (pbVar10 < param_2) {
      pcVar9 = param_2 + (~(ulong)pcVar8 - (long)param_1);
      dVar17 = 0.1;
      dVar16 = 0.0;
      do {
        bVar1 = *pbVar10;
        pbVar4 = pbVar10;
        if (9 < bVar1 - 0x30) break;
        pbVar10 = pbVar10 + 1;
        pcVar9 = pcVar9 + -1;
        dVar16 = (double)NEON_fmadd(dVar17,(double)(bVar1 - 0x30),dVar16);
        dVar17 = dVar17 * 0.1;
        pbVar4 = pbVar5 + (long)(param_2 + (-(long)pcVar8 - (long)param_1));
      } while (pcVar9 != (char *)0x0);
    }
    else {
      dVar16 = 0.0;
      pbVar4 = pbVar10;
    }
    fVar14 = fVar14 + (float)dVar16;
    pbVar5 = pbVar4;
  }
joined_r0x00b9dd68:
  if ((pbVar5 < param_2) && (*pbVar5 == 0x65)) {
    pbVar10 = pbVar5 + 1;
    bVar1 = *pbVar10;
    bVar2 = param_2 <= pbVar10;
    if (!bVar2 && bVar1 == 0x2d || bVar1 == 0x2b) {
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
        pbVar4 = pbVar10 + 1;
        pbVar5 = pbVar10 + 1;
        pcVar8 = pcVar8 + -1;
        pbVar10 = pbVar5;
        uVar13 = (uint)*pbVar4;
      } while (*pbVar4 - 0x30 < 10);
      if (iVar7 == 0) {
        fVar15 = 1.0;
      }
      else {
        fVar15 = 1.0;
        iVar7 = uVar11 + iVar12 * 10 + -0x30;
        do {
          fVar15 = fVar15 * 10.0;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (bVar2 || bVar1 != 0x2d) {
        fVar14 = fVar14 * fVar15;
      }
      else {
        fVar14 = fVar14 / fVar15;
      }
    }
  }
  fVar15 = -fVar14;
  if (!bVar3) {
    fVar15 = fVar14;
  }
  *param_3 = fVar15;
  return pbVar5;
}


