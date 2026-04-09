// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f15c80
// Entry Point: 00f15c80
// Size: 392 bytes
// Signature: undefined FUN_00f15c80(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00f15c80(uint param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = param_2 | 0x20;
  if (0x19 < param_2 - 0x41) {
    uVar3 = param_2;
  }
  switch(uVar3) {
  case 0x61:
    param_1 = (param_1 & 0xffffffdf) - 0x41;
    break;
  default:
    return param_2 == param_1;
  case 99:
    bVar5 = param_1 >= 0x20 && param_1 != 0x7f;
    if (0xffffffe5 < param_2 - 0x7b) {
      bVar5 = param_1 < 0x20 || param_1 == 0x7f;
    }
    return bVar5;
  case 100:
    bVar5 = 9 < param_1 - 0x30;
    goto LAB_00f15d64;
  case 0x67:
    bVar5 = 0x5d < param_1 - 0x21;
    goto LAB_00f15d64;
  case 0x6c:
    param_1 = param_1 - 0x61;
    break;
  case 0x70:
    bVar4 = *(byte *)(__ctype_ + (ulong)(param_1 + 1));
    bVar1 = (bVar4 & 0x10) == 0;
    if (0xffffffe5 < param_2 - 0x7b) {
      bVar1 = bVar4 & 0x10;
    }
    return (bool)bVar1;
  case 0x73:
    bVar5 = param_1 == 0x20;
    bVar6 = 4 < param_1 - 9;
    goto LAB_00f15dc8;
  case 0x75:
    param_1 = param_1 - 0x41;
    break;
  case 0x77:
    bVar4 = *(byte *)(__ctype_ + (ulong)(param_1 + 1));
    bVar1 = (bVar4 & 7) == 0;
    if (0xffffffe5 < param_2 - 0x7b) {
      bVar1 = bVar4 & 7;
    }
    return (bool)bVar1;
  case 0x78:
    bVar5 = param_1 - 0x30 < 10;
    bVar6 = 5 < (param_1 & 0xffffffdf) - 0x41;
LAB_00f15dc8:
    bVar2 = (bool)(bVar5 | !bVar6) == false;
    if (0xffffffe5 < param_2 - 0x7b) {
      bVar2 = (bool)(bVar5 | !bVar6);
    }
    return bVar2;
  case 0x7a:
    bVar5 = param_1 != 0;
    if (0xffffffe5 < param_2 - 0x7b) {
      bVar5 = param_1 == 0;
    }
    return bVar5;
  }
  bVar5 = 0x19 < param_1;
LAB_00f15d64:
  bVar6 = bVar5;
  if (0xffffffe5 < param_2 - 0x7b) {
    bVar6 = !bVar5;
  }
  return bVar6;
}


