// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_sCAL_s
// Entry Point: 00db07ec
// Size: 60 bytes
// Signature: undefined png_get_sCAL_s(void)


undefined8
png_get_sCAL_s(long param_1,long param_2,uint *param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_2 + 9) >> 6 & 1) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x158);
    uVar3 = 0x4000;
    bVar2 = *(byte *)(param_2 + 0x14c);
    *param_4 = *(undefined8 *)(param_2 + 0x150);
    *param_3 = (uint)bVar2;
    *param_5 = uVar1;
  }
  return uVar3;
}


