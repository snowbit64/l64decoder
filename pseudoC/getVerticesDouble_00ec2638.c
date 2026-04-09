// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVerticesDouble
// Entry Point: 00ec2638
// Size: 16 bytes
// Signature: undefined getVerticesDouble(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FLOAT_MATH::MyVertexIndex::getVerticesDouble() const */

long FLOAT_MATH::MyVertexIndex::getVerticesDouble(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = 0;
  if (*(long *)(in_x0 + 0x48) != *(long *)(in_x0 + 0x50)) {
    lVar1 = *(long *)(in_x0 + 0x48);
  }
  return lVar1;
}


