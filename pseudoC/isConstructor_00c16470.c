// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isConstructor
// Entry Point: 00c16470
// Size: 24 bytes
// Signature: undefined isConstructor(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_OperatorNode::isConstructor() const */

uint AST_OperatorNode::isConstructor(void)

{
  long in_x0;
  
  return (uint)(&GISLParserUtil::s_operatorFlags)[*(uint *)(in_x0 + 0x48)] >> 3 & 1;
}


