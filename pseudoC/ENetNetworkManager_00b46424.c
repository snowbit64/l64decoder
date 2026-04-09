// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ENetNetworkManager
// Entry Point: 00b46424
// Size: 648 bytes
// Signature: undefined __thiscall ~ENetNetworkManager(ENetNetworkManager * this)


/* ENetNetworkManager::~ENetNetworkManager() */

void __thiscall ENetNetworkManager::~ENetNetworkManager(ENetNetworkManager *this)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  ENetNetworkManager **ppEVar4;
  long lVar5;
  ENetNetworkManager *pEVar6;
  long lVar7;
  ulong uVar8;
  Thread *this_00;
  ENetConnection *this_01;
  GsBitStream *pGVar9;
  ulong uVar10;
  ENetNetworkManager **ppEVar11;
  
  *(undefined ***)this = &PTR__ENetNetworkManager_00fe9c60;
  if (*(long *)(this + 0x70) != 0) {
                    /* try { // try from 00b46458 to 00b465fb has its CatchHandler @ 00b466c0 */
    Thread::cancel();
    Event::post();
    Thread::join();
    this_00 = *(Thread **)(this + 0x70);
    if (this_00 != (Thread *)0x0) {
      Thread::~Thread(this_00);
      operator_delete(this_00);
    }
    *(undefined8 *)(this + 0x70) = 0;
  }
  Mutex::enterCriticalSection();
  if (*(long *)(this + 8) != 0) {
    enet_host_destroy();
    *(undefined8 *)(this + 8) = 0;
  }
  ppEVar11 = *(ENetNetworkManager ***)(this + 0x10);
  while (ppEVar11 != (ENetNetworkManager **)(this + 0x18)) {
    this_01 = (ENetConnection *)ppEVar11[5];
    if (this_01 != (ENetConnection *)0x0) {
      ENetConnection::~ENetConnection(this_01);
      operator_delete(this_01);
    }
    ppEVar4 = (ENetNetworkManager **)ppEVar11[1];
    if ((ENetNetworkManager **)ppEVar11[1] == (ENetNetworkManager **)0x0) {
      ppEVar4 = ppEVar11 + 2;
      bVar1 = *(ENetNetworkManager ***)*ppEVar4 != ppEVar11;
      ppEVar11 = (ENetNetworkManager **)*ppEVar4;
      if (bVar1) {
        do {
          pEVar6 = *ppEVar4;
          ppEVar4 = (ENetNetworkManager **)(pEVar6 + 0x10);
          ppEVar11 = (ENetNetworkManager **)*ppEVar4;
        } while (*ppEVar11 != pEVar6);
      }
    }
    else {
      do {
        ppEVar11 = ppEVar4;
        ppEVar4 = (ENetNetworkManager **)*ppEVar11;
      } while ((ENetNetworkManager **)*ppEVar11 != (ENetNetworkManager **)0x0);
    }
  }
  lVar7 = *(long *)(this + 0x118);
  lVar5 = *(long *)(this + 0x120);
  if (lVar5 != lVar7) {
    uVar10 = 0;
    do {
      pGVar9 = *(GsBitStream **)(lVar7 + uVar10 * 0x28 + 8);
      if (pGVar9 != (GsBitStream *)0x0) {
        GsBitStream::~GsBitStream(pGVar9);
        operator_delete(pGVar9);
        lVar7 = *(long *)(this + 0x118);
        lVar5 = *(long *)(this + 0x120);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
      uVar8 = (lVar5 - lVar7 >> 3) * -0x3333333333333333;
    } while (uVar10 <= uVar8 && uVar8 - uVar10 != 0);
  }
  lVar7 = *(long *)(this + 0x100);
  lVar5 = *(long *)(this + 0x108);
  if (lVar5 != lVar7) {
    uVar10 = 0;
    do {
      pGVar9 = *(GsBitStream **)(lVar7 + uVar10 * 0x28 + 8);
      if (pGVar9 != (GsBitStream *)0x0) {
        GsBitStream::~GsBitStream(pGVar9);
        operator_delete(pGVar9);
        lVar7 = *(long *)(this + 0x100);
        lVar5 = *(long *)(this + 0x108);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
      uVar8 = (lVar5 - lVar7 >> 3) * -0x3333333333333333;
    } while (uVar10 <= uVar8 && uVar8 - uVar10 != 0);
  }
  Mutex::leaveCriticalSection();
  if (((SecureRandomGeneratorManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&SecureRandomGeneratorManager::getInstance()::instance),
     iVar2 != 0)) {
                    /* try { // try from 00b46674 to 00b4667f has its CatchHandler @ 00b466ac */
    SecureRandomGeneratorManager::SecureRandomGeneratorManager
              ((SecureRandomGeneratorManager *)SecureRandomGeneratorManager::getInstance()::instance
              );
    __cxa_atexit(SecureRandomGeneratorManager::~SecureRandomGeneratorManager,
                 SecureRandomGeneratorManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&SecureRandomGeneratorManager::getInstance()::instance);
  }
  SecureRandomGeneratorManager::shutdown();
  pvVar3 = *(void **)(this + 0x118);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x100);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar3;
    operator_delete(pvVar3);
  }
  Event::~Event((Event *)(this + 0xa0));
  Mutex::~Mutex((Mutex *)(this + 0x78));
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              *)(this + 0x48),*(__tree_node **)(this + 0x50));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>,std::__ndk1::__map_value_compare<_ENetPeer*,std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>,std::__ndk1::less<_ENetPeer*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>>>
  ::destroy((__tree<std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>,std::__ndk1::__map_value_compare<_ENetPeer*,std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>,std::__ndk1::less<_ENetPeer*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>>>
             *)(this + 0x28),*(__tree_node **)(this + 0x30));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,ENetConnection*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ENetConnection*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ENetConnection*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,ENetConnection*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ENetConnection*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ENetConnection*>>>
             *)(this + 0x10),*(__tree_node **)(this + 0x18));
  return;
}


