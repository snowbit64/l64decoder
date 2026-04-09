// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00863a9c
// Size: 1140 bytes
// Signature: undefined __thiscall operator()(GetHeightTypeRayWalkFunc * this, int param_1, int param_2)


/* DensityMapHeightUpdater::GetHeightTypeRayWalkFunc::TEMPNAMEPLACEHOLDERVALUE(int, int) */

undefined8 __thiscall
DensityMapHeightUpdater::GetHeightTypeRayWalkFunc::operator()
          (GetHeightTypeRayWalkFunc *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  uVar2 = DensityMap::getSquareSize();
  iVar6 = *(int *)this;
  if (iVar6 == 0) {
    if (uVar2 <= (uint)param_1) {
      return 1;
    }
    if (uVar2 <= (uint)param_2) {
      return 1;
    }
    lVar7 = *(long *)(this + 0x10);
    if (*(ChunkedBitSquare **)(lVar7 + 0x10) == (ChunkedBitSquare *)0x0) {
      lVar9 = **(long **)(lVar7 + 0x18);
      uVar2 = *(uint *)(this + 0x18) +
              (param_1 + *(int *)(lVar7 + 0x24) * param_2) * *(int *)(lVar7 + 0x2c);
      uVar8 = (ulong)(uVar2 >> 3) & 0xffff;
      lVar7 = *(long *)(lVar9 + (ulong)(uVar2 >> 0x13) * 8);
      if ((uint)uVar8 < 0xfffd) {
        uVar3 = *(uint *)(lVar7 + uVar8);
      }
      else {
        uVar3 = (uVar2 >> 3) + 1;
        uVar4 = (uVar2 >> 3) + 2;
        uVar3 = (uint)CONCAT12(*(undefined *)
                                (*(long *)(lVar9 + (ulong)(uVar4 >> 0x10) * 8) +
                                ((ulong)uVar4 & 0xffff)),
                               CONCAT11(*(undefined *)
                                         (*(long *)(lVar9 + (ulong)(uVar3 >> 0x10) * 8) +
                                         ((ulong)uVar3 & 0xffff)),*(undefined *)(lVar7 + uVar8)));
      }
      uVar3 = uVar3 >> (ulong)(uVar2 & 7) &
              (-1 << (ulong)(*(uint *)(this + 0x1c) & 0x1f) ^ 0xffffffffU) & 0xffff;
    }
    else {
      uVar3 = ChunkedBitSquare::readBits
                        (*(ChunkedBitSquare **)(lVar7 + 0x10),param_1,param_2,*(uint *)(this + 0x18)
                         ,*(uint *)(this + 0x1c));
    }
    if (uVar3 != 0) {
LAB_00863e58:
      *(uint *)(this + 4) = uVar3;
      return 0;
    }
  }
  else {
    iVar10 = -iVar6;
    if (iVar6 < iVar10 + 1) {
      return 1;
    }
    iVar11 = iVar6;
    do {
      iVar11 = iVar11 + -1;
      uVar4 = *(uint *)(this + 0x18);
      uVar5 = *(uint *)(this + 0x1c);
      lVar7 = *(long *)(this + 0x10);
      uVar3 = param_2 + iVar11;
      if ((uVar3 < uVar2) && (uVar1 = param_1 - iVar6, uVar1 < uVar2)) {
        if (*(ChunkedBitSquare **)(lVar7 + 0x10) == (ChunkedBitSquare *)0x0) {
          lVar9 = **(long **)(lVar7 + 0x18);
          uVar4 = uVar4 + (uVar1 + *(int *)(lVar7 + 0x24) * uVar3) * *(int *)(lVar7 + 0x2c);
          lVar7 = *(long *)(lVar9 + (ulong)(uVar4 >> 0x13) * 8);
          uVar8 = (ulong)(uVar4 >> 3) & 0xffff;
          if ((uint)uVar8 < 0xfffd) {
            uVar3 = *(uint *)(lVar7 + uVar8);
          }
          else {
            uVar3 = (uVar4 >> 3) + 1;
            uVar1 = (uVar4 >> 3) + 2;
            uVar3 = (uint)CONCAT12(*(undefined *)
                                    (*(long *)(lVar9 + (ulong)(uVar1 >> 0x10) * 8) +
                                    ((ulong)uVar1 & 0xffff)),
                                   CONCAT11(*(undefined *)
                                             (*(long *)(lVar9 + (ulong)(uVar3 >> 0x10) * 8) +
                                             ((ulong)uVar3 & 0xffff)),*(undefined *)(lVar7 + uVar8))
                                  );
          }
          uVar3 = uVar3 >> (ulong)(uVar4 & 7) & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) & 0xffff
          ;
        }
        else {
          uVar3 = ChunkedBitSquare::readBits
                            (*(ChunkedBitSquare **)(lVar7 + 0x10),uVar1,uVar3,uVar4,uVar5);
        }
        if (uVar3 != 0) goto LAB_00863e58;
        uVar4 = *(uint *)(this + 0x18);
        uVar5 = *(uint *)(this + 0x1c);
        iVar6 = *(int *)this;
        lVar7 = *(long *)(this + 0x10);
      }
      uVar3 = param_1 + iVar10 + 1;
      if ((uVar3 < uVar2) && (uVar1 = param_2 - iVar6, uVar1 < uVar2)) {
        if (*(ChunkedBitSquare **)(lVar7 + 0x10) == (ChunkedBitSquare *)0x0) {
          lVar9 = **(long **)(lVar7 + 0x18);
          uVar4 = *(int *)(lVar7 + 0x2c) +
                  *(int *)(lVar7 + 0x2c) * (param_1 + iVar10 + *(int *)(lVar7 + 0x24) * uVar1) +
                  uVar4;
          lVar7 = *(long *)(lVar9 + (ulong)(uVar4 >> 0x13) * 8);
          uVar8 = (ulong)(uVar4 >> 3) & 0xffff;
          if ((uint)uVar8 < 0xfffd) {
            uVar3 = *(uint *)(lVar7 + uVar8);
          }
          else {
            uVar3 = (uVar4 >> 3) + 1;
            uVar1 = (uVar4 >> 3) + 2;
            uVar3 = (uint)CONCAT12(*(undefined *)
                                    (*(long *)(lVar9 + (ulong)(uVar1 >> 0x10) * 8) +
                                    ((ulong)uVar1 & 0xffff)),
                                   CONCAT11(*(undefined *)
                                             (*(long *)(lVar9 + (ulong)(uVar3 >> 0x10) * 8) +
                                             ((ulong)uVar3 & 0xffff)),*(undefined *)(lVar7 + uVar8))
                                  );
          }
          uVar3 = uVar3 >> (ulong)(uVar4 & 7) & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) & 0xffff
          ;
        }
        else {
          uVar3 = ChunkedBitSquare::readBits
                            (*(ChunkedBitSquare **)(lVar7 + 0x10),uVar3,uVar1,uVar4,uVar5);
        }
        if (uVar3 != 0) goto LAB_00863e58;
        uVar4 = *(uint *)(this + 0x18);
        uVar5 = *(uint *)(this + 0x1c);
        iVar6 = *(int *)this;
        lVar7 = *(long *)(this + 0x10);
      }
      uVar3 = param_2 + 1 + iVar10;
      if ((uVar3 < uVar2) && (uVar1 = iVar6 + param_1, uVar1 < uVar2)) {
        if (*(ChunkedBitSquare **)(lVar7 + 0x10) == (ChunkedBitSquare *)0x0) {
          lVar9 = **(long **)(lVar7 + 0x18);
          uVar4 = uVar4 + (uVar1 + *(int *)(lVar7 + 0x24) * uVar3) * *(int *)(lVar7 + 0x2c);
          lVar7 = *(long *)(lVar9 + (ulong)(uVar4 >> 0x13) * 8);
          uVar8 = (ulong)(uVar4 >> 3) & 0xffff;
          if ((uint)uVar8 < 0xfffd) {
            uVar3 = *(uint *)(lVar7 + uVar8);
          }
          else {
            uVar3 = (uVar4 >> 3) + 1;
            uVar1 = (uVar4 >> 3) + 2;
            uVar3 = (uint)CONCAT12(*(undefined *)
                                    (*(long *)(lVar9 + (ulong)(uVar1 >> 0x10) * 8) +
                                    ((ulong)uVar1 & 0xffff)),
                                   CONCAT11(*(undefined *)
                                             (*(long *)(lVar9 + (ulong)(uVar3 >> 0x10) * 8) +
                                             ((ulong)uVar3 & 0xffff)),*(undefined *)(lVar7 + uVar8))
                                  );
          }
          uVar3 = uVar3 >> (ulong)(uVar4 & 7) & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) & 0xffff
          ;
        }
        else {
          uVar3 = ChunkedBitSquare::readBits
                            (*(ChunkedBitSquare **)(lVar7 + 0x10),uVar1,uVar3,uVar4,uVar5);
        }
        if (uVar3 != 0) goto LAB_00863e58;
        uVar4 = *(uint *)(this + 0x18);
        uVar5 = *(uint *)(this + 0x1c);
        iVar6 = *(int *)this;
        lVar7 = *(long *)(this + 0x10);
      }
      if (((uint)(param_1 + iVar11) < uVar2) && (uVar3 = iVar6 + param_2, uVar3 < uVar2)) {
        if (*(ChunkedBitSquare **)(lVar7 + 0x10) == (ChunkedBitSquare *)0x0) {
          uVar4 = uVar4 + (param_1 + iVar11 + *(int *)(lVar7 + 0x24) * uVar3) *
                          *(int *)(lVar7 + 0x2c);
          lVar9 = **(long **)(lVar7 + 0x18);
          lVar7 = *(long *)(lVar9 + (ulong)(uVar4 >> 0x13) * 8);
          uVar8 = (ulong)(uVar4 >> 3) & 0xffff;
          if ((uint)uVar8 < 0xfffd) {
            uVar3 = *(uint *)(lVar7 + uVar8);
          }
          else {
            uVar3 = (uVar4 >> 3) + 1;
            uVar1 = (uVar4 >> 3) + 2;
            uVar3 = (uint)CONCAT12(*(undefined *)
                                    (*(long *)(lVar9 + (ulong)(uVar1 >> 0x10) * 8) +
                                    ((ulong)uVar1 & 0xffff)),
                                   CONCAT11(*(undefined *)
                                             (*(long *)(lVar9 + (ulong)(uVar3 >> 0x10) * 8) +
                                             ((ulong)uVar3 & 0xffff)),*(undefined *)(lVar7 + uVar8))
                                  );
          }
          uVar3 = uVar3 >> (ulong)(uVar4 & 7) & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) & 0xffff
          ;
        }
        else {
          uVar3 = ChunkedBitSquare::readBits
                            (*(ChunkedBitSquare **)(lVar7 + 0x10),param_1 + iVar11,uVar3,uVar4,uVar5
                            );
        }
        if (uVar3 != 0) goto LAB_00863e58;
        iVar6 = *(int *)this;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar6);
  }
  return 1;
}


