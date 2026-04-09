// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteAddresses
// Entry Point: 0075f0d8
// Size: 188 bytes
// Signature: undefined deleteAddresses(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScriptingNetworkManager::deleteAddresses() */

void ScriptingNetworkManager::deleteAddresses(void)

{
  bool bVar1;
  long in_x0;
  long **pplVar2;
  long *plVar3;
  long **pplVar4;
  
  pplVar4 = *(long ***)(undefined8 *)(in_x0 + 8);
  while (pplVar4 != (long **)(in_x0 + 0x10)) {
    NetworkStream::setReadStream((NetworkStream *)pplVar4[5],(GsBitStream *)0x0);
    if (pplVar4[5] != (long *)0x0) {
      (**(code **)(*pplVar4[5] + 8))();
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
  __tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
             *)(undefined8 *)(in_x0 + 8),*(__tree_node **)(in_x0 + 0x10));
  *(undefined8 *)(in_x0 + 0x10) = 0;
  *(undefined8 *)(in_x0 + 0x18) = 0;
  *(long ***)(in_x0 + 8) = (long **)(in_x0 + 0x10);
  return;
}


