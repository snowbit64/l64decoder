// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_flush
// Entry Point: 00d297f8
// Size: 52 bytes
// Signature: undefined enet_host_flush(void)


void enet_host_flush(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = enet_time_get();
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_00d2982c(param_1,0,0);
  return;
}


