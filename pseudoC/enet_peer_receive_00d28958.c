// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_peer_receive
// Entry Point: 00d28958
// Size: 152 bytes
// Signature: undefined enet_peer_receive(void)


long * enet_peer_receive(long param_1,undefined *param_2)

{
  void *__ptr;
  long *plVar1;
  void *__ptr_00;
  
  if (*(long *)(param_1 + 0x120) != param_1 + 0x120) {
    __ptr_00 = (void *)enet_list_remove();
    if (param_2 != (undefined *)0x0) {
      *param_2 = *(undefined *)((long)__ptr_00 + 0x15);
    }
    __ptr = *(void **)((long)__ptr_00 + 0x50);
    plVar1 = *(long **)((long)__ptr_00 + 0x58);
    *plVar1 = *plVar1 + -1;
    if (__ptr != (void *)0x0) {
      enet_free(__ptr);
    }
    enet_free(__ptr_00);
    *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) - plVar1[3];
    return plVar1;
  }
  return (long *)0x0;
}


