// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFiles
// Entry Point: 008bef68
// Size: 16 bytes
// Signature: undefined __thiscall addFiles(LocalFileListChannel * this, char * param_1, bool * param_2)


/* LocalFileListChannel::addFiles(char const*, bool volatile&) */

void __thiscall
LocalFileListChannel::addFiles(LocalFileListChannel *this,char *param_1,bool *param_2)

{
  this[0x30] = (LocalFileListChannel)0x0;
  addLocalFolder(this,param_1,0,param_2);
  return;
}


