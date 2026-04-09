// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkGetSessionData
// Entry Point: 00b3aab8
// Size: 72 bytes
// Signature: undefined checkGetSessionData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::checkGetSessionData() */

undefined8 MasterServerManager::checkGetSessionData(void)

{
  long in_x0;
  GenericMpManager *this;
  ulong uVar1;
  
  if (*(char *)(in_x0 + 0x4e0) != '\0') {
    this = (GenericMpManager *)GenericMpManager::getInstance();
    uVar1 = GenericMpManager::checkGetSessionData
                      (this,(bool *)(in_x0 + 0x4e1),(basic_string *)(in_x0 + 0x4e8));
    if ((uVar1 & 1) != 0) {
      *(undefined *)(in_x0 + 0x4e0) = 0;
      return 1;
    }
  }
  return 0;
}


