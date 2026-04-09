// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_reset
// Entry Point: 00d28d30
// Size: 248 bytes
// Signature: undefined enet_peer_reset(void)


void enet_peer_reset(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x38) - 5U < 2) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x50) != 0) {
      *(long *)(lVar2 + 0x2b00) = *(long *)(lVar2 + 0x2b00) + -1;
    }
    *(long *)(lVar2 + 11000) = *(long *)(lVar2 + 11000) + -1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0x2000000020;
  *(undefined2 *)(param_1 + 0x18) = 0x1ffe;
  *(undefined8 *)(param_1 + 0xa4) = 0x1f400001388;
  *(undefined8 *)(param_1 + 0x9c) = 0x200000002;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0x1f4000088b8;
  *(undefined8 *)(param_1 + 0xac) = 0x1f4000000020;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0x1f400000000;
  *(undefined8 *)(param_1 + 0xbc) = 500;
  uVar1 = *(undefined4 *)(lVar2 + 0x18);
  *(undefined8 *)(param_1 + 0xd4) = 0x10000;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  if (*(void **)(param_1 + 0x1c8) != (void *)0x0) {
    enet_free(*(void **)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  enet_peer_reset_queues(param_1);
  return;
}


