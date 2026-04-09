// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA32toR5G6B5>
// Entry Point: 00a9f454
// Size: 172 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA32toR5G6B5>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA32toR5G6B5>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA32toR5G6B5>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == param_4) {
    uVar2 = param_6;
    param_6 = 1;
  }
  else {
    uVar2 = 1;
  }
  if (param_6 != 0) {
    uVar4 = 0;
    do {
      if (uVar2 * param_5 != 0) {
        uVar5 = 0;
        do {
          uVar3 = *(uint *)((long)param_1 + uVar5 * 4);
          uVar1 = 0x7e0;
          if ((~uVar3 & 0xfe00) != 0) {
            uVar1 = ((ushort)(uVar3 >> 5) & 0x7f8) + 0x10 & 0xfe0;
          }
          *(ushort *)((long)param_3 + uVar5 * 2) =
               (ushort)(byte)PixelFormatUtil::round8to5(unsigned_char)::clamp
                             [((ulong)(uVar3 >> 0x10) & 0xff) + 4 >> 3] |
               (ushort)(byte)PixelFormatUtil::round8to5(unsigned_char)::clamp
                             [((ulong)uVar3 & 0xff) + 4 >> 3] << 0xb | uVar1;
          uVar5 = uVar5 + 1;
        } while (uVar2 * param_5 != uVar5);
      }
      param_1 = (void *)((long)param_1 + (ulong)param_2);
      param_3 = (void *)((long)param_3 + (ulong)param_4);
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_6);
  }
  return;
}


