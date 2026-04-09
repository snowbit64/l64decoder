// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPolygonRoundingMode
// Entry Point: 00b8778c
// Size: 8 bytes
// Signature: undefined __thiscall setPolygonRoundingMode(DensityMap * this, IntervalRoundingMode param_1)


/* DensityMap::setPolygonRoundingMode(MathUtil::IntervalRoundingMode) */

void __thiscall DensityMap::setPolygonRoundingMode(DensityMap *this,IntervalRoundingMode param_1)

{
  *(IntervalRoundingMode *)(this + 0x100) = param_1;
  return;
}


