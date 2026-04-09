// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA128toRGBA64>
// Entry Point: 00a9f704
// Size: 168 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA128toRGBA64>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA128toRGBA64>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA128toRGBA64>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  PIX4f PVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  PVar2 = (PIX4f)param_1;
  if (param_2 == param_4) {
    uVar1 = param_6;
    param_6 = 1;
  }
  else {
    uVar1 = 1;
  }
  if (param_6 != 0) {
    uVar4 = 0;
    do {
      if (uVar1 * param_5 != 0) {
        lVar5 = 0;
        do {
          uVar3 = RGBA128toRGBA64::convert(PVar2);
          PVar2 = (PIX4f)uVar3;
          *(undefined8 *)((long)param_3 + lVar5) = uVar3;
          lVar5 = lVar5 + 8;
        } while ((ulong)(uVar1 * param_5) * 8 - lVar5 != 0);
      }
      param_3 = (void *)((long)param_3 + (ulong)param_4);
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_6);
  }
  return;
}


