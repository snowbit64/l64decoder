// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strCONNECTION_FAILED_REASON
// Entry Point: 00b396dc
// Size: 40 bytes
// Signature: undefined __cdecl strCONNECTION_FAILED_REASON(CONNECTION_FAILED_REASON param_1)


/* MasterServerManager::strCONNECTION_FAILED_REASON(MasterServerUtil::CONNECTION_FAILED_REASON) */

char * MasterServerManager::strCONNECTION_FAILED_REASON(CONNECTION_FAILED_REASON param_1)

{
  if (0xb < param_1) {
    return "Unknown CONNECTION_FAILED_REASON value";
  }
  return &DAT_00524e20 + *(int *)(&DAT_00524e20 + (ulong)param_1 * 4);
}


