// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_iCCP
// Entry Point: 00db047c
// Size: 80 bytes
// Signature: undefined png_get_iCCP(void)


undefined8
png_get_iCCP(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,uint **param_5,
            uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar3 = 0, param_6 != (uint *)0x0)) &&
     (((param_5 != (uint **)0x0 && (param_3 != (undefined8 *)0x0)) &&
      ((*(uint *)(param_2 + 8) >> 0xc & 1) != 0)))) {
    puVar1 = *(uint **)(param_2 + 0x88);
    uVar3 = 0x1000;
    *param_3 = *(undefined8 *)(param_2 + 0x80);
    *param_5 = puVar1;
    uVar2 = *puVar1;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    *param_6 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  return uVar3;
}


