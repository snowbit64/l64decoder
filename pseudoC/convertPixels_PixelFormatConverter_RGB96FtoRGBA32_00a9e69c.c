// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGB96FtoRGBA32>
// Entry Point: 00a9e69c
// Size: 336 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGB96FtoRGBA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGB96FtoRGBA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGB96FtoRGBA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
  ulong *puVar9;
  ulong uVar10;
  float *pfVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  
  if (param_2 == param_4) {
    uVar1 = param_6;
    param_6 = 1;
  }
  else {
    uVar1 = 1;
  }
  if (param_6 != 0) {
    uVar1 = uVar1 * param_5;
    uVar14 = (ulong)uVar1;
    lVar13 = 0;
    uVar15 = uVar14 & 0xfffffffc;
    pfVar8 = (float *)param_1;
    puVar9 = (ulong *)param_3;
    do {
      if (uVar1 != 0) {
        if ((uVar1 < 4) ||
           ((uVar10 = uVar15, puVar12 = puVar9, pfVar11 = pfVar8,
            puVar9 < (ulong *)((long)param_1 + uVar14 * 0xc + lVar13 * (ulong)param_2) &&
            (pfVar8 < (float *)((long)param_3 + uVar14 * 4 + lVar13 * (ulong)param_4))))) {
          uVar10 = 0;
        }
        else {
          do {
            fVar3 = *pfVar11;
            fVar5 = pfVar11[1];
            fVar16 = pfVar11[2];
            fVar4 = pfVar11[3];
            fVar6 = pfVar11[4];
            fVar17 = pfVar11[5];
            uVar10 = uVar10 - 4;
            uVar7 = CONCAT13((char)((uint)(int)(pfVar11[8] * 255.0) >> 8),
                             CONCAT12((byte)(int)(pfVar11[8] * 255.0) |
                                      (byte)((uint)(int)(pfVar11[7] * 255.0) >> 8),
                                      CONCAT11((byte)(int)(pfVar11[7] * 255.0) |
                                               (byte)((uint)(int)(pfVar11[6] * 255.0) >> 8),
                                               (char)(int)(pfVar11[6] * 255.0))));
            puVar12[1] = CONCAT44((int)(CONCAT17((char)((uint)(int)(pfVar11[0xb] * 255.0) >> 8),
                                                 CONCAT16((byte)(int)(pfVar11[0xb] * 255.0) |
                                                          (byte)((uint)(int)(pfVar11[10] * 255.0) >>
                                                                8),CONCAT15((byte)(int)(pfVar11[10]
                                                                                       * 255.0) |
                                                                            (byte)((uint)(int)(
                                                  pfVar11[9] * 255.0) >> 8),
                                                  CONCAT14((char)(int)(pfVar11[9] * 255.0),uVar7))))
                                       >> 0x20),uVar7) | 0xff000000ff000000;
            *puVar12 = CONCAT17((char)((uint)(int)(fVar17 * 255.0) >> 8),
                                CONCAT16((byte)(int)(fVar17 * 255.0) |
                                         (byte)((uint)(int)(fVar6 * 255.0) >> 8),
                                         CONCAT15((byte)(int)(fVar6 * 255.0) |
                                                  (byte)((uint)(int)(fVar4 * 255.0) >> 8),
                                                  CONCAT14((char)(int)(fVar4 * 255.0),
                                                           CONCAT13((char)((uint)(int)(fVar16 * 
                                                  255.0) >> 8),
                                                  CONCAT12((byte)(int)(fVar16 * 255.0) |
                                                           (byte)((uint)(int)(fVar5 * 255.0) >> 8),
                                                           CONCAT11((byte)(int)(fVar5 * 255.0) |
                                                                    (byte)((uint)(int)(fVar3 * 255.0
                                                                                      ) >> 8),
                                                                    (char)(int)(fVar3 * 255.0)))))))
                               ) | 0xff000000ff000000;
            puVar12 = puVar12 + 2;
            pfVar11 = pfVar11 + 0xc;
          } while (uVar10 != 0);
          uVar10 = uVar15;
          if (uVar15 == uVar14) goto LAB_00a9e6e8;
        }
        pfVar11 = pfVar8 + uVar10 * 3;
        do {
          uVar2 = (int)(pfVar11[1] * 255.0) << 8;
          *(uint *)((long)puVar9 + uVar10 * 4) =
               uVar2 & 0xff000000 | uVar2 & 0xffff | ((int)(pfVar11[2] * 255.0) & 0xffU) << 0x10 |
               (int)(*pfVar11 * 255.0) | 0xff000000;
          uVar10 = uVar10 + 1;
          pfVar11 = pfVar11 + 3;
        } while (uVar14 != uVar10);
      }
LAB_00a9e6e8:
      pfVar8 = (float *)((long)pfVar8 + (ulong)param_2);
      puVar9 = (ulong *)((long)puVar9 + (ulong)param_4);
      lVar13 = lVar13 + 1;
    } while ((uint)lVar13 != param_6);
  }
  return;
}


