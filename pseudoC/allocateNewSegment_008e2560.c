// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateNewSegment
// Entry Point: 008e2560
// Size: 292 bytes
// Signature: undefined __thiscall allocateNewSegment(Ring * this, Track * param_1, MultiresTexture * param_2)


/* TyreTrackGeometry::Ring::allocateNewSegment(TyreTrackGeometry::Track*, MultiresTexture*) */

void __thiscall
TyreTrackGeometry::Ring::allocateNewSegment(Ring *this,Track *param_1,MultiresTexture *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar1 = *(uint *)(this + 0x20);
  uVar2 = (ulong)uVar1;
  lVar3 = *(long *)(this + 0x10);
  lVar6 = *(long *)(lVar3 + uVar2 * 8);
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x84) == uVar1) {
      *(undefined4 *)(lVar6 + 0x84) = 0xffffffff;
    }
    if (*(uint *)(lVar6 + 0x88) == uVar1) {
      *(undefined4 *)(lVar6 + 0x88) = 0xffffffff;
    }
  }
  uVar5 = *(uint *)(this + 0x1c);
  if ((uVar1 < uVar5) && (param_2 != (MultiresTexture *)0x0)) {
    pfVar4 = *(float **)(this + 0x28);
    fVar10 = *pfVar4;
    fVar11 = pfVar4[9];
    fVar12 = pfVar4[2];
    fVar13 = pfVar4[0xb];
    fVar14 = pfVar4[0x12];
    fVar15 = pfVar4[0x14];
    fVar16 = pfVar4[0x1b];
    fVar7 = fVar11;
    if (fVar10 <= fVar11) {
      fVar7 = fVar10;
    }
    fVar17 = pfVar4[0x1d];
    fVar9 = fVar13;
    if (fVar12 <= fVar13) {
      fVar9 = fVar12;
    }
    fVar8 = fVar14;
    if (fVar7 <= fVar14) {
      fVar8 = fVar7;
    }
    fVar7 = fVar15;
    if (fVar9 <= fVar15) {
      fVar7 = fVar9;
    }
    fVar9 = fVar16;
    if (fVar8 <= fVar16) {
      fVar9 = fVar8;
    }
    fVar8 = fVar17;
    if (fVar7 <= fVar17) {
      fVar8 = fVar7;
    }
    if (fVar11 <= fVar10) {
      fVar11 = fVar10;
    }
    if (fVar13 <= fVar12) {
      fVar13 = fVar12;
    }
    if (fVar14 <= fVar11) {
      fVar14 = fVar11;
    }
    if (fVar15 <= fVar13) {
      fVar15 = fVar13;
    }
    if (fVar16 <= fVar14) {
      fVar16 = fVar14;
    }
    if (fVar17 <= fVar15) {
      fVar17 = fVar15;
    }
    MultiresTexture::redrawVirtualTextureRegion_WC(param_2,fVar9,fVar8,fVar16,fVar17);
    uVar5 = *(uint *)(this + 0x1c);
    uVar2 = (ulong)*(uint *)(this + 0x20);
    lVar3 = *(long *)(this + 0x10);
  }
  uVar1 = *(uint *)(this + 0x18);
  *(Track **)(lVar3 + uVar2 * 8) = param_1;
  *(uint *)(this + 0x20) = uVar1 - 1 & (int)uVar2 + 1U;
  if (uVar5 < uVar1) {
    *(uint *)(this + 0x1c) = uVar5 + 1;
  }
  return;
}


