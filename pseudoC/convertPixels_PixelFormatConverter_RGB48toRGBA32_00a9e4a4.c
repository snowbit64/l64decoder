// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGB48toRGBA32>
// Entry Point: 00a9e4a4
// Size: 504 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGB48toRGBA32>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGB48toRGBA32>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGB48toRGBA32>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined6 uVar5;
  void *pvVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  undefined6 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined6 *puVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  
  if (param_2 == param_4) {
    uVar2 = param_6;
    param_6 = 1;
  }
  else {
    uVar2 = 1;
  }
  if (param_6 != 0) {
    uVar2 = uVar2 * param_5;
    uVar13 = (ulong)uVar2;
    lVar12 = 0;
    uVar14 = (ulong)param_2;
    puVar15 = (undefined6 *)((long)param_1 + 0xc);
    uVar16 = uVar13 & 0xfffffffc;
    pvVar6 = param_1;
    puVar7 = (ulong *)param_3;
    do {
      if (uVar2 != 0) {
        if ((uVar2 < 4) ||
           ((uVar8 = uVar16, puVar10 = puVar7, puVar11 = puVar15,
            puVar7 < (ulong *)((long)param_1 + uVar13 * 6 + lVar12 * uVar14) &&
            (pvVar6 < (void *)((long)param_3 + uVar13 * 4 + lVar12 * (ulong)param_4))))) {
          uVar8 = 0;
        }
        else {
          do {
            uVar17 = *(uint *)(undefined6 *)((long)puVar11 + -0xc);
            uVar8 = uVar8 - 4;
            uVar3 = *(uint *)(undefined6 *)((long)puVar11 + -6);
            uVar18 = *(uint *)puVar11;
            uVar5 = *(undefined6 *)((long)puVar11 + -6);
            uVar4 = *(uint *)((long)puVar11 + 6);
            iVar21 = (uint)(ushort)(CONCAT15((char)(uVar3 >> 8),CONCAT14((char)uVar3,uVar17)) >>
                                   0x20) * 0xff + 0x807f;
            iVar22 = (uint)(ushort)(CONCAT15((char)(uVar4 >> 8),CONCAT14((char)uVar4,uVar18)) >>
                                   0x20) * 0xff + 0x807f;
            uVar19 = (uint)(CONCAT44(iVar21,(uVar17 & 0xffff) * 0xff + 0x807f) >> 0x10) & 0xffff;
            uVar20 = (uint)(CONCAT44(iVar22,(uVar18 & 0xffff) * 0xff + 0x807f) >> 0x10) & 0xffff;
            uVar17 = (uint)CONCAT12((char)((uint)(uint3)((uint6)*(undefined6 *)
                                                                 ((long)puVar11 + -0xc) >> 0x20) *
                                           0xff + 0x807f >> 0x10),
                                    CONCAT11((byte)(uVar19 >> 8) |
                                             (byte)((uVar17 >> 0x10) * 0xff + 0x807f >> 0x10),
                                             (char)uVar19));
            uVar18 = (uint)CONCAT12((char)((uint)(uint3)((uint6)*puVar11 >> 0x20) * 0xff + 0x807f >>
                                          0x10),
                                    CONCAT11((byte)(uVar20 >> 8) |
                                             (byte)((uVar18 >> 0x10) * 0xff + 0x807f >> 0x10),
                                             (char)uVar20));
            puVar10[1] = (ulong)(CONCAT34((int3)(CONCAT16((char)((uint)(uint3)(((uint6)*(ushort *)
                                                                                        ((long)
                                                  puVar11 + 10) << 0x20) >> 0x20) * 0xff + 0x807f >>
                                                  0x10),CONCAT15((byte)((uint)iVar22 >> 0x18) |
                                                                 (byte)((uVar4 >> 0x10) * 0xff +
                                                                        0x807f >> 0x10),
                                                                 CONCAT14((char)((uint)iVar22 >>
                                                                                0x10),uVar18))) >>
                                                0x20),uVar18) | 0xff000000) | 0xff00000000000000;
            *puVar10 = (ulong)(CONCAT34((int3)(CONCAT16((char)((uint)(uint3)((uint6)uVar5 >> 0x20) *
                                                               0xff + 0x807f >> 0x10),
                                                        CONCAT15((byte)((uint)iVar21 >> 0x18) |
                                                                 (byte)((uVar3 >> 0x10) * 0xff +
                                                                        0x807f >> 0x10),
                                                                 CONCAT14((char)((uint)iVar21 >>
                                                                                0x10),uVar17))) >>
                                              0x20),uVar17) | 0xff000000) | 0xff00000000000000;
            puVar10 = puVar10 + 2;
            puVar11 = puVar11 + 3;
          } while (uVar8 != 0);
          uVar8 = uVar16;
          if (uVar16 == uVar13) goto LAB_00a9e50c;
        }
        lVar9 = uVar8 * 6;
        do {
          puVar1 = (uint *)((long)pvVar6 + lVar9);
          lVar9 = lVar9 + 6;
          uVar18 = *puVar1;
          *(uint *)((long)puVar7 + uVar8 * 4) =
               (uVar18 >> 0x10) * 0xff + 0x807f >> 8 & 0xff00 |
               (uVar18 & 0xffff) * 0xff + 0x807f >> 0x10 |
               (uint)*(ushort *)(puVar1 + 1) * 0xff + 0x807f & 0xff0000 | 0xff000000;
          uVar8 = uVar8 + 1;
        } while (uVar13 != uVar8);
      }
LAB_00a9e50c:
      pvVar6 = (void *)((long)pvVar6 + uVar14);
      puVar7 = (ulong *)((long)puVar7 + (ulong)param_4);
      lVar12 = lVar12 + 1;
      puVar15 = (undefined6 *)((long)puVar15 + uVar14);
    } while ((uint)lVar12 != param_6);
  }
  return;
}


