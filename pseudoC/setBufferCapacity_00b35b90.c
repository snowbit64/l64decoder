// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBufferCapacity
// Entry Point: 00b35b90
// Size: 8 bytes
// Signature: undefined __thiscall setBufferCapacity(ThreadedFileReader * this, uint param_1)


/* ThreadedFileReader::setBufferCapacity(unsigned int) */

void __thiscall ThreadedFileReader::setBufferCapacity(ThreadedFileReader *this,uint param_1)

{
  *(uint *)(this + 8) = param_1;
  return;
}


