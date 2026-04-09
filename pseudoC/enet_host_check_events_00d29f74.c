// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_check_events
// Entry Point: 00d29f74
// Size: 28 bytes
// Signature: undefined enet_host_check_events(void)


undefined8 enet_host_check_events(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    uVar1 = FUN_00d29f90();
    return uVar1;
  }
  return 0xffffffff;
}


