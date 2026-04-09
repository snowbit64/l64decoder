// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGB96toRGBA128>
// Entry Point: 00a9f8c4
// Size: 312 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGB96toRGBA128>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGB96toRGBA128>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGB96toRGBA128>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
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
  undefined auVar27 [16];
  undefined4 uVar28;
  undefined8 uVar29;
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
  undefined4 uVar40;
  undefined4 uVar41;
  
  if (param_2 == param_4) {
    uVar2 = param_6;
    param_6 = 1;
  }
  else {
    uVar2 = 1;
  }
  if (param_6 != 0) {
    uVar2 = uVar2 * param_5;
    uVar11 = (ulong)uVar2;
    lVar10 = 0;
    auVar27 = NEON_fmov(0x3f800000,4);
    uVar12 = (ulong)param_4;
    uVar13 = uVar11 & 0xfffffff8;
    puVar14 = (undefined4 *)((long)param_3 + 0x40);
    lVar15 = (long)param_3 + 8;
    puVar3 = (undefined4 *)param_1;
    pvVar4 = param_3;
    do {
      if (uVar2 != 0) {
        if ((uVar2 < 8) ||
           ((uVar5 = uVar13, puVar7 = puVar3, puVar9 = puVar14,
            pvVar4 < (void *)((long)param_1 + uVar11 * 0xc + lVar10 * (ulong)param_2) &&
            (puVar3 < (undefined4 *)((long)param_3 + uVar11 * 0x10 + lVar10 * uVar12))))) {
          uVar5 = 0;
        }
        else {
          do {
            uVar5 = uVar5 - 8;
            uVar19 = puVar7[1];
            uVar23 = puVar7[2];
            uVar33 = puVar7[3];
            uVar20 = puVar7[4];
            uVar24 = puVar7[5];
            uVar17 = puVar7[6];
            uVar21 = puVar7[7];
            uVar25 = puVar7[8];
            uVar18 = puVar7[9];
            uVar22 = puVar7[10];
            uVar26 = puVar7[0xb];
            uVar28 = puVar7[0xc];
            uVar34 = puVar7[0xd];
            uVar38 = puVar7[0xe];
            uVar30 = puVar7[0xf];
            uVar35 = puVar7[0x10];
            uVar39 = puVar7[0x11];
            uVar31 = puVar7[0x12];
            uVar36 = puVar7[0x13];
            uVar40 = puVar7[0x14];
            uVar32 = puVar7[0x15];
            uVar37 = puVar7[0x16];
            uVar41 = puVar7[0x17];
            puVar9[-0x10] = *puVar7;
            puVar9[-0xf] = uVar19;
            puVar9[-0xe] = uVar23;
            puVar9[-0xd] = auVar27._0_4_;
            puVar9[-0xc] = uVar33;
            puVar9[-0xb] = uVar20;
            puVar9[-10] = uVar24;
            puVar9[-9] = auVar27._4_4_;
            puVar9[-8] = uVar17;
            puVar9[-7] = uVar21;
            puVar9[-6] = uVar25;
            puVar9[-5] = auVar27._8_4_;
            puVar9[-4] = uVar18;
            puVar9[-3] = uVar22;
            puVar9[-2] = uVar26;
            puVar9[-1] = auVar27._12_4_;
            *puVar9 = uVar28;
            puVar9[1] = uVar34;
            puVar9[2] = uVar38;
            puVar9[3] = auVar27._0_4_;
            puVar9[4] = uVar30;
            puVar9[5] = uVar35;
            puVar9[6] = uVar39;
            puVar9[7] = auVar27._4_4_;
            puVar9[8] = uVar31;
            puVar9[9] = uVar36;
            puVar9[10] = uVar40;
            puVar9[0xb] = auVar27._8_4_;
            puVar9[0xc] = uVar32;
            puVar9[0xd] = uVar37;
            puVar9[0xe] = uVar41;
            puVar9[0xf] = auVar27._12_4_;
            puVar7 = puVar7 + 0x18;
            puVar9 = puVar9 + 0x20;
          } while (uVar5 != 0);
          uVar5 = uVar13;
          if (uVar13 == uVar11) goto LAB_00a9f918;
        }
        lVar6 = uVar5 * 0xc;
        lVar8 = uVar11 - uVar5;
        lVar16 = lVar15;
        do {
          puVar1 = (undefined8 *)((long)puVar3 + lVar6);
          puVar7 = (undefined4 *)(lVar16 + uVar5 * 0x10);
          lVar6 = lVar6 + 0xc;
          lVar16 = lVar16 + 0x10;
          lVar8 = lVar8 + -1;
          uVar29 = *puVar1;
          uVar33 = *(undefined4 *)(puVar1 + 1);
          puVar7[1] = 0x3f800000;
          *(undefined8 *)(puVar7 + -2) = uVar29;
          *puVar7 = uVar33;
        } while (lVar8 != 0);
      }
LAB_00a9f918:
      puVar3 = (undefined4 *)((long)puVar3 + (ulong)param_2);
      pvVar4 = (void *)((long)pvVar4 + uVar12);
      lVar10 = lVar10 + 1;
      puVar14 = (undefined4 *)((long)puVar14 + uVar12);
      lVar15 = lVar15 + uVar12;
    } while ((uint)lVar10 != param_6);
  }
  return;
}


