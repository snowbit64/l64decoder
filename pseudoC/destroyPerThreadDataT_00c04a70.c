// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyPerThreadDataT
// Entry Point: 00c04a70
// Size: 16 bytes
// Signature: undefined __thiscall destroyPerThreadDataT(Main * this, PerThreadData * param_1)


/* DictionaryCompressor::Main::destroyPerThreadDataT(DictionaryCompressor::PerThreadData*) */

void __thiscall DictionaryCompressor::Main::destroyPerThreadDataT(Main *this,PerThreadData *param_1)

{
  if (param_1 != (PerThreadData *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


