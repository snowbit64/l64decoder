// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_disconnect_later
// Entry Point: 00d29058
// Size: 68 bytes
// Signature: undefined enet_peer_disconnect_later(void)


void enet_peer_disconnect_later(long param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x38) - 5U < 2) &&
     ((*(long *)(param_1 + 0x110) != param_1 + 0x110 ||
      (*(long **)(long *)(param_1 + 0xf0) != (long *)(param_1 + 0xf0))))) {
    *(undefined4 *)(param_1 + 0x1b8) = param_2;
    *(undefined4 *)(param_1 + 0x38) = 6;
    return;
  }
  enet_peer_disconnect();
  return;
}


