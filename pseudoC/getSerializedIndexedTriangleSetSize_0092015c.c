// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSerializedIndexedTriangleSetSize
// Entry Point: 0092015c
// Size: 320 bytes
// Signature: undefined __cdecl getSerializedIndexedTriangleSetSize(IndexedTriangleSet * param_1)


/* SerializationHelper::getSerializedIndexedTriangleSetSize(IndexedTriangleSet*) */

int SerializationHelper::getSerializedIndexedTriangleSetSize(IndexedTriangleSet *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  
  uVar3 = TriangleSet::getAttributes();
  iVar4 = TriangleSet::getNumVertices();
  uVar5 = IndexedTriangleSet::getNumIndices();
  iVar6 = IndexedTriangleSet::getNumSubsets();
  iVar6 = (((uVar3 >> 1 & 1) + ((uVar3 & 4) >> 2) + ((uVar3 & 8) >> 3) + ((uVar3 & 0x10) >> 4)) * 4
          + 0x10) * iVar6 + 0x10;
  uVar7 = IndexedTriangleSet::is16Bit();
  if ((uVar7 & 1) == 0) {
    iVar6 = iVar6 + uVar5 * 4;
  }
  else {
    iVar6 = iVar6 + uVar5 * 2;
    if ((uVar5 & 1) != 0) {
      iVar6 = iVar6 + 2;
    }
  }
  uVar5 = iVar4 << 3;
  iVar6 = (-(uVar3 & 1) & iVar4 * 0xc) + iVar4 * 0xc + (iVar4 << 4 & (int)(uVar3 << 0x18) >> 0x1f) +
          (uVar5 & (int)(uVar3 << 0x1e) >> 0x1f) + (uVar5 & (int)(uVar3 << 0x1d) >> 0x1f) +
          (uVar5 & (int)(uVar3 << 0x1c) >> 0x1f) + (uVar5 & (int)(uVar3 << 0x1b) >> 0x1f) +
          (iVar4 << 4 & (int)(uVar3 << 0x1a) >> 0x1f) + iVar6;
  if ((uVar3 >> 6 & 1) != 0) {
    bVar2 = (*(uint *)(param_1 + 0xc) & 0x100) != 0;
    iVar8 = 4;
    if (bVar2) {
      iVar8 = 1;
    }
    iVar1 = iVar8 * iVar4 * 4;
    if (bVar2) {
      iVar1 = 0;
    }
    iVar6 = iVar8 * iVar4 + iVar6 + iVar1;
  }
  return iVar6 + (-(uVar3 >> 9 & 1) & iVar4 << 2);
}


