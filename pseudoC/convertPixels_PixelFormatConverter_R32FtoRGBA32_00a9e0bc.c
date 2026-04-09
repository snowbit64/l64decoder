// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::R32FtoRGBA32>
// Entry Point: 00a9e0bc
// Size: 268 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::R32FtoRGBA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::R32FtoRGBA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::R32FtoRGBA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_2 == param_4) {
    uVar4 = param_6;
    param_6 = 1;
  }
  else {
    uVar4 = 1;
  }
  if (param_6 != 0) {
    uVar4 = uVar4 * param_5;
    uVar8 = (ulong)uVar4;
    lVar7 = 0;
    uVar9 = uVar8 & 0xfffffff8;
    pvVar10 = param_1;
    pvVar11 = param_3;
    do {
      if (uVar4 != 0) {
        if ((uVar4 < 8) ||
           ((pvVar11 < (void *)((long)param_1 + uVar8 * 4 + lVar7 * (ulong)param_2) &&
            (pvVar10 < (void *)((long)param_3 + uVar8 * 4 + lVar7 * (ulong)param_4))))) {
          uVar5 = 0;
        }
        else {
          lVar6 = 0;
          uVar5 = uVar9;
          do {
            puVar2 = (undefined8 *)((long)pvVar10 + lVar6);
            uVar5 = uVar5 - 8;
            uVar12 = *puVar2;
            uVar14 = puVar2[3];
            uVar13 = puVar2[2];
            puVar3 = (ulong *)((long)pvVar11 + lVar6);
            lVar6 = lVar6 + 0x20;
            puVar3[1] = (ulong)(CONCAT24((short)(int)((float)((ulong)puVar2[1] >> 0x20) * 255.0),
                                         (int)((float)puVar2[1] * 255.0)) & 0xffff0000ffff |
                               0xff000000) | 0xff00000000000000;
            *puVar3 = (ulong)(CONCAT24((short)(int)((float)((ulong)uVar12 >> 0x20) * 255.0),
                                       (int)((float)uVar12 * 255.0)) & 0xffff0000ffff | 0xff000000)
                      | 0xff00000000000000;
            puVar3[3] = (ulong)(CONCAT24((short)(int)((float)((ulong)uVar14 >> 0x20) * 255.0),
                                         (int)((float)uVar14 * 255.0)) & 0xffff0000ffff | 0xff000000
                               ) | 0xff00000000000000;
            puVar3[2] = (ulong)(CONCAT24((short)(int)((float)((ulong)uVar13 >> 0x20) * 255.0),
                                         (int)((float)uVar13 * 255.0)) & 0xffff0000ffff | 0xff000000
                               ) | 0xff00000000000000;
          } while (uVar5 != 0);
          uVar5 = uVar9;
          if (uVar9 == uVar8) goto LAB_00a9e0f8;
        }
        do {
          uVar1 = uVar5 + 1;
          *(uint *)((long)pvVar11 + uVar5 * 4) =
               (int)(*(float *)((long)pvVar10 + uVar5 * 4) * 255.0) | 0xff000000;
          uVar5 = uVar1;
        } while (uVar8 != uVar1);
      }
LAB_00a9e0f8:
      pvVar10 = (void *)((long)pvVar10 + (ulong)param_2);
      pvVar11 = (void *)((long)pvVar11 + (ulong)param_4);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 != param_6);
  }
  return;
}


