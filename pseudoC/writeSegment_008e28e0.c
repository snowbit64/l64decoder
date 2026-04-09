// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSegment
// Entry Point: 008e28e0
// Size: 1224 bytes
// Signature: undefined __thiscall writeSegment(TyreTrackGeometry * this, Vertex * param_1, Vertex * param_2, TrackSegment * param_3, float param_4, int param_5, Vector3 * param_6, float param_7, int param_8)


/* TyreTrackGeometry::writeSegment(TyreTrackGeometry::Vertex*, TyreTrackGeometry::Vertex*,
   TyreTrackGeometry::TrackSegment&, float, int, Vector3 const&, float, int) */

void __thiscall
TyreTrackGeometry::writeSegment
          (TyreTrackGeometry *this,Vertex *param_1,Vertex *param_2,TrackSegment *param_3,
          float param_4,int param_5,Vector3 *param_6,float param_7,int param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(param_3 + 0x40);
  fVar2 = (float)NEON_fmadd(*(float *)(param_3 + 0x48),*(float *)param_6,
                            *(float *)(param_6 + 8) * -fVar4);
  fVar3 = (float)NEON_fmadd(*(float *)(param_3 + 0x44),*(float *)(param_6 + 8),
                            *(float *)(param_6 + 4) * -*(float *)(param_3 + 0x48));
  fVar4 = (float)NEON_fmadd(fVar4,*(float *)(param_6 + 4),
                            *(float *)param_6 * -*(float *)(param_3 + 0x44));
  uVar6 = NEON_fmadd(fVar3,fVar3,fVar2 * fVar2);
  fVar11 = (float)NEON_fmadd(fVar4,fVar4,uVar6);
  fVar7 = 1.0;
  if (1e-06 < fVar11) {
    fVar7 = 1.0 / SQRT(fVar11);
  }
  fVar3 = fVar3 * fVar7;
  fVar2 = fVar2 * fVar7;
  fVar4 = fVar4 * fVar7;
  if (*param_3 == (TrackSegment)0x0) {
    fVar5 = (float)NEON_fmadd(*(float *)(param_3 + 0x18),*(float *)(param_3 + 100),
                              *(float *)(param_3 + 0x6c) * -*(float *)(param_3 + 0x10));
    fVar11 = (float)NEON_fmadd(*(float *)(param_3 + 0x14),*(float *)(param_3 + 0x6c),
                               *(float *)(param_3 + 0x68) * -*(float *)(param_3 + 0x18));
    fVar7 = (float)NEON_fmadd(*(float *)(param_3 + 0x10),*(float *)(param_3 + 0x68),
                              *(float *)(param_3 + 100) * -*(float *)(param_3 + 0x14));
    uVar6 = NEON_fmadd(fVar11,fVar11,fVar5 * fVar5);
    fVar8 = (float)NEON_fmadd(fVar7,fVar7,uVar6);
    fVar12 = 1.0;
    if (1e-06 < fVar8) {
      fVar12 = 1.0 / SQRT(fVar8);
    }
    fVar11 = fVar11 * fVar12;
    fVar5 = fVar5 * fVar12;
    fVar7 = fVar7 * fVar12;
  }
  else {
    param_2 = (Vertex *)0x0;
    fVar7 = fVar4;
    fVar11 = fVar3;
    fVar5 = fVar2;
  }
  uVar6 = NEON_fmadd(fVar3,fVar11,fVar2 * fVar5);
  fVar8 = (float)NEON_fmadd(fVar4,fVar7,uVar6);
  if (fVar8 < 0.0) {
    fVar8 = param_4 * 0.5;
    local_98 = *(float *)(param_3 + 4) - fVar8 * fVar11;
    fStack_94 = *(float *)(param_3 + 8) - fVar8 * fVar5;
    local_90 = *(float *)(param_3 + 0xc) - fVar8 * fVar7;
    local_a8 = fVar8 * fVar11 + *(float *)(param_3 + 4);
    fStack_a4 = fVar8 * fVar5 + *(float *)(param_3 + 8);
    local_a0 = fVar8 * fVar7 + *(float *)(param_3 + 0xc);
    if (param_2 != (Vertex *)0x0) {
      writeVertexPair(param_2 + 0x6c,param_2 + 0x48,(Vector3 *)&local_98,(Vector3 *)&local_a8,
                      *(float *)(param_3 + 0x74),param_8,param_5,(Vector3 *)(param_3 + 0x10),
                      (Vector3 *)(param_3 + 0x1c),*(float *)(param_3 + 0x28),
                      *(float *)(param_3 + 0x2c),(bool)param_3[0x30],(bool)param_3[0x61]);
    }
    param_2 = (Vertex *)0x0;
    *param_3 = (TrackSegment)0x1;
    fVar7 = fVar4;
    fVar11 = fVar3;
    fVar5 = fVar2;
  }
  fVar5 = fVar2 + fVar5;
  fVar11 = fVar3 + fVar11;
  fVar7 = fVar4 + fVar7;
  uVar6 = NEON_fmadd(fVar11,fVar11,fVar5 * fVar5);
  fVar8 = 1.0;
  fVar12 = (float)NEON_fmadd(fVar7,fVar7,uVar6);
  if (1e-06 < fVar12) {
    fVar8 = 1.0 / SQRT(fVar12);
  }
  fVar12 = (float)NEON_fmadd(fVar7 * fVar8,*(float *)param_6,
                             *(float *)(param_6 + 8) * -(fVar11 * fVar8));
  uVar9 = NEON_fmadd(fVar5 * fVar8,*(float *)(param_6 + 8),
                     *(float *)(param_6 + 4) * -(fVar7 * fVar8));
  uVar6 = NEON_fmadd(fVar11 * fVar8,*(float *)(param_6 + 4),*(float *)param_6 * -(fVar5 * fVar8));
  uVar9 = NEON_fmadd(uVar9,uVar9,fVar12 * fVar12);
  fVar12 = (float)NEON_fmadd(uVar6,uVar6,uVar9);
  fVar10 = param_4 * 0.5;
  local_c0 = 1.0;
  if (SQRT(fVar12) != 0.0) {
    local_c0 = SQRT(fVar12);
  }
  local_c0 = fVar10 / local_c0;
  local_a8 = *(float *)(param_3 + 0x34) - fVar10 * fVar3;
  fStack_a4 = *(float *)(param_3 + 0x38) - fVar10 * fVar2;
  local_98 = fVar10 * fVar3 + *(float *)(param_3 + 0x34);
  fStack_94 = fVar10 * fVar2 + *(float *)(param_3 + 0x38);
  local_a0 = *(float *)(param_3 + 0x3c) - fVar10 * fVar4;
  local_90 = fVar10 * fVar4 + *(float *)(param_3 + 0x3c);
  local_c8 = fVar11 * fVar8 * local_c0;
  fStack_c4 = fVar5 * fVar8 * local_c0;
  local_c0 = fVar7 * fVar8 * local_c0;
  local_b8 = *(float *)(param_3 + 4) - local_c8;
  fStack_b4 = *(float *)(param_3 + 8) - fStack_c4;
  local_b0 = *(float *)(param_3 + 0xc) - local_c0;
  local_c8 = local_c8 + *(float *)(param_3 + 4);
  fStack_c4 = fStack_c4 + *(float *)(param_3 + 8);
  local_c0 = local_c0 + *(float *)(param_3 + 0xc);
  if (param_2 != (Vertex *)0x0) {
    writeVertexPair(param_2 + 0x6c,param_2 + 0x48,(Vector3 *)&local_b8,(Vector3 *)&local_c8,
                    *(float *)(param_3 + 0x74),param_8,param_5,(Vector3 *)(param_3 + 0x10),
                    (Vector3 *)(param_3 + 0x1c),*(float *)(param_3 + 0x28),
                    *(float *)(param_3 + 0x2c),(bool)param_3[0x30],(bool)param_3[0x61]);
  }
  writeVertexPair(param_1,param_1 + 0x24,(Vector3 *)&local_b8,(Vector3 *)&local_c8,
                  *(float *)(param_3 + 0x70),param_8,param_5,(Vector3 *)(param_3 + 0x10),
                  (Vector3 *)(param_3 + 0x1c),*(float *)(param_3 + 0x28),*(float *)(param_3 + 0x2c),
                  (bool)param_3[0x30],
                  param_3[0x30] != (TrackSegment)0x0 && param_3[0x60] != (TrackSegment)0x0);
  writeVertexPair(param_1 + 0x6c,param_1 + 0x48,(Vector3 *)&local_a8,(Vector3 *)&local_98,
                  param_7 / param_4 + *(float *)(param_3 + 0x70),param_8,param_5,
                  (Vector3 *)(param_3 + 0x40),(Vector3 *)(param_3 + 0x4c),*(float *)(param_3 + 0x58)
                  ,*(float *)(param_3 + 0x5c),(bool)param_3[0x60],
                  param_3[0x60] != (TrackSegment)0x0 && param_3[0x30] != (TrackSegment)0x0);
  if (*(MultiresTexture **)(this + 0xa8) != (MultiresTexture *)0x0) {
    fVar2 = local_c8;
    if (local_b8 <= local_c8) {
      fVar2 = local_b8;
    }
    fVar3 = local_c0;
    if (local_b0 <= local_c0) {
      fVar3 = local_b0;
    }
    fVar4 = local_98;
    if (fVar2 <= local_98) {
      fVar4 = fVar2;
    }
    fVar2 = local_90;
    if (fVar3 <= local_90) {
      fVar2 = fVar3;
    }
    fVar3 = local_a8;
    if (fVar4 <= local_a8) {
      fVar3 = fVar4;
    }
    fVar4 = local_a0;
    if (fVar2 <= local_a0) {
      fVar4 = fVar2;
    }
    fVar2 = local_c8;
    if (local_c8 <= local_b8) {
      fVar2 = local_b8;
    }
    fVar7 = local_c0;
    if (local_c0 <= local_b0) {
      fVar7 = local_b0;
    }
    fVar11 = local_98;
    if (local_98 <= fVar2) {
      fVar11 = fVar2;
    }
    fVar2 = local_90;
    if (local_90 <= fVar7) {
      fVar2 = fVar7;
    }
    fVar7 = local_a8;
    if (local_a8 <= fVar11) {
      fVar7 = fVar11;
    }
    fVar11 = local_a0;
    if (local_a0 <= fVar2) {
      fVar11 = fVar2;
    }
    MultiresTexture::redrawVirtualTextureRegion_WC
              (*(MultiresTexture **)(this + 0xa8),fVar3,fVar4,fVar7,fVar11);
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


