// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFillPlane
// Entry Point: 009fcfe8
// Size: 616 bytes
// Signature: undefined __thiscall addFillPlane(DeferredDebugRenderer * this, FillPlaneGeometry * param_1, Matrix4x4 * param_2)


/* DeferredDebugRenderer::addFillPlane(FillPlaneGeometry const*, Matrix4x4 const&) */

void __thiscall
DeferredDebugRenderer::addFillPlane
          (DeferredDebugRenderer *this,FillPlaneGeometry *param_1,Matrix4x4 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_e8;
  float local_e4;
  float fStack_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar2 = FillPlaneGeometry::getNumPolylines();
  *(undefined2 *)(this + 0x1f8) = 0x101;
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      uVar3 = FillPlaneGeometry::getNumPolylineVertices(param_1,uVar6);
      fVar11 = (float)(ulong)uVar6 / (float)(ulong)uVar2;
      local_e8 = fVar11;
      uVar5 = FillPlaneGeometry::getIsInputMeshPolyline(param_1,uVar6);
      local_dc = 0x3f800000;
      local_e4 = 0.0;
      if ((uVar5 & 1) == 0) {
        local_e4 = fVar11;
      }
      fStack_e0 = fVar11;
      if (1 < uVar3) {
        uVar7 = 1;
        do {
          FillPlaneGeometry::getPolylineVertex(param_1,uVar6,uVar7 - 1,(Vector3 *)&local_a8);
          uVar8 = NEON_fmadd(local_a8,*(undefined4 *)(param_2 + 8),
                             fStack_a4 * *(float *)(param_2 + 0x18));
          local_90 = (float)NEON_fmadd(local_a0,*(undefined4 *)(param_2 + 0x28),uVar8);
          local_98 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fStack_a4 +
                              (float)((ulong)*(undefined8 *)param_2 >> 0x20) * local_a8 +
                              (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * local_a0 +
                              (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                              (float)*(undefined8 *)(param_2 + 0x10) * fStack_a4 +
                              (float)*(undefined8 *)param_2 * local_a8 +
                              (float)*(undefined8 *)(param_2 + 0x20) * local_a0 +
                              (float)*(undefined8 *)(param_2 + 0x30));
          local_90 = *(float *)(param_2 + 0x38) + local_90;
          FillPlaneGeometry::getPolylineVertex(param_1,uVar6,uVar7,(Vector3 *)&local_c8);
          uVar8 = NEON_fmadd(local_c8,*(undefined4 *)(param_2 + 8),
                             fStack_c4 * *(float *)(param_2 + 0x18));
          local_b0 = (float)NEON_fmadd(local_c0,*(undefined4 *)(param_2 + 0x28),uVar8);
          local_b8 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fStack_c4 +
                              (float)((ulong)*(undefined8 *)param_2 >> 0x20) * local_c8 +
                              (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * local_c0 +
                              (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                              (float)*(undefined8 *)(param_2 + 0x10) * fStack_c4 +
                              (float)*(undefined8 *)param_2 * local_c8 +
                              (float)*(undefined8 *)(param_2 + 0x20) * local_c0 +
                              (float)*(undefined8 *)(param_2 + 0x30));
          local_b0 = *(float *)(param_2 + 0x38) + local_b0;
          addLine(this,(float *)&local_98,&local_e8,(float *)&local_b8,&local_e8,0x7ff);
          uVar7 = uVar7 + 1;
        } while (uVar3 != uVar7);
      }
      pfVar4 = (float *)FillPlaneGeometry::getPolylineCutPosition(param_1,uVar6);
      fVar10 = *pfVar4;
      fVar11 = pfVar4[1];
      uVar8 = NEON_fmadd(fVar10,*(undefined4 *)(param_2 + 8),fVar11 * *(float *)(param_2 + 0x18));
      fVar9 = pfVar4[2];
      local_d0 = (float)NEON_fmadd(fVar9,*(undefined4 *)(param_2 + 0x28),uVar8);
      local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar11 +
                          (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar10 +
                          (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * fVar9,
                          (float)*(undefined8 *)(param_2 + 0x30) +
                          (float)*(undefined8 *)(param_2 + 0x10) * fVar11 +
                          (float)*(undefined8 *)param_2 * fVar10 +
                          (float)*(undefined8 *)(param_2 + 0x20) * fVar9);
      local_d0 = *(float *)(param_2 + 0x38) + local_d0;
      addPoint(this,(float *)&local_d8,(float *)&DAT_0051b1b8,0x7ff);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  *(undefined2 *)(this + 0x1f8) = 0;
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


