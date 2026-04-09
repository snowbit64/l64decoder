// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFreeCompactHeightfield
// Entry Point: 00dd9a98
// Size: 72 bytes
// Signature: undefined __cdecl rcFreeCompactHeightfield(rcCompactHeightfield * param_1)


/* rcFreeCompactHeightfield(rcCompactHeightfield*) */

void rcFreeCompactHeightfield(rcCompactHeightfield *param_1)

{
  if (param_1 != (rcCompactHeightfield *)0x0) {
    rcFree(*(void **)(param_1 + 0x40));
    rcFree(*(void **)(param_1 + 0x48));
    rcFree(*(void **)(param_1 + 0x50));
    rcFree(*(void **)(param_1 + 0x58));
    rcFree(param_1);
    return;
  }
  return;
}


