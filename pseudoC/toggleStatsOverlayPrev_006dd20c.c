// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toggleStatsOverlayPrev
// Entry Point: 006dd20c
// Size: 20 bytes
// Signature: undefined toggleStatsOverlayPrev(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::toggleStatsOverlayPrev() */

void EngineApplication::toggleStatsOverlayPrev(void)

{
  StatsOverlayManager::getInstance();
  StatsOverlayManager::toggleStatsPrev();
  return;
}


