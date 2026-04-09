// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_info_init_3
// Entry Point: 00da9404
// Size: 124 bytes
// Signature: undefined png_info_init_3(void)


void png_info_init_3(undefined8 *param_1,ulong param_2)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*param_1;
  if (__ptr != (undefined8 *)0x0) {
    if (param_2 < 0x168) {
      *param_1 = 0;
      free(__ptr);
      __ptr = (undefined8 *)png_malloc_base(0,0x168);
      if (__ptr == (undefined8 *)0x0) {
        return;
      }
      *param_1 = __ptr;
    }
    __ptr[0x2c] = 0;
    __ptr[0x29] = 0;
    __ptr[0x28] = 0;
    __ptr[0x2b] = 0;
    __ptr[0x2a] = 0;
    __ptr[0x25] = 0;
    __ptr[0x24] = 0;
    __ptr[0x27] = 0;
    __ptr[0x26] = 0;
    __ptr[0x21] = 0;
    __ptr[0x20] = 0;
    __ptr[0x23] = 0;
    __ptr[0x22] = 0;
    __ptr[0x1d] = 0;
    __ptr[0x1c] = 0;
    __ptr[0x1f] = 0;
    __ptr[0x1e] = 0;
    __ptr[0x19] = 0;
    __ptr[0x18] = 0;
    __ptr[0x1b] = 0;
    __ptr[0x1a] = 0;
    __ptr[0x15] = 0;
    __ptr[0x14] = 0;
    __ptr[0x17] = 0;
    __ptr[0x16] = 0;
    __ptr[0x11] = 0;
    __ptr[0x10] = 0;
    __ptr[0x13] = 0;
    __ptr[0x12] = 0;
    __ptr[0xd] = 0;
    __ptr[0xc] = 0;
    __ptr[0xf] = 0;
    __ptr[0xe] = 0;
    __ptr[9] = 0;
    __ptr[8] = 0;
    __ptr[0xb] = 0;
    __ptr[10] = 0;
    __ptr[5] = 0;
    __ptr[4] = 0;
    __ptr[7] = 0;
    __ptr[6] = 0;
    __ptr[1] = 0;
    *__ptr = 0;
    __ptr[3] = 0;
    __ptr[2] = 0;
  }
  return;
}


