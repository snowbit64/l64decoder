// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA64FtoR11G11B10>
// Entry Point: 00a9f5b0
// Size: 340 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA64FtoR11G11B10>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA64FtoR11G11B10>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA64FtoR11G11B10>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  ulong uVar4;
  undefined auVar5 [12];
  ulong uVar6;
  undefined auVar7 [12];
  ulong uVar8;
  ulong uVar9;
  unkbyte9 Var10;
  unkbyte9 Var11;
  unkbyte9 Var12;
  unkbyte9 Var13;
  void *pvVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  unkbyte9 *pVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  unkbyte9 *pVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  
  if (param_2 == param_4) {
    uVar1 = param_6;
    param_6 = 1;
  }
  else {
    uVar1 = 1;
  }
  if (param_6 != 0) {
    uVar1 = uVar1 * param_5;
    uVar21 = (ulong)uVar1;
    lVar20 = 0;
    uVar22 = (ulong)param_2;
    uVar23 = (ulong)param_4;
    uVar24 = uVar21 & 0xfffffff8;
    pVar25 = (unkbyte9 *)((long)param_1 + 0x20);
    puVar26 = (undefined8 *)((long)param_3 + 0x10);
    pvVar14 = param_1;
    pvVar15 = param_3;
    do {
      if (uVar1 != 0) {
        if ((uVar1 < 8) ||
           ((uVar16 = uVar24, puVar18 = puVar26, pVar19 = pVar25,
            pvVar15 < (void *)((long)param_1 + uVar21 * 8 + lVar20 * uVar22) &&
            (pvVar14 < (void *)((long)param_3 + uVar21 * 4 + lVar20 * uVar23))))) {
          uVar16 = 0;
        }
        else {
          do {
            uVar4 = *(ulong *)((long)pVar19 + -0x18);
            bVar31 = (byte)(uVar4 >> 0x18);
            Var11 = pVar19[-2];
            uVar17 = *(ulong *)((long)pVar19 + -8);
            bVar30 = (byte)(uVar17 >> 0x18);
            Var10 = pVar19[-1];
            uVar16 = uVar16 - 8;
            uVar9 = *(ulong *)((long)pVar19 + 8);
            bVar33 = (byte)(uVar9 >> 0x18);
            uVar8 = *(ulong *)pVar19;
            Var13 = *pVar19;
            uVar6 = *(ulong *)((long)pVar19 + 0x18);
            bVar32 = (byte)(uVar6 >> 0x18);
            Var12 = pVar19[1];
            auVar2[9] = (char)(uVar17 >> 8);
            auVar2._0_9_ = Var10;
            auVar2[10] = (char)(uVar17 >> 0x10);
            auVar2[11] = bVar30;
            auVar3[9] = (char)(uVar4 >> 8);
            auVar3._0_9_ = Var11;
            auVar3[10] = (char)(uVar4 >> 0x10);
            auVar3[11] = bVar31;
            uVar27 = *(ulong *)(pVar19 + -2) >> 0xf;
            auVar5[9] = (char)(uVar6 >> 8);
            auVar5._0_9_ = Var12;
            auVar5[10] = (char)(uVar6 >> 0x10);
            auVar5[11] = bVar32;
            auVar7[9] = (char)(uVar9 >> 8);
            auVar7._0_9_ = Var13;
            auVar7[10] = (char)(uVar9 >> 0x10);
            auVar7[11] = bVar33;
            uVar34 = (uint)Var11 >> 4;
            uVar35 = auVar3._8_4_ >> 4;
            uVar36 = (uint)Var10 >> 4;
            uVar37 = auVar2._8_4_ >> 4;
            uVar28 = *(ulong *)(pVar19 + -1) >> 0xf;
            uVar38 = (uint)Var13 >> 4;
            uVar39 = auVar7._8_4_ >> 4;
            uVar40 = (uint)Var12 >> 4;
            uVar41 = auVar5._8_4_ >> 4;
            uVar29 = *(ulong *)(pVar19 + 1) >> 0xf;
            puVar18[-1] = CONCAT17((char)((uVar17 >> 0xf) >> 0x18),
                                   CONCAT16(bVar30 >> 1 & 0x3f |
                                            (byte)((uVar17 >> 0xf) >> 0x10) & 0xc0,
                                            CONCAT15((byte)(uVar37 >> 8) & 7 |
                                                     (byte)((auVar2._8_4_ >> 9) >> 8) & 0xf8,
                                                     CONCAT14((char)uVar37,
                                                              CONCAT13((char)(uVar28 >> 0x18),
                                                                       CONCAT12((byte)((unkuint9)
                                                                                       Var10 >> 0x18
                                                                                      ) >> 1 & 0x3f
                                                                                | (byte)(uVar28 >>
                                                                                        0x10) & 0xc0
                                                                                ,CONCAT11((byte)(
                                                  uVar36 >> 8) & 7 |
                                                  (byte)(((uint)Var10 >> 9) >> 8) & 0xf8,
                                                  (char)uVar36)))))));
            puVar18[-2] = CONCAT17((char)((uVar4 >> 0xf) >> 0x18),
                                   CONCAT16(bVar31 >> 1 & 0x3f |
                                            (byte)((uVar4 >> 0xf) >> 0x10) & 0xc0,
                                            CONCAT15((byte)(uVar35 >> 8) & 7 |
                                                     (byte)((auVar3._8_4_ >> 9) >> 8) & 0xf8,
                                                     CONCAT14((char)uVar35,
                                                              CONCAT13((char)(uVar27 >> 0x18),
                                                                       CONCAT12((byte)((unkuint9)
                                                                                       Var11 >> 0x18
                                                                                      ) >> 1 & 0x3f
                                                                                | (byte)(uVar27 >>
                                                                                        0x10) & 0xc0
                                                                                ,CONCAT11((byte)(
                                                  uVar34 >> 8) & 7 |
                                                  (byte)(((uint)Var11 >> 9) >> 8) & 0xf8,
                                                  (char)uVar34)))))));
            puVar18[1] = CONCAT17((char)((uVar6 >> 0xf) >> 0x18),
                                  CONCAT16(bVar32 >> 1 & 0x3f |
                                           (byte)((uVar6 >> 0xf) >> 0x10) & 0xc0,
                                           CONCAT15((byte)(uVar41 >> 8) & 7 |
                                                    (byte)((auVar5._8_4_ >> 9) >> 8) & 0xf8,
                                                    CONCAT14((char)uVar41,
                                                             CONCAT13((char)(uVar29 >> 0x18),
                                                                      CONCAT12((byte)((unkuint9)
                                                                                      Var12 >> 0x18)
                                                                               >> 1 & 0x3f |
                                                                               (byte)(uVar29 >> 0x10
                                                                                     ) & 0xc0,
                                                                               CONCAT11((byte)(
                                                  uVar40 >> 8) & 7 |
                                                  (byte)(((uint)Var12 >> 9) >> 8) & 0xf8,
                                                  (char)uVar40)))))));
            *puVar18 = CONCAT17((char)((uVar9 >> 0xf) >> 0x18),
                                CONCAT16(bVar33 >> 1 & 0x3f | (byte)((uVar9 >> 0xf) >> 0x10) & 0xc0,
                                         CONCAT15((byte)(uVar39 >> 8) & 7 |
                                                  (byte)((auVar7._8_4_ >> 9) >> 8) & 0xf8,
                                                  CONCAT14((char)uVar39,
                                                           CONCAT13((char)((uVar8 >> 0xf) >> 0x18),
                                                                    CONCAT12((byte)((unkuint9)Var13
                                                                                   >> 0x18) >> 1 &
                                                                             0x3f | (byte)((uVar8 >>
                                                                                           0xf) >> 
                                                  0x10) & 0xc0,
                                                  CONCAT11((byte)(uVar38 >> 8) & 7 |
                                                           (byte)(((uint)Var13 >> 9) >> 8) & 0xf8,
                                                           (char)uVar38)))))));
            puVar18 = puVar18 + 4;
            pVar19 = pVar19 + 4;
          } while (uVar16 != 0);
          uVar16 = uVar24;
          if (uVar24 == uVar21) goto LAB_00a9f600;
        }
        do {
          uVar17 = *(ulong *)((long)pvVar14 + uVar16 * 8);
          *(uint *)((long)pvVar15 + uVar16 * 4) =
               (uint)(uVar17 >> 9) & 0x3ff800 | (uint)uVar17 >> 4 & 0x7ff |
               (uint)(uVar17 >> 0xf) & 0xffc00000;
          uVar16 = uVar16 + 1;
        } while (uVar21 != uVar16);
      }
LAB_00a9f600:
      pvVar14 = (void *)((long)pvVar14 + uVar22);
      pvVar15 = (void *)((long)pvVar15 + uVar23);
      lVar20 = lVar20 + 1;
      pVar25 = (unkbyte9 *)((long)pVar25 + uVar22);
      puVar26 = (undefined8 *)((long)puVar26 + uVar23);
    } while ((uint)lVar20 != param_6);
  }
  return;
}


