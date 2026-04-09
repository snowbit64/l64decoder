// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bbox
// Entry Point: 00b63cac
// Size: 192 bytes
// Signature: undefined __thiscall bbox(Brep * this, Vector3 * param_1, Vector3 * param_2)


/* Brep::bbox(Vector3&, Vector3&) const */

void __thiscall Brep::bbox(Brep *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = *(long *)(this + 0x2ef8) - *(long *)(this + 0x2ef0);
  if ((int)(uVar2 >> 4) == 0) {
    fVar1 = 3.402823e+38;
    fVar14 = -3.402823e+38;
    fVar12 = fVar14;
    fVar13 = fVar14;
    fVar9 = fVar1;
    fVar11 = fVar1;
  }
  else {
    uVar2 = uVar2 >> 4 & 0xffffffff;
    pfVar3 = (float *)(*(long *)(this + 0x2ef0) + 4);
    fVar4 = -3.402823e+38;
    fVar5 = 3.402823e+38;
    fVar6 = fVar4;
    fVar7 = fVar4;
    fVar8 = fVar5;
    fVar10 = fVar5;
    do {
      fVar12 = pfVar3[-1];
      fVar13 = *pfVar3;
      fVar14 = pfVar3[1];
      pfVar3 = pfVar3 + 4;
      fVar1 = fVar12;
      if (fVar5 <= fVar12) {
        fVar1 = fVar5;
      }
      fVar11 = fVar13;
      if (fVar10 <= fVar13) {
        fVar11 = fVar10;
      }
      fVar9 = fVar14;
      if (fVar8 <= fVar14) {
        fVar9 = fVar8;
      }
      if (fVar12 <= fVar6) {
        fVar12 = fVar6;
      }
      if (fVar13 <= fVar7) {
        fVar13 = fVar7;
      }
      if (fVar14 <= fVar4) {
        fVar14 = fVar4;
      }
      uVar2 = uVar2 - 1;
      fVar4 = fVar14;
      fVar6 = fVar12;
      fVar5 = fVar1;
      fVar7 = fVar13;
      fVar8 = fVar9;
      fVar10 = fVar11;
    } while (uVar2 != 0);
  }
  *(float *)param_1 = fVar1;
  *(float *)(param_1 + 4) = fVar11;
  *(float *)(param_1 + 8) = fVar9;
  *(float *)param_2 = fVar12;
  *(float *)(param_2 + 4) = fVar13;
  *(float *)(param_2 + 8) = fVar14;
  return;
}


