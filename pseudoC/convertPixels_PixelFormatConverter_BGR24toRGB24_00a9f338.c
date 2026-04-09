// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::BGR24toRGB24>
// Entry Point: 00a9f338
// Size: 120 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::BGR24toRGB24>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::BGR24toRGB24>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::BGR24toRGB24>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_2 == param_4) {
    uVar3 = param_6;
    param_6 = 1;
  }
  else {
    uVar3 = 1;
  }
  if (param_6 != 0) {
    uVar6 = 0;
    do {
      if (uVar3 * param_5 != 0) {
        lVar7 = 0;
        do {
          puVar1 = (ushort *)((long)param_1 + lVar7);
          puVar2 = (ushort *)((long)param_3 + lVar7);
          lVar7 = lVar7 + 3;
          uVar5 = *puVar1;
          bVar4 = *(byte *)(puVar1 + 1);
          *(char *)(puVar2 + 1) = (char)uVar5;
          *puVar2 = uVar5 & 0xff00 | (ushort)bVar4;
        } while ((ulong)(uVar3 * param_5) * 3 != lVar7);
      }
      param_1 = (void *)((long)param_1 + (ulong)param_2);
      param_3 = (void *)((long)param_3 + (ulong)param_4);
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_6);
  }
  return;
}


