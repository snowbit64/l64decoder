// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_socket_destroy
// Entry Point: 00d2c5b0
// Size: 16 bytes
// Signature: undefined enet_socket_destroy(void)


ulong enet_socket_destroy(ulong param_1)

{
  uint uVar1;
  
  if ((int)param_1 != -1) {
    uVar1 = close((int)param_1);
    return (ulong)uVar1;
  }
  return param_1;
}


