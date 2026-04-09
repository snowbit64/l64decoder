// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 0090ba68
// Size: 20 bytes
// Signature: undefined __thiscall operator()(SortFoliageByTypeIndex * this, FoliageDataPlane * param_1, FoliageDataPlane * param_2)


/* I3DSave::SortFoliageByTypeIndex::TEMPNAMEPLACEHOLDERVALUE(FoliageDataPlane const*,
   FoliageDataPlane const*) const */

bool __thiscall
I3DSave::SortFoliageByTypeIndex::operator()
          (SortFoliageByTypeIndex *this,FoliageDataPlane *param_1,FoliageDataPlane *param_2)

{
  return *(uint *)(param_1 + 0x80) < *(uint *)(param_2 + 0x80);
}


