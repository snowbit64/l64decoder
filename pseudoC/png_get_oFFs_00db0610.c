// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_oFFs
// Entry Point: 00db0610
// Size: 68 bytes
// Signature: undefined png_get_oFFs(void)


undefined8
png_get_oFFs(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar3 = 0, param_5 != (uint *)0x0)) &&
     (((param_4 != (undefined4 *)0x0 && (param_3 != (undefined4 *)0x0)) &&
      ((*(uint *)(param_2 + 8) >> 8 & 1) != 0)))) {
    uVar1 = *(undefined4 *)(param_2 + 0xd8);
    bVar2 = *(byte *)(param_2 + 0xdc);
    uVar3 = 0x100;
    *param_3 = *(undefined4 *)(param_2 + 0xd4);
    *param_4 = uVar1;
    *param_5 = (uint)bVar2;
  }
  return uVar3;
}


