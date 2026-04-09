// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_dec_init
// Entry Point: 00e64b28
// Size: 336 bytes
// Signature: undefined ec_dec_init(void)


void ec_dec_init(byte **param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(undefined8 *)((long)param_1 + 0x14) = 0x900000000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x8000000000;
  if (param_3 == 0) {
    uVar5 = 0;
    uVar6 = 0x7f;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0x7f;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = 1;
    bVar1 = *param_2;
    uVar5 = (uint)bVar1;
    uVar6 = bVar1 >> 1 ^ 0x7f;
    *(uint *)((long)param_1 + 0x2c) = (uint)bVar1;
    *(undefined4 *)(param_1 + 6) = 0;
    *(uint *)((long)param_1 + 0x24) = uVar6;
    if (1 < param_3) {
      lVar4 = 2;
      *(undefined4 *)((long)param_1 + 0x1c) = 2;
      *(undefined4 *)(param_1 + 4) = 0x8000;
      *(undefined4 *)(param_1 + 3) = 0x11;
      bVar2 = param_2[1];
      *(undefined4 *)(param_1 + 3) = 0x19;
      *(uint *)((long)param_1 + 0x2c) = (uint)bVar2;
      uVar6 = ((ushort)(CONCAT11(bVar1,bVar2) >> 1) & 0xff | uVar6 << 8) ^ 0xff;
      *(undefined4 *)(param_1 + 4) = 0x800000;
      *(uint *)((long)param_1 + 0x24) = uVar6;
      if (param_3 < 3) {
        uVar5 = 0;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x1c) = 3;
        uVar5 = (uint)param_2[2];
        lVar4 = 3;
      }
      *(uint *)((long)param_1 + 0x2c) = uVar5;
      uVar6 = ((uVar5 | (uint)bVar2 << 8) >> 1 & 0xff | uVar6 << 8) ^ 0xff;
      *(undefined4 *)(param_1 + 3) = 0x21;
      *(undefined4 *)(param_1 + 4) = 0x80000000;
      *(uint *)((long)param_1 + 0x24) = uVar6;
      if ((uint)lVar4 < param_3) {
        *(uint *)((long)param_1 + 0x1c) = (uint)lVar4 + 1;
        uVar3 = (uint)param_2[lVar4];
      }
      else {
        uVar3 = 0;
      }
      *(uint *)((long)param_1 + 0x2c) = uVar3;
      *(uint *)((long)param_1 + 0x24) = ((uVar3 | uVar5 << 8) >> 1 & 0xff | uVar6 << 8) ^ 0xff;
      return;
    }
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 3) = 0x21;
  *(undefined4 *)(param_1 + 4) = 0x80000000;
  *(uint *)((long)param_1 + 0x24) = ((uVar5 & 1) << 0x17 | uVar6 << 0x18) ^ 0xffffff;
  return;
}


