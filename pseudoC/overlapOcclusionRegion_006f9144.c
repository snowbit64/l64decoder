// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapOcclusionRegion
// Entry Point: 006f9144
// Size: 288 bytes
// Signature: undefined __thiscall overlapOcclusionRegion(AdsBrockerManager * this, float * param_1)


/* AdsBrockerManager::overlapOcclusionRegion(float const*) */

bool __thiscall AdsBrockerManager::overlapOcclusionRegion(AdsBrockerManager *this,float *param_1)

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar11 = param_1[2];
  fVar13 = param_1[3];
  uVar2 = 0;
  pfVar3 = (float *)(this + 0xc4);
  bVar1 = true;
  fVar9 = (float)NEON_fminnm(fVar7,0x7f7fffff);
  if (fVar7 <= -3.402823e+38) {
    fVar7 = -3.402823e+38;
  }
  fVar6 = (float)NEON_fminnm(fVar8,0x7f7fffff);
  fVar10 = fVar11;
  if (fVar9 <= fVar11) {
    fVar10 = fVar9;
  }
  if (fVar11 <= fVar7) {
    fVar11 = fVar7;
  }
  fVar9 = param_1[4];
  fVar12 = param_1[5];
  fVar7 = fVar13;
  if (fVar6 <= fVar13) {
    fVar7 = fVar6;
  }
  if (fVar13 <= fVar8) {
    fVar13 = fVar8;
  }
  fVar8 = param_1[6];
  fVar14 = param_1[7];
  fVar6 = fVar9;
  if (fVar10 <= fVar9) {
    fVar6 = fVar10;
  }
  if (fVar9 <= fVar11) {
    fVar9 = fVar11;
  }
  fVar11 = fVar12;
  if (fVar7 <= fVar12) {
    fVar11 = fVar7;
  }
  if (fVar12 <= fVar13) {
    fVar12 = fVar13;
  }
  fVar13 = fVar8;
  if (fVar6 <= fVar8) {
    fVar13 = fVar6;
  }
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  fVar7 = fVar14;
  if (fVar11 <= fVar14) {
    fVar7 = fVar11;
  }
  if (fVar14 <= fVar12) {
    fVar14 = fVar12;
  }
  do {
    uVar4 = (ulong)*(uint *)(this + uVar2 * 4 + 0x18);
    if (*(uint *)(this + uVar2 * 4 + 0x18) != 0) {
      pfVar5 = pfVar3;
      do {
        if ((((this[uVar2 + 0x98] != (AdsBrockerManager)0x0) && (fVar13 < pfVar5[-2])) &&
            (pfVar5[-3] < fVar8)) && ((fVar7 < *pfVar5 && (pfVar5[-1] < fVar14)))) {
          return bVar1;
        }
        uVar4 = uVar4 - 1;
        pfVar5 = pfVar5 + 4;
      } while (uVar4 != 0);
    }
    uVar4 = uVar2 + 1;
    bVar1 = uVar2 < 0x1f;
    pfVar3 = pfVar3 + 0x10;
    uVar2 = uVar4;
    if (uVar4 == 0x20) {
      return bVar1;
    }
  } while( true );
}


