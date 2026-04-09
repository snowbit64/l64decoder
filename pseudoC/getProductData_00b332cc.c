// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProductData
// Entry Point: 00b332cc
// Size: 164 bytes
// Signature: undefined __thiscall getProductData(FileManager * this, char * param_1, uint * param_2, KEY_TYPE * param_3, ulonglong * param_4)


/* FileManager::getProductData(char const*, unsigned int&, IFileLoader::KEY_TYPE&, unsigned long
   long&) */

uint __thiscall
FileManager::getProductData
          (FileManager *this,char *param_1,uint *param_2,KEY_TYPE *param_3,ulonglong *param_4)

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
      uVar4 = (**(code **)(**pplVar2 + 0x38))(*pplVar2,param_1,uVar3 & 1,param_2,param_3,param_4);
      if ((uVar4 & 1) != 0) break;
      pplVar2 = pplVar5;
    } while (pplVar5 != pplVar1);
  }
  return uVar4 & 1;
}


