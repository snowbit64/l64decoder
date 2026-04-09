// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setENetPeer
// Entry Point: 00b4b4c8
// Size: 8 bytes
// Signature: undefined __thiscall setENetPeer(ENetConnection * this, _ENetPeer * param_1)


/* ENetConnection::setENetPeer(_ENetPeer*) */

void __thiscall ENetConnection::setENetPeer(ENetConnection *this,_ENetPeer *param_1)

{
  *(_ENetPeer **)this = param_1;
  return;
}


