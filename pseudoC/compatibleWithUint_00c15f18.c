// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWithUint
// Entry Point: 00c15f18
// Size: 88 bytes
// Signature: undefined compatibleWithUint(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_ConstantNode::Value::compatibleWithUint() const */

uint AST_ConstantNode::Value::compatibleWithUint(void)

{
  uint uVar1;
  uint *in_x0;
  
  uVar1 = *in_x0;
  if (uVar1 < 10) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x340U) != 0) {
      return 1;
    }
    if ((1 << (ulong)(uVar1 & 0x1f) & 0xa0U) != 0) {
      return ~in_x0[1] >> 0x1f;
    }
  }
  return 0;
}


