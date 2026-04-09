// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NativeFile
// Entry Point: 00b342d4
// Size: 80 bytes
// Signature: undefined __thiscall ~NativeFile(NativeFile * this)


/* NativeFile::~NativeFile() */

void __thiscall NativeFile::~NativeFile(NativeFile *this)

{
  *(undefined ***)this = &PTR__NativeFile_00fe9838;
  if (*(FILE **)(this + 8) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  File::~File((File *)this);
  return;
}


