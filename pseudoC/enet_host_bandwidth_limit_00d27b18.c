// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_bandwidth_limit
// Entry Point: 00d27b18
// Size: 16 bytes
// Signature: undefined enet_host_bandwidth_limit(void)


void enet_host_bandwidth_limit(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}


