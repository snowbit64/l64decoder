// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: disconnect
// Entry Point: 00b4b870
// Size: 168 bytes
// Signature: undefined __thiscall disconnect(ENetConnection * this, DisconnectType param_1)


/* ENetConnection::disconnect(ENetConnection::DisconnectType) */

void __thiscall ENetConnection::disconnect(ENetConnection *this,DisconnectType param_1)

{
  if (*(int *)(this + 8) != 7) {
    *(undefined4 *)(this + 8) = 6;
    if (param_1 == 1) {
      enet_peer_disconnect_later(*(undefined8 *)this,1);
      return;
    }
    if (param_1 == 6) {
      *(undefined4 *)(this + 8) = 7;
      enet_peer_disconnect_now(*(undefined8 *)this,6);
      return;
    }
    enet_peer_disconnect(*(undefined8 *)this,param_1);
    if (param_1 - 3 < 2) {
      this[0xc] = (ENetConnection)0x0;
    }
    else if (param_1 == 2) {
      *(undefined4 *)(this + 8) = 8;
    }
  }
  return;
}


