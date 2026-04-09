// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_disconnect_now
// Entry Point: 00d28ec8
// Size: 140 bytes
// Signature: undefined enet_peer_disconnect_now(void)


void enet_peer_disconnect_now(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    if ((iVar1 != 7) && (iVar1 != 9)) {
      enet_peer_reset_queues(param_1);
      lVar3 = enet_malloc(0x60);
      if (lVar3 != 0) {
        uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
        *(undefined4 *)(lVar3 + 0x20) = 0;
        *(undefined2 *)(lVar3 + 0x24) = 0;
        *(undefined2 *)(lVar3 + 0x28) = 0xff44;
        *(uint *)(lVar3 + 0x2c) = uVar2 >> 0x10 | uVar2 << 0x10;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        enet_peer_setup_outgoing_command(param_1,lVar3);
      }
      enet_host_flush(*(undefined8 *)(param_1 + 0x10));
    }
    enet_peer_reset(param_1);
    return;
  }
  return;
}


