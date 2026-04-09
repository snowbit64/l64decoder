// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strPACKET_IDS
// Entry Point: 00b3968c
// Size: 40 bytes
// Signature: undefined __cdecl strPACKET_IDS(PACKET_IDS param_1)


/* MasterServerManager::strPACKET_IDS(MasterServerUtil::PACKET_IDS) */

char * MasterServerManager::strPACKET_IDS(PACKET_IDS param_1)

{
  if (0x1c < param_1) {
    return "Unknown PACKET_IDS value";
  }
  return &DAT_00524da4 + *(int *)(&DAT_00524da4 + (ulong)param_1 * 4);
}


