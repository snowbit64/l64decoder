// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_packet_create
// Entry Point: 00d280ec
// Size: 168 bytes
// Signature: undefined enet_packet_create(void)


undefined8 * enet_packet_create(void *param_1,size_t param_2,uint param_3)

{
  undefined8 *__ptr;
  void *__dest;
  
  __ptr = (undefined8 *)enet_malloc(0x30);
  if (__ptr != (undefined8 *)0x0) {
    if ((param_3 >> 2 & 1) == 0) {
      if (param_2 == 0) {
        __ptr[2] = 0;
      }
      else {
        __dest = (void *)enet_malloc(param_2);
        __ptr[2] = __dest;
        if (__dest == (void *)0x0) {
          enet_free(__ptr);
          return (undefined8 *)0x0;
        }
        if (param_1 != (void *)0x0) {
          memcpy(__dest,param_1,param_2);
        }
      }
    }
    else {
      __ptr[2] = param_1;
    }
    *__ptr = 0;
    *(uint *)(__ptr + 1) = param_3;
    __ptr[4] = 0;
    __ptr[5] = 0;
    __ptr[3] = param_2;
  }
  return __ptr;
}


