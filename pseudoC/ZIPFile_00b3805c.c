// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ZIPFile
// Entry Point: 00b3805c
// Size: 36 bytes
// Signature: undefined __thiscall ~ZIPFile(ZIPFile * this)


/* ZIPFile::~ZIPFile() */

void __thiscall ZIPFile::~ZIPFile(ZIPFile *this)

{
  MemoryBufferedFile::~MemoryBufferedFile((MemoryBufferedFile *)this);
  operator_delete(this);
  return;
}


