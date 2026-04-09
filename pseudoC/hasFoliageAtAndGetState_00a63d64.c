// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasFoliageAtAndGetState
// Entry Point: 00a63d64
// Size: 488 bytes
// Signature: undefined __thiscall hasFoliageAtAndGetState(FoliageDataPlane * this, uint param_1, uint param_2, uint * param_3)


/* FoliageDataPlane::hasFoliageAtAndGetState(unsigned int, unsigned int, unsigned int&) */

ulong __thiscall
FoliageDataPlane::hasFoliageAtAndGetState
          (FoliageDataPlane *this,uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar3 = *(uint *)(this + 0x80);
  if (uVar3 != 0xffffffff) {
    lVar5 = *(long *)(this + 0x58);
    uVar2 = *(uint *)(lVar5 + 0x20);
    if (uVar2 == 0) {
      if (uVar3 != 0) {
        return 0;
      }
    }
    else {
      if (*(ChunkedBitSquare **)(lVar5 + 0x10) == (ChunkedBitSquare *)0x0) {
        lVar8 = **(long **)(lVar5 + 0x18);
        uVar7 = (param_1 + *(int *)(lVar5 + 0x24) * param_2) * *(int *)(lVar5 + 0x2c);
        uVar4 = (ulong)(uVar7 >> 3) & 0xffff;
        lVar5 = *(long *)(lVar8 + (ulong)(uVar7 >> 0x13) * 8);
        if ((uint)uVar4 < 0xfffd) {
          uVar6 = *(uint *)(lVar5 + uVar4);
        }
        else {
          uVar6 = (uVar7 >> 3) + 1;
          uVar1 = (uVar7 >> 3) + 2;
          uVar6 = (uint)CONCAT12(*(undefined *)
                                  (*(long *)(lVar8 + (ulong)(uVar1 >> 0x10) * 8) +
                                  ((ulong)uVar1 & 0xffff)),
                                 CONCAT11(*(undefined *)
                                           (*(long *)(lVar8 + (ulong)(uVar6 >> 0x10) * 8) +
                                           ((ulong)uVar6 & 0xffff)),*(undefined *)(lVar5 + uVar4)));
        }
        uVar2 = uVar6 >> (ulong)(uVar7 & 7) & (-1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU) & 0xffff;
      }
      else {
        uVar2 = ChunkedBitSquare::readBits
                          (*(ChunkedBitSquare **)(lVar5 + 0x10),param_1,param_2,0,uVar2);
      }
      if (uVar2 != uVar3) {
        return 0;
      }
    }
  }
  uVar3 = *(uint *)(this + 0xa8);
  if (uVar3 == 0) {
    return 0;
  }
  lVar5 = *(long *)(this + 0x58);
  if (*(ChunkedBitSquare **)(lVar5 + 0x10) == (ChunkedBitSquare *)0x0) {
    lVar8 = **(long **)(lVar5 + 0x18);
    uVar2 = *(uint *)(this + 0xa4) +
            (param_1 + *(int *)(lVar5 + 0x24) * param_2) * *(int *)(lVar5 + 0x2c);
    uVar4 = (ulong)(uVar2 >> 3) & 0xffff;
    lVar5 = *(long *)(lVar8 + (ulong)(uVar2 >> 0x13) * 8);
    if ((uint)uVar4 < 0xfffd) {
      uVar7 = *(uint *)(lVar5 + uVar4);
    }
    else {
      uVar7 = (uVar2 >> 3) + 1;
      uVar6 = (uVar2 >> 3) + 2;
      uVar7 = (uint)CONCAT12(*(undefined *)
                              (*(long *)(lVar8 + (ulong)(uVar6 >> 0x10) * 8) +
                              ((ulong)uVar6 & 0xffff)),
                             CONCAT11(*(undefined *)
                                       (*(long *)(lVar8 + (ulong)(uVar7 >> 0x10) * 8) +
                                       ((ulong)uVar7 & 0xffff)),*(undefined *)(lVar5 + uVar4)));
    }
    uVar3 = uVar7 >> (ulong)(uVar2 & 7) & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU) & 0xffff;
    uVar4 = (ulong)uVar3;
    *param_3 = uVar3;
  }
  else {
    uVar4 = ChunkedBitSquare::readBits
                      (*(ChunkedBitSquare **)(lVar5 + 0x10),param_1,param_2,*(uint *)(this + 0xa4),
                       uVar3);
    uVar3 = (uint)uVar4;
    *param_3 = uVar3;
  }
  if (uVar3 != 0) {
    *param_3 = (int)uVar4 - 1;
    return 1;
  }
  return uVar4;
}


