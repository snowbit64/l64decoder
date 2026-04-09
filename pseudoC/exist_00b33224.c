// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exist
// Entry Point: 00b33224
// Size: 168 bytes
// Signature: undefined __thiscall exist(FileManager * this, char * param_1)


/* FileManager::exist(char const*) */

uint __thiscall FileManager::exist(FileManager *this,char *param_1)

{
  long **pplVar1;
  long **pplVar2;
  uint uVar3;
  uint uVar4;
  long **pplVar5;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    Mutex::enterCriticalSection();
    uVar3 = PathUtil::isAbsolutePath(param_1);
    pplVar1 = *(long ***)(this + 8);
    if (*(long ***)this == pplVar1) {
      uVar4 = 0;
    }
    else {
      pplVar2 = *(long ***)this;
      do {
        pplVar5 = pplVar2 + 1;
        uVar4 = (**(code **)(**pplVar2 + 0x28))(*pplVar2,param_1,uVar3 & 1);
        if ((uVar4 & 1) != 0) break;
        pplVar2 = pplVar5;
      } while (pplVar5 != pplVar1);
    }
    Mutex::leaveCriticalSection();
  }
  return uVar4 & 1;
}


