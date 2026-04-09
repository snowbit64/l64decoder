// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCustomShaderVariationName
// Entry Point: 00954004
// Size: 164 bytes
// Signature: undefined __thiscall getCustomShaderVariationName(MaterialShaderManager * this, uint param_1)


/* MaterialShaderManager::getCustomShaderVariationName(unsigned int) */

MaterialShaderManager * __thiscall
MaterialShaderManager::getCustomShaderVariationName(MaterialShaderManager *this,uint param_1)

{
  MaterialShaderManager **ppMVar1;
  MaterialShaderManager *pMVar2;
  MaterialShaderManager **ppMVar3;
  MaterialShaderManager *pMVar4;
  MaterialShaderManager **ppMVar5;
  
  if (param_1 == 0) {
    return (MaterialShaderManager *)0x0;
  }
  Mutex::enterCriticalSection();
  ppMVar5 = (MaterialShaderManager **)(this + 0xe0);
  ppMVar3 = (MaterialShaderManager **)*ppMVar5;
  ppMVar1 = ppMVar5;
  if (ppMVar3 != (MaterialShaderManager **)0x0) {
    do {
      if (*(uint *)(ppMVar3 + 4) >= param_1) {
        ppMVar1 = ppMVar3;
      }
      ppMVar3 = (MaterialShaderManager **)ppMVar3[*(uint *)(ppMVar3 + 4) < param_1];
    } while (ppMVar3 != (MaterialShaderManager **)0x0);
    if ((ppMVar1 != ppMVar5) && (*(uint *)(ppMVar1 + 4) <= param_1)) {
      pMVar2 = ppMVar1[5];
      pMVar4 = pMVar2 + 0x81;
      if (((byte)pMVar2[0x80] & 1) != 0) {
        pMVar4 = *(MaterialShaderManager **)(pMVar2 + 0x90);
      }
      goto LAB_00954068;
    }
  }
  pMVar4 = (MaterialShaderManager *)0x0;
LAB_00954068:
  Mutex::leaveCriticalSection();
  return pMVar4;
}


