// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMetalShaderProfile
// Entry Point: 00c2a56c
// Size: 24 bytes
// Signature: undefined getMetalShaderProfile(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_HllConvertUtil::ConversionContext::getMetalShaderProfile() const */

char * IR_HllConvertUtil::ConversionContext::getMetalShaderProfile(void)

{
  long in_x0;
  
  return "vertex" + (ulong)*(uint *)(in_x0 + 0x14) * 10;
}


