// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeBoundingRectangle
// Entry Point: 0072384c
// Size: 76 bytes
// Signature: undefined __cdecl computeBoundingRectangle(uint param_1, BoundingBox * param_2)


/* computeBoundingRectangle(unsigned int, BoundingBox const*) */

void computeBoundingRectangle(uint param_1,BoundingBox *param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0xc);
  iVar1 = param_1 - 1;
  if (iVar1 != 0) {
    pfVar2 = (float *)(param_2 + 0x1c);
    do {
      if (pfVar2[-3] < fVar3) {
        fVar3 = pfVar2[-3];
      }
      if (pfVar2[-2] < fVar4) {
        fVar4 = pfVar2[-2];
      }
      if (fVar5 < pfVar2[-1]) {
        fVar5 = pfVar2[-1];
      }
      if (fVar6 < *pfVar2) {
        fVar6 = *pfVar2;
      }
      iVar1 = iVar1 + -1;
      pfVar2 = pfVar2 + 4;
    } while (iVar1 != 0);
  }
  return;
}


