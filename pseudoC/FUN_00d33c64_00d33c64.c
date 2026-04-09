// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d33c64
// Entry Point: 00d33c64
// Size: 408 bytes
// Signature: undefined FUN_00d33c64(void)


ulong FUN_00d33c64(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(int *)(param_1 + 5) - (int)(param_1 + 4);
  uVar2 = (ulong)(uVar1 + *(int *)(param_1 + 6)) << 0x38;
  switch(uVar1 & 0xff) {
  case 7:
    uVar2 = uVar2 | (ulong)*(byte *)((long)param_1 + 0x26) << 0x30;
  case 6:
    uVar2 = uVar2 | (ulong)*(byte *)((long)param_1 + 0x25) << 0x28;
  case 5:
    uVar2 = uVar2 | (ulong)*(byte *)((long)param_1 + 0x24) << 0x20;
  case 4:
    uVar2 = uVar2 | (ulong)*(byte *)((long)param_1 + 0x23) << 0x18;
  case 3:
    uVar2 = uVar2 | (ulong)*(byte *)((long)param_1 + 0x22) << 0x10;
  case 2:
    uVar2 = uVar2 | (ulong)*(byte *)((long)param_1 + 0x21) << 8;
  case 1:
    uVar2 = uVar2 | *(byte *)(param_1 + 4);
  default:
    uVar7 = param_1[1];
    uVar4 = uVar7 + *param_1;
    uVar3 = uVar4 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    uVar5 = param_1[3] ^ uVar2;
    uVar7 = uVar3 + uVar5 + param_1[2];
    uVar5 = uVar5 + param_1[2] ^ (uVar5 >> 0x30 | uVar5 << 0x10);
    uVar3 = uVar7 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
    uVar4 = (uVar4 >> 0x20 | uVar4 << 0x20) + uVar5;
    uVar6 = uVar4 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
    uVar4 = uVar3 + uVar4;
    uVar5 = uVar4 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
    uVar7 = uVar6 + (uVar7 >> 0x20 | uVar7 << 0x20);
    uVar3 = uVar5 + uVar7;
    uVar7 = uVar7 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
    uVar5 = uVar3 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
    uVar4 = (uVar4 >> 0x20 | uVar4 << 0x20) + uVar7;
    uVar6 = uVar4 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
    uVar2 = uVar5 + (uVar4 ^ uVar2);
    uVar5 = uVar2 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar4 = uVar6 + ((uVar3 >> 0x20 | uVar3 << 0x20) ^ 0xff);
    uVar7 = uVar5 + uVar4;
    uVar4 = uVar4 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
    uVar3 = uVar7 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
    uVar2 = (uVar2 >> 0x20 | uVar2 << 0x20) + uVar4;
    uVar5 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
    uVar2 = uVar3 + uVar2;
    uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
    uVar4 = uVar5 + (uVar7 >> 0x20 | uVar7 << 0x20);
    uVar7 = uVar3 + uVar4;
    uVar4 = uVar4 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
    uVar3 = uVar7 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
    uVar2 = (uVar2 >> 0x20 | uVar2 << 0x20) + uVar4;
    uVar5 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
    uVar2 = uVar3 + uVar2;
    uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
    uVar4 = uVar5 + (uVar7 >> 0x20 | uVar7 << 0x20);
    uVar7 = uVar3 + uVar4;
    uVar4 = uVar4 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
    uVar3 = uVar7 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
    uVar2 = (uVar2 >> 0x20 | uVar2 << 0x20) + uVar4;
    uVar5 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
    uVar2 = uVar3 + uVar2;
    uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
    uVar4 = uVar5 + (uVar7 >> 0x20 | uVar7 << 0x20);
    uVar7 = uVar3 + uVar4;
    uVar4 = uVar4 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
    uVar3 = uVar7 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar2 = (uVar2 >> 0x20 | uVar2 << 0x20) + uVar4;
    uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar7;
    param_1[3] = uVar4;
    return uVar3 ^ uVar2 ^ uVar7 ^ uVar4;
  }
}


