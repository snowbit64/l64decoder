// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProfilerStats
// Entry Point: 0075d614
// Size: 4 bytes
// Signature: undefined __thiscall ~ProfilerStats(ProfilerStats * this)


/* ProfilerStats::~ProfilerStats() */

void __thiscall ProfilerStats::~ProfilerStats(ProfilerStats *this)

{
  operator_delete(this);
  return;
}


