// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ThreadedFileReader
// Entry Point: 00b35870
// Size: 36 bytes
// Signature: undefined __thiscall ~ThreadedFileReader(ThreadedFileReader * this)


/* ThreadedFileReader::~ThreadedFileReader() */

void __thiscall ThreadedFileReader::~ThreadedFileReader(ThreadedFileReader *this)

{
  ~ThreadedFileReader(this);
  operator_delete(this);
  return;
}


