// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_create_info_struct
// Entry Point: 00da8e4c
// Size: 84 bytes
// Signature: undefined png_create_info_struct(void)


void png_create_info_struct(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) &&
     (puVar1 = (undefined8 *)png_malloc_base(param_1,0x168), puVar1 != (undefined8 *)0x0)) {
    puVar1[0x2c] = 0;
    puVar1[0x29] = 0;
    puVar1[0x28] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x25] = 0;
    puVar1[0x24] = 0;
    puVar1[0x27] = 0;
    puVar1[0x26] = 0;
    puVar1[0x21] = 0;
    puVar1[0x20] = 0;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  return;
}


