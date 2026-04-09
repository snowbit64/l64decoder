// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptingNetworkManager
// Entry Point: 0075efd4
// Size: 232 bytes
// Signature: undefined __thiscall ~ScriptingNetworkManager(ScriptingNetworkManager * this)


/* ScriptingNetworkManager::~ScriptingNetworkManager() */

void __thiscall ScriptingNetworkManager::~ScriptingNetworkManager(ScriptingNetworkManager *this)

{
  bool bVar1;
  __tree_node *p_Var2;
  ScriptingNetworkManager **ppSVar3;
  ScriptingNetworkManager *pSVar4;
  undefined8 *this_00;
  ScriptingNetworkManager **ppSVar5;
  
  this_00 = (undefined8 *)(this + 8);
  *(undefined ***)this = &PTR__ScriptingNetworkManager_00fdb4c0;
  ppSVar5 = (ScriptingNetworkManager **)*this_00;
  while (ppSVar5 != (ScriptingNetworkManager **)(this + 0x10)) {
                    /* try { // try from 0075f018 to 0075f01f has its CatchHandler @ 0075f0bc */
    NetworkStream::setReadStream((NetworkStream *)ppSVar5[5],(GsBitStream *)0x0);
    if ((long *)ppSVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)ppSVar5[5] + 8))();
    }
    ppSVar3 = (ScriptingNetworkManager **)ppSVar5[1];
    if ((ScriptingNetworkManager **)ppSVar5[1] == (ScriptingNetworkManager **)0x0) {
      ppSVar3 = ppSVar5 + 2;
      bVar1 = *(ScriptingNetworkManager ***)*ppSVar3 != ppSVar5;
      ppSVar5 = (ScriptingNetworkManager **)*ppSVar3;
      if (bVar1) {
        do {
          pSVar4 = *ppSVar3;
          ppSVar3 = (ScriptingNetworkManager **)(pSVar4 + 0x10);
          ppSVar5 = (ScriptingNetworkManager **)*ppSVar3;
        } while (*ppSVar5 != pSVar4);
      }
    }
    else {
      do {
        ppSVar5 = ppSVar3;
        ppSVar3 = (ScriptingNetworkManager **)*ppSVar5;
      } while ((ScriptingNetworkManager **)*ppSVar5 != (ScriptingNetworkManager **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
             *)this_00,*(__tree_node **)(this + 0x10));
  p_Var2 = (__tree_node *)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(ScriptingNetworkManager **)(this + 8) = this + 0x10;
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
    p_Var2 = *(__tree_node **)(this + 0x10);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
             *)this_00,p_Var2);
  return;
}


