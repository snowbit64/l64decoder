// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~dtNodePool
// Entry Point: 00dd95e4
// Size: 48 bytes
// Signature: undefined __thiscall ~dtNodePool(dtNodePool * this)


/* dtNodePool::~dtNodePool() */

void __thiscall dtNodePool::~dtNodePool(dtNodePool *this)

{
  dtFree(*(void **)this);
  dtFree(*(void **)(this + 0x10));
  dtFree(*(void **)(this + 8));
  return;
}


