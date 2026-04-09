// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_PLTE
// Entry Point: 00db0888
// Size: 56 bytes
// Signature: undefined png_get_PLTE(void)


undefined8 png_get_PLTE(long param_1,long param_2,undefined8 *param_3,uint *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar2 = 0, param_3 != (undefined8 *)0x0)) &&
     ((*(uint *)(param_2 + 8) >> 3 & 1) != 0)) {
    uVar2 = 8;
    uVar1 = *(ushort *)(param_2 + 0x20);
    *param_3 = *(undefined8 *)(param_2 + 0x18);
    *param_4 = (uint)uVar1;
  }
  return uVar2;
}


