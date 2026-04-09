// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_disconnect
// Entry Point: 00d28f54
// Size: 260 bytes
// Signature: undefined enet_peer_disconnect(void)


void enet_peer_disconnect(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined uVar5;
  
  if (*(uint *)(param_1 + 0x38) < 10 &&
      (1 << (ulong)(*(uint *)(param_1 + 0x38) & 0x1f) & 0x381U) != 0) {
    return;
  }
  enet_peer_reset_queues();
  iVar1 = *(int *)(param_1 + 0x38);
  lVar3 = enet_malloc(0x60);
  if (lVar3 != 0) {
    uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    *(undefined *)(lVar3 + 0x29) = 0xff;
    uVar5 = 0x84;
    if (1 < iVar1 - 5U) {
      uVar5 = 0x44;
    }
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(uint *)(lVar3 + 0x2c) = uVar2 >> 0x10 | uVar2 << 0x10;
    *(undefined2 *)(lVar3 + 0x24) = 0;
    *(undefined *)(lVar3 + 0x28) = uVar5;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    enet_peer_setup_outgoing_command(param_1,lVar3);
  }
  if (*(int *)(param_1 + 0x38) - 5U < 2) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x50) != 0) {
      *(long *)(lVar3 + 0x2b00) = *(long *)(lVar3 + 0x2b00) + -1;
    }
    lVar4 = *(long *)(lVar3 + 11000);
    *(undefined4 *)(param_1 + 0x38) = 7;
    *(long *)(lVar3 + 11000) = lVar4 + -1;
    return;
  }
  enet_host_flush(*(undefined8 *)(param_1 + 0x10));
  enet_peer_reset(param_1);
  return;
}


