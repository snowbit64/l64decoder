// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateEdgeInfosForInsertedPolyline
// Entry Point: 008ccee0
// Size: 608 bytes
// Signature: undefined __thiscall updateEdgeInfosForInsertedPolyline(FillPlaneGeometry * this, vector * param_1, uint param_2, vector * param_3, Brep * param_4)


/* FillPlaneGeometry::updateEdgeInfosForInsertedPolyline(std::__ndk1::vector<FillPlaneGeometry::EdgeInfo,
   std::__ndk1::allocator<FillPlaneGeometry::EdgeInfo> >&, unsigned int,
   std::__ndk1::vector<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >,
   std::__ndk1::allocator<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> > >
   > const&, Brep&) */

FillPlaneGeometry * __thiscall
FillPlaneGeometry::updateEdgeInfosForInsertedPolyline
          (FillPlaneGeometry *this,vector *param_1,uint param_2,vector *param_3,Brep *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  
  lVar3 = *(long *)param_1;
  if (*(long *)(param_1 + 8) - lVar3 != 0) {
    uVar8 = 0;
    uVar10 = (*(long *)(param_1 + 8) - lVar3 >> 2) * -0x5555555555555555;
    do {
      puVar11 = (uint *)(lVar3 + uVar8 * 0xc + 4);
      uVar13 = *puVar11;
      if (param_2 <= uVar13) {
        *puVar11 = uVar13 + 1;
      }
      puVar11 = (uint *)(lVar3 + uVar8 * 0xc + 8);
      uVar13 = *puVar11;
      if (param_2 <= uVar13) {
        *puVar11 = uVar13 + 1;
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 <= uVar10 && uVar10 - uVar8 != 0);
  }
  lVar12 = *(long *)param_3;
  uVar13 = param_2 + 1;
  uVar8 = (*(long *)(param_3 + 8) - lVar12 >> 3) * -0x5555555555555555;
  piVar7 = *(int **)(lVar12 + (ulong)param_2 * 0x18);
  uVar9 = (uint)uVar8;
  uVar2 = 0;
  if (uVar13 < uVar9) {
    uVar2 = param_2 + 1;
  }
  uVar1 = uVar9;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  iVar4 = *piVar7;
  if (1 < uVar9) {
    this = (FillPlaneGeometry *)0x18;
    lVar14 = (uVar8 & 0xffffffff) - 1;
    do {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar13 / uVar8;
      }
      iVar5 = **(int **)(lVar12 + ((ulong)uVar13 - uVar10 * uVar8) * 0x18);
      if (iVar5 != iVar4) {
        uVar13 = iVar5 + 2;
        if ((iVar5 - 1U & 3) != 0) {
          uVar13 = iVar5 - 1U;
        }
        uVar13 = *(uint *)(*(long *)(param_4 + 0x2f68) + (ulong)uVar13 * 8 + 4);
        goto LAB_008ccfe8;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uVar13 = 0xffffffff;
LAB_008ccfe8:
  uVar8 = *(long *)(lVar12 + (ulong)param_2 * 0x18 + 8) - (long)piVar7;
  if ((uVar8 & 0x3fffffff8) != 0) {
    lVar12 = *(long *)(param_4 + 0x2f68);
    uVar9 = iVar4 - 2;
    if ((iVar4 + 1U & 3) != 0) {
      uVar9 = iVar4 + 1U;
    }
    this = (FillPlaneGeometry *)(ulong)uVar9;
    uVar10 = 1;
    do {
      uVar9 = piVar7[uVar10];
      *(undefined *)(lVar3 + (ulong)(((uVar9 & 3) + (uVar9 >> 2) * 3) - 1) * 0xc) = 1;
      if (uVar13 != uVar9) {
        lVar14 = *(long *)(param_4 + 0x2f68);
        do {
          puVar11 = (uint *)(lVar3 + (ulong)(((uVar13 & 3) + (uVar13 >> 2) * 3) - 1) * 0xc + 4);
          uVar6 = *puVar11;
          if (uVar6 == 0xffffffff || uVar6 == uVar1 - 1) {
            *puVar11 = param_2;
          }
          uVar6 = uVar13 + 2;
          if ((uVar13 - 1 & 3) != 0) {
            uVar6 = uVar13 - 1;
          }
          uVar13 = *(uint *)(lVar14 + (ulong)uVar6 * 8 + 4);
        } while (uVar13 != uVar9);
      }
      iVar4 = *(int *)(lVar12 + (ulong)uVar9 * 8 + 4);
      uVar6 = iVar4 - 1;
      uVar13 = iVar4 + 2;
      if ((uVar6 & 3) != 0) {
        uVar13 = uVar6;
      }
      uVar13 = *(uint *)(lVar12 + (ulong)uVar13 * 8 + 4);
      while (uVar6 = (uint)this, uVar6 != uVar9) {
        puVar11 = (uint *)(lVar3 + (ulong)(((uVar6 & 3) + (uVar6 >> 2) * 3) - 1) * 0xc + 8);
        uVar6 = *puVar11;
        if (uVar6 == 0xffffffff || uVar6 == uVar2) {
          *puVar11 = param_2;
        }
        iVar4 = *(int *)(lVar12 + (long)this * 8 + 4);
        uVar6 = iVar4 - 2;
        if ((iVar4 + 1U & 3) != 0) {
          uVar6 = iVar4 + 1;
        }
        this = (FillPlaneGeometry *)(ulong)uVar6;
      }
      uVar6 = uVar9 - 2;
      uVar10 = uVar10 + 1;
      if ((uVar9 + 1 & 3) != 0) {
        uVar6 = uVar9 + 1;
      }
      this = (FillPlaneGeometry *)(ulong)uVar6;
    } while (uVar10 != (uVar8 >> 2 & 0xffffffff));
  }
  return this;
}


