// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ErrorName
// Entry Point: 00e01a3c
// Size: 20 bytes
// Signature: undefined ErrorName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLDocument::ErrorName() const */

undefined8 tinyxml2::XMLDocument::ErrorName(void)

{
  long in_x0;
  
  return *(undefined8 *)(_errorNames + (ulong)*(uint *)(in_x0 + 0x6c) * 8);
}


