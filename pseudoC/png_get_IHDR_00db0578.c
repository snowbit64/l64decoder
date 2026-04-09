// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_IHDR
// Entry Point: 00db0578
// Size: 152 bytes
// Signature: undefined png_get_IHDR(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


undefined4
png_get_IHDR(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5,
            uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = param_2[1];
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)*(byte *)(param_2 + 9);
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = (uint)*(byte *)((long)param_2 + 0x25);
    }
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((long)param_2 + 0x26);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((long)param_2 + 0x27);
    }
    bVar1 = *(byte *)(param_2 + 10);
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)bVar1;
    }
    png_check_IHDR(param_1,*param_2,param_2[1],*(undefined *)(param_2 + 9),
                   *(undefined *)((long)param_2 + 0x25),bVar1,*(undefined *)((long)param_2 + 0x26),
                   *(undefined *)((long)param_2 + 0x27));
    uVar2 = 1;
  }
  return uVar2;
}


