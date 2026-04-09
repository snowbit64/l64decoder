// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CompressedFile
// Entry Point: 00b31508
// Size: 72 bytes
// Signature: undefined __thiscall ~CompressedFile(CompressedFile * this)


/* CompressedFile::~CompressedFile() */

void __thiscall CompressedFile::~CompressedFile(CompressedFile *this)

{
  *(undefined ***)this = &PTR__CompressedFile_00fe9580;
  if (*(long *)(this + 0x218) != 0) {
    if (*(void **)(this + 0x210) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x210));
    }
    *(undefined8 *)(this + 0x210) = 0;
  }
  File::~File((File *)this);
  return;
}


