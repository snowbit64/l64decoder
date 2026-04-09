// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shutdown
// Entry Point: 00b47a54
// Size: 584 bytes
// Signature: undefined __cdecl shutdown(uint param_1, uchar param_2)


/* ENetNetworkManager::shutdown(unsigned int, unsigned char) */

void ENetNetworkManager::shutdown(uint param_1,uchar param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long **pplVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  GsBitStream *pGVar10;
  Thread *this;
  ulong uVar11;
  long *plVar12;
  long **pplVar13;
  
  uVar4 = (ulong)param_1;
  if (*(long *)(uVar4 + 8) != 0) {
    if (*(long *)(uVar4 + 0x70) != 0) {
      Thread::cancel();
      Event::post();
      Thread::join();
      this = *(Thread **)(uVar4 + 0x70);
      if (this != (Thread *)0x0) {
        Thread::~Thread(this);
        operator_delete(this);
      }
      *(undefined8 *)(uVar4 + 0x70) = 0;
    }
    pplVar13 = *(long ***)(undefined8 *)(uVar4 + 0x10);
    while (pplVar13 != (long **)(uVar4 + 0x18)) {
      if (param_2 != '\0') {
        ENetConnection::disconnect((ENetConnection *)pplVar13[5],1);
      }
      plVar12 = pplVar13[5];
      if (plVar12 != (long *)0x0) {
        ENetConnection::~ENetConnection((ENetConnection *)plVar12);
        operator_delete(plVar12);
      }
      pplVar5 = (long **)pplVar13[1];
      if ((long **)pplVar13[1] == (long **)0x0) {
        pplVar5 = pplVar13 + 2;
        bVar1 = (long **)**pplVar5 != pplVar13;
        pplVar13 = (long **)*pplVar5;
        if (bVar1) {
          do {
            plVar12 = *pplVar5;
            pplVar5 = (long **)(plVar12 + 2);
            pplVar13 = (long **)*pplVar5;
          } while (*pplVar13 != plVar12);
        }
      }
      else {
        do {
          pplVar13 = pplVar5;
          pplVar5 = (long **)*pplVar13;
        } while (*pplVar13 != (long *)0x0);
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_int,ENetConnection*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ENetConnection*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ENetConnection*>>>
    ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,ENetConnection*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ENetConnection*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ENetConnection*>>>
               *)(undefined8 *)(uVar4 + 0x10),*(__tree_node **)(uVar4 + 0x18));
    *(undefined8 *)(uVar4 + 0x18) = 0;
    *(long ***)(uVar4 + 0x10) = (long **)(uVar4 + 0x18);
    *(undefined8 *)(uVar4 + 0x20) = 0;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>,std::__ndk1::__map_value_compare<_ENetPeer*,std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>,std::__ndk1::less<_ENetPeer*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>>>
    ::destroy((__tree<std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>,std::__ndk1::__map_value_compare<_ENetPeer*,std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>,std::__ndk1::less<_ENetPeer*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<_ENetPeer*,ENetConnection*>>>
               *)(uVar4 + 0x28),*(__tree_node **)(uVar4 + 0x30));
    *(__tree_node ***)(uVar4 + 0x28) = (__tree_node **)(uVar4 + 0x30);
    *(undefined8 *)(uVar4 + 0x30) = 0;
    *(undefined8 *)(uVar4 + 0x38) = 0;
    if (param_2 != 0) {
      iVar2 = enet_time_get();
      do {
        enet_host_service(*(undefined8 *)(uVar4 + 8),0,0);
        if (*(long *)(*(long *)(uVar4 + 8) + 11000) == 0) break;
        ThreadUtil::usleep(1000);
        uVar3 = enet_time_get();
      } while (uVar3 < iVar2 + (uint)param_2);
    }
    lVar7 = *(long *)(uVar4 + 0x118);
    lVar6 = *(long *)(uVar4 + 0x120);
    lVar9 = lVar6;
    if (lVar6 != lVar7) {
      uVar11 = 0;
      do {
        pGVar10 = *(GsBitStream **)(lVar7 + uVar11 * 0x28 + 8);
        if (pGVar10 != (GsBitStream *)0x0) {
          GsBitStream::~GsBitStream(pGVar10);
          operator_delete(pGVar10);
          lVar7 = *(long *)(uVar4 + 0x118);
          lVar6 = *(long *)(uVar4 + 0x120);
        }
        uVar11 = (ulong)((int)uVar11 + 1);
        uVar8 = (lVar6 - lVar7 >> 3) * -0x3333333333333333;
        lVar9 = lVar7;
      } while (uVar11 <= uVar8 && uVar8 - uVar11 != 0);
    }
    lVar7 = *(long *)(uVar4 + 0x108);
    *(long *)(uVar4 + 0x120) = lVar9;
    if (lVar7 != *(long *)(uVar4 + 0x100)) {
      uVar11 = 0;
      lVar9 = *(long *)(uVar4 + 0x100);
      lVar6 = lVar7;
      do {
        lVar7 = lVar9;
        if ((*(int *)(uVar4 + 0xfc) != (int)uVar11) &&
           (pGVar10 = *(GsBitStream **)(lVar7 + uVar11 * 0x28 + 8), pGVar10 != (GsBitStream *)0x0))
        {
          GsBitStream::~GsBitStream(pGVar10);
          operator_delete(pGVar10);
          lVar7 = *(long *)(uVar4 + 0x100);
          lVar6 = *(long *)(uVar4 + 0x108);
        }
        uVar11 = (ulong)((int)uVar11 + 1);
        uVar8 = (lVar6 - lVar7 >> 3) * -0x3333333333333333;
        lVar9 = lVar7;
      } while (uVar11 <= uVar8 && uVar8 - uVar11 != 0);
    }
    *(long *)(uVar4 + 0x108) = lVar7;
    enet_host_destroy(*(undefined8 *)(uVar4 + 8));
    *(undefined8 *)(uVar4 + 8) = 0;
  }
  return;
}


