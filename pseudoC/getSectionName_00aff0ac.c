// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSectionName
// Entry Point: 00aff0ac
// Size: 32 bytes
// Signature: undefined __thiscall getSectionName(GpuProfilerManager * this, PROFILE_SECTION param_1)


/* GpuProfilerManager::getSectionName(GpuProfilerManager::PROFILE_SECTION) const */

undefined8 __thiscall
GpuProfilerManager::getSectionName(GpuProfilerManager *this,PROFILE_SECTION param_1)

{
  if ((int)param_1 < 0x28) {
    return *(undefined8 *)(this + (ulong)param_1 * 0x78);
  }
  return 0;
}


