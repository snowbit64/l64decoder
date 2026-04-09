// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RG64FtoRGBA32>
// Entry Point: 00a9e330
// Size: 372 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RG64FtoRGBA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RG64FtoRGBA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RG64FtoRGBA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 *puVar10;
  void *pvVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float *pfVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  
  if (param_2 == param_4) {
    uVar1 = param_6;
    param_6 = 1;
  }
  else {
    uVar1 = 1;
  }
  if (param_6 != 0) {
    uVar1 = uVar1 * param_5;
    uVar19 = (ulong)uVar1;
    lVar18 = 0;
    uVar20 = (ulong)param_2;
    uVar21 = (ulong)param_4;
    uVar22 = uVar19 & 0xfffffff8;
    pfVar23 = (float *)((long)param_1 + 0x20);
    puVar10 = (undefined8 *)((long)param_3 + 0x10);
    pvVar11 = param_1;
    pvVar12 = param_3;
    do {
      if (uVar1 != 0) {
        if ((uVar1 < 8) ||
           ((uVar13 = uVar22, puVar15 = puVar10, pfVar17 = pfVar23,
            pvVar12 < (void *)((long)param_1 + uVar19 * 8 + lVar18 * uVar20) &&
            (pvVar11 < (void *)((long)param_3 + uVar19 * 4 + lVar18 * uVar21))))) {
          uVar13 = 0;
        }
        else {
          do {
            fVar2 = *pfVar17;
            fVar4 = pfVar17[1];
            fVar3 = pfVar17[2];
            fVar5 = pfVar17[3];
            fVar24 = pfVar17[6];
            fVar26 = pfVar17[7];
            uVar13 = uVar13 - 8;
            fVar6 = pfVar17[-8];
            fVar8 = pfVar17[-7];
            fVar7 = pfVar17[-6];
            fVar9 = pfVar17[-5];
            uVar16 = (uint)CONCAT12((char)((uint)(int)(pfVar17[5] * 255.0) >> 8),
                                    CONCAT11((byte)(int)(pfVar17[5] * 255.0) |
                                             (byte)((uint)(int)(pfVar17[4] * 255.0) >> 8),
                                             (char)(int)(pfVar17[4] * 255.0)));
            uVar25 = (uint)CONCAT12((char)((uint)(int)(pfVar17[-3] * 255.0) >> 8),
                                    CONCAT11((byte)(int)(pfVar17[-3] * 255.0) |
                                             (byte)((uint)(int)(pfVar17[-4] * 255.0) >> 8),
                                             (char)(int)(pfVar17[-4] * 255.0)));
            puVar15[-1] = (ulong)CONCAT34((int3)(CONCAT16((char)((uint)(int)(pfVar17[-1] * 255.0) >>
                                                                8),CONCAT15((byte)(int)(pfVar17[-1]
                                                                                       * 255.0) |
                                                                            (byte)((uint)(int)(
                                                  pfVar17[-2] * 255.0) >> 8),
                                                  CONCAT14((char)(int)(pfVar17[-2] * 255.0),uVar25))
                                                  ) >> 0x20),uVar25) | 0xff000000ff000000;
            puVar15[-2] = CONCAT17(0xff,CONCAT16((char)((uint)(int)(fVar9 * 255.0) >> 8),
                                                 CONCAT15((byte)(int)(fVar9 * 255.0) |
                                                          (byte)((uint)(int)(fVar7 * 255.0) >> 8),
                                                          CONCAT14((char)(int)(fVar7 * 255.0),
                                                                   CONCAT13(0xff,CONCAT12((char)((
                                                  uint)(int)(fVar8 * 255.0) >> 8),
                                                  CONCAT11((byte)(int)(fVar8 * 255.0) |
                                                           (byte)((uint)(int)(fVar6 * 255.0) >> 8),
                                                           (char)(int)(fVar6 * 255.0))))))));
            puVar15[1] = (ulong)CONCAT34((int3)(CONCAT16((char)((uint)(int)(fVar26 * 255.0) >> 8),
                                                         CONCAT15((byte)(int)(fVar26 * 255.0) |
                                                                  (byte)((uint)(int)(fVar24 * 255.0)
                                                                        >> 8),
                                                                  CONCAT14((char)(int)(fVar24 * 
                                                  255.0),uVar16))) >> 0x20),uVar16) |
                         0xff000000ff000000;
            *puVar15 = CONCAT17(0xff,CONCAT16((char)((uint)(int)(fVar5 * 255.0) >> 8),
                                              CONCAT15((byte)(int)(fVar5 * 255.0) |
                                                       (byte)((uint)(int)(fVar3 * 255.0) >> 8),
                                                       CONCAT14((char)(int)(fVar3 * 255.0),
                                                                CONCAT13(0xff,CONCAT12((char)((uint)
                                                  (int)(fVar4 * 255.0) >> 8),
                                                  CONCAT11((byte)(int)(fVar4 * 255.0) |
                                                           (byte)((uint)(int)(fVar2 * 255.0) >> 8),
                                                           (char)(int)(fVar2 * 255.0))))))));
            puVar15 = puVar15 + 4;
            pfVar17 = pfVar17 + 0x10;
          } while (uVar13 != 0);
          uVar13 = uVar22;
          if (uVar22 == uVar19) goto LAB_00a9e37c;
        }
        lVar14 = uVar13 << 3;
        do {
          pfVar17 = (float *)((long)pvVar11 + lVar14);
          lVar14 = lVar14 + 8;
          uVar16 = (uint)(*pfVar17 * 255.0);
          *(uint *)((long)pvVar12 + uVar13 * 4) =
               uVar16 & 0xffff0000 | uVar16 & 0xff | ((int)(pfVar17[1] * 255.0) & 0xffU) << 8 |
               0xff000000;
          uVar13 = uVar13 + 1;
        } while (uVar19 != uVar13);
      }
LAB_00a9e37c:
      pvVar11 = (void *)((long)pvVar11 + uVar20);
      pvVar12 = (void *)((long)pvVar12 + uVar21);
      lVar18 = lVar18 + 1;
      pfVar23 = (float *)((long)pfVar23 + uVar20);
      puVar10 = (undefined8 *)((long)puVar10 + uVar21);
    } while ((uint)lVar18 != param_6);
  }
  return;
}


