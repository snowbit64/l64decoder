// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkSize
// Entry Point: 00d5b4ec
// Size: 20 bytes
// Signature: undefined __thiscall getChunkSize(MyMicroAllocator * this, MemoryChunk * param_1)


/* HACD::MyMicroAllocator::getChunkSize(HACD::MemoryChunk*) */

undefined4 __thiscall
HACD::MyMicroAllocator::getChunkSize(MyMicroAllocator *this,MemoryChunk *param_1)

{
  if (param_1 != (MemoryChunk *)0x0) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  return 0;
}


