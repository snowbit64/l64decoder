// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeBBox
// Entry Point: 00b653a8
// Size: 372 bytes
// Signature: undefined __thiscall computeBBox(Brep * this, uint param_1)


/* Brep::computeBBox(unsigned int) */

void __thiscall Brep::computeBBox(Brep *this,uint param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (this[0x2fb4] != (Brep)0x0) {
    lVar3 = *(long *)(this + 0x2f68);
    lVar4 = *(long *)(this + 0x2f50);
    lVar5 = *(long *)(this + 0x2ef0);
    pfVar2 = (float *)(lVar5 + (ulong)*(ushort *)
                                       (lVar4 + (ulong)*(ushort *)
                                                        (lVar3 + (ulong)(param_1 << 2 | 2) * 8) *
                                                0xc) * 0x10);
    pfVar1 = (float *)(lVar5 + (ulong)*(ushort *)
                                       (lVar4 + (ulong)*(ushort *)
                                                        (lVar3 + (ulong)(param_1 << 2 | 1) * 8) *
                                                0xc) * 0x10);
    fVar6 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar7 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar10 = pfVar1[2];
    fVar11 = pfVar2[2];
    fVar12 = fVar6;
    if (fVar7 <= fVar6) {
      fVar12 = fVar7;
    }
    fVar14 = fVar9;
    if (fVar8 <= fVar9) {
      fVar14 = fVar8;
    }
    pfVar2 = (float *)(lVar5 + (ulong)*(ushort *)
                                       (lVar4 + (ulong)*(ushort *)
                                                        (lVar3 + (ulong)(param_1 << 2 | 3) * 8) *
                                                0xc) * 0x10);
    fVar15 = fVar11;
    if (fVar10 <= fVar11) {
      fVar15 = fVar10;
    }
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    if (fVar9 <= fVar8) {
      fVar9 = fVar8;
    }
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    if (fVar11 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar10 = pfVar2[2];
    fVar13 = fVar7;
    if (fVar12 <= fVar7) {
      fVar13 = fVar12;
    }
    fVar12 = fVar8;
    if (fVar14 <= fVar8) {
      fVar12 = fVar14;
    }
    fVar14 = fVar10;
    if (fVar15 <= fVar10) {
      fVar14 = fVar15;
    }
    if (fVar7 <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar8 <= fVar9) {
      fVar8 = fVar9;
    }
    pfVar2 = (float *)(*(long *)(this + 0x2f80) + (ulong)param_1 * 0x18);
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
    *pfVar2 = ((fVar7 + 0.0005) - (fVar13 + -0.0005)) * 0.5;
    pfVar2[3] = (fVar7 + 0.0005 + fVar13 + -0.0005) * 0.5;
    pfVar2[1] = ((fVar8 + 0.0005) - (fVar12 + -0.0005)) * 0.5;
    pfVar2[4] = (fVar8 + 0.0005 + fVar12 + -0.0005) * 0.5;
    pfVar2[2] = ((fVar10 + 0.0005) - (fVar14 + -0.0005)) * 0.5;
    pfVar2[5] = (fVar10 + 0.0005 + fVar14 + -0.0005) * 0.5;
  }
  return;
}


