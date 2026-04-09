// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeBounds
// Entry Point: 00727f08
// Size: 188 bytes
// Signature: undefined computeBounds(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Obstacle::computeBounds() const */

float Obstacle::computeBounds(void)

{
  float *pfVar1;
  float **in_x0;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float in_s1;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar1 = in_x0[1];
  if (*in_x0 == pfVar1) {
    fVar3 = INFINITY;
  }
  else {
    fVar2 = -INFINITY;
    fVar4 = INFINITY;
    pfVar5 = *in_x0;
    fVar3 = fVar4;
    fVar10 = fVar2;
    do {
      fVar7 = (float)OrientedBox::computeWorldExtent();
      pfVar6 = pfVar5 + 7;
      fVar8 = *pfVar5 - fVar7;
      fVar9 = pfVar5[1] - in_s1;
      fVar7 = *pfVar5 + fVar7;
      in_s1 = pfVar5[1] + in_s1;
      if (fVar3 <= fVar8) {
        fVar8 = fVar3;
      }
      fVar3 = fVar8;
      if (fVar4 <= fVar9) {
        fVar9 = fVar4;
      }
      fVar4 = fVar9;
      if (fVar7 <= fVar10) {
        fVar7 = fVar10;
      }
      fVar10 = fVar7;
      fVar9 = in_s1;
      if (in_s1 <= fVar2) {
        fVar9 = fVar2;
      }
      fVar2 = fVar9;
      pfVar5 = pfVar6;
    } while (pfVar6 != pfVar1);
  }
  return fVar3;
}


