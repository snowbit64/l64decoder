// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleReceive
// Entry Point: 00b4c770
// Size: 1216 bytes
// Signature: undefined __thiscall handleReceive(ENetConnection * this, GsBitStream * param_1, ENetNetworkManager * param_2)


/* ENetConnection::handleReceive(GsBitStream&, ENetNetworkManager*) */

void __thiscall
ENetConnection::handleReceive(ENetConnection *this,GsBitStream *param_1,ENetNetworkManager *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  GsBitStream *this_00;
  ulong uVar10;
  char *pcVar11;
  byte local_b4 [4];
  GsBitStream aGStack_b0 [32];
  uint local_90 [2];
  GsBitStream *local_88;
  undefined4 local_80;
  undefined4 local_74;
  int iStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (this[0x458] == (ENetConnection)0x0) goto LAB_00b4c8b0;
  local_90[0] = GsBitStream::getNumBytesUsed();
  puVar6 = (uchar *)GsBitStream::getData();
  uVar7 = AuthenticatedEncryption::Decrypt((AuthenticatedEncryption *)(this + 0x20),puVar6,local_90)
  ;
  if ((uVar7 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00b4cb34 to 00b4cb3f has its CatchHandler @ 00b4cc4c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      pcVar11 = "Warning: Could not decrypt received packet.\n";
LAB_00b4cb48:
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    else {
      pcVar11 = "Warning: Could not decrypt received packet.\n";
    }
LAB_00b4c880:
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11);
    goto LAB_00b4c9e4;
  }
  puVar6 = (uchar *)GsBitStream::getData();
  GsBitStream::setBuffer(param_1,puVar6,local_90[0],false);
  if (local_90[0] - 3 < 0xfffc) {
    uVar5 = local_90[0] - 2;
    puVar8 = (ushort *)GsBitStream::getData();
    uVar2 = *puVar8;
    if (uVar2 <= uVar5) {
      lVar9 = GsBitStream::getData();
      GsBitStream::setBuffer(param_1,(uchar *)(lVar9 + 2),uVar5,false);
      goto LAB_00b4c8b0;
    }
    puVar6 = (uchar *)operator_new__((ulong)uVar2);
    lVar9 = GsBitStream::getData();
    uVar7 = ZLIBCompressionUtil::decompress((uchar *)(lVar9 + 2),uVar5,puVar6,(uint)uVar2);
    if ((uVar7 & 1) == 0) {
      operator_delete__(puVar6);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4cc14 to 00b4cc1f has its CatchHandler @ 00b4cc30 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        pcVar11 = "Warning: Could not decompress received packet.\n";
        goto LAB_00b4cb48;
      }
      pcVar11 = "Warning: Could not decompress received packet.\n";
      goto LAB_00b4c880;
    }
    GsBitStream::setBuffer(param_1,puVar6,(uint)uVar2,false);
  }
  else {
LAB_00b4c8b0:
    puVar6 = (uchar *)0x0;
  }
  GsBitStream::GsBitStream(aGStack_b0);
                    /* try { // try from 00b4c8bc to 00b4c973 has its CatchHandler @ 00b4cc7c */
  parseTimeSync(this,param_1,aGStack_b0);
  parseTimeSync(this,param_1,aGStack_b0);
  parseHandshake(this,param_1,aGStack_b0,param_2);
  if ((*(int *)(this + 8) == 8) || (*(int *)(this + 8) == 6)) {
LAB_00b4c9d0:
    if (puVar6 != (uchar *)0x0) {
      operator_delete__(puVar6);
    }
  }
  else {
    iVar4 = GsBitStream::getNumBytesUsed();
    if (iVar4 != 0) {
      send(this,aGStack_b0,1,0);
    }
    if (*(int *)(this + 8) == 5) {
      this[0x458] = (ENetConnection)0x1;
    }
    iVar4 = GsBitStream::getNumUnreadBits();
    if (iVar4 == 0) goto LAB_00b4c9d0;
    if (*(int *)(this + 8) != 5) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4cb84 to 00b4cb8f has its CatchHandler @ 00b4cc38 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Received user data during handshake.\n");
    }
    local_90[0] = 0xffffffff;
                    /* try { // try from 00b4c97c to 00b4ca1f has its CatchHandler @ 00b4cc78 */
    uVar5 = GsBitStream::getReadOffset();
    local_b4[0] = 0;
    GsBitStream::readBits(param_1,local_b4,8,true);
    if (local_b4[0] == 0x19) {
      GsBitStream::readBits(param_1,(uchar *)local_90,0x20,true);
      iVar4 = local_90[0] + *(int *)(this + 0x474);
    }
    else {
      GsBitStream::setReadOffset(param_1,uVar5);
      iVar4 = -1;
    }
    local_b4[0] = 0xff;
                    /* try { // try from 00b4ca2c to 00b4ca93 has its CatchHandler @ 00b4cc74 */
    GsBitStream::readBits(param_1,local_b4,8,true);
    uVar5 = (uint)local_b4[0];
    local_b4[0] = (byte)(uVar5 - 0x5b);
    if (uVar5 - 0x5b < 4) {
      uVar1 = *(undefined4 *)(this + 0x4c4);
      this_00 = (GsBitStream *)operator_new(0x20);
                    /* try { // try from 00b4ca98 to 00b4cacf has its CatchHandler @ 00b4cc64 */
      lVar9 = GsBitStream::getData();
      uVar7 = GsBitStream::getReadOffset();
      uVar10 = GsBitStream::getNumUnreadBits();
      GsBitStream::GsBitStream
                (this_00,(uchar *)(lVar9 + ((uVar7 & 0xffffffff) >> 3)),
                 (uint)(uVar10 >> 3) & 0x1fffffff,true);
      if (puVar6 != (uchar *)0x0) {
        operator_delete__(puVar6);
      }
      local_74 = 0;
      local_90[0] = (uint)(char)local_b4[0];
                    /* try { // try from 00b4caf4 to 00b4cafb has its CatchHandler @ 00b4cc74 */
      local_88 = this_00;
      local_80 = uVar1;
      iStack_70 = iVar4;
      FUN_00b4b154(param_2 + 0x118,local_90);
    }
    else {
      if (puVar6 != (uchar *)0x0) {
        operator_delete__(puVar6);
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4cbcc to 00b4cbd7 has its CatchHandler @ 00b4cc34 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Received packet with invalid app id.\n");
    }
  }
  GsBitStream::~GsBitStream(aGStack_b0);
LAB_00b4c9e4:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


