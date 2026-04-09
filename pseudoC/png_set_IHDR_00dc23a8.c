// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_IHDR
// Entry Point: 00dc23a8
// Size: 212 bytes
// Signature: undefined png_set_IHDR(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void png_set_IHDR(long param_1,uint *param_2,uint param_3,uint param_4,undefined param_5,
                 undefined param_6,undefined param_7,undefined param_8,undefined param_9)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  *(undefined *)(param_2 + 9) = param_5;
  *(undefined *)((long)param_2 + 0x25) = param_6;
  *(undefined *)((long)param_2 + 0x26) = param_8;
  *(undefined *)(param_2 + 10) = param_7;
  *(undefined *)((long)param_2 + 0x27) = param_9;
  png_check_IHDR(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  bVar2 = *(byte *)((long)param_2 + 0x25);
  if (bVar2 == 3) {
    uVar3 = 1;
  }
  else {
    uVar1 = bVar2 & 2;
    uVar3 = uVar1 | 1;
    *(char *)((long)param_2 + 0x29) = (char)uVar3;
    if ((bVar2 >> 2 & 1) == 0) goto LAB_00dc2434;
    uVar3 = uVar1 + 2;
  }
  *(char *)((long)param_2 + 0x29) = (char)uVar3;
LAB_00dc2434:
  uVar3 = *(byte *)(param_2 + 9) * uVar3;
  *(char *)((long)param_2 + 0x2a) = (char)uVar3;
  if ((uVar3 & 0xff) < 8) {
    uVar4 = ((ulong)uVar3 & 0xff) * (ulong)param_3 + 7 >> 3;
  }
  else {
    uVar4 = (ulong)(uVar3 >> 3 & 0x1f) * (ulong)param_3;
  }
  *(ulong *)(param_2 + 4) = uVar4;
  return;
}


