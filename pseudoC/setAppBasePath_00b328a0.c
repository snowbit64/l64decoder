// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAppBasePath
// Entry Point: 00b328a0
// Size: 120 bytes
// Signature: undefined __thiscall setAppBasePath(FileManager * this, char * param_1)


/* FileManager::setAppBasePath(char const*) */

void __thiscall FileManager::setAppBasePath(FileManager *this,char *param_1)

{
  FileManager *pFVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  
  pplVar2 = *(long ***)(this + 8);
  if (*(long ***)this != pplVar2) {
    pplVar3 = *(long ***)this;
    do {
      pplVar4 = pplVar3 + 1;
      pFVar1 = this + 0x31;
      if (((byte)this[0x30] & 1) != 0) {
        pFVar1 = *(FileManager **)(this + 0x40);
      }
      (**(code **)(**pplVar3 + 0x30))(*pplVar3,pFVar1,param_1);
      pplVar3 = pplVar4;
    } while (pplVar4 != pplVar2);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x30));
  return;
}


