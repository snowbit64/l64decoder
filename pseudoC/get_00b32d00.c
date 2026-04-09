// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get
// Entry Point: 00b32d00
// Size: 176 bytes
// Signature: undefined __thiscall get(FileManager * this, char * param_1, ACCESS_MODE param_2, bool param_3)


/* FileManager::get(char const*, File::ACCESS_MODE, bool) */

long __thiscall FileManager::get(FileManager *this,char *param_1,ACCESS_MODE param_2,bool param_3)

{
  long **pplVar1;
  uint uVar2;
  long lVar3;
  long **pplVar4;
  long **pplVar5;
  
  addHistoryEntry(this,param_1,param_2);
  Mutex::enterCriticalSection();
  uVar2 = PathUtil::isAbsolutePath(param_1);
  pplVar1 = *(long ***)(this + 8);
  if (*(long ***)this != pplVar1) {
    pplVar4 = *(long ***)this;
    do {
      pplVar5 = pplVar4 + 1;
      lVar3 = (**(code **)(**pplVar4 + 0x10))(*pplVar4,param_1,param_2,uVar2 & 1,param_3);
      if (lVar3 != 0) goto LAB_00b32d8c;
      pplVar4 = pplVar5;
    } while (pplVar5 != pplVar1);
  }
  lVar3 = 0;
LAB_00b32d8c:
  Mutex::leaveCriticalSection();
  return lVar3;
}


