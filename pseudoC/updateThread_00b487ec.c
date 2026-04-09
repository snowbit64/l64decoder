// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateThread
// Entry Point: 00b487ec
// Size: 316 bytes
// Signature: undefined __thiscall updateThread(ENetNetworkManager * this, bool * param_1)


/* ENetNetworkManager::updateThread(bool volatile&) */

void __thiscall ENetNetworkManager::updateThread(ENetNetworkManager *this,bool *param_1)

{
  long lVar1;
  int iVar2;
  int local_68 [2];
  _ENetPeer *local_60;
  uint local_54;
  _ENetPacket *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  if (*param_1 == false) {
    do {
      if (*(long *)(this + 8) == 0) break;
      enet_host_service(*(long *)(this + 8),0,0);
      iVar2 = enet_host_check_events(*(undefined8 *)(this + 8),local_68);
      while (0 < iVar2) {
        if (local_68[0] == 3) {
          handleReceive(this,local_60,local_50);
          enet_packet_destroy(local_50);
        }
        else if (local_68[0] == 2) {
          handleDisconnect(this,local_60,local_54);
        }
        else if (local_68[0] == 1) {
          handleNewConnection(this,local_60,local_54);
        }
        iVar2 = enet_host_check_events(*(undefined8 *)(this + 8),local_68);
      }
      Mutex::leaveCriticalSection();
      Event::wait((Event *)(this + 0xa0),*(uint *)(this + 0x68));
      Mutex::enterCriticalSection();
    } while (*param_1 == false);
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


