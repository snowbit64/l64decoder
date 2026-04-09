// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStateAt
// Entry Point: 00a63f4c
// Size: 180 bytes
// Signature: undefined __thiscall getStateAt(FoliageDataPlane * this, uint param_1, uint param_2)


/* FoliageDataPlane::getStateAt(unsigned int, unsigned int) */

ulong __thiscall FoliageDataPlane::getStateAt(FoliageDataPlane *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(uint *)(this + 0xa8);
  if (uVar2 == 0) {
    return 0;
  }
  lVar6 = *(long *)(this + 0x58);
  if (*(ChunkedBitSquare **)(lVar6 + 0x10) != (ChunkedBitSquare *)0x0) {
    uVar4 = ChunkedBitSquare::readBits
                      (*(ChunkedBitSquare **)(lVar6 + 0x10),param_1,param_2,*(uint *)(this + 0xa4),
                       uVar2);
    return uVar4;
  }
  lVar7 = **(long **)(lVar6 + 0x18);
  uVar3 = *(uint *)(this + 0xa4) +
          (param_1 + *(int *)(lVar6 + 0x24) * param_2) * *(int *)(lVar6 + 0x2c);
  lVar6 = *(long *)(lVar7 + (ulong)(uVar3 >> 0x13) * 8);
  uVar4 = (ulong)(uVar3 >> 3) & 0xffff;
  if ((uint)uVar4 < 0xfffd) {
    uVar5 = *(uint *)(lVar6 + uVar4);
  }
  else {
    uVar5 = (uVar3 >> 3) + 1;
    uVar1 = (uVar3 >> 3) + 2;
    uVar5 = (uint)CONCAT12(*(undefined *)
                            (*(long *)(lVar7 + (ulong)(uVar1 >> 0x10) * 8) + ((ulong)uVar1 & 0xffff)
                            ),CONCAT11(*(undefined *)
                                        (*(long *)(lVar7 + (ulong)(uVar5 >> 0x10) * 8) +
                                        ((ulong)uVar5 & 0xffff)),*(undefined *)(lVar6 + uVar4)));
  }
  return (ulong)(uVar5 >> (ulong)(uVar3 & 7) & (-1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU) & 0xffff)
  ;
}


