// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_throttle_configure
// Entry Point: 00d283a8
// Size: 132 bytes
// Signature: undefined enet_peer_throttle_configure(void)


void enet_peer_throttle_configure(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0xa0) = param_4;
  *(uint *)(param_1 + 0xa4) = param_2;
  *(uint *)(param_1 + 0x9c) = param_3;
  lVar4 = enet_malloc(0x60);
  if (lVar4 != 0) {
    uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    uVar3 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
    *(undefined2 *)(lVar4 + 0x28) = 0xff8b;
    *(uint *)(lVar4 + 0x2c) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(uint *)(lVar4 + 0x30) = uVar2 >> 0x10 | uVar2 << 0x10;
    *(uint *)(lVar4 + 0x34) = uVar3 >> 0x10 | uVar3 << 0x10;
    *(undefined4 *)(lVar4 + 0x20) = 0;
    *(undefined2 *)(lVar4 + 0x24) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    enet_peer_setup_outgoing_command(param_1);
    return;
  }
  return;
}


