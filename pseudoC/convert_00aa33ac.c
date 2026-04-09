// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convert
// Entry Point: 00aa33ac
// Size: 400 bytes
// Signature: undefined __cdecl convert(PIX4f param_1)


/* PixelFormatConverter::RGBA128toRGBA64::convert(PixelFormatConverter::PIX4f) */

ulong PixelFormatConverter::RGBA128toRGBA64::convert(PIX4f param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_s0;
  uint in_s1;
  uint in_s2;
  
  uVar6 = in_s0 >> 0x17 & 0xff;
  uVar4 = in_s0 >> 0x10 & 0x8000;
  iVar1 = uVar6 - 0x70;
  uVar5 = in_s0 & 0x7fffff;
  if (uVar6 < 0x70 || iVar1 == 0) {
    if (uVar6 < 0x66) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 | ((uVar5 | 0x800000) >> (ulong)(0x71 - uVar6 & 0x1f)) >> 0xd;
    }
  }
  else {
    if (iVar1 == 0x8f) {
      if (uVar5 != 0) {
        uVar4 = uVar4 | uVar5 >> 0xd | (uint)(uVar5 < 0x2000);
      }
    }
    else if (uVar6 < 0x8f) {
      uVar4 = uVar4 | uVar5 >> 0xd | iVar1 * 0x400;
      goto LAB_00aa3428;
    }
    uVar4 = uVar4 | 0x7c00;
  }
LAB_00aa3428:
  uVar2 = in_s1 >> 0x17 & 0xff;
  uVar5 = in_s1 >> 0x10 & 0x8000;
  iVar1 = uVar2 - 0x70;
  uVar6 = in_s1 & 0x7fffff;
  if (uVar2 < 0x70 || iVar1 == 0) {
    if (uVar2 < 0x66) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar5 | ((uVar6 | 0x800000) >> (ulong)(0x71 - uVar2 & 0x1f)) >> 0xd;
    }
  }
  else {
    if (iVar1 == 0x8f) {
      if (uVar6 != 0) {
        uVar5 = uVar5 | uVar6 >> 0xd | (uint)(uVar6 < 0x2000);
      }
    }
    else if (uVar2 < 0x8f) {
      uVar5 = uVar5 | uVar6 >> 0xd | iVar1 * 0x400;
      goto LAB_00aa34a4;
    }
    uVar5 = uVar5 | 0x7c00;
  }
LAB_00aa34a4:
  uVar3 = in_s2 >> 0x17 & 0xff;
  uVar6 = in_s2 >> 0x10 & 0x8000;
  iVar1 = uVar3 - 0x70;
  uVar2 = in_s2 & 0x7fffff;
  if (uVar3 < 0x70 || iVar1 == 0) {
    if (uVar3 < 0x66) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 | ((uVar2 | 0x800000) >> (ulong)(0x71 - uVar3 & 0x1f)) >> 0xd;
    }
  }
  else {
    if (iVar1 == 0x8f) {
      if (uVar2 != 0) {
        uVar6 = uVar6 | uVar2 >> 0xd | (uint)(uVar2 < 0x2000);
      }
    }
    else if (uVar3 < 0x8f) {
      uVar6 = uVar6 | uVar2 >> 0xd | iVar1 * 0x400;
      goto LAB_00aa3520;
    }
    uVar6 = uVar6 | 0x7c00;
  }
LAB_00aa3520:
  return CONCAT44(uVar6,uVar5 << 0x10) & 0xffffffffffff | (ulong)(uVar4 & 0xffff) |
         0x3c00000000000000;
}


