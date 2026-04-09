// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatedCVs
// Entry Point: 00b568ec
// Size: 288 bytes
// Signature: undefined updatedCVs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LinearSpline::updatedCVs() */

void LinearSpline::updatedCVs(void)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long in_x0;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  if (*(void **)(in_x0 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x10));
  }
  uVar3 = *(uint *)(in_x0 + 0x28);
  pfVar6 = (float *)operator_new__((ulong)uVar3 << 2);
  pfVar7 = *(float **)(in_x0 + 0x18);
  *(float **)(in_x0 + 0x10) = pfVar6;
  *pfVar6 = 0.0;
  if (1 < uVar3) {
    fVar10 = 0.0;
    uVar8 = 0;
    pfVar9 = pfVar6;
    do {
      pfVar9 = pfVar9 + 1;
      pfVar1 = pfVar7 + (uVar8 & 0xffffffff);
      uVar8 = uVar8 + 3;
      pfVar2 = pfVar7 + (uVar8 & 0xffffffff);
      uVar11 = NEON_fmadd(*pfVar1 - *pfVar2,*pfVar1 - *pfVar2,
                          (pfVar1[1] - pfVar2[1]) * (pfVar1[1] - pfVar2[1]));
      fVar12 = (float)NEON_fmadd(pfVar1[2] - pfVar2[2],pfVar1[2] - pfVar2[2],uVar11);
      fVar10 = fVar10 + SQRT(fVar12);
      *pfVar9 = fVar10;
    } while ((ulong)uVar3 * 3 - 3 != uVar8);
  }
  uVar5 = uVar3 * 3;
  iVar4 = *(int *)(in_x0 + 8);
  pfVar7[uVar5] = *pfVar7;
  pfVar7[uVar5 + 1] = pfVar7[1];
  uVar3 = uVar3 - 1;
  pfVar7[uVar5 + 2] = pfVar7[2];
  if (iVar4 == 1) {
    pfVar9 = pfVar7 + uVar3 * 3;
    uVar11 = NEON_fmadd(*pfVar7 - *pfVar9,*pfVar7 - *pfVar9,
                        (pfVar7[1] - pfVar9[1]) * (pfVar7[1] - pfVar9[1]));
    fVar10 = (float)NEON_fmadd(pfVar7[2] - pfVar9[2],pfVar7[2] - pfVar9[2],uVar11);
    fVar10 = pfVar6[uVar3] + SQRT(fVar10);
  }
  else {
    fVar10 = pfVar6[uVar3];
  }
  *(float *)(in_x0 + 0x2c) = fVar10;
  return;
}


