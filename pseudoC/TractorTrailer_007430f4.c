// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TractorTrailer
// Entry Point: 007430f4
// Size: 16 bytes
// Signature: undefined __thiscall TractorTrailer(TractorTrailer * this, uint param_1, VehicleNavigationTrailerData * param_2, bitset param_3)


/* TractorTrailer::TractorTrailer(unsigned int, VehicleNavigationTrailerData const*,
   std::__ndk1::bitset<4ul>) */

void __thiscall
TractorTrailer::TractorTrailer
          (TractorTrailer *this,uint param_1,VehicleNavigationTrailerData *param_2,bitset param_3)

{
  *(VehicleNavigationTrailerData **)(this + 0x50) = param_2;
  *(uint *)(this + 0x58) = param_1;
  *(ulong *)(this + 0x60) = (ulong)param_3;
  return;
}


