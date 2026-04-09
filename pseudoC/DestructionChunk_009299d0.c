// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionChunk
// Entry Point: 009299d0
// Size: 100 bytes
// Signature: undefined __thiscall ~DestructionChunk(DestructionChunk * this)


/* DestructionChunk::~DestructionChunk() */

void __thiscall DestructionChunk::~DestructionChunk(DestructionChunk *this)

{
  *(undefined ***)this = &PTR__DestructionChunk_00fe0050;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
    return;
  }
  return;
}


