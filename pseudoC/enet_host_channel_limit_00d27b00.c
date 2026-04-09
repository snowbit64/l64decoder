// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_channel_limit
// Entry Point: 00d27b00
// Size: 24 bytes
// Signature: undefined enet_host_channel_limit(void)


void enet_host_channel_limit(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0xff;
  if (0xffffffffffffff00 < param_2 - 0x100U) {
    lVar1 = param_2;
  }
  *(long *)(param_1 + 0x38) = lVar1;
  return;
}


