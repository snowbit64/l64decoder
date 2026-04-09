// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GenericResourceLoader
// Entry Point: 00754ad8
// Size: 4 bytes
// Signature: undefined __thiscall ~GenericResourceLoader(GenericResourceLoader<LoopSynthesisResource> * this)


/* GenericResourceLoader<LoopSynthesisResource>::~GenericResourceLoader() */

void __thiscall
GenericResourceLoader<LoopSynthesisResource>::~GenericResourceLoader
          (GenericResourceLoader<LoopSynthesisResource> *this)

{
  operator_delete(this);
  return;
}


