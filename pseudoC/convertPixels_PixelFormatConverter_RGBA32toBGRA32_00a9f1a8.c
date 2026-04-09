// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA32toBGRA32>
// Entry Point: 00a9f1a8
// Size: 280 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA32toBGRA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA32toBGRA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA32toBGRA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar14;
  
  if (param_2 == param_4) {
    uVar3 = param_6;
    param_6 = 1;
  }
  else {
    uVar3 = 1;
  }
  if (param_6 != 0) {
    uVar3 = uVar3 * param_5;
    uVar7 = (ulong)uVar3;
    lVar6 = 0;
    uVar8 = uVar7 & 0xfffffff8;
    pvVar9 = param_1;
    pvVar10 = param_3;
    do {
      if (uVar3 != 0) {
        if ((uVar3 < 8) ||
           ((pvVar10 < (void *)((long)param_1 + uVar7 * 4 + lVar6 * (ulong)param_2) &&
            (pvVar9 < (void *)((long)param_3 + uVar7 * 4 + lVar6 * (ulong)param_4))))) {
          uVar5 = 0;
        }
        else {
          lVar11 = 0;
          uVar5 = uVar8;
          do {
            puVar1 = (ulong *)((long)pvVar9 + lVar11);
            uVar5 = uVar5 - 8;
            uVar15 = puVar1[1];
            uVar12 = *puVar1;
            uVar19 = puVar1[3];
            uVar17 = puVar1[2];
            puVar2 = (undefined8 *)((long)pvVar10 + lVar11);
            lVar11 = lVar11 + 0x20;
            uVar13 = uVar12 & 0xffffffffffffff00;
            uVar14 = CONCAT44((int)(uVar13 >> 0x20),CONCAT22((short)(uVar12 >> 0x10),(short)uVar13))
                     & 0xffffffffff00ffff;
            uVar13 = CONCAT26((short)(uVar14 >> 0x30),CONCAT24((short)(uVar13 >> 0x20),(int)uVar14))
                     & 0xff00ff00ffffffff;
            uVar14 = uVar15 & 0xffffffffffffff00;
            uVar16 = CONCAT44((int)(uVar14 >> 0x20),CONCAT22((short)(uVar15 >> 0x10),(short)uVar14))
                     & 0xffffffffff00ffff;
            uVar14 = CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar16))
                     & 0xff00ff00ffffffff;
            uVar16 = uVar17 & 0xffffffffffffff00;
            uVar18 = CONCAT44((int)(uVar16 >> 0x20),CONCAT22((short)(uVar17 >> 0x10),(short)uVar16))
                     & 0xffffffffff00ffff;
            uVar16 = CONCAT26((short)(uVar18 >> 0x30),CONCAT24((short)(uVar16 >> 0x20),(int)uVar18))
                     & 0xff00ff00ffffffff;
            uVar18 = uVar19 & 0xffffffffffffff00;
            uVar20 = CONCAT44((int)(uVar18 >> 0x20),CONCAT22((short)(uVar19 >> 0x10),(short)uVar18))
                     & 0xffffffffff00ffff;
            uVar18 = CONCAT26((short)(uVar20 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar20))
                     & 0xff00ff00ffffffff;
            puVar2[1] = CONCAT17((char)(uVar14 >> 0x38),
                                 CONCAT16((char)(uVar15 >> 0x20),
                                          CONCAT15((char)(uVar14 >> 0x28),
                                                   CONCAT14((char)(uVar15 >> 0x30),
                                                            CONCAT13((char)(uVar14 >> 0x18),
                                                                     CONCAT12((char)uVar15,
                                                                              CONCAT11((char)(uVar14
                                                                                             >> 8),
                                                                                       (char)(uVar15
                                                                                             >> 0x10
                                                  ))))))));
            *puVar2 = CONCAT17((char)(uVar13 >> 0x38),
                               CONCAT16((char)(uVar12 >> 0x20),
                                        CONCAT15((char)(uVar13 >> 0x28),
                                                 CONCAT14((char)(uVar12 >> 0x30),
                                                          CONCAT13((char)(uVar13 >> 0x18),
                                                                   CONCAT12((char)uVar12,
                                                                            CONCAT11((char)(uVar13 
                                                  >> 8),(char)(uVar12 >> 0x10))))))));
            puVar2[3] = CONCAT17((char)(uVar18 >> 0x38),
                                 CONCAT16((char)(uVar19 >> 0x20),
                                          CONCAT15((char)(uVar18 >> 0x28),
                                                   CONCAT14((char)(uVar19 >> 0x30),
                                                            CONCAT13((char)(uVar18 >> 0x18),
                                                                     CONCAT12((char)uVar19,
                                                                              CONCAT11((char)(uVar18
                                                                                             >> 8),
                                                                                       (char)(uVar19
                                                                                             >> 0x10
                                                  ))))))));
            puVar2[2] = CONCAT17((char)(uVar16 >> 0x38),
                                 CONCAT16((char)(uVar17 >> 0x20),
                                          CONCAT15((char)(uVar16 >> 0x28),
                                                   CONCAT14((char)(uVar17 >> 0x30),
                                                            CONCAT13((char)(uVar16 >> 0x18),
                                                                     CONCAT12((char)uVar17,
                                                                              CONCAT11((char)(uVar16
                                                                                             >> 8),
                                                                                       (char)(uVar17
                                                                                             >> 0x10
                                                  ))))))));
          } while (uVar5 != 0);
          uVar5 = uVar8;
          if (uVar8 == uVar7) goto LAB_00a9f1e4;
        }
        do {
          uVar12 = uVar5 + 1;
          uVar4 = *(uint *)((long)pvVar9 + uVar5 * 4);
          *(uint *)((long)pvVar10 + uVar5 * 4) =
               uVar4 & 0xff000000 | uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
          uVar5 = uVar12;
        } while (uVar7 != uVar12);
      }
LAB_00a9f1e4:
      pvVar9 = (void *)((long)pvVar9 + (ulong)param_2);
      pvVar10 = (void *)((long)pvVar10 + (ulong)param_4);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 != param_6);
  }
  return;
}


