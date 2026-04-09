// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convert
// Entry Point: 00aa31f4
// Size: 440 bytes
// Signature: undefined __cdecl convert(PIX4hf param_1)


/* WARNING: Removing unreachable block (ram,0x00aa3308) */
/* WARNING: Removing unreachable block (ram,0x00aa32b8) */
/* WARNING: Removing unreachable block (ram,0x00aa32ac) */
/* WARNING: Removing unreachable block (ram,0x00aa32f8) */
/* PixelFormatConverter::RGBA64FtoRGBA32::convert(PixelFormatConverter::PIX4hf) */

uint PixelFormatConverter::RGBA64FtoRGBA32::convert(PIX4hf param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = param_1 << 0xd & 0xfffe000;
  uVar2 = param_1 << 0xd & 0xf800000;
  if (uVar2 == 0xf800000) {
    fVar3 = (float)(uVar1 | 0x70000000);
  }
  else if (uVar2 == 0) {
    fVar3 = (float)(uVar1 + 0x38800000) + -6.103516e-05;
  }
  else {
    fVar3 = (float)(uVar1 + 0x38000000);
  }
  uVar2 = (param_1 >> 0x10) << 0xd;
  uVar1 = uVar2 & 0xfffe000;
  uVar2 = uVar2 & 0xf800000;
  if (uVar2 == 0xf800000) {
    fVar4 = (float)(uVar1 | 0x70000000);
  }
  else if (uVar2 == 0) {
    fVar4 = (float)(uVar1 + 0x38800000) + -6.103516e-05;
  }
  else {
    fVar4 = (float)(uVar1 + 0x38000000);
  }
  return ((int)((float)((uint)fVar4 | param_1 & 0x80000000) * 255.0) & 0xffU) << 8 |
         (int)((float)((uint)fVar3 | (param_1 & 0x8000) << 0x10) * 255.0);
}


