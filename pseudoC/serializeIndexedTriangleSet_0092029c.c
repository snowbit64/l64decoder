// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeIndexedTriangleSet
// Entry Point: 0092029c
// Size: 824 bytes
// Signature: undefined __cdecl serializeIndexedTriangleSet(IndexedTriangleSet * param_1, uchar * param_2)


/* WARNING: Type propagation algorithm not settling */
/* SerializationHelper::serializeIndexedTriangleSet(IndexedTriangleSet*, unsigned char*) */

undefined4 *
SerializationHelper::serializeIndexedTriangleSet(IndexedTriangleSet *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined2 *puVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar1 = TriangleSet::getAttributes();
  iVar9 = *(int *)(param_1 + 0x8c);
  uVar2 = IndexedTriangleSet::getNumSubsets();
  uVar3 = TriangleSet::getNumVertices();
  uVar4 = IndexedTriangleSet::getNumIndices();
  uVar12 = (ulong)uVar4;
  puVar11 = (undefined4 *)(param_2 + 0x10);
  *(uint *)param_2 = uVar4;
  *(uint *)(param_2 + 4) = uVar2;
  *(uint *)(param_2 + 8) = uVar3;
  *(uint *)(param_2 + 0xc) = uVar1 | iVar9 << 0x10;
  if (uVar2 != 0) {
    uVar13 = 0;
    do {
      puVar5 = (undefined4 *)IndexedTriangleSet::getSubset(param_1,uVar13);
      *puVar11 = *puVar5;
      puVar11[1] = puVar5[1];
      puVar11[2] = puVar5[2];
      puVar11[3] = puVar5[3];
      if ((uVar1 >> 1 & 1) == 0) {
        puVar10 = puVar11 + 4;
      }
      else {
        puVar11[4] = puVar5[4];
        puVar10 = puVar11 + 5;
      }
      if ((uVar1 >> 2 & 1) != 0) {
        *puVar10 = puVar5[5];
        puVar10 = puVar10 + 1;
      }
      if ((uVar1 >> 3 & 1) != 0) {
        *puVar10 = puVar5[6];
        puVar10 = puVar10 + 1;
      }
      puVar11 = puVar10;
      if ((uVar1 >> 4 & 1) != 0) {
        puVar11 = puVar10 + 1;
        *puVar10 = puVar5[7];
      }
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
  }
  uVar6 = IndexedTriangleSet::is16Bit();
  if ((uVar6 & 1) == 0) {
    puVar5 = (undefined4 *)IndexedTriangleSet::getIndices32();
    puVar10 = puVar11;
    if (uVar4 != 0) {
      do {
        uVar12 = uVar12 - 1;
        puVar11 = puVar10 + 1;
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar11;
      } while (uVar12 != 0);
    }
  }
  else {
    puVar7 = (undefined2 *)IndexedTriangleSet::getIndices16();
    if (uVar4 != 0) {
      uVar12 = (ulong)uVar4;
      do {
        puVar5 = puVar11;
        uVar12 = uVar12 - 1;
        puVar10 = (undefined4 *)((long)puVar5 + 2);
        *(undefined2 *)puVar5 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar10;
      } while (uVar12 != 0);
      if ((uVar4 & 1) != 0) {
        puVar11 = puVar5 + 1;
        *(undefined2 *)puVar10 = 0;
      }
    }
  }
  pvVar8 = (void *)TriangleSet::getPositions();
  uVar12 = (ulong)(uVar3 * 3);
  memcpy(puVar11,pvVar8,uVar12 * 4);
  puVar11 = puVar11 + uVar12;
  if ((uVar1 & 1) != 0) {
    pvVar8 = (void *)TriangleSet::getNormals();
    memcpy(puVar11,pvVar8,uVar12 * 4);
    puVar11 = puVar11 + uVar12;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    pvVar8 = (void *)TriangleSet::getTangents();
    memcpy(puVar11,pvVar8,(ulong)(uVar3 << 2) * 4);
    puVar11 = (undefined4 *)((long)puVar11 + (ulong)(uVar3 << 2) * 4);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    pvVar8 = (void *)TriangleSet::getTexCoords((TriangleSet *)param_1,0);
    memcpy(puVar11,pvVar8,(ulong)(uVar3 << 1) * 4);
    puVar11 = (undefined4 *)((long)puVar11 + (ulong)(uVar3 << 1) * 4);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    pvVar8 = (void *)TriangleSet::getTexCoords((TriangleSet *)param_1,1);
    memcpy(puVar11,pvVar8,(ulong)(uVar3 << 1) * 4);
    puVar11 = (undefined4 *)((long)puVar11 + (ulong)(uVar3 << 1) * 4);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    pvVar8 = (void *)TriangleSet::getTexCoords((TriangleSet *)param_1,2);
    memcpy(puVar11,pvVar8,(ulong)(uVar3 << 1) * 4);
    puVar11 = puVar11 + (uVar3 << 1);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    pvVar8 = (void *)TriangleSet::getTexCoords((TriangleSet *)param_1,3);
    memcpy(puVar11,pvVar8,(ulong)(uVar3 << 1) * 4);
    puVar11 = puVar11 + (uVar3 << 1);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    puVar5 = (undefined4 *)TriangleSet::getColors();
    uVar12 = (ulong)(uVar3 << 2);
    puVar10 = puVar11;
    if (uVar3 << 2 != 0) {
      do {
        uVar12 = uVar12 - 1;
        puVar11 = puVar10 + 1;
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar11;
      } while (uVar12 != 0);
    }
  }
  if ((uVar1 >> 6 & 1) != 0) {
    iVar9 = 4;
    if ((*(uint *)(param_1 + 0xc) & 0x100) != 0) {
      iVar9 = 1;
    }
    uVar12 = (ulong)(iVar9 * uVar3);
    if ((*(uint *)(param_1 + 0xc) >> 8 & 1) == 0) {
      pvVar8 = (void *)TriangleSet::getBlendWeights();
      memcpy(puVar11,pvVar8,uVar12 * 4);
      puVar11 = puVar11 + uVar12;
    }
    pvVar8 = (void *)TriangleSet::getBlendIndices();
    memcpy(puVar11,pvVar8,uVar12);
    puVar11 = (undefined4 *)((long)puVar11 + uVar12);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    memcpy(puVar11,*(void **)(param_1 + 0x60),(ulong)uVar3 * 4);
    puVar11 = puVar11 + uVar3;
  }
  return puVar11;
}


