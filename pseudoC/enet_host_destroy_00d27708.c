// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_destroy
// Entry Point: 00d27708
// Size: 136 bytes
// Signature: undefined enet_host_destroy(void)


void enet_host_destroy(undefined4 *param_1)

{
  void *pvVar1;
  void *__ptr;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  enet_socket_destroy(*param_1);
  __ptr = *(void **)(param_1 + 10);
  pvVar1 = __ptr;
  if (0 < *(long *)(param_1 + 0xc)) {
    do {
      enet_peer_reset(pvVar1);
      __ptr = *(void **)(param_1 + 10);
      pvVar1 = (void *)((long)pvVar1 + 0x1d0);
    } while (pvVar1 < (void *)((long)__ptr + *(long *)(param_1 + 0xc) * 0x1d0));
  }
  if ((*(long *)(param_1 + 0x2aa) != 0) && (*(code **)(param_1 + 0x2b0) != (code *)0x0)) {
    (**(code **)(param_1 + 0x2b0))();
    __ptr = *(void **)(param_1 + 10);
  }
  enet_free(__ptr);
  enet_free(param_1);
  return;
}


