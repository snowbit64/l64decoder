// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::BGRA32toRGB24>
// Entry Point: 00a9f024
// Size: 108 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::BGRA32toRGB24>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::BGRA32toRGB24>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::BGRA32toRGB24>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ushort *puVar5;
  
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
        lVar4 = 0;
        puVar5 = (ushort *)param_3;
        do {
          uVar2 = *(undefined4 *)((long)param_1 + lVar4);
          lVar4 = lVar4 + 4;
          *(char *)(puVar5 + 1) = (char)uVar2;
          *puVar5 = (ushort)uVar2 & 0xff00 | (ushort)((uint)uVar2 >> 0x10) & 0xff;
          puVar5 = (ushort *)((long)puVar5 + 3);
        } while ((ulong)(uVar1 * param_5) * 4 - lVar4 != 0);
      }
      param_1 = (void *)((long)param_1 + (ulong)param_2);
      param_3 = (void *)((long)param_3 + (ulong)param_4);
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_6);
  }
  return;
}


