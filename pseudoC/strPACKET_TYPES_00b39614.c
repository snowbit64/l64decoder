// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strPACKET_TYPES
// Entry Point: 00b39614
// Size: 120 bytes
// Signature: undefined __cdecl strPACKET_TYPES(PACKET_TYPES param_1)


/* MasterServerManager::strPACKET_TYPES(NetworkManagerBase::PACKET_TYPES) */

char * MasterServerManager::strPACKET_TYPES(PACKET_TYPES param_1)

{
  if (param_1 < 0x12) {
    return (&PTR_s_TYPE_APPLICATION_00fe9b20)[param_1];
  }
  if (param_1 - 0x19 < 5) {
    return (&PTR_s_TYPE_TIMESTAMP_00fe9bf0)[(int)(param_1 - 0x19)];
  }
  if ((int)param_1 < 0x5b) {
    return "Unknown PACKET_TYPES value";
  }
  if (2 < param_1 - 0x5b) {
    return "Unknown APPLICATIONS value";
  }
  return (&PTR_s_APP_MASTERSERVER_00fe9b08)[param_1 - 0x5b];
}


