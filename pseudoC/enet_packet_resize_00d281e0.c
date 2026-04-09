// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_packet_resize
// Entry Point: 00d281e0
// Size: 124 bytes
// Signature: undefined enet_packet_resize(void)


undefined8 enet_packet_resize(long param_1,ulong param_2)

{
  void *__dest;
  
  if ((*(ulong *)(param_1 + 0x18) < param_2) && ((*(byte *)(param_1 + 8) >> 2 & 1) == 0)) {
    __dest = (void *)enet_malloc(param_2);
    if (__dest == (void *)0x0) {
      return 0xffffffff;
    }
    memcpy(__dest,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0x18));
    enet_free(*(void **)(param_1 + 0x10));
    *(void **)(param_1 + 0x10) = __dest;
  }
  *(ulong *)(param_1 + 0x18) = param_2;
  return 0;
}


