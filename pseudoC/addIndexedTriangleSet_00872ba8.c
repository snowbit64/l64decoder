// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addIndexedTriangleSet
// Entry Point: 00872ba8
// Size: 780 bytes
// Signature: undefined __cdecl addIndexedTriangleSet(Matrix4x4 * param_1, IndexedTriangleSet * param_2, vector * param_3, vector * param_4)


/* NavigationMeshGeneratorUtil::addIndexedTriangleSet(Matrix4x4 const&, IndexedTriangleSet*,
   std::__ndk1::vector<float, std::__ndk1::allocator<float> >&, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&) */

void NavigationMeshGeneratorUtil::addIndexedTriangleSet
               (Matrix4x4 *param_1,IndexedTriangleSet *param_2,vector *param_3,vector *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  
  *(uint *)(param_2 + 0x8c) = *(uint *)(param_2 + 0x8c) | 1;
  iVar3 = TriangleSet::getNumVertices();
  uVar15 = *(long *)(param_3 + 8) - *(long *)param_3 >> 2;
  uVar17 = uVar15 & 0xffffffff;
  uVar6 = (ulong)(uint)(iVar3 * 3 + (int)uVar15);
  if (uVar15 < uVar6) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)param_3,uVar6 - uVar15);
  }
  else if (uVar6 < uVar15) {
    *(ulong *)(param_3 + 8) = *(long *)param_3 + uVar6 * 4;
  }
  lVar5 = TriangleSet::getPositions();
  if (iVar3 != 0) {
    uVar4 = 0;
    lVar7 = *(long *)param_3;
    do {
      uVar18 = *(undefined4 *)(lVar5 + (ulong)uVar4 * 4);
      iVar3 = iVar3 + -1;
      fVar20 = *(float *)(lVar5 + (ulong)(uVar4 + 1) * 4);
      uVar24 = NEON_fmadd(uVar18,*(undefined4 *)param_1,fVar20 * *(float *)(param_1 + 0x10));
      uVar30 = *(undefined4 *)(lVar5 + (ulong)(uVar4 + 2) * 4);
      uVar28 = NEON_fmadd(uVar18,*(undefined4 *)(param_1 + 4),fVar20 * *(float *)(param_1 + 0x14));
      uVar18 = NEON_fmadd(uVar18,*(undefined4 *)(param_1 + 8),fVar20 * *(float *)(param_1 + 0x18));
      uVar14 = (int)uVar15 + uVar4;
      uVar4 = uVar4 + 3;
      fVar25 = (float)NEON_fmadd(uVar30,*(undefined4 *)(param_1 + 0x20),uVar24);
      fVar21 = (float)NEON_fmadd(uVar30,*(undefined4 *)(param_1 + 0x24),uVar28);
      fVar31 = *(float *)(param_1 + 0x34);
      fVar20 = (float)NEON_fmadd(uVar30,*(undefined4 *)(param_1 + 0x28),uVar18);
      fVar29 = *(float *)(param_1 + 0x38);
      *(float *)(lVar7 + (ulong)uVar14 * 4) = *(float *)(param_1 + 0x30) + fVar25;
      *(float *)(lVar7 + (ulong)(uVar14 + 1) * 4) = fVar31 + fVar21;
      *(float *)(lVar7 + (ulong)(uVar14 + 2) * 4) = fVar29 + fVar20;
    } while (iVar3 != 0);
  }
  uVar15 = IndexedTriangleSet::getNumIndices();
  uVar13 = uVar15 & 0xffffffff;
  uVar16 = *(long *)(param_4 + 8) - *(long *)param_4;
  uVar6 = (long)uVar16 >> 2;
  uVar14 = (uint)uVar6;
  uVar4 = (uint)uVar15;
  uVar8 = (ulong)(uVar4 + uVar14);
  if (uVar6 < uVar8) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_4,uVar8 - uVar6);
  }
  else if (uVar8 < uVar6) {
    *(ulong *)(param_4 + 8) = *(long *)param_4 + uVar8 * 4;
  }
  uVar8 = IndexedTriangleSet::is16Bit();
  iVar3 = (int)(uVar17 / 3);
  if ((uVar8 & 1) == 0) {
    uVar8 = IndexedTriangleSet::getIndices32();
    if (uVar4 != 0) {
      lVar5 = *(long *)param_4;
      if ((((uVar4 < 8) || (CARRY4(uVar14,(uint)(uVar13 - 1)))) || (uVar13 - 1 >> 0x20 != 0)) ||
         ((uVar16 = uVar16 >> 2, uVar8 < lVar5 + (uVar13 + (uVar16 & 0xffffffff)) * 4 &&
          (lVar5 + (uVar16 & 0xffffffff) * 4 < uVar8 + uVar13 * 4)))) {
        uVar15 = 0;
        uVar16 = uVar6 & 0xffffffff;
      }
      else {
        uVar15 = uVar15 & 0xfffffff8;
        puVar12 = (undefined8 *)(uVar8 + 0x10);
        uVar16 = (ulong)(uVar14 + (int)uVar15);
        iVar19 = (int)(uVar17 / 3);
        uVar17 = uVar15;
        do {
          puVar2 = puVar12 + -1;
          uVar22 = puVar12[-2];
          uVar26 = puVar12[1];
          uVar23 = *puVar12;
          puVar1 = (undefined8 *)(lVar5 + (uVar6 & 0xffffffff) * 4);
          uVar6 = uVar6 + 8;
          puVar12 = puVar12 + 4;
          uVar17 = uVar17 - 8;
          puVar1[1] = CONCAT44((int)((ulong)*puVar2 >> 0x20) + iVar3,(int)*puVar2 + iVar19);
          *puVar1 = CONCAT44((int)((ulong)uVar22 >> 0x20) + iVar3,(int)uVar22 + iVar3);
          puVar1[3] = CONCAT44((int)((ulong)uVar26 >> 0x20) + iVar3,(int)uVar26 + iVar19);
          puVar1[2] = CONCAT44((int)((ulong)uVar23 >> 0x20) + iVar3,(int)uVar23 + iVar3);
        } while (uVar17 != 0);
        if (uVar15 == uVar13) {
          return;
        }
      }
      lVar7 = uVar13 - uVar15;
      piVar10 = (int *)(uVar8 + uVar15 * 4);
      do {
        lVar7 = lVar7 + -1;
        *(int *)(lVar5 + uVar16 * 4) = *piVar10 + iVar3;
        uVar16 = (ulong)((int)uVar16 + 1);
        piVar10 = piVar10 + 1;
      } while (lVar7 != 0);
    }
  }
  else {
    lVar5 = IndexedTriangleSet::getIndices16();
    if (uVar4 != 0) {
      lVar7 = *(long *)param_4;
      if (((uVar4 < 0x10) || (CARRY4(uVar14,(uint)(uVar13 - 1)))) || (uVar13 - 1 >> 0x20 != 0)) {
        uVar15 = 0;
        uVar8 = uVar6 & 0xffffffff;
      }
      else {
        uVar15 = uVar15 & 0xfffffff0;
        puVar12 = (undefined8 *)(lVar5 + 0x10);
        uVar8 = (ulong)(uVar14 + (int)uVar15);
        iVar19 = (int)(uVar17 / 3);
        uVar17 = uVar15;
        do {
          uVar23 = puVar12[-1];
          uVar22 = puVar12[-2];
          uVar27 = puVar12[1];
          uVar26 = *puVar12;
          puVar1 = (undefined8 *)(lVar7 + (uVar6 & 0xffffffff) * 4);
          uVar6 = uVar6 + 0x10;
          puVar12 = puVar12 + 4;
          uVar17 = uVar17 - 0x10;
          puVar1[1] = CONCAT44(iVar3 + (uint)(ushort)((ulong)uVar22 >> 0x30),
                               iVar19 + (uint)(ushort)((ulong)uVar22 >> 0x20));
          *puVar1 = CONCAT44(iVar3 + (uint)(ushort)((ulong)uVar22 >> 0x10),
                             iVar3 + ((uint)uVar22 & 0xffff));
          puVar1[3] = CONCAT44(iVar3 + (uint)(ushort)((ulong)uVar23 >> 0x30),
                               iVar19 + (uint)(ushort)((ulong)uVar23 >> 0x20));
          puVar1[2] = CONCAT44(iVar3 + (uint)(ushort)((ulong)uVar23 >> 0x10),
                               iVar3 + (uint)(ushort)uVar23);
          puVar1[5] = CONCAT44(iVar3 + (uint)(ushort)((ulong)uVar26 >> 0x30),
                               iVar19 + (uint)(ushort)((ulong)uVar26 >> 0x20));
          puVar1[4] = CONCAT44(iVar3 + (uint)(ushort)((ulong)uVar26 >> 0x10),
                               iVar3 + ((uint)uVar26 & 0xffff));
          puVar1[7] = CONCAT44(iVar3 + (uint)(ushort)((ulong)uVar27 >> 0x30),
                               iVar19 + (uint)(ushort)((ulong)uVar27 >> 0x20));
          puVar1[6] = CONCAT44(iVar3 + (uint)(ushort)((ulong)uVar27 >> 0x10),
                               iVar3 + (uint)(ushort)uVar27);
        } while (uVar17 != 0);
        if (uVar15 == uVar13) {
          return;
        }
      }
      lVar9 = uVar13 - uVar15;
      puVar11 = (ushort *)(lVar5 + uVar15 * 2);
      do {
        lVar9 = lVar9 + -1;
        *(uint *)(lVar7 + uVar8 * 4) = iVar3 + (uint)*puVar11;
        uVar8 = (ulong)((int)uVar8 + 1);
        puVar11 = puVar11 + 1;
      } while (lVar9 != 0);
    }
  }
  return;
}


