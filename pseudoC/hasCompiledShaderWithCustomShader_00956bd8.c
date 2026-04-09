// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasCompiledShaderWithCustomShader
// Entry Point: 00956bd8
// Size: 264 bytes
// Signature: undefined __thiscall hasCompiledShaderWithCustomShader(MaterialShaderManager * this, uint param_1)


/* MaterialShaderManager::hasCompiledShaderWithCustomShader(unsigned int) */

undefined8 __thiscall
MaterialShaderManager::hasCompiledShaderWithCustomShader(MaterialShaderManager *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar2 != 0)) {
                    /* try { // try from 00956ca8 to 00956cb3 has its CatchHandler @ 00956ce0 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  pplVar3 = *(long ***)(ShaderManager::getInstance()::instance + 0x48);
  while( true ) {
    if (pplVar3 == (long **)(ShaderManager::getInstance()::instance + 0x50)) {
      return 0;
    }
    if ((*(int *)(pplVar3 + 4) == 0x10) && (*(uint *)((long)pplVar3[5] + 4) == param_1)) break;
    pplVar4 = (long **)pplVar3[1];
    if ((long **)pplVar3[1] == (long **)0x0) {
      pplVar4 = pplVar3 + 2;
      bVar1 = (long **)**pplVar4 != pplVar3;
      pplVar3 = (long **)*pplVar4;
      if (bVar1) {
        do {
          plVar5 = *pplVar4;
          pplVar4 = (long **)(plVar5 + 2);
          pplVar3 = (long **)*pplVar4;
        } while (*pplVar3 != plVar5);
      }
    }
    else {
      do {
        pplVar3 = pplVar4;
        pplVar4 = (long **)*pplVar3;
      } while (*pplVar3 != (long *)0x0);
    }
  }
  return 1;
}


