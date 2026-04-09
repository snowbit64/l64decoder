// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NativeFile
// Entry Point: 00b34298
// Size: 60 bytes
// Signature: undefined __thiscall NativeFile(NativeFile * this)


/* NativeFile::NativeFile() */

void __thiscall NativeFile::NativeFile(NativeFile *this)

{
  File::File((File *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__NativeFile_00fe9838;
  return;
}


