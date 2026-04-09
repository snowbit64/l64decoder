// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeightTypeAtWorldLine
// Entry Point: 0085e5f4
// Size: 784 bytes
// Signature: undefined __thiscall getHeightTypeAtWorldLine(DensityMapHeightUpdater * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7)


/* DensityMapHeightUpdater::getHeightTypeAtWorldLine(float, float, float, float, float, float,
   float) */

void __thiscall
DensityMapHeightUpdater::getHeightTypeAtWorldLine
          (DensityMapHeightUpdater *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_e0;
  float fStack_dc;
  uint local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  lVar16 = *(long *)(*(long *)(this + 0xa40) + 0x40);
  RawTransformGroup::updateWorldTransformation();
  fVar20 = param_2 - *(float *)(lVar16 + 0xec);
  fVar21 = param_1 - *(float *)(lVar16 + 0xe8);
  fVar25 = param_3 - *(float *)(lVar16 + 0xf0);
  uVar23 = NEON_fmadd(fVar21,*(undefined4 *)(lVar16 + 0xb8),fVar20 * *(float *)(lVar16 + 0xbc));
  uVar22 = NEON_fmadd(fVar21,*(undefined4 *)(lVar16 + 0xd8),fVar20 * *(float *)(lVar16 + 0xdc));
  fVar20 = (float)NEON_fmadd(fVar25,*(undefined4 *)(lVar16 + 0xc0),uVar23);
  fVar21 = (float)NEON_fmadd(fVar25,*(undefined4 *)(lVar16 + 0xe0),uVar22);
  TerrainDataPlane::localToDensityMap
            (*(TerrainDataPlane **)(this + 0xa40),fVar20,fVar21,&local_ac,&local_b0);
  lVar16 = *(long *)(*(long *)(this + 0xa40) + 0x40);
  RawTransformGroup::updateWorldTransformation();
  fVar20 = param_5 - *(float *)(lVar16 + 0xec);
  fVar21 = param_4 - *(float *)(lVar16 + 0xe8);
  fVar25 = param_6 - *(float *)(lVar16 + 0xf0);
  uVar23 = NEON_fmadd(fVar21,*(undefined4 *)(lVar16 + 0xb8),fVar20 * *(float *)(lVar16 + 0xbc));
  uVar22 = NEON_fmadd(fVar21,*(undefined4 *)(lVar16 + 0xd8),fVar20 * *(float *)(lVar16 + 0xdc));
  fVar20 = (float)NEON_fmadd(fVar25,*(undefined4 *)(lVar16 + 0xc0),uVar23);
  fVar21 = (float)NEON_fmadd(fVar25,*(undefined4 *)(lVar16 + 0xe0),uVar22);
  TerrainDataPlane::localToDensityMap
            (*(TerrainDataPlane **)(this + 0xa40),fVar20,fVar21,&local_b4,&local_b8);
  fVar20 = (float)NEON_fmadd(local_b4 - local_ac,local_b4 - local_ac,
                             (local_b8 - local_b0) * (local_b8 - local_b0));
  if (fVar20 < 1.0) {
    getHeightTypeAtWorldPos
              (this,(param_1 + param_4) * 0.5,(param_2 + param_5) * 0.5,(param_3 + param_6) * 0.5,
               param_7);
LAB_0085e8c0:
    if (*(long *)(lVar4 + 0x28) == local_a8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar2 = *(undefined8 *)(*(long *)(this + 0xa40) + 0x50);
  uVar3 = *(undefined8 *)(*(long *)(this + 0xa40) + 0x58);
  iVar12 = DensityMap::getSquareSize();
  iVar13 = BaseTerrain::getHeightMapSize();
  fVar20 = (float)BaseTerrain::getUnitsPerPixel();
  local_c0 = *(undefined8 *)(this + 0xa48);
  local_d4 = 0;
  iVar18 = (int)local_ac;
  iVar19 = (int)local_b0;
  fVar21 = 1.0 / (local_b4 - local_ac);
  uVar15 = (uint)(((float)iVar12 * param_7) / (fVar20 * (float)(ulong)(iVar13 - 1)));
  if (6 < uVar15) {
    uVar15 = 7;
  }
  iVar13 = -1;
  iVar12 = iVar13;
  if (0.0 <= local_b4 - local_ac) {
    iVar12 = 1;
  }
  fVar20 = 1.0 / (local_b8 - local_b0);
  if (0.0 <= local_b8 - local_b0) {
    iVar13 = 1;
  }
  fVar26 = fVar21 * ((float)(iVar12 + iVar18) - local_ac);
  fVar27 = fVar20 * ((float)(iVar13 + iVar19) - local_b0);
  iVar5 = iVar19;
  iVar6 = iVar18;
  fVar25 = fVar27;
  fVar24 = fVar26;
  uVar10 = 0;
  local_d0 = uVar2;
  uStack_c8 = uVar3;
  uVar17 = 0;
LAB_0085e844:
  do {
    local_d8 = uVar10;
    fStack_dc = fVar24;
    local_e0 = fVar25;
    uVar14 = GetHeightTypeRayWalkFunc::operator()((GetHeightTypeRayWalkFunc *)&local_d8,iVar6,iVar5)
    ;
    if ((uVar14 & 1) != 0) {
      pfVar1 = &local_e0;
      iVar7 = iVar5 + iVar13;
      fVar25 = local_b0;
      iVar8 = iVar5 + iVar13 + iVar13;
      fVar9 = local_e0;
      if (fStack_dc < local_e0) {
        pfVar1 = &fStack_dc;
        iVar7 = iVar5;
        fVar25 = local_ac;
        iVar8 = iVar6 + iVar12 + iVar12;
        fVar9 = fStack_dc;
        iVar6 = iVar6 + iVar12;
      }
      fVar24 = fVar20;
      if (fStack_dc < local_e0) {
        fVar24 = fVar21;
      }
      *pfVar1 = ((float)iVar8 - fVar25) * fVar24;
      iVar5 = iVar7;
      fVar25 = local_e0;
      fVar24 = fStack_dc;
      uVar10 = local_d8;
      if (fVar9 <= 1.0) goto LAB_0085e844;
    }
    if ((local_d4 != 0) ||
       (bVar11 = uVar17 == uVar15, iVar5 = iVar19, iVar6 = iVar18, fVar25 = fVar27, fVar24 = fVar26,
       uVar10 = uVar17 + 1, uVar17 = uVar17 + 1, bVar11)) goto LAB_0085e8c0;
  } while( true );
}


