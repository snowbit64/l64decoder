// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyBufferedDecompressState
// Entry Point: 00b8d338
// Size: 44 bytes
// Signature: undefined __cdecl destroyBufferedDecompressState(BufferedDecompressState * param_1)


/* LZMACompressionUtil::destroyBufferedDecompressState(LZMACompressionUtil::BufferedDecompressState&)
    */

undefined8 LZMACompressionUtil::destroyBufferedDecompressState(BufferedDecompressState *param_1)

{
  if (param_1[0x88] != (BufferedDecompressState)0x0) {
    param_1[0x88] = (BufferedDecompressState)0x0;
    LzmaDec_Free(param_1,s_allocFreeForLzma);
  }
  return 1;
}


