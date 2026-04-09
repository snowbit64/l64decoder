// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markAllTerrainDetailDirty
// Entry Point: 008a2a70
// Size: 552 bytes
// Signature: undefined markAllTerrainDetailDirty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::markAllTerrainDetailDirty() */

void TerrainDeformation::markAllTerrainDetailDirty(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long in_x0;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  TerrainDataPlane *this;
  long *this_00;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint local_8c;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  lVar16 = *(long *)(in_x0 + 0x38);
  iVar3 = *(int *)(in_x0 + 0x108);
  uVar1 = *(uint *)(in_x0 + 0xf0);
  uVar2 = *(uint *)(in_x0 + 0xf4);
  iVar4 = *(int *)(in_x0 + 0x10c);
  iVar5 = *(int *)(lVar16 + 0x90);
  uVar12 = BaseTerrain::getLodTextureSize();
  lVar18 = *(long *)(in_x0 + 0x38);
  uVar23 = *(undefined4 *)(lVar16 + 0x94);
  fVar24 = *(float *)(lVar16 + 0xa8);
  iVar6 = *(int *)(lVar18 + 0x90);
  uVar13 = BaseTerrain::getLodTextureSize();
  lVar17 = *(long *)(in_x0 + 0x38);
  uVar26 = *(undefined4 *)(lVar18 + 0x94);
  fVar25 = *(float *)(lVar18 + 0xa8);
  iVar7 = *(int *)(lVar17 + 0x90);
  uVar14 = BaseTerrain::getLodTextureSize();
  lVar16 = *(long *)(*(long *)(in_x0 + 0x30) + 0x540);
  uVar15 = *(long *)(*(long *)(in_x0 + 0x30) + 0x548) - lVar16;
  if ((int)(uVar15 >> 3) != 0) {
    lVar18 = 0;
    fVar19 = (float)(ulong)(iVar5 - 1) / (float)(uVar12 & 0xffffffff);
    fVar20 = (float)NEON_fnmsub((float)(ulong)(iVar3 + uVar1) + 0.5,
                                (float)(ulong)(iVar6 - 1) / (float)(uVar13 & 0xffffffff),uVar26);
    fVar22 = *(float *)(lVar17 + 0xa8);
    fVar21 = (float)NEON_fnmsub((float)(ulong)uVar1 + 0.5,fVar19,uVar23);
    fVar19 = (float)NEON_fnmsub((float)(ulong)uVar2 + 0.5,fVar19,uVar23);
    fVar21 = fVar24 * fVar21;
    fVar24 = fVar24 * fVar19;
    fVar19 = (float)NEON_fnmsub((float)(ulong)(iVar4 + uVar2) + 0.5,
                                (float)(ulong)(iVar7 - 1) / (float)(uVar14 & 0xffffffff),
                                *(undefined4 *)(lVar17 + 0x94));
    while( true ) {
      this = *(TerrainDataPlane **)(lVar16 + lVar18);
      TerrainDataPlane::worldToDensityMap
                (this,fVar21,fVar24,fVar25 * fVar20 - fVar21,fVar22 * fVar19 - fVar24,&local_8c,
                 &uStack_90,&local_94,&local_98);
      uVar10 = local_8c;
      uVar9 = uStack_90;
      uVar2 = local_94;
      uVar1 = local_98;
      this_00 = *(long **)(this + 0x50);
      uVar11 = (**(code **)(*this_00 + 0x58))(this_00);
      DensityMap::markDensityRegionDirty
                ((DensityMap *)this_00,uVar10,uVar9,uVar2,uVar1,0,uVar11,0xffffffff,false,true,true)
      ;
      if ((uVar15 >> 3 & 0xffffffff) * 8 + -8 == lVar18) break;
      lVar18 = lVar18 + 8;
      lVar16 = *(long *)(*(long *)(in_x0 + 0x30) + 0x540);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


