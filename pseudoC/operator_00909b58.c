// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<
// Entry Point: 00909b58
// Size: 104 bytes
// Signature: undefined __thiscall operator<<(FileOutputStream * this, char * param_1)


/* FileOutputStream::TEMPNAMEPLACEHOLDERVALUE(char const*) */

FileOutputStream * __thiscall FileOutputStream::operator<<(FileOutputStream *this,char *param_1)

{
  FileOutputStream FVar1;
  size_t sVar2;
  long *this_00;
  
  FVar1 = this[0x10];
  this_00 = *(long **)(this + 8);
  sVar2 = strlen(param_1);
  if (FVar1 == (FileOutputStream)0x0) {
    (**(code **)(*this_00 + 0x30))(this_00,param_1);
  }
  else {
    File::writeDosEOLExpand((File *)this_00,param_1,(uint)sVar2);
  }
  return this;
}


