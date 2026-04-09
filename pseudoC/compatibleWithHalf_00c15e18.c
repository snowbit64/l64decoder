// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWithHalf
// Entry Point: 00c15e18
// Size: 104 bytes
// Signature: undefined compatibleWithHalf(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AST_ConstantNode::Value::compatibleWithHalf() const */

bool AST_ConstantNode::Value::compatibleWithHalf(void)

{
  bool bVar1;
  undefined4 *in_x0;
  
  bVar1 = false;
  switch(*in_x0) {
  case 3:
    bVar1 = 0x47000000 < (in_x0[1] & 0x7f800000);
    break;
  default:
    goto switchD_00c15e44_caseD_4;
  case 5:
  case 7:
    bVar1 = 0xffe < in_x0[1] + 0x7ff;
    break;
  case 6:
  case 8:
    bVar1 = 0x7ff < (uint)in_x0[1];
  }
  bVar1 = !bVar1;
switchD_00c15e44_caseD_4:
  return bVar1;
}


