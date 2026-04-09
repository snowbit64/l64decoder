// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_icc_check_header
// Entry Point: 00dab3e8
// Size: 852 bytes
// Signature: undefined png_icc_check_header(void)


undefined8
png_icc_check_header
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint *param_5,
          uint param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  
  uVar3 = ((ulong)*param_5 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
          ((ulong)*param_5 << 0x20 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10;
  if ((uint)(uVar3 >> 0x20) == param_4) {
    if (((param_4 & 3) != 0) && (3 < *(byte *)(param_5 + 2))) {
      uVar3 = (ulong)param_4;
      pcVar5 = "invalid length";
      goto LAB_00dab4a8;
    }
    uVar3 = ((ulong)param_5[0x20] << 0x20 & 0xff00ff00ff00ff00) >> 8 |
            ((ulong)param_5[0x20] << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10;
    uVar1 = (uint)(uVar3 >> 0x20);
    if ((uVar1 < 0x1555554b) && (uVar1 * 0xc + 0x84 <= param_4)) {
      uVar3 = ((ulong)param_5[0x10] << 0x20 & 0xff00ff00ff00ff00) >> 8 |
              ((ulong)param_5[0x10] << 0x20 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10;
      uVar3 = uVar4 >> 0x20;
      uVar1 = (uint)(uVar4 >> 0x20);
      if (0xfffe < uVar1) {
        pcVar5 = "invalid rendering intent";
        goto LAB_00dab4a8;
      }
      if (3 < uVar1) {
        FUN_00daaff8(param_1,0,param_3,uVar3,"intent outside defined range");
      }
      uVar3 = ((ulong)param_5[9] << 0x20 & 0xff00ff00ff00ff00) >> 8 |
              ((ulong)param_5[9] << 0x20 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10;
      uVar3 = uVar4 >> 0x20;
      if ((int)(uVar4 >> 0x20) != 0x61637370) {
        pcVar5 = "invalid signature";
        goto LAB_00dab4a8;
      }
      if ((*(ulong *)(param_5 + 0x11) ^ 0x100d6f60000 | (ulong)param_5[0x13] ^ 0x2dd30000) != 0) {
        FUN_00daaff8(param_1,0,param_3,0,"PCS illuminant is not D50");
      }
      uVar3 = ((ulong)param_5[4] << 0x20 & 0xff00ff00ff00ff00) >> 8 |
              ((ulong)param_5[4] << 0x20 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10;
      uVar3 = uVar4 >> 0x20;
      iVar2 = (int)(uVar4 >> 0x20);
      if (iVar2 == 0x47524159) {
        if ((param_6 >> 1 & 1) != 0) {
          pcVar5 = "Gray color space not permitted on RGB PNG";
          uVar3 = 0x47524159;
          goto LAB_00dab4a8;
        }
      }
      else {
        if (iVar2 != 0x52474220) {
          pcVar5 = "invalid ICC profile color space";
          goto LAB_00dab4a8;
        }
        if ((param_6 >> 1 & 1) == 0) {
          pcVar5 = "RGB color space not permitted on grayscale PNG";
          uVar3 = 0x52474220;
          goto LAB_00dab4a8;
        }
      }
      uVar3 = ((ulong)param_5[3] << 0x20 & 0xff00ff00ff00ff00) >> 8 |
              ((ulong)param_5[3] << 0x20 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10;
      uVar4 = uVar3 >> 0x20;
      iVar2 = (int)(uVar3 >> 0x20);
      if (iVar2 < 0x6e6d636c) {
        if (iVar2 == 0x61627374) {
          pcVar5 = "invalid embedded Abstract ICC profile";
          uVar3 = 0x61627374;
          goto LAB_00dab4a8;
        }
        if (iVar2 == 0x6c696e6b) {
          pcVar5 = "unexpected DeviceLink ICC profile class";
          uVar3 = 0x6c696e6b;
          goto LAB_00dab4a8;
        }
        iVar6 = 0x6d6e7472;
LAB_00dab680:
        if (iVar2 != iVar6) {
          pcVar5 = "unrecognized ICC profile class";
LAB_00dab6bc:
          FUN_00daaff8(param_1,0,param_3,uVar4,pcVar5);
        }
      }
      else {
        if (iVar2 < 0x73636e72) {
          if (iVar2 != 0x6e6d636c) {
            iVar6 = 0x70727472;
            goto LAB_00dab680;
          }
          pcVar5 = "unexpected NamedColor ICC profile class";
          uVar4 = 0x6e6d636c;
          goto LAB_00dab6bc;
        }
        if (iVar2 != 0x73636e72) {
          iVar6 = 0x73706163;
          goto LAB_00dab680;
        }
      }
      uVar3 = ((ulong)param_5[5] << 0x20 & 0xff00ff00ff00ff00) >> 8 |
              ((ulong)param_5[5] << 0x20 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10;
      uVar3 = uVar4 >> 0x20;
      iVar2 = (int)(uVar4 >> 0x20);
      if (iVar2 == 0x4c616220) {
        return 1;
      }
      if (iVar2 == 0x58595a20) {
        return 1;
      }
      pcVar5 = "unexpected ICC PCS encoding";
      goto LAB_00dab4a8;
    }
    pcVar5 = "tag count too large";
  }
  else {
    pcVar5 = "length does not match profile";
  }
  uVar3 = uVar3 >> 0x20;
LAB_00dab4a8:
  FUN_00daaff8(param_1,param_2,param_3,uVar3,pcVar5);
  return 0;
}


