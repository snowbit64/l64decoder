// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBufferedDecompressState
// Entry Point: 00b8d324
// Size: 20 bytes
// Signature: undefined __cdecl createBufferedDecompressState(BufferedDecompressState * param_1)


/* LZMACompressionUtil::createBufferedDecompressState(LZMACompressionUtil::BufferedDecompressState&)
    */

undefined8 LZMACompressionUtil::createBufferedDecompressState(BufferedDecompressState *param_1)

{
  param_1[0x88] = (BufferedDecompressState)0x0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return 1;
}


