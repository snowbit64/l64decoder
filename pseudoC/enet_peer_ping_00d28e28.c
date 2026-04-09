// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_ping
// Entry Point: 00d28e28
// Size: 92 bytes
// Signature: undefined enet_peer_ping(void)


void enet_peer_ping(long param_1)

{
  long lVar1;
  
  if ((*(int *)(param_1 + 0x38) == 5) && (lVar1 = enet_malloc(0x60), lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined2 *)(lVar1 + 0x24) = 0;
    *(undefined2 *)(lVar1 + 0x28) = 0xff85;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    enet_peer_setup_outgoing_command(param_1);
    return;
  }
  return;
}


