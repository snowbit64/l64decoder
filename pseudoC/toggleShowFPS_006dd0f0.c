// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toggleShowFPS
// Entry Point: 006dd0f0
// Size: 16 bytes
// Signature: undefined toggleShowFPS(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::toggleShowFPS() */

void EngineApplication::toggleShowFPS(void)

{
  long in_x0;
  
  *(byte *)(in_x0 + 0x1cc) = *(byte *)(in_x0 + 0x1cc) ^ 1;
  return;
}


