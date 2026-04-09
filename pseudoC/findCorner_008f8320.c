// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findCorner
// Entry Point: 008f8320
// Size: 228 bytes
// Signature: undefined __cdecl findCorner(IndexedTriangleSet * param_1, bool param_2, bool param_3)


/* TerrainPatchOccluderManager::findCorner(IndexedTriangleSet*, bool, bool) */

uint TerrainPatchOccluderManager::findCorner(IndexedTriangleSet *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar5 = (float *)TriangleSet::getPositions();
  fVar10 = *pfVar5;
  fVar11 = pfVar5[2];
  uVar3 = TriangleSet::getNumVertices();
  if (uVar3 < 2) {
    uVar3 = 0;
  }
  else {
    pfVar5 = pfVar5 + 5;
    uVar7 = 1;
    uVar6 = 0;
    do {
      fVar8 = pfVar5[-2];
      if ((fVar10 < fVar8) || (param_2)) {
        bVar2 = fVar10 <= fVar8 && param_2;
      }
      else {
        bVar2 = true;
      }
      fVar9 = *pfVar5;
      if ((fVar11 < fVar9) || (param_3)) {
        bVar1 = fVar11 <= fVar9 && param_3;
      }
      else {
        bVar1 = true;
      }
      uVar3 = uVar7;
      if (!(bool)(bVar2 & bVar1)) {
        uVar3 = uVar6;
        fVar9 = fVar11;
        fVar8 = fVar10;
      }
      fVar10 = fVar8;
      fVar11 = fVar9;
      uVar7 = uVar7 + 1;
      uVar4 = TriangleSet::getNumVertices();
      pfVar5 = pfVar5 + 3;
      uVar6 = uVar3;
    } while (uVar7 < uVar4);
  }
  return uVar3;
}


