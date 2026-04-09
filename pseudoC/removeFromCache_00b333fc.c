// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromCache
// Entry Point: 00b333fc
// Size: 120 bytes
// Signature: undefined __thiscall removeFromCache(FileManager * this, char * param_1)


/* FileManager::removeFromCache(char const*) */

void __thiscall FileManager::removeFromCache(FileManager *this,char *param_1)

{
  long **pplVar1;
  uint uVar2;
  long **pplVar3;
  long **pplVar4;
  
  Mutex::enterCriticalSection();
  uVar2 = PathUtil::isAbsolutePath(param_1);
  pplVar1 = *(long ***)(this + 8);
  if (*(long ***)this != pplVar1) {
    pplVar3 = *(long ***)this;
    do {
      pplVar4 = pplVar3 + 1;
      (**(code **)(**pplVar3 + 0x20))(*pplVar3,param_1,uVar2 & 1);
      pplVar3 = pplVar4;
    } while (pplVar4 != pplVar1);
  }
  Mutex::leaveCriticalSection();
  return;
}


