// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendUnconnected
// Entry Point: 00b47eb4
// Size: 388 bytes
// Signature: undefined __thiscall sendUnconnected(ENetNetworkManager * this, GsBitStream * param_1, NetworkAddress param_2, uint param_3)


/* ENetNetworkManager::sendUnconnected(GsBitStream const*, NetworkAddress, unsigned int) */

uint __thiscall
ENetNetworkManager::sendUnconnected
          (ENetNetworkManager *this,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  Logger *this_00;
  undefined4 local_88;
  undefined2 local_84;
  ushort local_80 [4];
  ushort *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = GsBitStream::getNumBytesUsed();
  uVar2 = 0;
  if ((param_4 < 3) && (((uint)(uVar4 >> 4) & 0xfffffff) < 0x271)) {
    Mutex::enterCriticalSection();
    local_78 = local_80;
    uVar2 = param_4 << 0xd | 0x1fff;
    local_80[0] = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
    uStack_70 = 2;
    local_68 = GsBitStream::getData();
    local_60 = GsBitStream::getNumBytesUsed();
    local_60 = local_60 & 0xffffffff;
    local_84 = (undefined2)((ulong)param_3 >> 0x20);
    local_88 = (undefined4)param_3;
    uVar2 = enet_socket_send(**(undefined4 **)(this + 8),&local_88,&local_78,2);
    if ((int)uVar2 < 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00b47ff4 to 00b47ffb has its CatchHandler @ 00b48048 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b48000 to 00b48003 has its CatchHandler @ 00b48038 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Host send unconnected failed.\n");
    }
    uVar2 = ~uVar2 >> 0x1f;
    Mutex::leaveCriticalSection();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


