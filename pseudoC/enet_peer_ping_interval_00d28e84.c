// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_ping_interval
// Entry Point: 00d28e84
// Size: 20 bytes
// Signature: undefined enet_peer_ping_interval(void)


void enet_peer_ping_interval(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 500;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0xa8) = iVar1;
  return;
}


