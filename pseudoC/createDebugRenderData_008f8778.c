// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDebugRenderData
// Entry Point: 008f8778
// Size: 896 bytes
// Signature: undefined __cdecl createDebugRenderData(IndexedTriangleSet * param_1, bool param_2, uint param_3, DebugRenderData * param_4)


/* TerrainPatchOccluderManager::createDebugRenderData(IndexedTriangleSet const&, bool, unsigned int,
   TerrainPatchOccluderManager::DebugRenderData&) */

void TerrainPatchOccluderManager::createDebugRenderData
               (IndexedTriangleSet *param_1,bool param_2,uint param_3,DebugRenderData *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_ac;
  
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(undefined8 *)param_4 = 0x1c;
  iVar2 = IndexedTriangleSet::getNumSubsets();
  if (iVar2 != 0) {
    uVar8 = 0;
    do {
      lVar4 = IndexedTriangleSet::getSubset(param_1,uVar8);
      uVar8 = uVar8 + 1;
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + *(int *)(lVar4 + 0xc);
      uVar3 = IndexedTriangleSet::getNumSubsets();
    } while (uVar8 < uVar3);
  }
  pfVar5 = (float *)operator_new__((ulong)(uint)(*(int *)(param_4 + 4) * 7) << 2);
  *(float **)(param_4 + 8) = pfVar5;
  if (param_2) {
    fVar23 = 0.0;
    fVar24 = 1.0;
    local_ac = 0.0;
  }
  else {
    local_ac = 1.0;
    if (param_3 < 3) {
      uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
      fVar23 = *(float *)(&DAT_00519948 + uVar6);
      fVar24 = *(float *)(&DAT_00519954 + uVar6);
    }
    else {
      fVar23 = 1.0;
      fVar24 = 1.0;
    }
  }
  iVar2 = IndexedTriangleSet::getNumSubsets();
  if (iVar2 != 0) {
    uVar8 = 0;
    do {
      lVar4 = IndexedTriangleSet::getSubset(param_1,uVar8);
      if (*(int *)(lVar4 + 0xc) != 0) {
        uVar12 = 0;
        uVar3 = 0;
        do {
          uVar6 = IndexedTriangleSet::is16Bit();
          if ((uVar6 & 1) == 0) {
            lVar7 = IndexedTriangleSet::getIndices32();
            uVar9 = *(uint *)(lVar7 + (ulong)uVar3 * 4);
            uVar11 = *(uint *)(lVar7 + (ulong)(uVar3 + 1) * 4);
            uVar10 = *(uint *)(lVar7 + (ulong)(uVar3 + 2) * 4);
          }
          else {
            lVar7 = IndexedTriangleSet::getIndices16();
            uVar9 = (uint)*(ushort *)(lVar7 + (ulong)uVar3 * 2);
            uVar11 = (uint)*(ushort *)(lVar7 + (ulong)(uVar3 + 1) * 2);
            uVar10 = (uint)*(ushort *)(lVar7 + (ulong)(uVar3 + 2) * 2);
          }
          lVar7 = TriangleSet::getPositions();
          pfVar1 = (float *)(lVar7 + (ulong)(uVar9 * 3) * 4);
          fVar22 = *pfVar1;
          fVar27 = pfVar1[1];
          fVar28 = pfVar1[2];
          lVar7 = TriangleSet::getPositions();
          pfVar1 = (float *)(lVar7 + (ulong)(uVar11 * 3) * 4);
          fVar29 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar26 = pfVar1[2];
          lVar7 = TriangleSet::getPositions();
          fVar19 = fVar29 - fVar22;
          fVar16 = fVar26 - fVar28;
          fVar21 = fVar25 - fVar27;
          pfVar1 = (float *)(lVar7 + (ulong)(uVar10 * 3) * 4);
          fVar14 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar15 = *pfVar1;
          fVar18 = fVar13 - fVar26;
          fVar30 = fVar14 - fVar25;
          fVar31 = fVar15 - fVar29;
          fVar17 = (float)NEON_fmadd(fVar16,fVar31,fVar18 * -fVar19);
          fVar16 = (float)NEON_fmadd(fVar21,fVar18,fVar30 * -fVar16);
          fVar18 = (float)NEON_fmadd(fVar19,fVar30,fVar31 * -fVar21);
          uVar20 = NEON_fmadd(fVar16,fVar16,fVar17 * fVar17);
          fVar21 = (float)NEON_fmadd(fVar18,fVar18,uVar20);
          fVar19 = 1.0;
          if (1e-06 < fVar21) {
            fVar19 = 1.0 / SQRT(fVar21);
          }
          uVar11 = uVar12 % 0x15;
          pfVar5[6] = 1.0;
          uVar3 = uVar3 + 3;
          pfVar5[0xd] = 1.0;
          uVar12 = uVar12 + 0x1e;
          pfVar5[0x14] = 1.0;
          fVar21 = fVar16 * fVar19 * 0.01;
          fVar16 = fVar17 * fVar19 * 0.01;
          fVar18 = fVar18 * fVar19 * 0.01;
          uVar9 = *(uint *)(lVar4 + 0xc);
          *pfVar5 = fVar22 - fVar21;
          pfVar5[0xe] = fVar15 - fVar21;
          fVar15 = (float)NEON_fmadd((float)(ulong)uVar11 / 20.0,0x3f000000,0x3f000000);
          pfVar5[0xf] = fVar14 - fVar16;
          pfVar5[1] = fVar27 - fVar16;
          pfVar5[2] = fVar28 - fVar18;
          pfVar5[7] = fVar29 - fVar21;
          fVar17 = local_ac * fVar15;
          fVar14 = fVar23 * fVar15;
          fVar15 = fVar24 * fVar15;
          pfVar5[8] = fVar25 - fVar16;
          pfVar5[9] = fVar26 - fVar18;
          pfVar5[0x10] = fVar13 - fVar18;
          pfVar5[3] = fVar17;
          pfVar5[4] = fVar14;
          pfVar5[5] = fVar15;
          pfVar5[10] = fVar17;
          pfVar5[0xb] = fVar14;
          pfVar5[0xc] = fVar15;
          pfVar5[0x11] = fVar17;
          pfVar5[0x12] = fVar14;
          pfVar5[0x13] = fVar15;
          pfVar5 = pfVar5 + 0x15;
        } while (uVar3 < uVar9);
      }
      uVar8 = uVar8 + 1;
      uVar3 = IndexedTriangleSet::getNumSubsets();
    } while (uVar8 < uVar3);
  }
  return;
}


