// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compressAllShadersAggressively
// Entry Point: 00bf827c
// Size: 132 bytes
// Signature: undefined compressAllShadersAggressively(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CompiledShaderArchive::compressAllShadersAggressively() */

void CompiledShaderArchive::compressAllShadersAggressively(void)

{
  CompiledShaderArchive *in_x0;
  CompressionDictionary *this;
  MarkovHuffmanTree *this_00;
  
  decompressAllShaders(in_x0,0);
  this = *(CompressionDictionary **)(in_x0 + 0x78);
  if (this != (CompressionDictionary *)0x0) {
    CompressionDictionary::~CompressionDictionary(this);
    operator_delete(this);
  }
  this_00 = *(MarkovHuffmanTree **)(in_x0 + 0x80);
  *(undefined8 *)(in_x0 + 0x78) = 0;
  if (this_00 != (MarkovHuffmanTree *)0x0) {
    MarkovHuffmanTree::~MarkovHuffmanTree(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(in_x0 + 0x80) = 0;
  genDictionary();
  compressAllShadersUsingDictionary(in_x0,true);
  genHuffman(in_x0,0x12);
  compressAllShadersUsingHuffman(in_x0,true);
  return;
}


