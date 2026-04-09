// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGB24toBGRA32>
// Entry Point: 00a9efa8
// Size: 124 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGB24toBGRA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGB24toBGRA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGB24toBGRA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort *puVar4;
  
  if (param_2 == param_4) {
    uVar1 = param_6;
    param_6 = 1;
  }
  else {
    uVar1 = 1;
  }
  if (param_6 != 0) {
    uVar2 = 0;
    do {
      if (uVar1 * param_5 != 0) {
        lVar3 = 0;
        puVar4 = (ushort *)param_1;
        do {
          *(uint *)((long)param_3 + lVar3) =
               *puVar4 & 0xff00 | (uint)*puVar4 << 0x10 | (uint)*(byte *)(puVar4 + 1) | 0xff000000;
          lVar3 = lVar3 + 4;
          puVar4 = (ushort *)((long)puVar4 + 3);
        } while ((ulong)(uVar1 * param_5) * 4 - lVar3 != 0);
      }
      param_1 = (void *)((long)param_1 + (ulong)param_2);
      param_3 = (void *)((long)param_3 + (ulong)param_4);
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_6);
  }
  return;
}


