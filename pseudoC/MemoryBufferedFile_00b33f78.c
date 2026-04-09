// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MemoryBufferedFile
// Entry Point: 00b33f78
// Size: 60 bytes
// Signature: undefined __thiscall MemoryBufferedFile(MemoryBufferedFile * this)


/* MemoryBufferedFile::MemoryBufferedFile() */

void __thiscall MemoryBufferedFile::MemoryBufferedFile(MemoryBufferedFile *this)

{
  File::File((File *)this);
  this[0x10] = (MemoryBufferedFile)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR__MemoryBufferedFile_00fe97a0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


