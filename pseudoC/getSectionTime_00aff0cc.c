// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSectionTime
// Entry Point: 00aff0cc
// Size: 32 bytes
// Signature: undefined __thiscall getSectionTime(GpuProfilerManager * this, PROFILE_SECTION param_1)


/* GpuProfilerManager::getSectionTime(GpuProfilerManager::PROFILE_SECTION) const */

undefined4 __thiscall
GpuProfilerManager::getSectionTime(GpuProfilerManager *this,PROFILE_SECTION param_1)

{
  if ((int)param_1 < 0x28) {
    return *(undefined4 *)(this + (ulong)param_1 * 0x78 + 8);
  }
  return 0;
}


