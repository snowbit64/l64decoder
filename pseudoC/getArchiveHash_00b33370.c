// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArchiveHash
// Entry Point: 00b33370
// Size: 140 bytes
// Signature: undefined __thiscall getArchiveHash(FileManager * this, char * param_1, uchar * param_2)


/* FileManager::getArchiveHash(char const*, unsigned char*) */

uint __thiscall FileManager::getArchiveHash(FileManager *this,char *param_1,uchar *param_2)

{
  long **pplVar1;
  long **pplVar2;
  uint uVar3;
  uint uVar4;
  long **pplVar5;
  
  uVar3 = PathUtil::isAbsolutePath(param_1);
  pplVar1 = *(long ***)(this + 8);
  if (*(long ***)this == pplVar1) {
    uVar4 = 0;
  }
  else {
    pplVar2 = *(long ***)this;
    do {
      pplVar5 = pplVar2 + 1;
      uVar4 = (**(code **)(**pplVar2 + 0x40))(*pplVar2,param_1,uVar3 & 1,param_2);
      if ((uVar4 & 1) != 0) break;
      pplVar2 = pplVar5;
    } while (pplVar5 != pplVar1);
  }
  return uVar4 & 1;
}


