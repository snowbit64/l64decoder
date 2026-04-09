// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strNAT_PUNCH_IDS
// Entry Point: 00b396b4
// Size: 40 bytes
// Signature: undefined __cdecl strNAT_PUNCH_IDS(NAT_PUNCH_IDS param_1)


/* MasterServerManager::strNAT_PUNCH_IDS(MasterServerUtil::NAT_PUNCH_IDS) */

char * MasterServerManager::strNAT_PUNCH_IDS(NAT_PUNCH_IDS param_1)

{
  if (1 < param_1) {
    return "Unknown NAT_PUNCH_IDS value";
  }
  return &DAT_00524e18 + *(int *)(&DAT_00524e18 + (ulong)param_1 * 4);
}


