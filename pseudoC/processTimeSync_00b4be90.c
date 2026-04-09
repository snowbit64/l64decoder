// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTimeSync
// Entry Point: 00b4be90
// Size: 620 bytes
// Signature: undefined __thiscall processTimeSync(ENetConnection * this, uint param_1, uint param_2)


/* ENetConnection::processTimeSync(unsigned int, unsigned int) */

void __thiscall ENetConnection::processTimeSync(ENetConnection *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  Logger *this_00;
  undefined4 uVar5;
  
  uVar3 = enet_time_get();
  if (uVar3 < param_1) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00b4c0bc to 00b4c0c3 has its CatchHandler @ 00b4c10c */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b4c0c8 to 00b4c0cb has its CatchHandler @ 00b4c0fc */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Received invalid ping response. Received time is smaller than send time.\n"
                     );
  }
  else {
    uVar2 = *(uint *)(this + 0x4b8);
    uVar1 = uVar2 + 8;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(this + (ulong)uVar2 * 8 + 0x478) = uVar3 - param_1;
    *(uint *)((long)(this + (ulong)uVar2 * 8 + 0x478) + 4) =
         ((param_1 >> 1) - param_2) + (uVar3 >> 1);
    uVar3 = *(uint *)(this + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) +
                             0x478);
    if (uVar3 == 0xffffffff) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(this + (long)(int)uVar1 * 8 + 0x47c);
    }
    iVar4 = 7;
    if (0 < (int)uVar2) {
      iVar4 = -1;
    }
    if (*(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478) < uVar3) {
      uVar5 = *(undefined4 *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x47c);
      uVar3 = *(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478);
    }
    iVar4 = 6;
    if (1 < (int)uVar2) {
      iVar4 = -2;
    }
    if (*(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478) < uVar3) {
      uVar5 = *(undefined4 *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x47c);
      uVar3 = *(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478);
    }
    iVar4 = 5;
    if (2 < (int)uVar2) {
      iVar4 = -3;
    }
    if (*(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478) < uVar3) {
      uVar5 = *(undefined4 *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x47c);
      uVar3 = *(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478);
    }
    iVar4 = -4;
    if ((int)uVar2 < 4) {
      iVar4 = 4;
    }
    if (*(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478) < uVar3) {
      uVar5 = *(undefined4 *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x47c);
      uVar3 = *(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478);
    }
    iVar4 = 3;
    if (4 < (int)uVar2) {
      iVar4 = -5;
    }
    if (*(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478) < uVar3) {
      uVar5 = *(undefined4 *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x47c);
      uVar3 = *(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478);
    }
    iVar4 = 2;
    if (5 < (int)uVar2) {
      iVar4 = -6;
    }
    if (*(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478) < uVar3) {
      uVar5 = *(undefined4 *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x47c);
      uVar3 = *(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478);
    }
    iVar4 = -7;
    if ((int)uVar2 < 7) {
      iVar4 = 1;
    }
    if (*(uint *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x478) < uVar3) {
      uVar5 = *(undefined4 *)(this + (long)(int)(uVar2 + iVar4) * 8 + 0x47c);
    }
    *(undefined4 *)(this + 0x474) = uVar5;
    iVar4 = 0;
    if (uVar2 + 1 < 8) {
      iVar4 = uVar2 + 1;
    }
    *(int *)(this + 0x4b8) = iVar4;
  }
  return;
}


