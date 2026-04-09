// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWithFloat
// Entry Point: 00c15db4
// Size: 100 bytes
// Signature: undefined compatibleWithFloat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_ConstantNode::Value::compatibleWithFloat() const */

bool AST_ConstantNode::Value::compatibleWithFloat(void)

{
  bool bVar1;
  undefined4 *in_x0;
  
  bVar1 = true;
  switch(*in_x0) {
  case 3:
    goto switchD_00c15de0_caseD_3;
  default:
    bVar1 = false;
switchD_00c15de0_caseD_3:
    return bVar1;
  case 5:
  case 7:
    return in_x0[1] + 0xffffff < 0x1ffffff;
  case 6:
  case 8:
    return *(char *)((long)in_x0 + 7) == '\0';
  }
}


