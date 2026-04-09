// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDeltaDensityHeight
// Entry Point: 00a71cb0
// Size: 200 bytes
// Signature: undefined __thiscall getDeltaDensityHeight(TerrainFillDataPlane * this, uint param_1, uint param_2, float param_3)


/* TerrainFillDataPlane::getDeltaDensityHeight(unsigned int, unsigned int, float) */

float __thiscall
TerrainFillDataPlane::getDeltaDensityHeight
          (TerrainFillDataPlane *this,uint param_1,uint param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(this + 0x58);
  if (*(ChunkedBitSquare **)(lVar5 + 0x10) == (ChunkedBitSquare *)0x0) {
    lVar6 = **(long **)(lVar5 + 0x18);
    uVar2 = *(uint *)(this + 0x88) +
            (param_1 + *(int *)(lVar5 + 0x24) * param_2) * *(int *)(lVar5 + 0x2c);
    lVar5 = *(long *)(lVar6 + (ulong)(uVar2 >> 0x13) * 8);
    uVar3 = (ulong)(uVar2 >> 3) & 0xffff;
    if ((uint)uVar3 < 0xfffd) {
      uVar4 = *(uint *)(lVar5 + uVar3);
    }
    else {
      uVar4 = (uVar2 >> 3) + 1;
      uVar1 = (uVar2 >> 3) + 2;
      uVar4 = (uint)CONCAT12(*(undefined *)
                              (*(long *)(lVar6 + (ulong)(uVar1 >> 0x10) * 8) +
                              ((ulong)uVar1 & 0xffff)),
                             CONCAT11(*(undefined *)
                                       (*(long *)(lVar6 + (ulong)(uVar4 >> 0x10) * 8) +
                                       ((ulong)uVar4 & 0xffff)),*(undefined *)(lVar5 + uVar3)));
    }
    uVar3 = (ulong)(uVar4 >> (ulong)(uVar2 & 7) &
                    (-1 << (ulong)(*(uint *)(this + 0x8c) & 0x1f) ^ 0xffffffffU) & 0xffff);
  }
  else {
    uVar3 = ChunkedBitSquare::readBits
                      (*(ChunkedBitSquare **)(lVar5 + 0x10),param_1,param_2,*(uint *)(this + 0x88),
                       *(uint *)(this + 0x8c));
  }
  return (float)(uVar3 & 0xffffffff) * param_3;
}


