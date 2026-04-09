// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GenericResourceLoader
// Entry Point: 00754a70
// Size: 4 bytes
// Signature: undefined __thiscall ~GenericResourceLoader(GenericResourceLoader<SampleChunk> * this)


/* GenericResourceLoader<SampleChunk>::~GenericResourceLoader() */

void __thiscall
GenericResourceLoader<SampleChunk>::~GenericResourceLoader(GenericResourceLoader<SampleChunk> *this)

{
  operator_delete(this);
  return;
}


