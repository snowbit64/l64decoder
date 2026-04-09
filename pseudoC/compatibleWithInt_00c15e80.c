// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWithInt
// Entry Point: 00c15e80
// Size: 72 bytes
// Signature: undefined compatibleWithInt(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_ConstantNode::Value::compatibleWithInt() const */

uint AST_ConstantNode::Value::compatibleWithInt(void)

{
  int *in_x0;
  uint uVar1;
  
  if (*in_x0 - 5U < 4) {
    uVar1 = 1;
    switch(*in_x0) {
    case 6:
    case 8:
      return (uint)~in_x0[1] >> 0x1f;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


