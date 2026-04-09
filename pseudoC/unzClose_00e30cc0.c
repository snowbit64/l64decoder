// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzClose
// Entry Point: 00e30cc0
// Size: 124 bytes
// Signature: undefined unzClose(void)


undefined8 unzClose(void *param_1)

{
  void **__ptr;
  
  if (param_1 != (void *)0x0) {
    __ptr = *(void ***)((long)param_1 + 0x140);
    if (__ptr != (void **)0x0) {
      if (*__ptr != (void *)0x0) {
        free(*__ptr);
      }
      *__ptr = (void *)0x0;
      if (__ptr[0x10] == (void *)0x8) {
        inflateEnd(__ptr + 1);
      }
      free(__ptr);
      *(undefined8 *)((long)param_1 + 0x140) = 0;
    }
    (**(code **)((long)param_1 + 0x28))
              (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x60));
    free(param_1);
    return 0;
  }
  return 0xffffff9a;
}


