// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00952688
// Size: 188 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaterialShaderManager::destroy() */

void MaterialShaderManager::destroy(void)

{
  bool bVar1;
  long in_x0;
  long **pplVar2;
  long *plVar3;
  long **pplVar4;
  
  pplVar4 = *(long ***)(undefined8 *)(in_x0 + 0xd8);
  while (pplVar4 != (long **)(in_x0 + 0xe0)) {
    plVar3 = pplVar4[5];
    if (plVar3 != (long *)0x0) {
      CustomShaderInfo::~CustomShaderInfo((CustomShaderInfo *)plVar3);
      operator_delete(plVar3);
    }
    pplVar2 = (long **)pplVar4[1];
    if ((long **)pplVar4[1] == (long **)0x0) {
      pplVar2 = pplVar4 + 2;
      bVar1 = (long **)**pplVar2 != pplVar4;
      pplVar4 = (long **)*pplVar2;
      if (bVar1) {
        do {
          plVar3 = *pplVar2;
          pplVar2 = (long **)(plVar3 + 2);
          pplVar4 = (long **)*pplVar2;
        } while (*pplVar4 != plVar3);
      }
    }
    else {
      do {
        pplVar4 = pplVar2;
        pplVar2 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MaterialShaderManager::CustomShaderInfo*>>>
             *)(undefined8 *)(in_x0 + 0xd8),*(__tree_node **)(in_x0 + 0xe0));
  *(undefined8 *)(in_x0 + 0xe0) = 0;
  *(undefined8 *)(in_x0 + 0xe8) = 0;
  *(long ***)(in_x0 + 0xd8) = (long **)(in_x0 + 0xe0);
  return;
}


