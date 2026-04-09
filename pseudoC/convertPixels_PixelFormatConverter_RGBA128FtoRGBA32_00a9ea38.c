// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA128FtoRGBA32>
// Entry Point: 00a9ea38
// Size: 364 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA128FtoRGBA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA128FtoRGBA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA128FtoRGBA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float *pfVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (param_2 == param_4) {
    uVar3 = param_6;
    param_6 = 1;
  }
  else {
    uVar3 = 1;
  }
  if (param_6 != 0) {
    uVar3 = uVar3 * param_5;
    uVar12 = (ulong)uVar3;
    lVar11 = 0;
    uVar13 = (ulong)param_2;
    uVar14 = uVar12 & 0xfffffffc;
    lVar15 = (long)param_1 + 0xc;
    pfVar6 = (float *)param_1;
    puVar7 = (undefined8 *)param_3;
    do {
      if (uVar3 != 0) {
        if ((uVar3 < 4) ||
           ((uVar8 = uVar14, puVar10 = puVar7, pfVar9 = pfVar6,
            puVar7 < (undefined8 *)((long)param_1 + uVar12 * 0x10 + lVar11 * uVar13) &&
            (pfVar6 < (float *)((long)param_3 + uVar12 * 4 + lVar11 * (ulong)param_4))))) {
          uVar8 = 0;
        }
        else {
          do {
            fVar20 = *pfVar9;
            fVar21 = pfVar9[2];
            fVar23 = pfVar9[3];
            fVar5 = pfVar9[4];
            fVar22 = pfVar9[6];
            fVar24 = pfVar9[7];
            uVar8 = uVar8 - 4;
            uVar16 = (int)(pfVar9[1] * 255.0) & 0xffff;
            uVar17 = (int)(pfVar9[5] * 255.0) & 0xffff;
            uVar18 = (int)(pfVar9[9] * 255.0) & 0xffff;
            uVar19 = (int)(pfVar9[0xd] * 255.0) & 0xffff;
            puVar10[1] = CONCAT17((byte)(int)(pfVar9[0xf] * 255.0) |
                                  (byte)((uint)(int)(pfVar9[0xe] * 255.0) >> 8),
                                  CONCAT16((byte)(int)(pfVar9[0xe] * 255.0) | (byte)(uVar19 >> 8),
                                           CONCAT15((byte)uVar19 |
                                                    (byte)((uint)(int)(pfVar9[0xc] * 255.0) >> 8),
                                                    CONCAT14((char)(int)(pfVar9[0xc] * 255.0),
                                                             CONCAT13((byte)(int)(pfVar9[0xb] *
                                                                                 255.0) |
                                                                      (byte)((uint)(int)(pfVar9[10]
                                                                                        * 255.0) >>
                                                                            8),CONCAT12((byte)(int)(
                                                  pfVar9[10] * 255.0) | (byte)(uVar18 >> 8),
                                                  CONCAT11((byte)uVar18 |
                                                           (byte)((uint)(int)(pfVar9[8] * 255.0) >>
                                                                 8),(char)(int)(pfVar9[8] * 255.0)))
                                                  )))));
            *puVar10 = CONCAT17((byte)(int)(fVar24 * 255.0) |
                                (byte)((uint)(int)(fVar22 * 255.0) >> 8),
                                CONCAT16((byte)(int)(fVar22 * 255.0) | (byte)(uVar17 >> 8),
                                         CONCAT15((byte)uVar17 |
                                                  (byte)((uint)(int)(fVar5 * 255.0) >> 8),
                                                  CONCAT14((char)(int)(fVar5 * 255.0),
                                                           CONCAT13((byte)(int)(fVar23 * 255.0) |
                                                                    (byte)((uint)(int)(fVar21 * 
                                                  255.0) >> 8),
                                                  CONCAT12((byte)(int)(fVar21 * 255.0) |
                                                           (byte)(uVar16 >> 8),
                                                           CONCAT11((byte)uVar16 |
                                                                    (byte)((uint)(int)(fVar20 * 
                                                  255.0) >> 8),(char)(int)(fVar20 * 255.0))))))));
            puVar10 = puVar10 + 2;
            pfVar9 = pfVar9 + 0x10;
          } while (uVar8 != 0);
          uVar8 = uVar14;
          if (uVar14 == uVar12) goto LAB_00a9ea80;
        }
        pfVar9 = (float *)(lVar15 + uVar8 * 0x10);
        do {
          pfVar1 = pfVar9 + -1;
          fVar20 = *pfVar9;
          pfVar2 = pfVar9 + -3;
          pfVar4 = pfVar9 + -2;
          pfVar9 = pfVar9 + 4;
          *(uint *)((long)puVar7 + uVar8 * 4) =
               ((int)(*pfVar1 * 255.0) & 0xffU) << 0x10 | (int)(fVar20 * 255.0) << 0x18 |
               ((int)(*pfVar4 * 255.0) & 0xffU) << 8 | (int)(*pfVar2 * 255.0);
          uVar8 = uVar8 + 1;
        } while (uVar12 != uVar8);
      }
LAB_00a9ea80:
      pfVar6 = (float *)((long)pfVar6 + uVar13);
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)param_4);
      lVar11 = lVar11 + 1;
      lVar15 = lVar15 + uVar13;
    } while ((uint)lVar11 != param_6);
  }
  return;
}


