// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVerticesFloat
// Entry Point: 00ec2628
// Size: 16 bytes
// Signature: undefined getVerticesFloat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::MyVertexIndex::getVerticesFloat() const */

long FLOAT_MATH::MyVertexIndex::getVerticesFloat(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = 0;
  if (*(long *)(in_x0 + 0x60) != *(long *)(in_x0 + 0x68)) {
    lVar1 = *(long *)(in_x0 + 0x60);
  }
  return lVar1;
}


