// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA32toR4G4B4A4>
// Entry Point: 00a9f500
// Size: 176 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA32toR4G4B4A4>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA32toR4G4B4A4>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA32toR4G4B4A4>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 == param_4) {
    uVar1 = param_6;
    param_6 = 1;
  }
  else {
    uVar1 = 1;
  }
  if (param_6 != 0) {
    uVar3 = 0;
    do {
      if (uVar1 * param_5 != 0) {
        uVar4 = 0;
        do {
          uVar2 = *(uint *)((long)param_1 + uVar4 * 4);
          *(ushort *)((long)param_3 + uVar4 * 2) =
               (ushort)(byte)PixelFormatUtil::round8to4(unsigned_char)::clamp
                             [(ulong)(uVar2 >> 0x18) + 8 >> 4] |
               (ushort)(byte)PixelFormatUtil::round8to4(unsigned_char)::clamp
                             [((ulong)uVar2 & 0xff) + 8 >> 4] << 0xc |
               (ushort)(byte)PixelFormatUtil::round8to4(unsigned_char)::clamp
                             [((ulong)(uVar2 >> 8) & 0xff) + 8 >> 4] << 8 |
               (ushort)(byte)PixelFormatUtil::round8to4(unsigned_char)::clamp
                             [((ulong)(uVar2 >> 0x10) & 0xff) + 8 >> 4] << 4;
          uVar4 = uVar4 + 1;
        } while (uVar1 * param_5 != uVar4);
      }
      param_1 = (void *)((long)param_1 + (ulong)param_2);
      param_3 = (void *)((long)param_3 + (ulong)param_4);
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_6);
  }
  return;
}


