// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWithUint16
// Entry Point: 00c15f70
// Size: 72 bytes
// Signature: undefined compatibleWithUint16(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_ConstantNode::Value::compatibleWithUint16() const */

bool AST_ConstantNode::Value::compatibleWithUint16(void)

{
  bool bVar1;
  int *in_x0;
  
  if (*in_x0 - 5U < 5) {
    bVar1 = true;
    switch(*in_x0) {
    default:
      return (uint)in_x0[1] < 0x10000;
    case 9:
      goto switchD_00c15f9c_caseD_9;
    }
  }
  bVar1 = false;
switchD_00c15f9c_caseD_9:
  return bVar1;
}


