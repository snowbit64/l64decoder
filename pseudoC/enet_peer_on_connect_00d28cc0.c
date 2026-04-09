// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_on_connect
// Entry Point: 00d28cc0
// Size: 56 bytes
// Signature: undefined enet_peer_on_connect(void)


void enet_peer_on_connect(long param_1)

{
  long lVar1;
  
  if (1 < *(int *)(param_1 + 0x38) - 5U) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x50) != 0) {
      *(long *)(lVar1 + 0x2b00) = *(long *)(lVar1 + 0x2b00) + 1;
    }
    *(long *)(lVar1 + 11000) = *(long *)(lVar1 + 11000) + 1;
  }
  return;
}


