// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllowsHandshake
// Entry Point: 00b4ba34
// Size: 16 bytes
// Signature: undefined getAllowsHandshake(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ENetConnection::getAllowsHandshake() const */

bool ENetConnection::getAllowsHandshake(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 8) == 1;
}


