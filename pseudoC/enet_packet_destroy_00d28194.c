// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_packet_destroy
// Entry Point: 00d28194
// Size: 76 bytes
// Signature: undefined enet_packet_destroy(void)


void enet_packet_destroy(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(code **)((long)param_1 + 0x20) != (code *)0x0) {
      (**(code **)((long)param_1 + 0x20))(param_1);
    }
    if (((*(byte *)((long)param_1 + 8) >> 2 & 1) == 0) &&
       (*(void **)((long)param_1 + 0x10) != (void *)0x0)) {
      enet_free(*(void **)((long)param_1 + 0x10));
    }
    enet_free(param_1);
    return;
  }
  return;
}


