// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SampleChunk
// Entry Point: 008bb600
// Size: 36 bytes
// Signature: undefined __thiscall ~SampleChunk(SampleChunk * this)


/* SampleChunk::~SampleChunk() */

void __thiscall SampleChunk::~SampleChunk(SampleChunk *this)

{
  ~SampleChunk(this);
  operator_delete(this);
  return;
}


