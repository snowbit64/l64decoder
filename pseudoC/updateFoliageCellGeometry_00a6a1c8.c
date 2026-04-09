// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateFoliageCellGeometry
// Entry Point: 00a6a1c8
// Size: 1192 bytes
// Signature: undefined __thiscall updateFoliageCellGeometry(FoliageTransformGroup * this, FoliageCellGeometry * param_1, BlockInstanceData * param_2, uint param_3, uint param_4, float param_5, float param_6, GridCellSharedData * param_7, IRenderDevice * param_8)


/* FoliageTransformGroup::updateFoliageCellGeometry(FoliageCellGeometry*,
   FoliageTransformGroup::BlockInstanceData*, unsigned int, unsigned int, float, float,
   LocalGeometryTransformGroup::GridCellSharedData const*, IRenderDevice*) */

void __thiscall
FoliageTransformGroup::updateFoliageCellGeometry
          (FoliageTransformGroup *this,FoliageCellGeometry *param_1,BlockInstanceData *param_2,
          uint param_3,uint param_4,float param_5,float param_6,GridCellSharedData *param_7,
          IRenderDevice *param_8)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  BlockInstanceData BVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  BoundingSphere *this_00;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  float *pfVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float local_c0;
  float local_bc;
  float local_b8;
  long local_b0;
  
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  FoliageCellGeometry::setCellSharedData(param_1,param_7,*(IStructBuffer **)(this + 0x250));
  iVar5 = *(int *)(param_1 + 0xb0);
  piVar4 = *(int **)(param_1 + 0x78);
  iVar3 = iVar5;
  for (piVar10 = *(int **)(param_1 + 0x70); piVar10 != piVar4; piVar10 = piVar10 + 6) {
    *piVar10 = iVar3;
    piVar10[1] = iVar3;
    iVar3 = piVar10[2] + iVar3;
  }
  plVar15 = *(long **)(this + 0x250);
  uVar8 = (**(code **)(*(long *)param_8 + 0x138))(param_8);
  lVar9 = (**(code **)(*plVar15 + 0x10))(plVar15,uVar8,iVar5,iVar3 - iVar5,3);
  lVar11 = *(long *)(this + 0x1f8);
  fVar18 = (float)BaseTerrain::getUnitsPerPixel();
  fVar19 = (float)BaseTerrain::getTerrainHalfSize();
  fVar20 = (float)BaseTerrain::getUnitsPerPixel();
  fVar33 = 0.0;
  if (param_3 != 0) {
    fVar33 = 0.0;
    uVar17 = 0;
    do {
      pfVar16 = (float *)(param_2 + uVar17 * 0x14);
      fVar30 = pfVar16[1];
      fVar22 = *pfVar16;
      BVar6 = *(BlockInstanceData *)((long)pfVar16 + 0x12);
      lVar12 = *(long *)(*(long *)(*(long *)(this + 0x230) + 8) +
                         (ulong)(byte)*(BlockInstanceData *)(pfVar16 + 4) * 0x58 + 0x30) +
               (ulong)(byte)*(BlockInstanceData *)((long)pfVar16 + 0x11) * 0x58;
      lVar14 = *(long *)(lVar12 + 0x38);
      uVar34 = NEON_fmadd(pfVar16[2] + -0.5,*(undefined4 *)(lVar12 + 0x10),
                          *(undefined4 *)(lVar12 + 0xc));
      fVar31 = (1.0 / fVar18) * fVar22;
      fVar32 = (1.0 / fVar18) * fVar30;
      fVar21 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                ((BaseTerrain *)(lVar11 + 0x170),fVar31,fVar32);
      BaseTerrain::getInterpolatedNormalAtPoint
                ((BaseTerrain *)(*(long *)(this + 0x1f8) + 0x170),fVar31,fVar32,&local_c0);
      fVar28 = (fVar30 - fVar19 * fVar20) - param_6;
      lVar12 = *(long *)(lVar14 + (ulong)(byte)BVar6 * 0x20 + 8);
      fVar32 = (fVar22 - fVar19 * fVar20) - param_5;
      fVar31 = *(float *)(lVar12 + 0x14);
      fVar22 = (float)NEON_fmadd(fVar32,fVar32,fVar28 * fVar28);
      fVar29 = (float)NEON_fmadd(fVar31,uVar34,fVar21);
      fVar30 = *(float *)(lVar12 + 0x10);
      fVar22 = (float)NEON_fmadd(*(undefined4 *)(lVar12 + 0x18),uVar34,SQRT(fVar22));
      fVar25 = (float)NEON_fmadd(fVar30,uVar34,fVar21);
      *pfVar16 = fVar22;
      pfVar16[2] = fVar25;
      pfVar16[3] = fVar29;
      fVar32 = (fVar32 * 32767.0) / *(float *)(this + 0x160) + 0.5;
      fVar22 = -32768.0;
      if ((-32768.0 <= fVar32) && (fVar22 = 32767.0, fVar32 <= 32767.0)) {
        fVar22 = fVar32;
      }
      fVar25 = (float)NEON_fmadd(fVar21 / *(float *)(lVar11 + 0x210) + -0.5,0x46fffe00,0x3f000000);
      fVar32 = -32768.0;
      if ((-32768.0 <= fVar25) && (fVar32 = 32767.0, fVar25 <= 32767.0)) {
        fVar32 = fVar25;
      }
      fVar28 = (fVar28 * 32767.0) / *(float *)(this + 0x160) + 0.5;
      fVar25 = -32768.0;
      if ((-32768.0 <= fVar28) && (fVar25 = 32767.0, fVar28 <= 32767.0)) {
        fVar25 = fVar28;
      }
      uVar26 = NEON_fmadd(local_c0,local_c0,local_bc * local_bc);
      fVar28 = (float)NEON_fmadd(local_b8,local_b8,uVar26);
      lVar14 = *(long *)(lVar14 + (ulong)(byte)BVar6 * 0x20 + 0x10);
      fVar23 = local_c0 * (127.0 / SQRT(fVar28));
      fVar29 = local_b8 * (127.0 / SQRT(fVar28));
      fVar27 = (float)NEON_fmin(fVar23,0x42fe0000);
      fVar24 = (float)NEON_fmin(fVar29,0x42fe0000);
      fVar28 = -127.0;
      if (-127.0 <= fVar23) {
        fVar28 = fVar27;
      }
      fVar23 = -127.0;
      if (-127.0 <= fVar29) {
        fVar23 = fVar24;
      }
      if (lVar12 != lVar14) {
        do {
          puVar1 = (uint *)(lVar12 + 0xc);
          lVar12 = lVar12 + 0x38;
          lVar13 = *(long *)(param_1 + 0x70) + (ulong)*puVar1 * 0x18;
          iVar3 = *(int *)(lVar13 + 4);
          *(int *)(lVar13 + 4) = iVar3 + 1;
          *(ulong *)(lVar9 + (ulong)(uint)(iVar3 - iVar5) * 8) =
               CONCAT26((ushort)(int)fVar28 & 0xff | (ushort)((int)fVar23 << 8),
                        CONCAT24((short)(int)fVar25,CONCAT22((short)(int)fVar32,(short)(int)fVar22))
                       );
        } while (lVar12 != lVar14);
      }
      uVar17 = uVar17 + 1;
      fVar22 = (float)NEON_fmadd((fVar31 - fVar30) * 0.5,uVar34,fVar21);
      fVar33 = fVar33 + fVar22;
    } while (uVar17 != param_3);
  }
  plVar15 = *(long **)(this + 0x250);
  uVar8 = (**(code **)(*(long *)param_8 + 0x138))();
  (**(code **)(*plVar15 + 0x18))(plVar15,uVar8);
  FoliageCellGeometry::updateMaterialList();
  fVar18 = 0.0;
  local_bc = fVar33 / (float)(ulong)param_3;
  if (param_3 != 0) {
    fVar18 = 0.0;
    uVar17 = (ulong)param_3;
    pfVar16 = (float *)(param_2 + 8);
    do {
      fVar19 = ABS(*pfVar16 - local_bc);
      if (ABS(*pfVar16 - local_bc) < ABS(pfVar16[1] - local_bc)) {
        fVar19 = ABS(pfVar16[1] - local_bc);
      }
      pfVar2 = pfVar16 + -2;
      pfVar16 = pfVar16 + 5;
      fVar19 = (float)NEON_fmadd(*pfVar2,*pfVar2,fVar19 * fVar19);
      if (fVar18 < fVar19) {
        fVar18 = fVar19;
      }
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  local_c0 = 0.0;
  local_b8 = 0.0;
  this_00 = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 00a6a610 to 00a6a61b has its CatchHandler @ 00a6a670 */
  BoundingSphere::BoundingSphere(this_00,(Vector3 *)&local_c0,SQRT(fVar18));
  Geometry::setBoundingVolume((Geometry *)param_1,(BoundingVolume *)this_00);
  if (*(long *)(lVar7 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


