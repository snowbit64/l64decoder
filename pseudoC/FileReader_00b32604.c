// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FileReader
// Entry Point: 00b32604
// Size: 56 bytes
// Signature: undefined __thiscall FileReader(FileReader * this, char * param_1)


/* FileReader::FileReader(char const*) */

void __thiscall FileReader::FileReader(FileReader *this,char *param_1)

{
  undefined8 uVar1;
  
  *(char **)(this + 8) = param_1;
  uVar1 = FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,false);
  *(undefined8 *)this = uVar1;
  return;
}


