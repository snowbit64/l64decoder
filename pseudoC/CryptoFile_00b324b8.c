// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CryptoFile
// Entry Point: 00b324b8
// Size: 36 bytes
// Signature: undefined __thiscall ~CryptoFile(CryptoFile * this)


/* CryptoFile::~CryptoFile() */

void __thiscall CryptoFile::~CryptoFile(CryptoFile *this)

{
  MemoryBufferedFile::~MemoryBufferedFile((MemoryBufferedFile *)this);
  operator_delete(this);
  return;
}


