// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBasicString
// Entry Point: 00c28200
// Size: 48 bytes
// Signature: undefined getBasicString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SHC_Type::getBasicString() const */

char * SHC_Type::getBasicString(void)

{
  uint uVar1;
  long in_x0;
  
  uVar1 = *(uint *)(*(long *)(in_x0 + 8) + 8);
  if (uVar1 < 10) {
    return &DAT_0053de90 + *(int *)(&DAT_0053de90 + (long)(int)uVar1 * 4);
  }
  return "unknown type";
}


