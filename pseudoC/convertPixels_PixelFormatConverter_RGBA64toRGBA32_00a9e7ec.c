// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA64toRGBA32>
// Entry Point: 00a9e7ec
// Size: 440 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA64toRGBA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA64toRGBA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA64toRGBA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined auVar2 [12];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  unkbyte9 Var11;
  unkbyte9 Var12;
  unkbyte9 *pVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  unkbyte9 *pVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined uVar22;
  undefined uVar23;
  uint uVar24;
  
  if (param_2 == param_4) {
    uVar1 = param_6;
    param_6 = 1;
  }
  else {
    uVar1 = 1;
  }
  if (param_6 != 0) {
    uVar1 = uVar1 * param_5;
    uVar20 = (ulong)uVar1;
    lVar19 = 0;
    uVar21 = uVar20 & 0xfffffffc;
    pVar13 = (unkbyte9 *)param_1;
    puVar14 = (undefined8 *)param_3;
    do {
      if (uVar1 != 0) {
        if ((uVar1 < 4) ||
           ((uVar15 = uVar21, puVar17 = puVar14, pVar18 = pVar13,
            puVar14 < (undefined8 *)((long)param_1 + uVar20 * 8 + lVar19 * (ulong)param_2) &&
            (pVar13 < (unkbyte9 *)((long)param_3 + uVar20 * 4 + lVar19 * (ulong)param_4))))) {
          uVar15 = 0;
        }
        else {
          do {
            uVar10 = *(undefined8 *)((long)pVar18 + 8);
            uVar23 = (undefined)((ulong)uVar10 >> 8);
            uVar9 = *(undefined8 *)pVar18;
            Var12 = *pVar18;
            uVar6 = *(undefined8 *)((long)pVar18 + 0x18);
            uVar22 = (undefined)((ulong)uVar6 >> 8);
            uVar16 = *(undefined8 *)(pVar18 + 1);
            Var11 = pVar18[1];
            uVar15 = uVar15 - 4;
            auVar2[9] = uVar22;
            auVar2._0_9_ = Var11;
            auVar2[10] = (char)((ulong)uVar6 >> 0x10);
            auVar2[11] = (char)((ulong)uVar6 >> 0x18);
            auVar8[9] = uVar23;
            auVar8._0_9_ = Var12;
            auVar8[10] = (char)((ulong)uVar10 >> 0x10);
            auVar8[11] = (char)((ulong)uVar10 >> 0x18);
            iVar3 = (uint)(ushort)Var12 * 0xff + 0x807f;
            iVar4 = (uint)(ushort)(CONCAT15(uVar23,CONCAT14((char)((unkuint9)Var12 >> 0x40),
                                                            (uint)(ushort)Var12)) >> 0x20) * 0xff +
                    0x807f;
            iVar5 = (uint)(ushort)Var11 * 0xff + 0x807f;
            iVar7 = (uint)(ushort)(CONCAT15(uVar22,CONCAT14((char)((unkuint9)Var11 >> 0x40),
                                                            (uint)(ushort)Var11)) >> 0x20) * 0xff +
                    0x807f;
            uVar24 = (uint)(ushort)((ulong)uVar16 >> 0x20);
            puVar17[1] = CONCAT17((char)((uint)(ushort)((ulong)uVar6 >> 0x30) * 0xff00 + 0x807f00 >>
                                        0x18),
                                  CONCAT16((char)((uint)(ushort)(CONCAT15((char)((ulong)uVar6 >>
                                                                                0x28),
                                                                          CONCAT14((char)((ulong)
                                                  uVar6 >> 0x20),uVar24)) >> 0x20) * 0xff + 0x807f
                                                 >> 0x10),
                                           CONCAT15((byte)((uint)iVar7 >> 0x18) |
                                                    (byte)((auVar2._8_4_ >> 0x10) * 0xff + 0x807f >>
                                                          0x10),
                                                    CONCAT14((char)((uint)iVar7 >> 0x10),
                                                             CONCAT13((char)((uint)(ushort)((ulong)
                                                  uVar16 >> 0x30) * 0xff00 + 0x807f00 >> 0x18),
                                                  CONCAT12((char)(uVar24 * 0xff + 0x807f >> 0x10),
                                                           CONCAT11((byte)((uint)iVar5 >> 0x18) |
                                                                    (byte)(((uint)Var11 >> 0x10) *
                                                                           0xff + 0x807f >> 0x10),
                                                                    (char)((uint)iVar5 >> 0x10))))))
                                          ));
            *puVar17 = CONCAT17((char)((uint)(ushort)((ulong)uVar10 >> 0x30) * 0xff00 + 0x807f00 >>
                                      0x18),
                                CONCAT16((char)((uint)(ushort)((ulong)uVar10 >> 0x20) * 0xff +
                                                0x807f >> 0x10),
                                         CONCAT15((byte)((uint)iVar4 >> 0x18) |
                                                  (byte)((auVar8._8_4_ >> 0x10) * 0xff + 0x807f >>
                                                        0x10),
                                                  CONCAT14((char)((uint)iVar4 >> 0x10),
                                                           CONCAT13((char)((uint)(ushort)((ulong)
                                                  uVar9 >> 0x30) * 0xff00 + 0x807f00 >> 0x18),
                                                  CONCAT12((char)((uint)(ushort)((ulong)uVar9 >>
                                                                                0x20) * 0xff +
                                                                  0x807f >> 0x10),
                                                           CONCAT11((byte)((uint)iVar3 >> 0x18) |
                                                                    (byte)(((uint)Var12 >> 0x10) *
                                                                           0xff + 0x807f >> 0x10),
                                                                    (char)((uint)iVar3 >> 0x10))))))
                                        ));
            puVar17 = puVar17 + 2;
            pVar18 = pVar18 + 2;
          } while (uVar15 != 0);
          uVar15 = uVar21;
          if (uVar21 == uVar20) goto LAB_00a9e858;
        }
        do {
          uVar16 = *(undefined8 *)((long)pVar13 + uVar15 * 8);
          *(uint *)((long)puVar14 + uVar15 * 4) =
               (uint)(ushort)((ulong)uVar16 >> 0x30) * 0xff00 + 0x807f00 & 0xff000000 |
               ((uint)uVar16 & 0xffff) * 0xff + 0x807f >> 0x10 |
               ((uint)((ulong)uVar16 >> 0x20) & 0xffff) * 0xff + 0x807f & 0xff0000 |
               ((uint)((ulong)uVar16 >> 0x10) & 0xffff) * 0xff + 0x807f >> 8 & 0xff00;
          uVar15 = uVar15 + 1;
        } while (uVar20 != uVar15);
      }
LAB_00a9e858:
      pVar13 = (unkbyte9 *)((long)pVar13 + (ulong)param_2);
      puVar14 = (undefined8 *)((long)puVar14 + (ulong)param_4);
      lVar19 = lVar19 + 1;
    } while ((uint)lVar19 != param_6);
  }
  return;
}


