// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strSTATE
// Entry Point: 00b395c8
// Size: 40 bytes
// Signature: undefined __cdecl strSTATE(STATE param_1)


/* MasterServerManager::strSTATE(MasterServerManager::STATE) */

char * MasterServerManager::strSTATE(STATE param_1)

{
  if (9 < param_1) {
    return "Unknown STATE value";
  }
  return &DAT_00524d7c + *(int *)(&DAT_00524d7c + (ulong)param_1 * 4);
}


