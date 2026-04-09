// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWithInt16
// Entry Point: 00c15ec8
// Size: 80 bytes
// Signature: undefined compatibleWithInt16(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_ConstantNode::Value::compatibleWithInt16() const */

bool AST_ConstantNode::Value::compatibleWithInt16(void)

{
  undefined4 *in_x0;
  
  switch(*in_x0) {
  case 5:
  case 7:
    return in_x0[1] == (int)(short)in_x0[1];
  case 6:
  case 8:
    return (uint)in_x0[1] < 0x8000;
  default:
    return false;
  }
}


