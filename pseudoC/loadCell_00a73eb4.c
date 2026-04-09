// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadCell
// Entry Point: 00a73eb4
// Size: 1596 bytes
// Signature: undefined __thiscall loadCell(TerrainLayerTransformGroup * this, GridCellSharedData * param_1, IRenderDevice * param_2)


/* TerrainLayerTransformGroup::loadCell(LocalGeometryTransformGroup::GridCellSharedData const*,
   IRenderDevice*) */

void __thiscall
TerrainLayerTransformGroup::loadCell
          (TerrainLayerTransformGroup *this,GridCellSharedData *param_1,IRenderDevice *param_2)

{
  undefined2 *puVar1;
  BaseTerrain *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  GsMaterial **ppGVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  BoundingSphere *this_01;
  long lVar23;
  long *this_02;
  GsMaterial *this_03;
  uint uVar24;
  TerrainDetailGeometry *this_04;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_c0;
  float fStack_bc;
  float local_b8;
  long local_b0;
  
  lVar15 = tpidr_el0;
  local_b0 = *(long *)(lVar15 + 0x28);
  iVar6 = *(int *)(this + 0x210);
  sVar9 = *(short *)(param_1 + 8);
  this_02 = *(long **)param_1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  iVar2 = (iVar6 >> 1) + (int)sVar9;
  if (this_02 == (long *)0x0) {
    this_04 = (TerrainDetailGeometry *)0x0;
  }
  else {
    this_04 = (TerrainDetailGeometry *)this_02[0x2e];
  }
  sVar10 = *(short *)(param_1 + 10);
  uVar16 = DensityMap::getSquareSize();
  if ((((iVar2 < 0) || (*(int *)(this + 0x210) <= iVar2)) ||
      (iVar6 = (iVar6 >> 1) + (int)sVar10, iVar6 < 0)) || (*(int *)(this + 0x210) <= iVar6)) {
    if (this_04 != (TerrainDetailGeometry *)0x0) {
      TerrainDetailGeometry::setNumIndicesAndVertices(this_04,0,0);
      GsShape::raiseShapeFlag((GsShape *)this_02,0x400);
    }
    uVar21 = 0;
  }
  else {
    iVar18 = *(int *)(this + 0x6b0);
    iVar11 = iVar18 * iVar2;
    iVar12 = iVar18 * iVar6;
    if (*(int *)(this + 0x690) == 0) {
      uVar17 = 0;
      iVar8 = *(int *)(this + 0x694);
      uVar7 = 0;
    }
    else {
      uVar17 = updateDensityTextureTile
                         (this,0,iVar11,iVar12,iVar11 + iVar18,iVar12 + iVar18,param_2);
      uVar7 = *(uint *)(this + 0x690);
      iVar8 = *(int *)(this + 0x694);
    }
    if (iVar8 != 0) {
      iVar18 = updateDensityTextureTile
                         (this,1,iVar11,iVar12,iVar11 + iVar18,iVar12 + iVar18,param_2);
      uVar17 = iVar18 << (ulong)(uVar7 & 0x1f) | uVar17;
    }
    uVar7 = *(uint *)(*(long *)(this + 0x630) + 0x8c);
    if (uVar7 != 0) {
      if (uVar17 == 0) {
        TerrainDetailGeometry::setNumIndicesAndVertices(this_04,0,0);
        GsShape::raiseShapeFlag((GsShape *)this_02,0x400);
        uVar21 = 0;
        goto LAB_00a744ac;
      }
      ppGVar5 = (GsMaterial **)(this_02 + 0x2f);
      if (*(short *)((long)this_02 + 0x196) != 1) {
        ppGVar5 = (GsMaterial **)this_02[0x2f];
      }
      this_03 = *ppGVar5;
      setupCustomShaderVariation(this,this_03,*(uint *)(this + (ulong)(uVar17 - 1) * 4 + 0x22c));
      GsMaterial::validateTextures(this_03,1);
      lVar23 = *(long *)(this + 0x1f8);
      this_00 = (BaseTerrain *)(lVar23 + 0x170);
      fVar27 = (float)BaseTerrain::getUnitsPerPixel();
      plVar20 = (long *)TerrainDetailGeometry::getTerrainDetailVertexBuffer();
      uVar21 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
      uVar19 = (**(code **)(*plVar20 + 0x20))(plVar20);
      lVar22 = (**(code **)(*plVar20 + 0x10))(plVar20,uVar21,0,uVar19,1);
      uVar24 = *(uint *)(this + 0x20c);
      uVar17 = uVar24 * iVar6;
      iVar6 = uVar24 + 1;
      uVar3 = iVar6 + uVar17;
      if ((int)uVar17 < (int)uVar3) {
        uVar13 = uVar24 * iVar2;
        fVar41 = 0.0;
        uVar25 = 0;
        uVar14 = uVar16 - 1;
        fVar40 = 1.0 / (float)(ulong)(*(int *)(this + 0x210) * uVar24);
        fVar28 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x208));
        fVar28 = fVar28 / (float)(ulong)uVar24;
        fVar29 = *(float *)(lVar23 + 0x214);
        fVar34 = *(float *)(*(long *)(this + 0x630) + 0x90);
        fVar38 = fVar34 / (float)(ulong)(uint)~(-1 << (ulong)(uVar7 & 0x1f));
        do {
          uVar7 = uVar14;
          if ((int)uVar17 <= (int)uVar14) {
            uVar7 = uVar17;
          }
          if ((int)uVar13 < (int)(iVar6 + uVar13)) {
            uVar4 = iVar6 + uVar25;
            fVar30 = fVar28 * (float)uVar17;
            uVar24 = uVar13;
            uVar26 = uVar25;
            iVar2 = iVar6;
            do {
              fVar31 = (float)uVar24;
              uVar25 = uVar14;
              if ((int)uVar24 <= (int)uVar14) {
                uVar25 = uVar24;
              }
              fVar42 = fVar28 * fVar31;
              fVar32 = (float)BaseTerrain::getInterpolatedHeightAtPoint(this_00,fVar42,fVar30);
              fVar33 = (float)TerrainFillDataPlane::getDeltaDensityHeight
                                        (*(TerrainFillDataPlane **)(this + 0x630),uVar25,uVar7,
                                         fVar38);
              puVar1 = (undefined2 *)(lVar22 + (ulong)uVar26 * 0x10);
              fVar35 = (float)NEON_fmadd(fVar32 + fVar33,1.0 / fVar29,0x3f000000);
              *puVar1 = (short)uVar24;
              puVar1[2] = (short)uVar17;
              fVar41 = fVar41 + fVar32 + fVar33;
              puVar1[3] = 0;
              puVar1[1] = (ushort)(int)fVar35 ^ 0x8000;
              TerrainFillDataPlane::getDensityHeightNormal
                        (*(TerrainFillDataPlane **)(this + 0x630),uVar25,uVar7,fVar42,fVar30,uVar16,
                         fVar28,fVar27 * fVar28,fVar38,this_00,&local_c0);
              uVar24 = uVar24 + 1;
              uVar19 = NEON_fmadd(local_c0,local_c0,fStack_bc * fStack_bc);
              fVar32 = (float)NEON_fmadd(local_b8,local_b8,uVar19);
              fVar32 = 127.5 / SQRT(fVar32);
              fVar36 = local_c0 * fVar32 + 127.5;
              fVar35 = fStack_bc * fVar32 + 127.5;
              fVar42 = local_b8 * fVar32 + 127.5;
              fVar39 = (float)NEON_fmin(fVar36,0x437f0000);
              fVar37 = (float)NEON_fmin(fVar35,0x437f0000);
              fVar32 = 0.0;
              if (0.0 <= fVar36) {
                fVar32 = fVar39;
              }
              fVar39 = (float)NEON_fmin(fVar42,0x437f0000);
              fVar36 = 0.0;
              if (0.0 <= fVar35) {
                fVar36 = fVar37;
              }
              fVar35 = 0.0;
              if (0.0 <= fVar42) {
                fVar35 = fVar39;
              }
              iVar2 = iVar2 + -1;
              puVar1[6] = (short)(int)(fVar40 * fVar31 * 32767.0);
              *(uint *)(puVar1 + 4) =
                   (int)((255.0 / fVar34) * fVar33) << 0x18 | ((int)fVar35 & 0xffU) << 0x10 |
                   ((int)fVar36 & 0xffU) << 8 | (int)fVar32;
              puVar1[7] = (short)(int)(fVar40 * (float)uVar17 * 32767.0);
              uVar26 = uVar26 + 1;
              uVar25 = uVar4;
            } while (iVar2 != 0);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar3);
      }
      else {
        fVar41 = 0.0;
        uVar25 = 0;
      }
      fStack_bc = fVar41 / (float)(ulong)uVar25;
      fVar27 = *(float *)(this + 0x160);
      local_c0 = ((float)(int)sVar9 + 0.5) * fVar27;
      local_b8 = ((float)(int)sVar10 + 0.5) * fVar27;
      this_01 = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 00a7441c to 00a74427 has its CatchHandler @ 00a744f0 */
      BoundingSphere::BoundingSphere(this_01,(Vector3 *)&local_c0,fVar27 * 1.414214 * 1.2);
      Geometry::setBoundingVolume((Geometry *)this_04,(BoundingVolume *)this_01);
      plVar20 = (long *)TerrainDetailGeometry::getTerrainDetailVertexBuffer();
      uVar21 = (**(code **)(*(long *)param_2 + 0x138))();
      (**(code **)(*plVar20 + 0x18))(plVar20,uVar21);
      TerrainDetailGeometry::setNumIndicesAndVertices(this_04,*(uint *)(this + 0x658),uVar25);
      (**(code **)(*this_02 + 0x50))(this_02);
      *(int *)(this + 0x168) = *(int *)(this + 0x168) + 1;
      GsShape::clearShapeFlag((GsShape *)this_02,0x400);
    }
    uVar21 = 1;
  }
LAB_00a744ac:
  if (*(long *)(lVar15 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar21);
}


