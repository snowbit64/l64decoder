// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_lsp_to_curve
// Entry Point: 00e11c44
// Size: 700 bytes
// Signature: undefined vorbis_lsp_to_curve(void)


void vorbis_lsp_to_curve(float param_1,float param_2,long param_3,long param_4,int param_5,
                        int param_6,undefined8 *param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  
  if (0 < (int)param_8) {
    uVar7 = (ulong)param_8;
    if (param_8 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar7 & 0xfffffffc;
      puVar3 = param_7;
      uVar10 = uVar9;
      do {
        uVar18 = puVar3[1];
        uVar12 = *puVar3;
        dVar16 = cos((double)(float)((ulong)uVar12 >> 0x20));
        dVar13 = cos((double)(float)uVar12);
        dVar14 = cos((double)(float)((ulong)uVar18 >> 0x20));
        dVar15 = cos((double)(float)uVar18);
        uVar10 = uVar10 - 4;
        puVar3[1] = CONCAT44((float)(dVar14 + dVar14),(float)(dVar15 + dVar15));
        *puVar3 = CONCAT44((float)(dVar16 + dVar16),(float)(dVar13 + dVar13));
        puVar3 = puVar3 + 2;
      } while (uVar10 != 0);
      if (uVar9 == uVar7) goto LAB_00e11d60;
    }
    lVar8 = uVar7 - uVar9;
    pfVar4 = (float *)((long)param_7 + uVar9 * 4);
    do {
      dVar16 = cos((double)*pfVar4);
      lVar8 = lVar8 + -1;
      *pfVar4 = (float)(dVar16 + dVar16);
      pfVar4 = pfVar4 + 1;
    } while (lVar8 != 0);
  }
LAB_00e11d60:
  if (0 < param_5) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(param_4 + (long)iVar6 * 4);
      dVar16 = cos((double)((3.141593 / (float)param_6) * (float)iVar1));
      fVar19 = (float)(dVar16 + dVar16);
      if ((int)param_8 < 2) {
        fVar11 = 0.5;
        fVar17 = 0.5;
        if (param_8 != 1) goto LAB_00e11e18;
LAB_00e11e3c:
        fVar11 = (fVar19 - *(float *)((long)param_7 + (long)(int)(param_8 - 1) * 4)) * fVar11;
        fVar20 = (float)NEON_fmsub(fVar19,fVar19,0x40800000);
        fVar11 = fVar11 * fVar11;
      }
      else {
        fVar11 = 0.5;
        fVar17 = 0.5;
        lVar8 = 1;
        puVar3 = param_7;
        do {
          lVar8 = lVar8 + 2;
          fVar11 = fVar11 * (fVar19 - (float)*puVar3);
          fVar17 = fVar17 * (fVar19 - (float)((ulong)*puVar3 >> 0x20));
          puVar3 = puVar3 + 1;
        } while (lVar8 < (int)param_8);
        if ((param_8 - 2 & 0xfffffffe) + 3 == param_8) goto LAB_00e11e3c;
LAB_00e11e18:
        fVar20 = 2.0 - fVar19;
        fVar11 = (fVar19 + 2.0) * fVar11 * fVar11;
      }
      lVar8 = (long)iVar6;
      dVar16 = exp(((double)param_1 / SQRT((double)(fVar11 + fVar20 * fVar17 * fVar17)) -
                   (double)param_2) * 0.1151292473077774);
      iVar6 = iVar6 + 1;
      iVar2 = *(int *)(param_4 + (long)iVar6 * 4);
      *(float *)(param_3 + lVar8 * 4) = *(float *)(param_3 + lVar8 * 4) * (float)dVar16;
      if (iVar2 == iVar1) {
        pfVar4 = (float *)(param_3 + (long)iVar6 * 4);
        piVar5 = (int *)(param_4 + 4 + (long)iVar6 * 4);
        do {
          iVar6 = iVar6 + 1;
          iVar2 = *piVar5;
          *pfVar4 = *pfVar4 * (float)dVar16;
          pfVar4 = pfVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar2 == iVar1);
      }
    } while (iVar6 < param_5);
  }
  return;
}


