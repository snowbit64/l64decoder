// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RG32toRGBA32>
// Entry Point: 00a9e1c8
// Size: 360 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RG32toRGBA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RG32toRGBA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RG32toRGBA32>
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
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  
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
            uVar15 = puVar2[1];
            uVar13 = *puVar2;
            uVar21 = puVar2[3];
            uVar20 = puVar2[2];
            puVar3 = (ulong *)((long)pvVar11 + lVar6);
            lVar6 = lVar6 + 0x20;
            iVar16 = (uint)(ushort)uVar13 * 0xff + 0x807f;
            iVar17 = (uint)(ushort)(CONCAT15((char)((ulong)uVar13 >> 0x28),
                                             CONCAT14((char)((ulong)uVar13 >> 0x20),
                                                      (uint)(ushort)uVar13)) >> 0x20) * 0xff +
                     0x807f;
            iVar18 = (uint)(ushort)uVar15 * 0xff + 0x807f;
            iVar19 = (uint)(ushort)(CONCAT15((char)((ulong)uVar15 >> 0x28),
                                             CONCAT14((char)((ulong)uVar15 >> 0x20),
                                                      (uint)(ushort)uVar15)) >> 0x20) * 0xff +
                     0x807f;
            iVar24 = (uint)(ushort)(CONCAT15((char)((ulong)uVar20 >> 0x28),
                                             CONCAT14((char)((ulong)uVar20 >> 0x20),
                                                      (uint)(ushort)uVar20)) >> 0x20) * 0xff +
                     0x807f;
            iVar25 = (uint)(ushort)(CONCAT15((char)((ulong)uVar21 >> 0x28),
                                             CONCAT14((char)((ulong)uVar21 >> 0x20),
                                                      (uint)(ushort)uVar21)) >> 0x20) * 0xff +
                     0x807f;
            uVar22 = (uint)(CONCAT44(iVar24,(uint)(ushort)uVar20 * 0xff + 0x807f) >> 0x10) & 0xffff;
            uVar23 = (uint)(CONCAT44(iVar25,(uint)(ushort)uVar21 * 0xff + 0x807f) >> 0x10) & 0xffff;
            uVar12 = (uint)CONCAT11((byte)((uint)iVar16 >> 0x18) |
                                    (byte)(((uint)((ulong)uVar13 >> 0x10) & 0xffff) * 0xff + 0x807f
                                          >> 0x10),(char)((uint)iVar16 >> 0x10));
            uVar14 = (uint)CONCAT11((byte)((uint)iVar18 >> 0x18) |
                                    (byte)(((uint)((ulong)uVar15 >> 0x10) & 0xffff) * 0xff + 0x807f
                                          >> 0x10),(char)((uint)iVar18 >> 0x10));
            puVar3[1] = (ulong)(CONCAT24((short)(CONCAT15((byte)((uint)iVar19 >> 0x18) |
                                                          (byte)((uint)((ulong)uVar15 >> 0x30) *
                                                                 0xff + 0x807f >> 0x10),
                                                          CONCAT14((char)((uint)iVar19 >> 0x10),
                                                                   uVar14)) >> 0x20),uVar14) |
                               0xff000000) | 0xff00000000000000;
            *puVar3 = (ulong)(CONCAT24((short)(CONCAT15((byte)((uint)iVar17 >> 0x18) |
                                                        (byte)((uint)((ulong)uVar13 >> 0x30) * 0xff
                                                               + 0x807f >> 0x10),
                                                        CONCAT14((char)((uint)iVar17 >> 0x10),uVar12
                                                                )) >> 0x20),uVar12) | 0xff000000) |
                      0xff00000000000000;
            puVar3[3] = (ulong)(CONCAT15((byte)((uint)iVar25 >> 0x18) |
                                         (byte)((uint)((ulong)uVar21 >> 0x30) * 0xff + 0x807f >>
                                               0x10),
                                         CONCAT14((char)((uint)iVar25 >> 0x10),
                                                  (uint)CONCAT11((byte)(uVar23 >> 8) |
                                                                 (byte)(((uint)uVar21 >> 0x10) *
                                                                        0xff + 0x807f >> 0x10),
                                                                 (char)uVar23))) | 0xff000000) |
                        0xff00000000000000;
            puVar3[2] = (ulong)(CONCAT15((byte)((uint)iVar24 >> 0x18) |
                                         (byte)((uint)((ulong)uVar20 >> 0x30) * 0xff + 0x807f >>
                                               0x10),
                                         CONCAT14((char)((uint)iVar24 >> 0x10),
                                                  (uint)CONCAT11((byte)(uVar22 >> 8) |
                                                                 (byte)(((uint)uVar20 >> 0x10) *
                                                                        0xff + 0x807f >> 0x10),
                                                                 (char)uVar22))) | 0xff000000) |
                        0xff00000000000000;
          } while (uVar5 != 0);
          uVar5 = uVar9;
          if (uVar9 == uVar8) goto LAB_00a9e210;
        }
        do {
          uVar1 = uVar5 + 1;
          uVar12 = *(uint *)((long)pvVar10 + uVar5 * 4);
          *(uint *)((long)pvVar11 + uVar5 * 4) =
               (uVar12 >> 0x10) * 0xff + 0x807f >> 8 & 0xff00 |
               (uVar12 & 0xffff) * 0xff + 0x807f >> 0x10 | 0xff000000;
          uVar5 = uVar1;
        } while (uVar8 != uVar1);
      }
LAB_00a9e210:
      pvVar10 = (void *)((long)pvVar10 + (ulong)param_2);
      pvVar11 = (void *)((long)pvVar11 + (ulong)param_4);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 != param_6);
  }
  return;
}


