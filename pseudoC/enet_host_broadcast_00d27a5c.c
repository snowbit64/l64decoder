// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_broadcast
// Entry Point: 00d27a5c
// Size: 164 bytes
// Signature: undefined enet_host_broadcast(void)


void enet_host_broadcast(long param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (0 < lVar1) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar3 = uVar2;
    do {
      if (*(int *)(uVar3 + 0x38) == 5) {
        enet_peer_send(uVar3,param_2,param_3);
        uVar2 = *(ulong *)(param_1 + 0x28);
        lVar1 = *(long *)(param_1 + 0x30);
      }
      uVar3 = uVar3 + 0x1d0;
    } while (uVar3 < uVar2 + lVar1 * 0x1d0);
  }
  if (*param_3 != 0) {
    return;
  }
  enet_packet_destroy(param_3);
  return;
}


