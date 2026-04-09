// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BufferedFileReader
// Entry Point: 00941504
// Size: 76 bytes
// Signature: undefined __thiscall ~BufferedFileReader(BufferedFileReader * this)


/* BufferedFileReader::~BufferedFileReader() */

void __thiscall BufferedFileReader::~BufferedFileReader(BufferedFileReader *this)

{
  *(undefined ***)this = &PTR__BufferedFileReader_00fe02c0;
  if ((this[0x18] != (BufferedFileReader)0x0) && (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  File::~File((File *)this);
  return;
}


