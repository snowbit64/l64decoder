// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: modifiesState
// Entry Point: 00c16458
// Size: 24 bytes
// Signature: undefined modifiesState(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_OperatorNode::modifiesState() const */

uint AST_OperatorNode::modifiesState(void)

{
  long in_x0;
  
  return (uint)(&GISLParserUtil::s_operatorFlags)[*(uint *)(in_x0 + 0x48)] >> 1 & 1;
}


