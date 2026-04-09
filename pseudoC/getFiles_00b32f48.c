// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFiles
// Entry Point: 00b32f48
// Size: 112 bytes
// Signature: undefined __thiscall getFiles(FileManager * this, char * param_1, vector * param_2)


/* FileManager::getFiles(char const*, std::__ndk1::vector<GsFileInfo,
   std::__ndk1::allocator<GsFileInfo> >&) */

void __thiscall FileManager::getFiles(FileManager *this,char *param_1,vector *param_2)

{
  long **pplVar1;
  long **pplVar2;
  
  Mutex::enterCriticalSection();
  pplVar1 = *(long ***)(this + 8);
  for (pplVar2 = *(long ***)this; pplVar2 != pplVar1; pplVar2 = pplVar2 + 1) {
    (**(code **)(**pplVar2 + 0x18))(*pplVar2,param_1,param_2);
  }
  Mutex::leaveCriticalSection();
  return;
}


