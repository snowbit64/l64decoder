// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closeConnection
// Entry Point: 00b3b6f4
// Size: 60 bytes
// Signature: undefined closeConnection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::closeConnection() */

void MasterServerManager::closeConnection(void)

{
  long in_x0;
  uint *puVar1;
  
  if (*(char *)(in_x0 + 0x17c) != '\0') {
    puVar1 = (uint *)ENetNetworkManager::getInstance();
    ENetNetworkManager::closeConnection(puVar1,(bool)((char)in_x0 + -0x78),'\x01');
    *(undefined *)(in_x0 + 0x17c) = 0;
  }
  return;
}


