// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixelFormat
// Entry Point: 00a9bebc
// Size: 5340 bytes
// Signature: undefined __cdecl convertPixelFormat(void * param_1, uint param_2, PIXEL_FORMAT param_3, void * param_4, uint param_5, PIXEL_FORMAT param_6, uint param_7, uint param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PixelFormatConverter::convertPixelFormat(void const*, unsigned int, PixelFormat::PIXEL_FORMAT,
   void*, unsigned int, PixelFormat::PIXEL_FORMAT, unsigned int, unsigned int) */

undefined4
PixelFormatConverter::convertPixelFormat
          (void *param_1,uint param_2,PIXEL_FORMAT param_3,void *param_4,uint param_5,
          PIXEL_FORMAT param_6,uint param_7,uint param_8)

{
  undefined (*pauVar1) [16];
  uint3 *puVar2;
  uint uVar3;
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  ulong uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [12];
  unkbyte10 Var22;
  unkbyte10 Var23;
  unkbyte10 Var24;
  unkbyte10 Var25;
  undefined (*pauVar26) [16];
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong *puVar29;
  void *pvVar30;
  uint *puVar31;
  long lVar32;
  void *pvVar33;
  undefined (*pauVar34) [16];
  undefined8 *puVar35;
  ulong *puVar36;
  undefined8 *puVar37;
  uint *puVar38;
  undefined4 uVar39;
  ulong uVar40;
  ulong uVar41;
  uint uVar42;
  long lVar43;
  ulong uVar44;
  undefined2 *puVar45;
  ulong uVar46;
  ulong uVar47;
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  
  Var25 = _DAT_004c4f40;
  Var24 = _DAT_004c4d70;
  auVar48 = _DAT_004c4a50;
  Var23 = _DAT_004c4870;
  Var22 = _DAT_004c3bd0;
  auVar49 = _DAT_004c37b0;
  uVar39 = 0;
  uVar3 = param_6 | param_3 << 0x10;
  if ((int)uVar3 < 0x1b0005) {
    if ((int)uVar3 < 0x60005) {
      if ((int)uVar3 < 0x50001) {
        if ((int)uVar3 < 0x30006) {
          if ((int)uVar3 < 0x30004) {
            if (uVar3 == 0x10005) {
              if (param_2 == param_5) {
                uVar3 = param_8;
                param_8 = 1;
              }
              else {
                uVar3 = 1;
              }
              if (param_8 != 0) {
                uVar3 = uVar3 * param_7;
                uVar44 = (ulong)uVar3;
                lVar43 = 0;
                uVar46 = (ulong)param_5;
                uVar47 = uVar44 & 0xffffffe0;
                uVar41 = uVar44 & 0xfffffff8;
                puVar29 = (ulong *)((long)param_4 + 0x40);
                pvVar30 = param_1;
                pvVar33 = param_4;
                do {
                  if (uVar3 != 0) {
                    if ((uVar3 < 8) ||
                       ((pvVar33 < (void *)((long)param_1 + uVar44 + lVar43 * (ulong)param_2) &&
                        (pvVar30 < (void *)((long)param_4 + uVar44 * 4 + lVar43 * uVar46))))) {
                      uVar40 = 0;
                    }
                    else {
                      if (uVar3 < 0x20) {
                        uVar40 = 0;
                      }
                      else {
                        uVar40 = 0;
                        puVar36 = puVar29;
                        do {
                          pauVar26 = (undefined (*) [16])((long)pvVar30 + uVar40);
                          uVar40 = uVar40 + 0x20;
                          auVar54 = *pauVar26;
                          auVar52 = pauVar26[1];
                          auVar56 = a64_TBL(ZEXT816(0),auVar54,ZEXT816(0),auVar48);
                          auVar61 = a64_TBL(ZEXT816(0),auVar54,ZEXT816(0),auVar49);
                          auVar58._10_2_ = 0x1010;
                          auVar58._0_10_ = Var24;
                          auVar58._12_2_ = 0x1007;
                          auVar58._14_2_ = 0x1010;
                          auVar58 = a64_TBL(ZEXT816(0),auVar54,ZEXT816(0),auVar58);
                          auVar64._10_2_ = 0x1010;
                          auVar64._0_10_ = Var25;
                          auVar64._12_2_ = 0x1003;
                          auVar64._14_2_ = 0x1010;
                          auVar64 = a64_TBL(ZEXT816(0),auVar54,ZEXT816(0),auVar64);
                          auVar67 = a64_TBL(ZEXT816(0),auVar52,ZEXT816(0),auVar48);
                          auVar69 = a64_TBL(ZEXT816(0),auVar52,ZEXT816(0),auVar49);
                          auVar70._10_2_ = 0x1010;
                          auVar70._0_10_ = Var24;
                          auVar70._12_2_ = 0x1007;
                          auVar70._14_2_ = 0x1010;
                          auVar70 = a64_TBL(ZEXT816(0),auVar52,ZEXT816(0),auVar70);
                          auVar13._10_2_ = 0x1010;
                          auVar13._0_10_ = Var25;
                          auVar13._12_2_ = 0x1003;
                          auVar13._14_2_ = 0x1010;
                          auVar54 = a64_TBL(ZEXT816(0),auVar52,ZEXT816(0),auVar13);
                          auVar57._0_8_ = auVar56._0_8_ | 0xff000000ff000000;
                          auVar57._8_4_ = auVar56._8_4_ | 0xff000000;
                          auVar57._12_4_ = auVar56._12_4_ | 0xff000000;
                          auVar56._0_8_ = auVar61._0_8_ | 0xff000000ff000000;
                          auVar56._8_4_ = auVar61._8_4_ | 0xff000000;
                          auVar56._12_4_ = auVar61._12_4_ | 0xff000000;
                          auVar61._0_8_ = auVar58._0_8_ | 0xff000000ff000000;
                          auVar61._8_4_ = auVar58._8_4_ | 0xff000000;
                          auVar61._12_4_ = auVar58._12_4_ | 0xff000000;
                          auVar65._0_8_ = auVar64._0_8_ | 0xff000000ff000000;
                          auVar65._8_4_ = auVar64._8_4_ | 0xff000000;
                          auVar65._12_4_ = auVar64._12_4_ | 0xff000000;
                          auVar68._0_8_ = auVar67._0_8_ | 0xff000000ff000000;
                          auVar68._8_4_ = auVar67._8_4_ | 0xff000000;
                          auVar68._12_4_ = auVar67._12_4_ | 0xff000000;
                          auVar67._0_8_ = auVar69._0_8_ | 0xff000000ff000000;
                          auVar67._8_4_ = auVar69._8_4_ | 0xff000000;
                          auVar67._12_4_ = auVar69._12_4_ | 0xff000000;
                          puVar36[-3] = auVar56._8_8_;
                          puVar36[-4] = auVar56._0_8_;
                          puVar36[-1] = auVar57._8_8_;
                          puVar36[-2] = auVar57._0_8_;
                          auVar69._0_8_ = auVar70._0_8_ | 0xff000000ff000000;
                          auVar69._8_4_ = auVar70._8_4_ | 0xff000000;
                          auVar69._12_4_ = auVar70._12_4_ | 0xff000000;
                          auVar52._0_8_ = auVar54._0_8_ | 0xff000000ff000000;
                          auVar52._8_4_ = auVar54._8_4_ | 0xff000000;
                          auVar52._12_4_ = auVar54._12_4_ | 0xff000000;
                          puVar36[-7] = auVar65._8_8_;
                          puVar36[-8] = auVar65._0_8_;
                          puVar36[-5] = auVar61._8_8_;
                          puVar36[-6] = auVar61._0_8_;
                          puVar36[5] = auVar67._8_8_;
                          puVar36[4] = auVar67._0_8_;
                          puVar36[7] = auVar68._8_8_;
                          puVar36[6] = auVar68._0_8_;
                          puVar36[1] = auVar52._8_8_;
                          *puVar36 = auVar52._0_8_;
                          puVar36[3] = auVar69._8_8_;
                          puVar36[2] = auVar69._0_8_;
                          puVar36 = puVar36 + 0x10;
                        } while (uVar47 != uVar40);
                        if (uVar47 == uVar44) goto LAB_00a9cec8;
                        uVar40 = uVar47;
                        if ((uVar3 & 0x18) == 0) goto LAB_00a9cf14;
                      }
                      lVar32 = uVar40 << 2;
                      do {
                        auVar53._0_8_ = *(ulong *)((long)pvVar30 + uVar40);
                        auVar53._8_8_ = 0;
                        puVar36 = (ulong *)((long)pvVar33 + lVar32);
                        uVar40 = uVar40 + 8;
                        lVar32 = lVar32 + 0x20;
                        auVar7._10_2_ = 0x1010;
                        auVar7._0_10_ = Var24;
                        auVar7._12_2_ = 0x1007;
                        auVar7._14_2_ = 0x1010;
                        auVar58 = a64_TBL(ZEXT816(0),auVar53,ZEXT816(0),auVar7);
                        auVar12._10_2_ = 0x1010;
                        auVar12._0_10_ = Var25;
                        auVar12._12_2_ = 0x1003;
                        auVar12._14_2_ = 0x1010;
                        auVar54 = a64_TBL(ZEXT816(0),auVar53,ZEXT816(0),auVar12);
                        auVar59._0_8_ = auVar58._0_8_ | 0xff000000ff000000;
                        auVar59._8_4_ = auVar58._8_4_ | 0xff000000;
                        auVar59._12_4_ = auVar58._12_4_ | 0xff000000;
                        auVar55._0_8_ = auVar54._0_8_ | 0xff000000ff000000;
                        auVar55._8_4_ = auVar54._8_4_ | 0xff000000;
                        auVar55._12_4_ = auVar54._12_4_ | 0xff000000;
                        puVar36[1] = auVar55._8_8_;
                        *puVar36 = auVar55._0_8_;
                        puVar36[3] = auVar59._8_8_;
                        puVar36[2] = auVar59._0_8_;
                      } while (uVar41 != uVar40);
                      uVar40 = uVar41;
                      if (uVar41 == uVar44) goto LAB_00a9cec8;
                    }
LAB_00a9cf14:
                    do {
                      *(uint *)((long)pvVar33 + uVar40 * 4) =
                           *(byte *)((long)pvVar30 + uVar40) | 0xff000000;
                      uVar40 = uVar40 + 1;
                    } while (uVar44 != uVar40);
                  }
LAB_00a9cec8:
                  pvVar30 = (void *)((long)pvVar30 + (ulong)param_2);
                  pvVar33 = (void *)((long)pvVar33 + uVar46);
                  lVar43 = lVar43 + 1;
                  puVar29 = (ulong *)((long)puVar29 + uVar46);
                  if ((uint)lVar43 == param_8) {
                    return 1;
                  }
                } while( true );
              }
            }
            else {
              if (uVar3 != 0x20005) {
                return 0;
              }
              if (param_2 == param_5) {
                uVar3 = param_8;
                param_8 = 1;
              }
              else {
                uVar3 = 1;
              }
              if (param_8 != 0) {
                uVar3 = uVar3 * param_7;
                uVar44 = (ulong)uVar3;
                lVar43 = 0;
                uVar46 = (ulong)param_2;
                uVar47 = (ulong)param_5;
                uVar41 = uVar44 & 0xfffffff0;
                puVar28 = (undefined8 *)((long)param_1 + 0x10);
                puVar27 = (undefined8 *)((long)param_4 + 0x20);
                pvVar30 = param_1;
                pvVar33 = param_4;
                do {
                  if (uVar3 != 0) {
                    if ((uVar3 < 0x10) ||
                       ((puVar35 = puVar27, puVar37 = puVar28, uVar40 = uVar41,
                        pvVar33 < (void *)((long)param_1 + uVar44 * 2 + lVar43 * uVar46) &&
                        (pvVar30 < (void *)((long)param_4 + uVar44 * 4 + lVar43 * uVar47))))) {
                      uVar40 = 0;
                    }
                    else {
                      do {
                        uVar10 = puVar37[-1];
                        uVar9 = puVar37[-2];
                        uVar18 = puVar37[1];
                        uVar17 = *puVar37;
                        uVar40 = uVar40 - 0x10;
                        auVar48._0_8_ =
                             (ulong)CONCAT24((short)((ulong)uVar10 >> 0x10),(uint)(ushort)uVar10) |
                             0xff000000ff000000;
                        auVar48._8_4_ = (ushort)((ulong)uVar10 >> 0x20) | 0xff000000;
                        auVar48._12_4_ = (ushort)((ulong)uVar10 >> 0x30) | 0xff000000;
                        auVar50._0_8_ =
                             (ulong)CONCAT24((short)((ulong)uVar18 >> 0x10),(uint)(ushort)uVar18) |
                             0xff000000ff000000;
                        auVar50._8_4_ = (ushort)((ulong)uVar18 >> 0x20) | 0xff000000;
                        auVar50._12_4_ = (ushort)((ulong)uVar18 >> 0x30) | 0xff000000;
                        puVar35[-3] = CONCAT26(0xff00,CONCAT24((short)((ulong)uVar9 >> 0x30),
                                                               CONCAT22(0xff00,(short)((ulong)uVar9
                                                                                      >> 0x20))));
                        puVar35[-4] = CONCAT26(0xff00,CONCAT24((short)((ulong)uVar9 >> 0x10),
                                                               CONCAT22(0xff00,(short)uVar9)));
                        puVar35[-1] = auVar48._8_8_;
                        puVar35[-2] = auVar48._0_8_;
                        puVar35[1] = CONCAT26(0xff00,CONCAT24((short)((ulong)uVar17 >> 0x30),
                                                              CONCAT22(0xff00,(short)((ulong)uVar17
                                                                                     >> 0x20))));
                        *puVar35 = CONCAT26(0xff00,CONCAT24((short)((ulong)uVar17 >> 0x10),
                                                            CONCAT22(0xff00,(short)uVar17)));
                        puVar35[3] = auVar50._8_8_;
                        puVar35[2] = auVar50._0_8_;
                        puVar35 = puVar35 + 8;
                        puVar37 = puVar37 + 4;
                      } while (uVar40 != 0);
                      uVar40 = uVar41;
                      if (uVar41 == uVar44) goto LAB_00a9c254;
                    }
                    do {
                      *(uint *)((long)pvVar33 + uVar40 * 4) =
                           *(ushort *)((long)pvVar30 + uVar40 * 2) | 0xff000000;
                      uVar40 = uVar40 + 1;
                    } while (uVar44 != uVar40);
                  }
LAB_00a9c254:
                  pvVar30 = (void *)((long)pvVar30 + uVar46);
                  pvVar33 = (void *)((long)pvVar33 + uVar47);
                  lVar43 = lVar43 + 1;
                  puVar28 = (undefined8 *)((long)puVar28 + uVar46);
                  puVar27 = (undefined8 *)((long)puVar27 + uVar47);
                  if ((uint)lVar43 == param_8) {
                    return 1;
                  }
                } while( true );
              }
            }
          }
          else if (uVar3 == 0x30004) {
            convertPixels<PixelFormatConverter::RGB24toBGR24>
                      (param_1,param_2,param_4,param_5,param_7,param_8);
          }
          else {
            if (uVar3 != 0x30005) {
              return 0;
            }
            if (param_2 == param_5) {
              uVar3 = param_8;
              param_8 = 1;
            }
            else {
              uVar3 = 1;
            }
            if (param_8 != 0) {
              uVar42 = 0;
              do {
                if (uVar3 * param_7 != 0) {
                  lVar43 = 0;
                  puVar31 = (uint *)param_4;
                  do {
                    puVar2 = (uint3 *)((long)param_1 + lVar43);
                    lVar43 = lVar43 + 3;
                    *puVar31 = *puVar2 | 0xff000000;
                    puVar31 = puVar31 + 1;
                  } while ((ulong)(uVar3 * param_7) * 3 != lVar43);
                }
                param_1 = (void *)((long)param_1 + (ulong)param_2);
                param_4 = (void *)((long)param_4 + (ulong)param_5);
                uVar42 = uVar42 + 1;
              } while (uVar42 != param_8);
              return 1;
            }
          }
        }
        else if ((int)uVar3 < 0x40005) {
          if (uVar3 == 0x30006) {
            convertPixels<PixelFormatConverter::RGB24toBGRA32>
                      (param_1,param_2,param_4,param_5,param_7,param_8);
          }
          else {
            if (uVar3 != 0x40003) {
              return 0;
            }
            convertPixels<PixelFormatConverter::BGR24toRGB24>
                      (param_1,param_2,param_4,param_5,param_7,param_8);
          }
        }
        else if (uVar3 == 0x40005) {
          convertPixels<PixelFormatConverter::BGR24toRGBA32>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
        else {
          if (uVar3 != 0x40006) {
            return 0;
          }
          if (param_2 == param_5) {
            uVar3 = param_8;
            param_8 = 1;
          }
          else {
            uVar3 = 1;
          }
          if (param_8 != 0) {
            uVar42 = 0;
            do {
              if (uVar3 * param_7 != 0) {
                lVar43 = 0;
                puVar31 = (uint *)param_4;
                do {
                  puVar2 = (uint3 *)((long)param_1 + lVar43);
                  lVar43 = lVar43 + 3;
                  *puVar31 = *puVar2 | 0xff000000;
                  puVar31 = puVar31 + 1;
                } while ((ulong)(uVar3 * param_7) * 3 != lVar43);
              }
              param_1 = (void *)((long)param_1 + (ulong)param_2);
              param_4 = (void *)((long)param_4 + (ulong)param_5);
              uVar42 = uVar42 + 1;
            } while (uVar42 != param_8);
            return 1;
          }
        }
      }
      else {
        switch(uVar3) {
        case 0x50001:
          if (param_2 == param_5) {
            uVar3 = param_8;
            param_8 = 1;
          }
          else {
            uVar3 = 1;
          }
          if (param_8 != 0) {
            uVar3 = uVar3 * param_7;
            uVar44 = (ulong)uVar3;
            lVar43 = 0;
            uVar46 = (ulong)param_2;
            uVar47 = uVar44 & 0xffffffe0;
            uVar41 = uVar44 & 0xfffffff8;
            pauVar26 = (undefined (*) [16])((long)param_1 + 0x40);
            pvVar30 = param_1;
            pvVar33 = param_4;
            do {
              if (uVar3 != 0) {
                if ((uVar3 < 8) ||
                   ((pvVar33 < (void *)((long)param_1 + uVar44 * 4 + lVar43 * uVar46) &&
                    (pvVar30 < (void *)((long)param_4 + uVar44 + lVar43 * (ulong)param_5))))) {
                  uVar40 = 0;
                }
                else {
                  if (uVar3 < 0x20) {
                    uVar40 = 0;
                  }
                  else {
                    uVar40 = 0;
                    pauVar34 = pauVar26;
                    do {
                      puVar28 = (undefined8 *)((long)pvVar33 + uVar40);
                      uVar40 = uVar40 + 0x20;
                      auVar49 = *pauVar34;
                      pauVar4 = pauVar34 + 1;
                      auVar15._10_2_ = 0x2c28;
                      auVar15._0_10_ = Var22;
                      auVar15._12_2_ = 0x3430;
                      auVar15._14_2_ = 0x3c38;
                      auVar20._12_4_ = (int)((ulong)*(undefined8 *)(pauVar34[-2] + 8) >> 0x20);
                      auVar20._0_12_ = *(undefined (*) [12])pauVar34[-2];
                      auVar48 = a64_TBL(ZEXT816(0),pauVar34[-4],pauVar34[-3],auVar20,pauVar34[-1],
                                        auVar15);
                      pauVar1 = pauVar34 + 2;
                      pauVar5 = pauVar34 + 3;
                      pauVar34 = pauVar34 + 8;
                      auVar16._10_2_ = 0x2c28;
                      auVar16._0_10_ = Var22;
                      auVar16._12_2_ = 0x3430;
                      auVar16._14_2_ = 0x3c38;
                      auVar49 = a64_TBL(ZEXT816(0),auVar49,*pauVar4,*pauVar1,*pauVar5,auVar16);
                      puVar28[1] = auVar48._8_8_;
                      *puVar28 = auVar48._0_8_;
                      puVar28[3] = auVar49._8_8_;
                      puVar28[2] = auVar49._0_8_;
                    } while (uVar47 != uVar40);
                    if (uVar47 == uVar44) goto LAB_00a9bff4;
                    uVar40 = uVar47;
                    if ((uVar3 & 0x18) == 0) goto LAB_00a9c040;
                  }
                  lVar32 = uVar40 << 2;
                  do {
                    pauVar34 = (undefined (*) [16])((long)pvVar30 + lVar32);
                    lVar32 = lVar32 + 0x20;
                    auVar8._10_2_ = 0xffff;
                    auVar8._0_10_ = Var23;
                    auVar8._12_2_ = 0xffff;
                    auVar8._14_2_ = 0xffff;
                    auVar49 = a64_TBL(ZEXT816(0),*pauVar34,pauVar34[1],auVar8);
                    *(long *)((long)pvVar33 + uVar40) = auVar49._0_8_;
                    uVar40 = uVar40 + 8;
                  } while (uVar41 != uVar40);
                  uVar40 = uVar41;
                  if (uVar41 == uVar44) goto LAB_00a9bff4;
                }
LAB_00a9c040:
                do {
                  *(char *)((long)pvVar33 + uVar40) =
                       (char)*(undefined4 *)((long)pvVar30 + uVar40 * 4);
                  uVar40 = uVar40 + 1;
                } while (uVar44 != uVar40);
              }
LAB_00a9bff4:
              pvVar30 = (void *)((long)pvVar30 + uVar46);
              pvVar33 = (void *)((long)pvVar33 + (ulong)param_5);
              lVar43 = lVar43 + 1;
              pauVar26 = (undefined (*) [16])(*pauVar26 + uVar46);
              if ((uint)lVar43 == param_8) {
                return 1;
              }
            } while( true );
          }
          break;
        case 0x50002:
          if (param_2 == param_5) {
            uVar3 = param_8;
            param_8 = 1;
          }
          else {
            uVar3 = 1;
          }
          if (param_8 != 0) {
            uVar3 = uVar3 * param_7;
            uVar44 = (ulong)uVar3;
            lVar43 = 0;
            uVar46 = (ulong)param_2;
            uVar47 = (ulong)param_5;
            uVar41 = uVar44 & 0xfffffff0;
            pauVar26 = (undefined (*) [16])((long)param_1 + 0x20);
            puVar28 = (undefined8 *)((long)param_4 + 0x10);
            pvVar30 = param_1;
            pvVar33 = param_4;
            do {
              if (uVar3 != 0) {
                if ((uVar3 < 0x10) ||
                   ((puVar27 = puVar28, pauVar34 = pauVar26, uVar40 = uVar41,
                    pvVar33 < (void *)((long)param_1 + uVar44 * 4 + lVar43 * uVar46) &&
                    (pvVar30 < (void *)((long)param_4 + uVar44 * 2 + lVar43 * uVar47))))) {
                  uVar40 = 0;
                }
                else {
                  do {
                    uVar10 = *(undefined8 *)(pauVar34[-2] + 8);
                    uVar9 = *(undefined8 *)pauVar34[-2];
                    uVar40 = uVar40 - 0x10;
                    auVar48 = *pauVar34;
                    auVar49 = pauVar34[1];
                    puVar27[-1] = CONCAT26((short)((ulong)*(undefined8 *)(pauVar34[-1] + 8) >> 0x20)
                                           ,CONCAT24((short)*(undefined8 *)(pauVar34[-1] + 8),
                                                     CONCAT22((short)((ulong)*(undefined8 *)
                                                                              pauVar34[-1] >> 0x20),
                                                              (short)*(undefined8 *)pauVar34[-1])));
                    puVar27[-2] = CONCAT26((short)((ulong)uVar10 >> 0x20),
                                           CONCAT24((short)uVar10,
                                                    CONCAT22((short)((ulong)uVar9 >> 0x20),
                                                             (short)uVar9)));
                    puVar27[1] = CONCAT26(auVar49._12_2_,
                                          CONCAT24(auVar49._8_2_,
                                                   CONCAT22(auVar49._4_2_,auVar49._0_2_)));
                    *puVar27 = CONCAT26(auVar48._12_2_,
                                        CONCAT24(auVar48._8_2_,CONCAT22(auVar48._4_2_,auVar48._0_2_)
                                                ));
                    puVar27 = puVar27 + 4;
                    pauVar34 = pauVar34 + 4;
                  } while (uVar40 != 0);
                  uVar40 = uVar41;
                  if (uVar41 == uVar44) goto LAB_00a9cc60;
                }
                do {
                  *(short *)((long)pvVar33 + uVar40 * 2) =
                       (short)*(undefined4 *)((long)pvVar30 + uVar40 * 4);
                  uVar40 = uVar40 + 1;
                } while (uVar44 != uVar40);
              }
LAB_00a9cc60:
              pvVar30 = (void *)((long)pvVar30 + uVar46);
              pvVar33 = (void *)((long)pvVar33 + uVar47);
              lVar43 = lVar43 + 1;
              pauVar26 = (undefined (*) [16])(*pauVar26 + uVar46);
              puVar28 = (undefined8 *)((long)puVar28 + uVar47);
              if ((uint)lVar43 == param_8) {
                return 1;
              }
            } while( true );
          }
          break;
        case 0x50003:
          if (param_2 == param_5) {
            uVar3 = param_8;
            param_8 = 1;
          }
          else {
            uVar3 = 1;
          }
          if (param_8 != 0) {
            uVar42 = 0;
            do {
              if (uVar3 * param_7 != 0) {
                lVar43 = 0;
                puVar45 = (undefined2 *)param_4;
                do {
                  uVar39 = *(undefined4 *)((long)param_1 + lVar43);
                  lVar43 = lVar43 + 4;
                  *puVar45 = (short)uVar39;
                  *(char *)(puVar45 + 1) = (char)((uint)uVar39 >> 0x10);
                  puVar45 = (undefined2 *)((long)puVar45 + 3);
                } while ((ulong)(uVar3 * param_7) * 4 - lVar43 != 0);
              }
              param_1 = (void *)((long)param_1 + (ulong)param_2);
              param_4 = (void *)((long)param_4 + (ulong)param_5);
              uVar42 = uVar42 + 1;
            } while (uVar42 != param_8);
            return 1;
          }
          break;
        case 0x50004:
        case 0x50005:
        case 0x50007:
        case 0x50008:
        case 0x50009:
        case 0x5000a:
        case 0x5000b:
        case 0x5000c:
        case 0x5000d:
        case 0x5000e:
        case 0x5000f:
        case 0x50010:
        case 0x50011:
        case 0x50012:
        case 0x50013:
        case 0x50014:
        case 0x50015:
        case 0x50016:
        case 0x50017:
        case 0x50018:
        case 0x50019:
        case 0x5001a:
        case 0x5001b:
        case 0x5001c:
        case 0x5001d:
        case 0x5001e:
        case 0x5001f:
        case 0x50020:
        case 0x50021:
        case 0x50022:
        case 0x50023:
        case 0x50024:
        case 0x50025:
        case 0x50026:
        case 0x50027:
        case 0x50028:
        case 0x50029:
        case 0x5002a:
        case 0x5002b:
        case 0x5002c:
        case 0x5002d:
        case 0x5002e:
        case 0x5002f:
        case 0x50030:
        case 0x50031:
        case 0x50032:
        case 0x50033:
        case 0x50034:
        case 0x50035:
        case 0x50036:
        case 0x50037:
          goto switchD_00a9bf18_caseD_50004;
        case 0x50006:
          convertPixels<PixelFormatConverter::RGBA32toBGRA32>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
          break;
        case 0x50038:
          convertPixels<PixelFormatConverter::RGBA32toR5G5B5A1>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
          break;
        case 0x50039:
          convertPixels<PixelFormatConverter::RGBA32toR5G6B5>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
          break;
        case 0x5003a:
          convertPixels<PixelFormatConverter::RGBA32toR4G4B4A4>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
          break;
        default:
          if (uVar3 == 0x60001) {
            if (param_2 == param_5) {
              uVar3 = param_8;
              param_8 = 1;
            }
            else {
              uVar3 = 1;
            }
            if (param_8 != 0) {
              uVar3 = uVar3 * param_7;
              uVar44 = (ulong)uVar3;
              lVar43 = 0;
              uVar46 = uVar44 & 0xfffffff0;
              uVar47 = uVar44 & 0xfffffff8;
              pvVar30 = param_4;
              puVar28 = (undefined8 *)param_1;
              do {
                if (uVar3 != 0) {
                  if ((uVar3 < 8) ||
                     ((pvVar30 < (void *)((long)param_1 + uVar44 * 4 + lVar43 * (ulong)param_2) &&
                      (puVar28 < (undefined8 *)((long)param_4 + uVar44 + lVar43 * (ulong)param_5))))
                     ) {
                    uVar41 = 0;
                  }
                  else {
                    if (uVar3 < 0x10) {
                      uVar41 = 0;
                    }
                    else {
                      uVar41 = 0;
                      puVar27 = puVar28;
                      do {
                        auVar49 = *(undefined (*) [16])(puVar27 + 4);
                        auVar48 = *(undefined (*) [16])(puVar27 + 6);
                        auVar54 = *(undefined (*) [16])(puVar27 + 2);
                        auVar66._0_4_ = auVar48._0_4_ >> 0x10;
                        auVar66._4_4_ = auVar48._4_4_ >> 0x10;
                        auVar66._8_4_ = auVar48._8_4_ >> 0x10;
                        auVar66._12_4_ = auVar48._12_4_ >> 0x10;
                        auVar63._0_4_ = auVar49._0_4_ >> 0x10;
                        auVar63._4_4_ = auVar49._4_4_ >> 0x10;
                        auVar63._8_4_ = auVar49._8_4_ >> 0x10;
                        auVar63._12_4_ = auVar49._12_4_ >> 0x10;
                        auVar62._0_4_ = auVar54._0_4_ >> 0x10;
                        auVar62._4_4_ = auVar54._4_4_ >> 0x10;
                        auVar62._8_4_ = auVar54._8_4_ >> 0x10;
                        auVar62._12_4_ = auVar54._12_4_ >> 0x10;
                        auVar60._0_4_ = (uint)*puVar27 >> 0x10;
                        auVar60._4_4_ = (uint)((ulong)*puVar27 >> 0x30);
                        auVar60._8_4_ = (uint)puVar27[1] >> 0x10;
                        auVar60._12_4_ = (uint)((ulong)puVar27[1] >> 0x30);
                        auVar11._10_2_ = 0x2c28;
                        auVar11._0_10_ = Var22;
                        auVar11._12_2_ = 0x3430;
                        auVar11._14_2_ = 0x3c38;
                        auVar49 = a64_TBL(ZEXT816(0),auVar60,auVar62,auVar63,auVar66,auVar11);
                        ((undefined8 *)((long)pvVar30 + uVar41))[1] = auVar49._8_8_;
                        *(undefined8 *)((long)pvVar30 + uVar41) = auVar49._0_8_;
                        uVar41 = uVar41 + 0x10;
                        puVar27 = puVar27 + 8;
                      } while (uVar46 != uVar41);
                      if (uVar46 == uVar44) goto LAB_00a9d2a0;
                      uVar41 = uVar46;
                      if ((uVar3 >> 3 & 1) == 0) goto LAB_00a9d2e8;
                    }
                    lVar32 = uVar41 << 2;
                    do {
                      pauVar26 = (undefined (*) [16])((long)puVar28 + lVar32);
                      lVar32 = lVar32 + 0x20;
                      auVar48 = *pauVar26;
                      auVar49 = pauVar26[1];
                      auVar51._0_4_ = auVar49._0_4_ >> 0x10;
                      auVar51._4_4_ = auVar49._4_4_ >> 0x10;
                      auVar51._8_4_ = auVar49._8_4_ >> 0x10;
                      auVar51._12_4_ = auVar49._12_4_ >> 0x10;
                      auVar6._10_2_ = 0xffff;
                      auVar6._0_10_ = Var23;
                      auVar6._12_2_ = 0xffff;
                      auVar6._14_2_ = 0xffff;
                      auVar19._4_4_ = auVar48._4_4_ >> 0x10;
                      auVar19._0_4_ = auVar48._0_4_ >> 0x10;
                      auVar19._8_4_ = auVar48._8_4_ >> 0x10;
                      auVar19._12_4_ = auVar48._12_4_ >> 0x10;
                      auVar49 = a64_TBL(ZEXT816(0),auVar19,auVar51,auVar6);
                      *(long *)((long)pvVar30 + uVar41) = auVar49._0_8_;
                      uVar41 = uVar41 + 8;
                    } while (uVar47 != uVar41);
                    uVar41 = uVar47;
                    if (uVar47 == uVar44) goto LAB_00a9d2a0;
                  }
LAB_00a9d2e8:
                  do {
                    *(char *)((long)pvVar30 + uVar41) =
                         (char)*(undefined2 *)((long)puVar28 + uVar41 * 4 + 2);
                    uVar41 = uVar41 + 1;
                  } while (uVar44 != uVar41);
                }
LAB_00a9d2a0:
                puVar28 = (undefined8 *)((long)puVar28 + (ulong)param_2);
                pvVar30 = (void *)((long)pvVar30 + (ulong)param_5);
                lVar43 = lVar43 + 1;
                if ((uint)lVar43 == param_8) {
                  return 1;
                }
              } while( true );
            }
          }
          else {
            if (uVar3 != 0x60003) {
              return 0;
            }
            convertPixels<PixelFormatConverter::BGRA32toRGB24>
                      (param_1,param_2,param_4,param_5,param_7,param_8);
          }
        }
      }
    }
    else if ((int)uVar3 < 0x130005) {
      if ((int)uVar3 < 0xb0005) {
        if ((int)uVar3 < 0x90005) {
          if (uVar3 == 0x60005) {
            convertPixels<PixelFormatConverter::BGRA32toRGBA32>
                      (param_1,param_2,param_4,param_5,param_7,param_8);
          }
          else {
            if (uVar3 != 0x80005) {
              return 0;
            }
            convertPixelsBlocked<PixelFormatConverter::BC1toRGBA32,4u,4u>
                      (param_1,param_2,param_4,param_5,param_7,param_8);
          }
        }
        else if (uVar3 == 0x90005) {
          convertPixelsBlocked<PixelFormatConverter::BC1AtoRGBA32,4u,4u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
        else {
          if (uVar3 != 0xa0005) {
            return 0;
          }
          convertPixelsBlocked<PixelFormatConverter::BC2toRGBA32,4u,4u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
      }
      else if ((int)uVar3 < 0xe0005) {
        if (uVar3 == 0xb0005) {
          convertPixelsBlocked<PixelFormatConverter::BC3toRGBA32,4u,4u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
        else {
          if (uVar3 != 0xc0005) {
            return 0;
          }
          convertPixelsBlocked<PixelFormatConverter::BC4toRGBA32,4u,4u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
      }
      else if (uVar3 == 0xe0005) {
        convertPixelsBlocked<PixelFormatConverter::BC5toRGBA32,4u,4u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x120005) {
          return 0;
        }
        convertPixelsBlocked<PixelFormatConverter::BC7toRGBA32,4u,4u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
    }
    else if ((int)uVar3 < 0x150016) {
      if ((int)uVar3 < 0x150003) {
        if (uVar3 == 0x130005) {
          convertPixelsBlocked<PixelFormatConverter::BC7AtoRGBA32,4u,4u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
        else {
          if (uVar3 != 0x140005) {
            return 0;
          }
          convertPixels<PixelFormatConverter::R16FtoRGBA32>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
      }
      else if (uVar3 == 0x150003) {
        convertPixels<PixelFormatConverter::RGBA64FtoRGB24>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x150005) {
          return 0;
        }
        convertPixels<PixelFormatConverter::RGBA64FtoRGBA32>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
    }
    else if ((int)uVar3 < 0x190005) {
      if (uVar3 == 0x150016) {
        convertPixels<PixelFormatConverter::RGBA64FtoR11G11B10>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x170005) {
          return 0;
        }
        convertPixels<PixelFormatConverter::R32FtoRGBA32>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
    }
    else if (uVar3 == 0x190005) {
      convertPixels<PixelFormatConverter::RG64FtoRGBA32>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
    else if (uVar3 == 0x1a0005) {
      convertPixels<PixelFormatConverter::RGB96FtoRGBA32>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
    else {
      if (uVar3 != 0x1a001b) {
        return 0;
      }
      convertPixels<PixelFormatConverter::RGB96toRGBA128>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
  }
  else if ((int)uVar3 < 0x440005) {
    if ((int)uVar3 < 0x3b0005) {
      if ((int)uVar3 < 0x250005) {
        if ((int)uVar3 < 0x1b001a) {
          if (uVar3 == 0x1b0005) {
            convertPixels<PixelFormatConverter::RGBA128FtoRGBA32>
                      (param_1,param_2,param_4,param_5,param_7,param_8);
          }
          else {
            if (uVar3 != 0x1b0015) {
              return 0;
            }
            convertPixels<PixelFormatConverter::RGBA128toRGBA64>
                      (param_1,param_2,param_4,param_5,param_7,param_8);
          }
        }
        else if (uVar3 == 0x1b001a) {
          convertPixels<PixelFormatConverter::RGBA128toRGB96>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
        else {
          if (uVar3 != 0x240005) {
            return 0;
          }
          if (param_2 == param_5) {
            uVar3 = param_8;
            param_8 = 1;
          }
          else {
            uVar3 = 1;
          }
          if (param_8 != 0) {
            uVar3 = uVar3 * param_7;
            uVar44 = (ulong)uVar3;
            uVar46 = (ulong)param_2;
            lVar43 = 0;
            uVar47 = (ulong)param_5;
            uVar41 = uVar44 & 0xfffffff0;
            pauVar26 = (undefined (*) [16])((long)param_1 + 0x10);
            puVar31 = (uint *)((long)param_4 + 0x20);
            pvVar30 = param_1;
            pvVar33 = param_4;
            do {
              if (uVar3 != 0) {
                if ((uVar3 < 0x10) ||
                   ((puVar38 = puVar31, pauVar34 = pauVar26, uVar40 = uVar41,
                    pvVar33 < (void *)((long)param_1 + uVar44 * 2 + lVar43 * uVar46) &&
                    (pvVar30 < (void *)((long)param_4 + uVar44 * 4 + lVar43 * uVar47))))) {
                  uVar40 = 0;
                }
                else {
                  do {
                    auVar49 = pauVar34[-1];
                    auVar48 = *pauVar34;
                    uVar40 = uVar40 - 0x10;
                    auVar58 = NEON_ext(auVar49,auVar49,8,1);
                    auVar70 = NEON_ext(auVar48,auVar48,8,1);
                    auVar54._0_8_ =
                         CONCAT44((uint)auVar49._2_2_ * 0xff + 0x807f >> 0x10,
                                  (uint)auVar49._0_2_ * 0xff + 0x807f >> 0x10) | 0xff000000ff000000;
                    auVar54._8_4_ = (uint)auVar49._4_2_ * 0xff + 0x807f >> 0x10 | 0xff000000;
                    auVar54._12_4_ = (uint)auVar49._6_2_ * 0xff + 0x807f >> 0x10 | 0xff000000;
                    auVar49._0_8_ =
                         CONCAT44((uint)auVar70._2_2_ * 0xff + 0x807f >> 0x10,
                                  (uint)auVar70._0_2_ * 0xff + 0x807f >> 0x10) | 0xff000000ff000000;
                    auVar49._8_4_ = (uint)auVar70._4_2_ * 0xff + 0x807f >> 0x10 | 0xff000000;
                    auVar49._12_4_ = (uint)auVar70._6_2_ * 0xff + 0x807f >> 0x10 | 0xff000000;
                    *(long *)(puVar38 + -6) = auVar54._8_8_;
                    *(ulong *)(puVar38 + -8) = auVar54._0_8_;
                    *(ulong *)(puVar38 + -2) =
                         CONCAT44((uint)auVar58._6_2_ * 0xff + 0x807f >> 0x10,
                                  (uint)auVar58._4_2_ * 0xff + 0x807f >> 0x10) | 0xff000000ff000000;
                    *(ulong *)(puVar38 + -4) =
                         CONCAT44((uint)auVar58._2_2_ * 0xff + 0x807f >> 0x10,
                                  (uint)auVar58._0_2_ * 0xff + 0x807f >> 0x10) | 0xff000000ff000000;
                    puVar38[4] = (uint)auVar48._4_2_ * 0xff + 0x807f >> 0x10 | 0xff000000;
                    puVar38[5] = (uint)auVar48._6_2_ * 0xff + 0x807f >> 0x10 | 0xff000000;
                    *puVar38 = (uint)auVar48._0_2_ * 0xff + 0x807f >> 0x10 | 0xff000000;
                    puVar38[1] = (uint)auVar48._2_2_ * 0xff + 0x807f >> 0x10 | 0xff000000;
                    *(long *)(puVar38 + 6) = auVar49._8_8_;
                    *(ulong *)(puVar38 + 4) = auVar49._0_8_;
                    puVar38 = puVar38 + 0x10;
                    pauVar34 = pauVar34 + 2;
                  } while (uVar40 != 0);
                  uVar40 = uVar41;
                  if (uVar41 == uVar44) goto LAB_00a9c7f0;
                }
                do {
                  *(uint *)((long)pvVar33 + uVar40 * 4) =
                       (uint)*(ushort *)((long)pvVar30 + uVar40 * 2) * 0xff + 0x807f >> 0x10 |
                       0xff000000;
                  uVar40 = uVar40 + 1;
                } while (uVar44 != uVar40);
              }
LAB_00a9c7f0:
              pvVar30 = (void *)((long)pvVar30 + uVar46);
              pvVar33 = (void *)((long)pvVar33 + uVar47);
              lVar43 = lVar43 + 1;
              pauVar26 = (undefined (*) [16])(*pauVar26 + uVar46);
              puVar31 = (uint *)((long)puVar31 + uVar47);
              if ((uint)lVar43 == param_8) {
                return 1;
              }
            } while( true );
          }
        }
      }
      else if ((int)uVar3 < 0x270005) {
        if (uVar3 == 0x250005) {
          convertPixels<PixelFormatConverter::RG32toRGBA32>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
        else {
          if (uVar3 != 0x260005) {
            return 0;
          }
          convertPixels<PixelFormatConverter::RGB48toRGBA32>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
      }
      else if (uVar3 == 0x270005) {
        convertPixels<PixelFormatConverter::RGBA64toRGBA32>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x270024) {
          return 0;
        }
        if (param_2 == param_5) {
          uVar3 = param_8;
          param_8 = 1;
        }
        else {
          uVar3 = 1;
        }
        if (param_8 != 0) {
          uVar3 = uVar3 * param_7;
          uVar44 = (ulong)uVar3;
          lVar43 = 0;
          uVar46 = (ulong)param_2;
          uVar47 = (ulong)param_5;
          uVar41 = uVar44 & 0xfffffff0;
          pauVar26 = (undefined (*) [16])((long)param_1 + 0x40);
          puVar28 = (undefined8 *)((long)param_4 + 0x10);
          pvVar30 = param_1;
          pvVar33 = param_4;
          do {
            if (uVar3 != 0) {
              if ((uVar3 < 0x10) ||
                 ((puVar27 = puVar28, pauVar34 = pauVar26, uVar40 = uVar41,
                  pvVar33 < (void *)((long)param_1 + uVar44 * 8 + lVar43 * uVar46) &&
                  (pvVar30 < (void *)((long)param_4 + uVar44 * 2 + lVar43 * uVar47))))) {
                uVar40 = 0;
              }
              else {
                do {
                  uVar40 = uVar40 - 0x10;
                  uVar18 = *(undefined8 *)(pauVar34[-4] + 8);
                  uVar17 = *(undefined8 *)pauVar34[-4];
                  uVar10 = *(undefined8 *)(pauVar34[-3] + 8);
                  uVar9 = *(undefined8 *)pauVar34[-3];
                  auVar21 = *(undefined (*) [12])pauVar34[3];
                  auVar49 = *pauVar34;
                  auVar48 = pauVar34[1];
                  uVar14 = (ulong)CONCAT24(SUB162(pauVar34[2],8),SUB164(pauVar34[2],0)) &
                           0xffffffff0000ffff;
                  puVar27[-1] = CONCAT26(SUB162(pauVar34[-1],8),
                                         CONCAT24(SUB162(pauVar34[-1],0),
                                                  CONCAT22(SUB162(pauVar34[-2],8),
                                                           SUB162(pauVar34[-2],0))));
                  puVar27[-2] = CONCAT26((short)uVar10,
                                         CONCAT24((short)uVar9,CONCAT22((short)uVar18,(short)uVar17)
                                                 ));
                  puVar27[1] = CONCAT26(auVar21._8_2_,
                                        CONCAT24(auVar21._0_2_,
                                                 CONCAT22((short)(uVar14 >> 0x20),(short)uVar14)));
                  *puVar27 = CONCAT26(auVar48._8_2_,
                                      CONCAT24(auVar48._0_2_,CONCAT22(auVar49._8_2_,auVar49._0_2_)))
                  ;
                  puVar27 = puVar27 + 4;
                  pauVar34 = pauVar34 + 8;
                } while (uVar40 != 0);
                uVar40 = uVar41;
                if (uVar41 == uVar44) goto LAB_00a9caf4;
              }
              do {
                *(short *)((long)pvVar33 + uVar40 * 2) =
                     (short)*(undefined8 *)((long)pvVar30 + uVar40 * 8);
                uVar40 = uVar40 + 1;
              } while (uVar44 != uVar40);
            }
LAB_00a9caf4:
            pvVar30 = (void *)((long)pvVar30 + uVar46);
            pvVar33 = (void *)((long)pvVar33 + uVar47);
            lVar43 = lVar43 + 1;
            pauVar26 = (undefined (*) [16])(*pauVar26 + uVar46);
            puVar28 = (undefined8 *)((long)puVar28 + uVar47);
            if ((uint)lVar43 == param_8) {
              return 1;
            }
          } while( true );
        }
      }
    }
    else if ((int)uVar3 < 0x3f0005) {
      if ((int)uVar3 < 0x3d0005) {
        if (uVar3 == 0x3b0005) {
          convertPixelsBlocked<PixelFormatConverter::ASTC4x4toRGBA32,4u,4u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
        else {
          if (uVar3 != 0x3c0005) {
            return 0;
          }
          convertPixelsBlocked<PixelFormatConverter::ASTC5x4toRGBA32,5u,4u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
      }
      else if (uVar3 == 0x3d0005) {
        convertPixelsBlocked<PixelFormatConverter::ASTC5x5toRGBA32,5u,5u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x3e0005) {
          return 0;
        }
        convertPixelsBlocked<PixelFormatConverter::ASTC6x5toRGBA32,6u,5u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
    }
    else if ((int)uVar3 < 0x410005) {
      if (uVar3 == 0x3f0005) {
        convertPixelsBlocked<PixelFormatConverter::ASTC6x6toRGBA32,6u,6u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x400005) {
          return 0;
        }
        convertPixelsBlocked<PixelFormatConverter::ASTC8x6toRGBA32,8u,6u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
    }
    else if (uVar3 == 0x410005) {
      convertPixelsBlocked<PixelFormatConverter::ASTC10x5toRGBA32,10u,5u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
    else if (uVar3 == 0x420005) {
      convertPixelsBlocked<PixelFormatConverter::ASTC10x6toRGBA32,10u,6u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
    else {
      if (uVar3 != 0x430005) {
        return 0;
      }
      convertPixelsBlocked<PixelFormatConverter::ASTC8x8toRGBA32,8u,8u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
  }
  else if ((int)uVar3 < 0x4c0005) {
    if ((int)uVar3 < 0x480005) {
      if ((int)uVar3 < 0x460005) {
        if (uVar3 == 0x440005) {
          convertPixelsBlocked<PixelFormatConverter::ASTC10x8toRGBA32,10u,8u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
        else {
          if (uVar3 != 0x450005) {
            return 0;
          }
          convertPixelsBlocked<PixelFormatConverter::ASTC10x10toRGBA32,10u,10u>
                    (param_1,param_2,param_4,param_5,param_7,param_8);
        }
      }
      else if (uVar3 == 0x460005) {
        convertPixelsBlocked<PixelFormatConverter::ASTC12x10toRGBA32,12u,10u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x470005) {
          return 0;
        }
        convertPixelsBlocked<PixelFormatConverter::ASTC12x12toRGBA32,12u,12u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
    }
    else if ((int)uVar3 < 0x4a0005) {
      if (uVar3 == 0x480005) {
        convertPixelsBlocked<PixelFormatConverter::ASTC4x4AtoRGBA32,4u,4u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x490005) {
          return 0;
        }
        convertPixelsBlocked<PixelFormatConverter::ASTC5x4AtoRGBA32,5u,4u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
    }
    else if (uVar3 == 0x4a0005) {
      convertPixelsBlocked<PixelFormatConverter::ASTC5x5AtoRGBA32,5u,5u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
    else {
      if (uVar3 != 0x4b0005) {
        return 0;
      }
      convertPixelsBlocked<PixelFormatConverter::ASTC6x5AtoRGBA32,6u,5u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
  }
  else if ((int)uVar3 < 0x500005) {
    if ((int)uVar3 < 0x4e0005) {
      if (uVar3 == 0x4c0005) {
        convertPixelsBlocked<PixelFormatConverter::ASTC6x6AtoRGBA32,6u,6u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
      else {
        if (uVar3 != 0x4d0005) {
          return 0;
        }
        convertPixelsBlocked<PixelFormatConverter::ASTC8x6AtoRGBA32,8u,6u>
                  (param_1,param_2,param_4,param_5,param_7,param_8);
      }
    }
    else if (uVar3 == 0x4e0005) {
      convertPixelsBlocked<PixelFormatConverter::ASTC10x5AtoRGBA32,10u,5u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
    else {
      if (uVar3 != 0x4f0005) {
        return 0;
      }
      convertPixelsBlocked<PixelFormatConverter::ASTC10x6AtoRGBA32,10u,6u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
  }
  else if ((int)uVar3 < 0x520005) {
    if (uVar3 == 0x500005) {
      convertPixelsBlocked<PixelFormatConverter::ASTC8x8AtoRGBA32,8u,8u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
    else {
      if (uVar3 != 0x510005) {
        return 0;
      }
      convertPixelsBlocked<PixelFormatConverter::ASTC10x8AtoRGBA32,10u,8u>
                (param_1,param_2,param_4,param_5,param_7,param_8);
    }
  }
  else if (uVar3 == 0x520005) {
    convertPixelsBlocked<PixelFormatConverter::ASTC10x10AtoRGBA32,10u,10u>
              (param_1,param_2,param_4,param_5,param_7,param_8);
  }
  else if (uVar3 == 0x530005) {
    convertPixelsBlocked<PixelFormatConverter::ASTC12x10AtoRGBA32,12u,10u>
              (param_1,param_2,param_4,param_5,param_7,param_8);
  }
  else {
    if (uVar3 != 0x540005) {
      return 0;
    }
    convertPixelsBlocked<PixelFormatConverter::ASTC12x12AtoRGBA32,12u,12u>
              (param_1,param_2,param_4,param_5,param_7,param_8);
  }
  uVar39 = 1;
switchD_00a9bf18_caseD_50004:
                    /* WARNING: Read-only address (ram,0x004c37b0) is written */
                    /* WARNING: Read-only address (ram,0x004c3bd0) is written */
                    /* WARNING: Read-only address (ram,0x004c4870) is written */
                    /* WARNING: Read-only address (ram,0x004c4a50) is written */
                    /* WARNING: Read-only address (ram,0x004c4d70) is written */
                    /* WARNING: Read-only address (ram,0x004c4f40) is written */
  return uVar39;
}


