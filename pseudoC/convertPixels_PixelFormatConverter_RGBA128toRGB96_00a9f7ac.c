// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA128toRGB96>
// Entry Point: 00a9f7ac
// Size: 280 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA128toRGB96>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA128toRGB96>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA128toRGB96>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  void *pvVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  
  if (param_2 == param_4) {
    uVar4 = param_6;
    param_6 = 1;
  }
  else {
    uVar4 = 1;
  }
  if (param_6 != 0) {
    uVar4 = uVar4 * param_5;
    uVar12 = (ulong)uVar4;
    lVar11 = 0;
    uVar13 = (ulong)param_2;
    uVar3 = 8;
    if ((uVar4 & 7) != 0) {
      uVar3 = uVar12 & 7;
    }
    lVar14 = uVar12 - uVar3;
    puVar15 = (undefined4 *)((long)param_1 + 0x40);
    puVar5 = (undefined4 *)param_3;
    pvVar16 = param_1;
    do {
      if (uVar4 != 0) {
        if ((uVar4 < 9) ||
           ((lVar6 = lVar14, puVar7 = puVar15, puVar9 = puVar5,
            puVar5 < (undefined4 *)((long)param_1 + uVar12 * 0x10 + -4 + lVar11 * uVar13) &&
            (pvVar16 < (void *)((long)param_3 + uVar12 * 0xc + lVar11 * (ulong)param_4))))) {
          lVar10 = 0;
        }
        else {
          do {
            uVar28 = *puVar7;
            uVar32 = puVar7[1];
            uVar36 = puVar7[2];
            uVar29 = puVar7[4];
            uVar33 = puVar7[5];
            uVar37 = puVar7[6];
            uVar30 = puVar7[8];
            uVar34 = puVar7[9];
            uVar38 = puVar7[10];
            uVar31 = puVar7[0xc];
            uVar35 = puVar7[0xd];
            uVar39 = puVar7[0xe];
            lVar6 = lVar6 + -8;
            uVar19 = puVar7[-0xf];
            uVar24 = puVar7[-0xe];
            uVar20 = puVar7[-0xc];
            uVar21 = puVar7[-0xb];
            uVar25 = puVar7[-10];
            uVar17 = puVar7[-8];
            uVar22 = puVar7[-7];
            uVar26 = puVar7[-6];
            uVar18 = puVar7[-4];
            uVar23 = puVar7[-3];
            uVar27 = puVar7[-2];
            *puVar9 = puVar7[-0x10];
            puVar9[1] = uVar19;
            puVar9[2] = uVar24;
            puVar9[3] = uVar20;
            puVar9[4] = uVar21;
            puVar9[5] = uVar25;
            puVar9[6] = uVar17;
            puVar9[7] = uVar22;
            puVar9[8] = uVar26;
            puVar9[9] = uVar18;
            puVar9[10] = uVar23;
            puVar9[0xb] = uVar27;
            puVar9[0xc] = uVar28;
            puVar9[0xd] = uVar32;
            puVar9[0xe] = uVar36;
            puVar9[0xf] = uVar29;
            puVar9[0x10] = uVar33;
            puVar9[0x11] = uVar37;
            puVar9[0x12] = uVar30;
            puVar9[0x13] = uVar34;
            puVar9[0x14] = uVar38;
            puVar9[0x15] = uVar31;
            puVar9[0x16] = uVar35;
            puVar9[0x17] = uVar39;
            puVar7 = puVar7 + 0x20;
            lVar10 = lVar14;
            puVar9 = puVar9 + 0x18;
          } while (lVar6 != 0);
        }
        lVar6 = lVar10 << 4;
        lVar8 = lVar10 * 0xc;
        lVar10 = uVar12 - lVar10;
        do {
          puVar1 = (undefined8 *)((long)pvVar16 + lVar6);
          puVar2 = (undefined8 *)((long)puVar5 + lVar8);
          lVar6 = lVar6 + 0x10;
          lVar8 = lVar8 + 0xc;
          lVar10 = lVar10 + -1;
          uVar20 = *(undefined4 *)(puVar1 + 1);
          *puVar2 = *puVar1;
          *(undefined4 *)(puVar2 + 1) = uVar20;
        } while (lVar10 != 0);
      }
      pvVar16 = (void *)((long)pvVar16 + uVar13);
      puVar5 = (undefined4 *)((long)puVar5 + (ulong)param_4);
      lVar11 = lVar11 + 1;
      puVar15 = (undefined4 *)((long)puVar15 + uVar13);
    } while ((uint)lVar11 != param_6);
  }
  return;
}


