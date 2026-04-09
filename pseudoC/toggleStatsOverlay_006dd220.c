// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toggleStatsOverlay
// Entry Point: 006dd220
// Size: 20 bytes
// Signature: undefined toggleStatsOverlay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::toggleStatsOverlay() */

void EngineApplication::toggleStatsOverlay(void)

{
  StatsOverlayManager::getInstance();
  StatsOverlayManager::toggleStats();
  return;
}


