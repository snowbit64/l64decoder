// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioStreamedReader
// Entry Point: 00b11638
// Size: 36 bytes
// Signature: undefined __thiscall ~SoftAudioStreamedReader(SoftAudioStreamedReader * this)


/* SoftAudioStreamedReader::~SoftAudioStreamedReader() */

void __thiscall SoftAudioStreamedReader::~SoftAudioStreamedReader(SoftAudioStreamedReader *this)

{
  ~SoftAudioStreamedReader(this);
  operator_delete(this);
  return;
}


