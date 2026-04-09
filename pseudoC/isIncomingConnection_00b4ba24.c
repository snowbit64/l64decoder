// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isIncomingConnection
// Entry Point: 00b4ba24
// Size: 16 bytes
// Signature: undefined isIncomingConnection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ENetConnection::isIncomingConnection() */

bool ENetConnection::isIncomingConnection(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x18) != 0;
}


