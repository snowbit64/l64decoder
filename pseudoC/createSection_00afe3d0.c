// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSection
// Entry Point: 00afe3d0
// Size: 16 bytes
// Signature: undefined __thiscall createSection(GpuProfilerManager * this, PROFILE_SECTION param_1, char * param_2)


/* GpuProfilerManager::createSection(GpuProfilerManager::PROFILE_SECTION, char const*) */

void __thiscall
GpuProfilerManager::createSection(GpuProfilerManager *this,PROFILE_SECTION param_1,char *param_2)

{
  *(char **)(this + (ulong)param_1 * 0x78) = param_2;
  *(char **)((long)(this + (ulong)param_1 * 0x78) + 8) = (char *)0x0;
  return;
}


