// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertMesh_async
// Entry Point: 008f8648
// Size: 304 bytes
// Signature: undefined __cdecl convertMesh_async(uint param_1, float param_2, IndexedTriangleSet * param_3)


/* TerrainPatchOccluderManager::convertMesh_async(unsigned int, float, IndexedTriangleSet&) */

void TerrainPatchOccluderManager::convertMesh_async
               (uint param_1,float param_2,IndexedTriangleSet *param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  *(uint *)(param_3 + 0x8c) = *(uint *)(param_3 + 0x8c) | 0x200;
  iVar3 = TriangleSet::getNumVertices();
  if (iVar3 != 0) {
    uVar10 = 0;
    uVar9 = 0;
    fVar13 = (float)(ulong)(param_1 - 1) * -0.5;
    do {
      lVar5 = TriangleSet::getPositions();
      puVar1 = (undefined4 *)(lVar5 + (uVar10 & 0xffffffff) * 4);
      uVar9 = uVar9 + 1;
      uVar11 = NEON_fmadd(fVar13,param_2,*puVar1);
      uVar12 = NEON_fmadd(fVar13,param_2,puVar1[1]);
      *puVar1 = uVar11;
      puVar1[1] = puVar1[2];
      puVar1[2] = uVar12;
      uVar6 = TriangleSet::getNumVertices();
      uVar10 = uVar10 + 3;
    } while (uVar9 < (uVar6 & 0xffffffff));
  }
  iVar3 = IndexedTriangleSet::getNumIndices();
  if (iVar3 != 0) {
    uVar8 = 0;
    do {
      uVar9 = IndexedTriangleSet::is16Bit();
      if ((uVar9 & 1) == 0) {
        lVar5 = IndexedTriangleSet::getIndices32();
        lVar7 = (ulong)(uVar8 + 2) * 4;
        uVar11 = *(undefined4 *)(lVar5 + (ulong)uVar8 * 4);
        *(undefined4 *)(lVar5 + (ulong)uVar8 * 4) = *(undefined4 *)(lVar5 + lVar7);
        *(undefined4 *)(lVar5 + lVar7) = uVar11;
      }
      else {
        lVar5 = IndexedTriangleSet::getIndices16();
        lVar7 = (ulong)(uVar8 + 2) * 2;
        uVar2 = *(undefined2 *)(lVar5 + (ulong)uVar8 * 2);
        *(undefined2 *)(lVar5 + (ulong)uVar8 * 2) = *(undefined2 *)(lVar5 + lVar7);
        *(undefined2 *)(lVar5 + lVar7) = uVar2;
      }
      uVar8 = uVar8 + 3;
      uVar4 = IndexedTriangleSet::getNumIndices();
    } while (uVar8 < uVar4);
  }
  param_3[0x88] = (IndexedTriangleSet)0x0;
  IndexedTriangleSet::optimize();
  return;
}


