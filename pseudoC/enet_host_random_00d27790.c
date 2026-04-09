// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_random
// Entry Point: 00d27790
// Size: 64 bytes
// Signature: undefined enet_host_random(void)


uint enet_host_random(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x1c) + 0x6d2b79f5;
  *(uint *)(param_1 + 0x1c) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0xf) * (uVar1 | 1);
  uVar1 = uVar1 + (uVar1 ^ uVar1 >> 7) * (uVar1 | 0x3d) ^ uVar1;
  return uVar1 ^ uVar1 >> 0xe;
}


