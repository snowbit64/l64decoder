// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<FileManager::fileLoaderCmp&,IFileLoader**>
// Entry Point: 00b33b30
// Size: 300 bytes
// Signature: uint __cdecl __sort4<FileManager::fileLoaderCmp&,IFileLoader**>(IFileLoader * * param_1, IFileLoader * * param_2, IFileLoader * * param_3, IFileLoader * * param_4, fileLoaderCmp * param_5)


/* unsigned int std::__ndk1::__sort4<FileManager::fileLoaderCmp&, IFileLoader**>(IFileLoader**,
   IFileLoader**, IFileLoader**, IFileLoader**, FileManager::fileLoaderCmp&) */

uint std::__ndk1::__sort4<FileManager::fileLoaderCmp&,IFileLoader**>
               (IFileLoader **param_1,IFileLoader **param_2,IFileLoader **param_3,
               IFileLoader **param_4,fileLoaderCmp *param_5)

{
  uint uVar1;
  uint uVar2;
  IFileLoader *pIVar3;
  IFileLoader *pIVar4;
  IFileLoader *pIVar5;
  
  pIVar5 = *param_2;
  pIVar4 = *param_1;
  pIVar3 = *param_3;
  uVar2 = *(uint *)(pIVar5 + 8);
  uVar1 = *(uint *)(pIVar4 + 8);
  if (uVar2 < uVar1) {
    if (*(uint *)(pIVar3 + 8) < uVar2) {
      *param_1 = pIVar3;
      uVar2 = 1;
    }
    else {
      *param_1 = pIVar5;
      *param_2 = pIVar4;
      pIVar3 = *param_3;
      if (uVar1 <= *(uint *)(pIVar3 + 8)) {
        uVar2 = 1;
        goto LAB_00b33be4;
      }
      uVar2 = 2;
      *param_2 = pIVar3;
    }
    *param_3 = pIVar4;
    pIVar3 = pIVar4;
  }
  else if (*(uint *)(pIVar3 + 8) < uVar2) {
    *param_2 = pIVar3;
    *param_3 = pIVar5;
    pIVar3 = *param_1;
    if (*(uint *)(*param_2 + 8) < *(uint *)(pIVar3 + 8)) {
      *param_1 = *param_2;
      uVar2 = 2;
      *param_2 = pIVar3;
      pIVar3 = *param_3;
    }
    else {
      uVar2 = 1;
      pIVar3 = pIVar5;
    }
  }
  else {
    uVar2 = 0;
  }
LAB_00b33be4:
  if (*(uint *)(*param_4 + 8) < *(uint *)(pIVar3 + 8)) {
    *param_3 = *param_4;
    *param_4 = pIVar3;
    pIVar3 = *param_2;
    if (*(uint *)(pIVar3 + 8) <= *(uint *)(*param_3 + 8)) {
      return uVar2 + 1;
    }
    *param_2 = *param_3;
    *param_3 = pIVar3;
    pIVar3 = *param_1;
    if (*(uint *)(pIVar3 + 8) <= *(uint *)(*param_2 + 8)) {
      return uVar2 + 2;
    }
    uVar2 = uVar2 + 3;
    *param_1 = *param_2;
    *param_2 = pIVar3;
  }
  return uVar2;
}


