// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStateAt
// Entry Point: 00a64000
// Size: 72 bytes
// Signature: undefined __thiscall setStateAt(FoliageDataPlane * this, uint param_1, uint param_2, uint param_3)


/* FoliageDataPlane::setStateAt(unsigned int, unsigned int, unsigned int) */

void __thiscall
FoliageDataPlane::setStateAt(FoliageDataPlane *this,uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x58);
  if (*(ChunkedBitSquare **)(lVar1 + 0x10) != (ChunkedBitSquare *)0x0) {
    ChunkedBitSquare::writeBits
              (*(ChunkedBitSquare **)(lVar1 + 0x10),param_1,param_2,*(uint *)(this + 0xa4),
               *(uint *)(this + 0xa8),param_3);
    return;
  }
  DensityMapAccessUtil::writeBits
            (*(BitVector **)(lVar1 + 0x18),*(uint *)(lVar1 + 0x2c),*(uint *)(lVar1 + 0x24),param_1,
             param_2,*(uint *)(this + 0xa4),*(uint *)(this + 0xa8),param_3);
  return;
}


