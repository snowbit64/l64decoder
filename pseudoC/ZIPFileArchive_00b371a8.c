// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ZIPFileArchive
// Entry Point: 00b371a8
// Size: 36 bytes
// Signature: undefined __thiscall ~ZIPFileArchive(ZIPFileArchive * this)


/* ZIPFileArchive::~ZIPFileArchive() */

void __thiscall ZIPFileArchive::~ZIPFileArchive(ZIPFileArchive *this)

{
  ~ZIPFileArchive(this);
  operator_delete(this);
  return;
}


