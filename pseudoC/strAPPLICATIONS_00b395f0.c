// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strAPPLICATIONS
// Entry Point: 00b395f0
// Size: 36 bytes
// Signature: undefined __cdecl strAPPLICATIONS(APPLICATIONS param_1)


/* MasterServerManager::strAPPLICATIONS(NetworkManagerBase::APPLICATIONS) */

char * MasterServerManager::strAPPLICATIONS(APPLICATIONS param_1)

{
  if (2 < param_1) {
    return "Unknown APPLICATIONS value";
  }
  return (&PTR_s_APP_MASTERSERVER_00fe9b08)[param_1];
}


