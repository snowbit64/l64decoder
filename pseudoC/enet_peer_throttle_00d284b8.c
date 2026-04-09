// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_throttle
// Entry Point: 00d284b8
// Size: 132 bytes
// Signature: undefined enet_peer_throttle(void)


undefined8 enet_peer_throttle(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xb8);
  if (uVar3 <= *(uint *)(param_1 + 0xc0)) {
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
    return 0;
  }
  if (uVar3 < param_2) {
    if (uVar3 + *(uint *)(param_1 + 0xc0) * 2 < param_2) {
      iVar1 = 0;
      if (*(uint *)(param_1 + 0xa0) <= *(uint *)(param_1 + 0x8c)) {
        iVar1 = *(uint *)(param_1 + 0x8c) - *(uint *)(param_1 + 0xa0);
      }
      *(int *)(param_1 + 0x8c) = iVar1;
      return 0xffffffff;
    }
    return 0;
  }
  uVar3 = *(int *)(param_1 + 0x8c) + *(int *)(param_1 + 0x9c);
  uVar2 = *(uint *)(param_1 + 0x90);
  if (uVar3 <= *(uint *)(param_1 + 0x90)) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0x8c) = uVar2;
  return 1;
}


