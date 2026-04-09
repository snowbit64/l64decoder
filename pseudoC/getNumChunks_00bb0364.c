// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumChunks
// Entry Point: 00bb0364
// Size: 16 bytes
// Signature: undefined getNumChunks(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsSerialization::BtSerializerWrapper::getNumChunks() const */

ulong Bt2PhysicsSerialization::BtSerializerWrapper::getNumChunks(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8)) >> 3;
}


