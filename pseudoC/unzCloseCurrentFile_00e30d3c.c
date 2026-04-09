// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzCloseCurrentFile
// Entry Point: 00e30d3c
// Size: 172 bytes
// Signature: undefined unzCloseCurrentFile(void)


undefined4 unzCloseCurrentFile(long param_1)

{
  void *__ptr;
  undefined4 uVar1;
  void **__ptr_00;
  
  if ((param_1 != 0) && (__ptr_00 = *(void ***)(param_1 + 0x140), __ptr_00 != (void **)0x0)) {
    if ((__ptr_00[0x18] == (void *)0x0) && (*(int *)(__ptr_00 + 0x27) == 0)) {
      uVar1 = 0;
      if (__ptr_00[0x15] != __ptr_00[0x16]) {
        uVar1 = 0xffffff97;
      }
      __ptr = *__ptr_00;
    }
    else {
      uVar1 = 0;
      __ptr = *__ptr_00;
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    *__ptr_00 = (void *)0x0;
    if (__ptr_00[0x10] == (void *)0x8) {
      inflateEnd(__ptr_00 + 1);
    }
    free(__ptr_00);
    *(undefined8 *)(param_1 + 0x140) = 0;
    return uVar1;
  }
  return 0xffffff9a;
}


