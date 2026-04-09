// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isDouble
// Entry Point: 00ec2680
// Size: 12 bytes
// Signature: undefined isDouble(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::MyVertexIndex::isDouble() const */

byte FLOAT_MATH::MyVertexIndex::isDouble(void)

{
  long in_x0;
  
  return *(byte *)(in_x0 + 8) & 1;
}


