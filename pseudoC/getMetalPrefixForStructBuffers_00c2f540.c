// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMetalPrefixForStructBuffers
// Entry Point: 00c2f540
// Size: 28 bytes
// Signature: undefined __cdecl getMetalPrefixForStructBuffers(bool param_1)


/* IR_HllConvertUtil::getMetalPrefixForStructBuffers(bool) */

char * IR_HllConvertUtil::getMetalPrefixForStructBuffers(bool param_1)

{
  char *pcVar1;
  
  pcVar1 = "METAL_RWBUFFER_";
  if (!param_1) {
    pcVar1 = "METAL_BUFFER_";
  }
  return pcVar1;
}


