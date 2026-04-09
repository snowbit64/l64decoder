// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSection
// Entry Point: 00b012c0
// Size: 16 bytes
// Signature: undefined __thiscall getSection(ProfilerManager * this, PROFILE_SECTION param_1)


/* ProfilerManager::getSection(ProfilerManager::PROFILE_SECTION) */

long __thiscall ProfilerManager::getSection(ProfilerManager *this,PROFILE_SECTION param_1)

{
  return *(long *)this + (ulong)param_1 * 0x140;
}


