// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleDisconnect
// Entry Point: 00b4bb40
// Size: 480 bytes
// Signature: undefined __thiscall handleDisconnect(ENetConnection * this, DisconnectType param_1, ENetNetworkManager * param_2)


/* ENetConnection::handleDisconnect(ENetConnection::DisconnectType, ENetNetworkManager*) */

void __thiscall
ENetConnection::handleDisconnect
          (ENetConnection *this,DisconnectType param_1,ENetNetworkManager *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = *(int *)(this + 8);
  if (iVar3 == 7) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b4bce4 to 00b4bcef has its CatchHandler @ 00b4bd20 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: handleDisconnected called on disconnected peer.\n");
    goto LAB_00b4bc74;
  }
  uVar1 = *(undefined4 *)(this + 0x4c4);
  *(undefined4 *)(this + 8) = 7;
  switch(param_1) {
  case 3:
    local_54 = 0xffffffff00000005;
    break;
  case 4:
    local_54 = 0xffffffff00000009;
    break;
  case 5:
    local_68 = 0;
    local_54 = 0xffffffff0000000a;
    local_70[0] = 3;
    local_60 = uVar1;
    FUN_00b4b154(param_2 + 0x118,local_70);
  default:
    if (this[0xc] == (ENetConnection)0x0) goto LAB_00b4bc74;
    switch(iVar3) {
    case 2:
    case 4:
    case 6:
      local_54 = 0xffffffff00000006;
      break;
    default:
      local_54 = 0xffffffff00000002;
      break;
    case 5:
      uVar4 = 6;
      if (param_1 == 0) {
        uVar4 = 7;
      }
      local_54 = CONCAT44(0xffffffff,uVar4);
    }
    break;
  case 6:
    local_54 = 0xffffffff00000007;
  }
  local_68 = 0;
  local_70[0] = 3;
  local_60 = uVar1;
  FUN_00b4b154(param_2 + 0x118,local_70);
LAB_00b4bc74:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


