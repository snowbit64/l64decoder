// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBasicType
// Entry Point: 00c3a9d8
// Size: 40 bytes
// Signature: undefined getBasicType(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Const::getBasicType() const */

undefined4 IR_Const::getBasicType(void)

{
  int *in_x0;
  
  if (*in_x0 - 3U < 7) {
    return *(undefined4 *)(&DAT_0053e148 + (long)(int)(*in_x0 - 3U) * 4);
  }
  return 0;
}


