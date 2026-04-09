// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDebugPC
// Entry Point: 00efac34
// Size: 16 bytes
// Signature: undefined getDebugPC(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::BytecodeBuilder::getDebugPC() const */

ulong Luau::BytecodeBuilder::getDebugPC(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0x28) - *(long *)(in_x0 + 0x20)) >> 2;
}


