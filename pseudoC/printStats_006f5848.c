// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printStats
// Entry Point: 006f5848
// Size: 36 bytes
// Signature: undefined printStats(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StatsOverlayManager::printStats() */

void StatsOverlayManager::printStats(void)

{
  uint uVar1;
  long *in_x0;
  
  if (*(int *)(in_x0 + 3) != 0) {
    uVar1 = *(int *)(in_x0 + 3) - 1;
    *(undefined *)
     (*(long *)(*in_x0 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)) + 9) =
         1;
  }
  return;
}


