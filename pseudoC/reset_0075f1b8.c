// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 0075f1b8
// Size: 252 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScriptingNetworkManager::reset() */

void ScriptingNetworkManager::reset(void)

{
  bool bVar1;
  long in_x0;
  LuauScriptSystem *this;
  long **pplVar2;
  long lVar3;
  long *plVar4;
  long **pplVar5;
  
  pplVar5 = *(long ***)(undefined8 *)(in_x0 + 8);
  while (pplVar5 != (long **)(in_x0 + 0x10)) {
    NetworkStream::setReadStream((NetworkStream *)pplVar5[5],(GsBitStream *)0x0);
    if (pplVar5[5] != (long *)0x0) {
      (**(code **)(*pplVar5[5] + 8))();
    }
    pplVar2 = (long **)pplVar5[1];
    if ((long **)pplVar5[1] == (long **)0x0) {
      pplVar2 = pplVar5 + 2;
      bVar1 = (long **)**pplVar2 != pplVar5;
      pplVar5 = (long **)*pplVar2;
      if (bVar1) {
        do {
          plVar4 = *pplVar2;
          pplVar2 = (long **)(plVar4 + 2);
          pplVar5 = (long **)*pplVar2;
        } while (*pplVar5 != plVar4);
      }
    }
    else {
      do {
        pplVar5 = pplVar2;
        pplVar2 = (long **)*pplVar5;
      } while (*pplVar5 != (long *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
             *)(undefined8 *)(in_x0 + 8),*(__tree_node **)(in_x0 + 0x10));
  *(undefined8 *)(in_x0 + 0x10) = 0;
  *(undefined8 *)(in_x0 + 0x18) = 0;
  *(long ***)(in_x0 + 8) = (long **)(in_x0 + 0x10);
  if ((*(byte *)(in_x0 + 0x28) & 1) == 0) {
    *(undefined2 *)(in_x0 + 0x28) = 0;
    lVar3 = *(long *)(in_x0 + 0x20);
  }
  else {
    **(undefined **)(in_x0 + 0x38) = 0;
    *(undefined8 *)(in_x0 + 0x30) = 0;
    lVar3 = *(long *)(in_x0 + 0x20);
  }
  if (lVar3 != 0) {
    ScriptSystemManager::getInstance();
    this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this,*(void **)(in_x0 + 0x20));
  }
  *(undefined8 *)(in_x0 + 0x20) = 0;
  return;
}


