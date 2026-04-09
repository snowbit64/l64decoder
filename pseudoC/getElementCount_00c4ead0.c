// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementCount
// Entry Point: 00c4ead0
// Size: 64 bytes
// Signature: undefined getElementCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Type::getElementCount() const */

int IR_Type::getElementCount(void)

{
  int iVar1;
  int *in_x0;
  
  iVar1 = *in_x0;
  if (iVar1 == 4) {
    return in_x0[4];
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      return in_x0[5];
    }
    return 1;
  }
  return in_x0[4] * in_x0[5];
}


