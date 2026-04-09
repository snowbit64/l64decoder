// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_pCAL
// Entry Point: 00db0654
// Size: 120 bytes
// Signature: undefined png_get_pCAL(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


undefined8
png_get_pCAL(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,uint *param_7,undefined8 *param_8,undefined8 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar6 = 0;
    if ((((param_9 != (undefined8 *)0x0) &&
         (((param_8 != (undefined8 *)0x0 && (param_7 != (uint *)0x0)) && (param_6 != (uint *)0x0))))
        && (((param_5 != (undefined4 *)0x0 && (param_4 != (undefined4 *)0x0)) &&
            (param_3 != (undefined8 *)0x0)))) && ((*(uint *)(param_2 + 8) >> 10 & 1) != 0)) {
      uVar6 = 0x400;
      uVar3 = *(undefined4 *)(param_2 + 0x114);
      uVar7 = *(undefined8 *)(param_2 + 0x108);
      *param_4 = *(undefined4 *)(param_2 + 0x110);
      bVar4 = *(byte *)(param_2 + 0x128);
      *param_5 = uVar3;
      uVar1 = *(undefined8 *)(param_2 + 0x118);
      uVar2 = *(undefined8 *)(param_2 + 0x120);
      *param_3 = uVar7;
      bVar5 = *(byte *)(param_2 + 0x129);
      *param_6 = (uint)bVar4;
      *param_8 = uVar1;
      *param_7 = (uint)bVar5;
      *param_9 = uVar2;
    }
  }
  return uVar6;
}


