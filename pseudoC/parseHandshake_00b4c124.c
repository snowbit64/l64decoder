// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseHandshake
// Entry Point: 00b4c124
// Size: 1564 bytes
// Signature: undefined __thiscall parseHandshake(ENetConnection * this, GsBitStream * param_1, GsBitStream * param_2, ENetNetworkManager * param_3)


/* ENetConnection::parseHandshake(GsBitStream&, GsBitStream&, ENetNetworkManager*) */

void __thiscall
ENetConnection::parseHandshake
          (ENetConnection *this,GsBitStream *param_1,GsBitStream *param_2,
          ENetNetworkManager *param_3)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  uchar local_15c [4];
  uchar local_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_11c;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_dc;
  uchar auStack_98 [64];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)(this + 0x4c4);
  uVar3 = GsBitStream::getReadOffset();
  local_15c[0] = '\0';
  GsBitStream::readBits(param_1,local_15c,8,true);
  if (local_15c[0] == '!') {
    uVar3 = GsBitStream::getNumUnreadBits();
    if (uVar3 < 0x100) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4c5e4 to 00b4c5ef has its CatchHandler @ 00b4c750 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar6 = "Error: Invalid proof received.\n";
    }
    else {
      if (*(int *)(this + 8) == 4) {
        GsBitStream::readAlignedBytes(param_1,auStack_98,0x20);
        uVar5 = AuthenticatedEncryption::ValidateProof
                          ((AuthenticatedEncryption *)(this + 0x20),auStack_98,0x20);
        if ((uVar5 & 1) != 0) {
          local_f0 = 0;
          *(undefined4 *)(this + 8) = 5;
          local_dc = 0xffffffff00000004;
          local_f8 = 3;
          local_e8 = uVar1;
          FUN_00b4b154(param_3 + 0x118,&local_f8);
          goto LAB_00b4c518;
        }
LAB_00b4c4c8:
        if (*(int *)(this + 8) != 7) {
          *(undefined4 *)(this + 8) = 6;
          enet_peer_disconnect(*(undefined8 *)this,2);
          *(undefined4 *)(this + 8) = 8;
        }
        goto LAB_00b4c518;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4c674 to 00b4c67f has its CatchHandler @ 00b4c748 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar6 = "Error: Unexpected proof received.\n";
    }
  }
  else if (local_15c[0] == ' ') {
    uVar3 = GsBitStream::getNumUnreadBits();
    if (uVar3 < 0x300) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4c59c to 00b4c5a7 has its CatchHandler @ 00b4c754 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar6 = "Error: Invalid answer packet received.\n";
    }
    else {
      if (*(int *)(this + 8) == 3) {
        GsBitStream::readAlignedBytes(param_1,(uchar *)&local_f8,0x60);
        uVar5 = KeyAgreementInitiator::ProcessAnswer
                          (*(KeyAgreementInitiator **)(this + 0x10),(uchar *)&local_f8,0x60,
                           auStack_98,0x40);
        local_128 = uVar1;
        if ((uVar5 & 1) != 0) {
          AuthenticatedEncryption::SetKey
                    ((AuthenticatedEncryption *)(this + 0x20),auStack_98,0x40,true,
                     "getScreenHdrOutput");
          AuthenticatedEncryption::GenerateProof
                    ((AuthenticatedEncryption *)(this + 0x20),local_158,0x20);
          local_138 = CONCAT31(local_138._1_3_,0x21);
          GsBitStream::writeBits(param_2,(uchar *)&local_138,8,true);
          GsBitStream::writeAlignedBytes(param_2,local_158,0x20);
          local_130 = 0;
          *(undefined4 *)(this + 8) = 5;
          local_11c = 0xffffffff00000001;
          local_138 = 3;
          FUN_00b4b154(param_3 + 0x118,&local_138);
          goto LAB_00b4c518;
        }
        local_130 = 0;
        local_11c = 0xffffffff00000008;
        local_138 = 3;
        FUN_00b4b154(param_3 + 0x118,&local_138);
        goto LAB_00b4c4c8;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4c62c to 00b4c637 has its CatchHandler @ 00b4c74c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar6 = "Error: Unexpected answer received.\n";
    }
  }
  else {
    if (local_15c[0] != '\x1f') {
      GsBitStream::setReadOffset(param_1,uVar3);
      goto LAB_00b4c518;
    }
    uVar3 = GsBitStream::getNumUnreadBits();
    if (uVar3 < 0x200) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4c554 to 00b4c55f has its CatchHandler @ 00b4c758 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar6 = "Error: Invalid challenge packet received.\n";
    }
    else if (*(int *)(this + 8) == 2) {
      local_f8 = CONCAT31(local_f8._1_3_,0x1d);
      GsBitStream::writeBits(param_2,(uchar *)&local_f8,8,true);
      local_f8 = enet_time_get();
      GsBitStream::writeBits(param_2,(uchar *)&local_f8,0x20,true);
      GsBitStream::readAlignedBytes(param_1,auStack_98,0x40);
      uVar5 = KeyAgreementResponder::ProcessChallenge
                        (*(KeyAgreementResponder **)(this + 0x18),
                         *(SecureRandomGenerator **)(this + 0x450),auStack_98,0x40,
                         (uchar *)&local_f8,0x60,(uchar *)&local_138,0x40);
      if ((uVar5 & 1) != 0) {
        AuthenticatedEncryption::SetKey
                  ((AuthenticatedEncryption *)(this + 0x20),(uchar *)&local_138,0x40,false,
                   "getScreenHdrOutput");
        local_158[0] = ' ';
        GsBitStream::writeBits(param_2,local_158,8,true);
        GsBitStream::writeAlignedBytes(param_2,(uchar *)&local_f8,0x60);
        *(undefined4 *)(this + 8) = 4;
        goto LAB_00b4c518;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4c704 to 00b4c70f has its CatchHandler @ 00b4c740 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar6 = "Error: Invalid challenge received.\n";
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b4c6bc to 00b4c6c7 has its CatchHandler @ 00b4c744 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar6 = "Error: Unexpected challenge received.\n";
    }
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6);
LAB_00b4c518:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


