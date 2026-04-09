// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumGeometryGroups
// Entry Point: 008d7e2c
// Size: 16 bytes
// Signature: undefined __cdecl getNumGeometryGroups(uint param_1)


/* ParticleSystem::getNumGeometryGroups(unsigned int) const */

bool ParticleSystem::getNumGeometryGroups(uint param_1)

{
  return *(int *)((ulong)param_1 + 0x1b0) != 0;
}


