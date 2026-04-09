// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MemoryBufferedFile
// Entry Point: 00b34010
// Size: 68 bytes
// Signature: undefined __thiscall ~MemoryBufferedFile(MemoryBufferedFile * this)


/* MemoryBufferedFile::~MemoryBufferedFile() */

void __thiscall MemoryBufferedFile::~MemoryBufferedFile(MemoryBufferedFile *this)

{
  *(undefined ***)this = &PTR__MemoryBufferedFile_00fe97a0;
  if ((this[0x10] != (MemoryBufferedFile)0x0) && (*(void **)(this + 8) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 8));
  }
  File::~File((File *)this);
  return;
}


