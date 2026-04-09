// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CompressedFileArchive
// Entry Point: 00b310c0
// Size: 36 bytes
// Signature: undefined __thiscall ~CompressedFileArchive(CompressedFileArchive * this)


/* CompressedFileArchive::~CompressedFileArchive() */

void __thiscall CompressedFileArchive::~CompressedFileArchive(CompressedFileArchive *this)

{
  ~CompressedFileArchive(this);
  operator_delete(this);
  return;
}


