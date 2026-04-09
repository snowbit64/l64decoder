// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MemoryBufferedFile
// Entry Point: 00b33fb4
// Size: 92 bytes
// Signature: undefined __thiscall MemoryBufferedFile(MemoryBufferedFile * this, uchar * param_1, uint param_2, uint param_3, bool param_4)


/* MemoryBufferedFile::MemoryBufferedFile(unsigned char*, unsigned int, unsigned int, bool) */

void __thiscall
MemoryBufferedFile::MemoryBufferedFile
          (MemoryBufferedFile *this,uchar *param_1,uint param_2,uint param_3,bool param_4)

{
  File::File((File *)this);
  this[0x10] = (MemoryBufferedFile)param_4;
  *(uint *)(this + 0x14) = param_2;
  *(uint *)(this + 0x18) = param_3;
  *(uint *)(this + 0x1c) = param_2;
  *(undefined ***)this = &PTR__MemoryBufferedFile_00fe97a0;
  *(uchar **)(this + 8) = param_1;
  return;
}


