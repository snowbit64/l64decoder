// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printStatsOverlay
// Entry Point: 006dd1f8
// Size: 20 bytes
// Signature: undefined printStatsOverlay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::printStatsOverlay() */

void EngineApplication::printStatsOverlay(void)

{
  StatsOverlayManager::getInstance();
  StatsOverlayManager::printStats();
  return;
}


