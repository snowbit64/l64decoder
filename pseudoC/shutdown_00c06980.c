// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shutdown
// Entry Point: 00c06980
// Size: 4 bytes
// Signature: undefined shutdown(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderConverter::shutdown() */

void ShaderConverter::shutdown(void)

{
  Context *in_x0;
  
  HlslParser::globalShutdown(in_x0);
  return;
}


