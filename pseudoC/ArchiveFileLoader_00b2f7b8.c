// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ArchiveFileLoader
// Entry Point: 00b2f7b8
// Size: 36 bytes
// Signature: undefined __thiscall ~ArchiveFileLoader(ArchiveFileLoader * this)


/* ArchiveFileLoader::~ArchiveFileLoader() */

void __thiscall ArchiveFileLoader::~ArchiveFileLoader(ArchiveFileLoader *this)

{
  ~ArchiveFileLoader(this);
  operator_delete(this);
  return;
}


