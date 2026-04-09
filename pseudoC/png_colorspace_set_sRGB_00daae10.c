// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_colorspace_set_sRGB
// Entry Point: 00daae10
// Size: 488 bytes
// Signature: undefined png_colorspace_set_sRGB(void)


undefined8 png_colorspace_set_sRGB(undefined8 param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  double dVar5;
  
  uVar1 = *(ushort *)((long)param_2 + 0x4a);
  if ((short)uVar1 < 0) {
    return 0;
  }
  uVar4 = (ulong)param_3;
  if (param_3 < 4) {
    if (((uVar1 >> 2 & 1) == 0) || (*(ushort *)(param_2 + 0x12) == param_3)) {
      if ((uVar1 >> 5 & 1) == 0) {
        if (((uVar1 >> 1 & 1) != 0) &&
           (iVar2 = FUN_00dab25c(&DAT_00549308,param_2 + 1,100), iVar2 == 0)) {
          png_chunk_report(param_1,"cHRM chunk does not match sRGB",2);
        }
        if (((uVar1 & 1) != 0) &&
           ((*param_2 == 0 ||
            (dVar5 = (double)(long)(((double)*param_2 * 100000.0) / 45455.0 + 0.5),
            (2147483647.0 < dVar5 || dVar5 < -2147483648.0) || 10000 < (int)dVar5 - 95000U)))) {
          png_chunk_report(param_1,"gamma value does not match sRGB",2);
        }
        *(undefined8 *)(param_2 + 3) = 0xea6000007530;
        *(undefined8 *)(param_2 + 1) = 0x80e80000fa00;
        *(short *)(param_2 + 0x12) = (short)param_3;
        *(undefined8 *)(param_2 + 7) = 0x808400007a26;
        *(undefined8 *)(param_2 + 5) = 0x177000003a98;
        *param_2 = 0xb18f;
        *(ushort *)((long)param_2 + 0x4a) = uVar1 | 0xe7;
        *(undefined8 *)(param_2 + 0xb) = 0x8bae0000078d;
        *(undefined8 *)(param_2 + 9) = 0x53100000a117;
        *(undefined8 *)(param_2 + 0xf) = 0x1c3300004680;
        *(undefined8 *)(param_2 + 0xd) = 0x2e8f0001175d;
        param_2[0x11] = 0x1734d;
        return 1;
      }
      png_benign_error(param_1,"duplicate sRGB information ignored");
      return 0;
    }
    pcVar3 = "inconsistent rendering intents";
  }
  else {
    uVar4 = (ulong)(int)param_3;
    pcVar3 = "invalid sRGB rendering intent";
  }
  FUN_00daaff8(param_1,param_2,&DAT_0050d996,uVar4,pcVar3);
  return 0;
}


