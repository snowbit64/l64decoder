// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SampleChunk
// Entry Point: 008bb624
// Size: 40 bytes
// Signature: undefined __thiscall ~SampleChunk(SampleChunk * this)


/* non-virtual thunk to SampleChunk::~SampleChunk() */

void __thiscall SampleChunk::~SampleChunk(SampleChunk *this)

{
  ~SampleChunk(this + -0x10);
  operator_delete(this + -0x10);
  return;
}


