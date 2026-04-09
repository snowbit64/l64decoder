// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: atof
// Entry Point: 00b9cb90
// Size: 392 bytes
// Signature: undefined __cdecl atof(char * param_1, float * param_2)


/* StringUtil::atof(char const*, float&) */

void StringUtil::atof(char *param_1,float *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  byte *pbVar9;
  
  pbVar8 = (byte *)(param_1 + -1);
  do {
    pbVar9 = pbVar8;
    pbVar8 = pbVar9 + 1;
    bVar2 = *pbVar8;
  } while (bVar2 == 0x20);
  pbVar5 = pbVar8;
  if (bVar2 == 0x2d) {
    pbVar5 = pbVar9 + 2;
  }
  bVar3 = *pbVar5;
  uVar6 = (uint)bVar3;
  if (bVar3 - 0x30 < 10) {
    uVar11 = 0;
    uVar10 = (ulong)(bVar2 == 0x2d);
    do {
      uVar1 = uVar10 + 1;
      uVar11 = (uVar6 + uVar11 * 10) - 0x30;
      uVar6 = (uint)pbVar8[uVar10 + 1];
      uVar10 = uVar1;
    } while (uVar6 - 0x30 < 10);
    fVar13 = (float)(ulong)uVar11;
    pbVar5 = pbVar8 + uVar1;
  }
  else {
    fVar13 = 0.0;
    uVar6 = (uint)bVar3;
  }
  if (uVar6 == 0x2e) {
    pbVar5 = pbVar5 + 1;
    uVar6 = (uint)*pbVar5;
    fVar14 = 0.0;
    if (uVar6 - 0x30 < 10) {
      dVar15 = 0.0;
      dVar16 = 0.1;
      do {
        iVar7 = uVar6 - 0x30;
        pbVar5 = pbVar5 + 1;
        uVar6 = (uint)*pbVar5;
        dVar15 = (double)NEON_fmadd(dVar16,(double)iVar7,dVar15);
        dVar16 = dVar16 * 0.1;
      } while (uVar6 - 0x30 < 10);
      fVar14 = (float)dVar15;
    }
    fVar13 = fVar13 + fVar14;
  }
  if (uVar6 == 0x65) {
    pbVar8 = pbVar5 + 1;
    if (*pbVar8 == 0x2b) {
      bVar4 = false;
      pbVar8 = pbVar5 + 2;
    }
    else if (*pbVar8 == 0x2d) {
      pbVar8 = pbVar5 + 2;
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    fVar14 = 1.0;
    if (*pbVar8 - 0x30 < 10) {
      iVar7 = 0;
      uVar6 = (uint)*pbVar8;
      do {
        uVar11 = uVar6;
        iVar12 = iVar7;
        pbVar8 = pbVar8 + 1;
        iVar7 = uVar11 + iVar12 * 10 + -0x30;
        uVar6 = (uint)*pbVar8;
      } while (*pbVar8 - 0x30 < 10);
      fVar14 = 1.0;
      if (0 < iVar7) {
        fVar14 = 1.0;
        iVar7 = uVar11 + iVar12 * 10 + -0x30;
        do {
          fVar14 = fVar14 * 10.0;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    if (bVar4) {
      fVar13 = fVar13 / fVar14;
    }
    else {
      fVar13 = fVar13 * fVar14;
    }
  }
  fVar14 = -fVar13;
  if (bVar2 != 0x2d) {
    fVar14 = fVar13;
  }
  *param_2 = fVar14;
  return;
}


