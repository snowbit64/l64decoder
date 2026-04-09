// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db2628
// Entry Point: 00db2628
// Size: 252 bytes
// Signature: undefined FUN_00db2628(void)


undefined8 FUN_00db2628(long **param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  lVar2 = **param_1;
  lVar3 = (*param_1)[1];
  png_set_benign_errors(lVar2,1);
  png_read_info(lVar2,lVar3);
  bVar4 = *(byte *)(lVar2 + 0x29f);
  *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)(lVar2 + 0x230);
  if ((bVar4 >> 2 & 1) == 0) {
    uVar6 = (uint)(*(short *)(lVar2 + 0x298) != 0) | bVar4 & 2;
  }
  else {
    uVar6 = bVar4 & 2 | 1;
  }
  bVar5 = *(byte *)(lVar2 + 0x2a0);
  uVar1 = uVar6 | 4;
  if (bVar5 != 0x10) {
    uVar1 = uVar6;
  }
  uVar6 = (uint)bVar4;
  *(uint *)((long)param_1 + 0x14) = uVar1 | (uVar6 & 1) << 3;
  if (((uVar1 >> 1 & 1) != 0) && ((*(ushort *)(lVar2 + 0x522) & 0x8042) == 2)) {
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 1;
  }
  if (uVar6 == 3) {
    uVar6 = (uint)*(ushort *)(lVar2 + 0x290);
  }
  else {
    if (uVar6 != 0) {
      *(undefined4 *)((long)param_1 + 0x1c) = 0x100;
      return 1;
    }
    uVar6 = 1 << (ulong)(bVar5 & 0x1f);
  }
  if (0xff < uVar6) {
    uVar6 = 0x100;
  }
  *(uint *)((long)param_1 + 0x1c) = uVar6;
  return 1;
}


