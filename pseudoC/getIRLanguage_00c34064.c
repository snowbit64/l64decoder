// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIRLanguage
// Entry Point: 00c34064
// Size: 32 bytes
// Signature: undefined getIRLanguage(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_HllConvertUtil::SharedContext::getIRLanguage() const */

int IR_HllConvertUtil::SharedContext::getIRLanguage(void)

{
  int iVar1;
  int *in_x0;
  
  iVar1 = (uint)(*in_x0 - 3U < 2) << 1;
  if (*in_x0 == 5) {
    iVar1 = 1;
  }
  return iVar1;
}


