// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deactivate
// Entry Point: 008bb868
// Size: 56 bytes
// Signature: undefined __thiscall deactivate(SampleChunk * this)


/* non-virtual thunk to SampleChunk::deactivate() */

void __thiscall SampleChunk::deactivate(SampleChunk *this)

{
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


