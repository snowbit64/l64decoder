// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eraseSegmentsInsideParallelogram
// Entry Point: 008e1be0
// Size: 348 bytes
// Signature: undefined __thiscall eraseSegmentsInsideParallelogram(TyreTrackGeometry * this, Parallelogram * param_1)


/* TyreTrackGeometry::eraseSegmentsInsideParallelogram(TyreTrackGeometry::Parallelogram const&) */

void __thiscall
TyreTrackGeometry::eraseSegmentsInsideParallelogram(TyreTrackGeometry *this,Parallelogram *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  Vertex *pVVar4;
  ulong uVar5;
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
  float fVar16;
  
  if (*(int *)(this + 0x8c) != 0) {
    uVar5 = 0;
    bVar1 = false;
    pVVar4 = *(Vertex **)(this + 0x98);
    do {
      uVar2 = clipSegment(this,pVVar4,param_1);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(*(long *)(this + 0x80) + uVar5 * 8);
        if (lVar3 == 0) {
          bVar1 = true;
        }
        else {
          if (uVar5 == *(uint *)(lVar3 + 0x84)) {
            *(undefined4 *)(lVar3 + 0x84) = 0xffffffff;
          }
          bVar1 = true;
          if (uVar5 == *(uint *)(lVar3 + 0x88)) {
            *(undefined4 *)(lVar3 + 0x88) = 0xffffffff;
          }
        }
      }
      pVVar4 = pVVar4 + 0x90;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(this + 0x8c));
    if (bVar1) {
      this[0x70] = (TyreTrackGeometry)0x1;
      if (*(MultiresTexture **)(this + 0xa8) != (MultiresTexture *)0x0) {
        fVar9 = *(float *)(param_1 + 4);
        fVar8 = *(float *)param_1;
        fVar10 = fVar8 + *(float *)(param_1 + 8);
        fVar14 = fVar9 + *(float *)(param_1 + 0xc);
        fVar12 = fVar8 + *(float *)(param_1 + 0x14);
        fVar13 = fVar10 + *(float *)(param_1 + 0x14);
        fVar15 = fVar9 + *(float *)(param_1 + 0x18);
        fVar11 = fVar14 + *(float *)(param_1 + 0x18);
        fVar6 = fVar13;
        if (fVar12 <= fVar13) {
          fVar6 = fVar12;
        }
        fVar7 = fVar10;
        if (fVar8 <= fVar10) {
          fVar7 = fVar8;
        }
        if (fVar7 <= fVar6) {
          fVar6 = fVar7;
        }
        fVar7 = fVar11;
        if (fVar15 <= fVar11) {
          fVar7 = fVar15;
        }
        fVar16 = fVar14;
        if (fVar9 <= fVar14) {
          fVar16 = fVar9;
        }
        if (fVar16 <= fVar7) {
          fVar7 = fVar16;
        }
        if (fVar10 <= fVar8) {
          fVar10 = fVar8;
        }
        if (fVar13 <= fVar12) {
          fVar13 = fVar12;
        }
        if (fVar13 <= fVar10) {
          fVar13 = fVar10;
        }
        if (fVar14 <= fVar9) {
          fVar14 = fVar9;
        }
        if (fVar11 <= fVar15) {
          fVar11 = fVar15;
        }
        if (fVar11 <= fVar14) {
          fVar11 = fVar14;
        }
        MultiresTexture::redrawVirtualTextureRegion_WC
                  (*(MultiresTexture **)(this + 0xa8),fVar6,fVar7,fVar13,fVar11);
        return;
      }
    }
  }
  return;
}


