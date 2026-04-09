// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_cHRM_XYZ_fixed
// Entry Point: 00db0298
// Size: 168 bytes
// Signature: undefined png_get_cHRM_XYZ_fixed(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


undefined8
png_get_cHRM_XYZ_fixed
          (long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
          undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
          undefined4 *param_10,undefined4 *param_11)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(ushort *)(param_2 + 0x7e) >> 1 & 1) == 0) {
      return 0;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x58);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 0x5c);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(param_2 + 0x60);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)(param_2 + 100);
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = *(undefined4 *)(param_2 + 0x68);
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = *(undefined4 *)(param_2 + 0x6c);
    }
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = *(undefined4 *)(param_2 + 0x70);
    }
    if (param_10 != (undefined4 *)0x0) {
      *param_10 = *(undefined4 *)(param_2 + 0x74);
    }
    if (param_11 == (undefined4 *)0x0) {
      return 4;
    }
    uVar1 = 4;
    *param_11 = *(undefined4 *)(param_2 + 0x78);
  }
  return uVar1;
}


