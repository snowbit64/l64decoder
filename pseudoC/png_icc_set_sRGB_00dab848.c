// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_icc_set_sRGB
// Entry Point: 00dab848
// Size: 448 bytes
// Signature: undefined png_icc_set_sRGB(void)


void png_icc_set_sRGB(long param_1,undefined8 param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  
  if ((~*(uint *)(param_1 + 0x3c0) & 0x30) != 0) {
    lVar7 = 0;
    uVar6 = 0;
    uVar1 = (param_3[0x15] & 0xff00ff00) >> 8 | (param_3[0x15] & 0xff00ff) << 8;
    uVar5 = 0x10000;
    puVar8 = &DAT_00549b38;
    do {
      if (((((uVar1 >> 0x10 | uVar1 << 0x10) == puVar8[-1]) &&
           (uVar2 = (param_3[0x16] & 0xff00ff00) >> 8 | (param_3[0x16] & 0xff00ff) << 8,
           (uVar2 >> 0x10 | uVar2 << 0x10) == *puVar8)) &&
          (uVar2 = (param_3[0x17] & 0xff00ff00) >> 8 | (param_3[0x17] & 0xff00ff) << 8,
          (uVar2 >> 0x10 | uVar2 << 0x10) == puVar8[1])) &&
         (uVar2 = (param_3[0x18] & 0xff00ff00) >> 8 | (param_3[0x18] & 0xff00ff) << 8,
         (uVar2 >> 0x10 | uVar2 << 0x10) == puVar8[2])) {
        if (uVar6 == 0) {
          uVar6 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
          uVar5 = (param_3[0x10] & 0xff00ff00) >> 8 | (param_3[0x10] & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          if (uVar6 == puVar8[-2]) goto LAB_00dab934;
        }
        else if (uVar6 == puVar8[-2]) {
LAB_00dab934:
          if (uVar5 == *(ushort *)((long)puVar8 + 0xe)) {
            if (param_4 == 0) {
              uVar3 = adler32(0,0,0);
              param_4 = adler32(uVar3,param_3,uVar6);
            }
            if (param_4 == puVar8[-4]) {
              uVar3 = crc32(0,0,0);
              uVar4 = crc32(uVar3,param_3,uVar6);
              if (uVar4 == puVar8[-3]) {
                if (((uint)lVar7 < 5) && (lVar7 - 4U < 3)) {
                  png_chunk_report(param_1,"out-of-date sRGB profile with no signature",0);
                }
                uVar1 = (param_3[0x10] & 0xff00ff00) >> 8 | (param_3[0x10] & 0xff00ff) << 8;
                png_colorspace_set_sRGB(param_1,param_2,uVar1 >> 0x10 | uVar1 << 0x10);
                return;
              }
            }
            png_chunk_report(param_1,"Not recognizing known sRGB profile that has been edited",0);
            return;
          }
        }
      }
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 8;
    } while (lVar7 != 7);
  }
  return;
}


