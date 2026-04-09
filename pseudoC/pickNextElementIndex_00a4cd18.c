// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pickNextElementIndex
// Entry Point: 00a4cd18
// Size: 328 bytes
// Signature: undefined pickNextElementIndex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::pickNextElementIndex() const */

ulong AudioSourceSample::pickNextElementIndex(void)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  long in_x0;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((*(byte *)(in_x0 + 0x78) >> 2 & 1) == 0) {
    uVar5 = *(uint *)(in_x0 + 0xb0);
    uVar1 = *(int *)(in_x0 + 0xac) + 1;
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar1 / uVar5;
    }
    return (ulong)(uVar1 - uVar6 * uVar5);
  }
  uVar1 = *(uint *)(in_x0 + 0xb0);
  uVar12 = (ulong)uVar1;
  if (uVar1 == 0) {
    fVar15 = 0.0;
  }
  else {
    if (uVar1 == 1) {
      fVar15 = 0.0;
      uVar7 = 0;
    }
    else {
      uVar7 = uVar12 & 0xfffffffe;
      fVar15 = 0.0;
      pfVar9 = (float *)(in_x0 + 0xec);
      uVar11 = uVar7;
      pfVar10 = *(float **)(in_x0 + 0xf0);
      do {
        pfVar4 = pfVar9 + -0xe;
        if (1 < uVar1) {
          pfVar4 = pfVar10;
        }
        pfVar2 = pfVar10 + 0xe;
        pfVar10 = pfVar10 + 0x1c;
        pfVar3 = pfVar9;
        if (1 < uVar1) {
          pfVar3 = pfVar2;
        }
        pfVar9 = pfVar9 + 0x1c;
        uVar11 = uVar11 - 2;
        fVar15 = fVar15 + *pfVar4 + *pfVar3;
      } while (uVar11 != 0);
      if (uVar7 == uVar12) goto LAB_00a4cdf8;
    }
    lVar8 = uVar12 - uVar7;
    pfVar10 = *(float **)(in_x0 + 0xf0) + uVar7 * 0xe;
    pfVar9 = (float *)(uVar7 * 0x38 + in_x0 + 0xb4);
    do {
      pfVar4 = pfVar9;
      if (1 < uVar1) {
        pfVar4 = pfVar10;
      }
      pfVar9 = pfVar9 + 0xe;
      pfVar10 = pfVar10 + 0xe;
      lVar8 = lVar8 + -1;
      fVar15 = fVar15 + *pfVar4;
    } while (lVar8 != 0);
  }
LAB_00a4cdf8:
  fVar13 = (float)MathUtil::getRandom();
  uVar1 = uVar1 - 1;
  if (uVar1 != 0) {
    fVar14 = 0.0;
    uVar12 = 0;
    pfVar10 = *(float **)(in_x0 + 0xf0);
    pfVar9 = (float *)(in_x0 + 0xb4);
    do {
      pfVar4 = pfVar9;
      if (1 < *(uint *)(in_x0 + 0xb0)) {
        pfVar4 = pfVar10;
      }
      fVar14 = fVar14 + *pfVar4;
      if (fVar15 * fVar13 <= fVar14) {
        return uVar12 & 0xffffffff;
      }
      uVar12 = uVar12 + 1;
      pfVar9 = pfVar9 + 0xe;
      pfVar10 = pfVar10 + 0xe;
    } while (uVar1 != uVar12);
  }
  return (ulong)uVar1;
}


