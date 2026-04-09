// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: send
// Entry Point: 00b4b5f0
// Size: 616 bytes
// Signature: undefined __thiscall send(ENetConnection * this, GsBitStream * param_1, int param_2, int param_3)


/* ENetConnection::send(GsBitStream const*, int, int) */

void __thiscall
ENetConnection::send(ENetConnection *this,GsBitStream *param_1,int param_2,int param_3)

{
  uchar *puVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uchar *__src;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  uint local_60;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar5 = GsBitStream::getNumBytesUsed();
  *(int *)(this + 0x46c) = *(int *)(this + 0x46c) + iVar5;
  if (this[0x458] == (ENetConnection)0x0) {
    uVar12 = GsBitStream::getData();
    uVar7 = GsBitStream::getNumBytesUsed();
    lVar11 = enet_packet_create(uVar12,uVar7,param_2);
  }
  else {
    uVar6 = GsBitStream::getNumBytesUsed();
    __src = (uchar *)GsBitStream::getData();
    local_5c = uVar6;
    if (uVar6 - 3 < 0xfffc) {
      local_60 = ZLIBCompressionUtil::getCompressionBufferSize(__src,uVar6);
      uVar9 = (ulong)local_60;
      if ((ulong)*(uint *)(this + 0x468) < uVar9 + 2) {
        *(uint *)(this + 0x468) = local_60;
        if (*(void **)(this + 0x460) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x460));
          uVar9 = (ulong)*(uint *)(this + 0x468);
        }
        pvVar10 = operator_new__(uVar9);
        *(void **)(this + 0x460) = pvVar10;
      }
      ZLIBCompressionUtil::compress(__src,uVar6,(uchar **)(this + 0x460),&local_60,false);
      puVar1 = *(uchar **)(this + 0x460);
      uVar3 = local_60;
      if (uVar6 <= local_60) {
        puVar1 = __src;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      local_5c = uVar6 + 2;
      lVar11 = enet_packet_create(0,uVar6 + 0x11,param_2);
      uVar4 = GsBitStream::getNumBytesUsed();
      **(undefined2 **)(lVar11 + 0x10) = uVar4;
      pvVar10 = (void *)(*(long *)(lVar11 + 0x10) + 2);
      __src = puVar1;
    }
    else {
      lVar11 = enet_packet_create(0,uVar6 + 0xf,param_2);
      pvVar10 = *(void **)(lVar11 + 0x10);
    }
    memcpy(pvVar10,__src,(ulong)uVar6);
    AuthenticatedEncryption::Encrypt
              ((AuthenticatedEncryption *)(this + 0x20),*(uchar **)(lVar11 + 0x10),
               *(uint *)(lVar11 + 0x18),&local_5c);
  }
  *(int *)(this + 0x470) = *(int *)(this + 0x470) + *(int *)(lVar11 + 0x18);
  iVar5 = enet_peer_send(*(undefined8 *)this,param_3,lVar11);
  if (iVar5 != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00b4b81c to 00b4b827 has its CatchHandler @ 00b4b858 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: peer_send failed.\n");
    enet_packet_destroy(lVar11);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5 == 0);
  }
  return;
}


