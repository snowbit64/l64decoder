// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeASTCToFloat
// Entry Point: 00aa3ae0
// Size: 1760 bytes
// Signature: undefined __cdecl decodeASTCToFloat(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, float * param_6)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ASTCUtil::decodeASTCToFloat(unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned int, float*) */

void ASTCUtil::decodeASTCToFloat
               (uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,float *param_6)

{
  uchar *puVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  uint uVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  bool bVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  Logger *pLVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  uchar *puVar43;
  ulong uVar44;
  undefined uVar45;
  undefined4 uVar46;
  undefined extraout_q0 [16];
  undefined auVar47 [16];
  undefined uVar48;
  undefined uVar49;
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  undefined uVar57;
  undefined uVar58;
  undefined uVar59;
  undefined uVar60;
  undefined uVar61;
  undefined in_q2 [16];
  undefined in_register_00005068;
  undefined in_register_00005069;
  undefined in_register_0000506a;
  undefined in_register_0000506b;
  undefined in_register_0000506c;
  undefined in_register_0000506d;
  undefined in_register_0000506e;
  undefined in_register_0000506f;
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined uStack_308;
  uchar local_2e0 [576];
  long local_a0;
  
  auVar29 = _DAT_004c4f40;
  auVar28 = _DAT_004c4d70;
  auVar27 = _DAT_004c4a50;
  auVar26 = _DAT_004c37b0;
  lVar12 = tpidr_el0;
  local_a0 = *(long *)(lVar12 + 0x28);
  if ((param_4 < 0xd) && (param_5 < 0xd)) {
    if (!CARRY4(param_3 - 1,param_5)) {
      uVar8 = (param_2 + param_4) - 1;
      uVar25 = 0;
      uVar10 = 0;
      if (param_4 != 0) {
        uVar10 = uVar8 / param_4;
      }
      uVar11 = 0;
      if (param_5 != 0) {
        uVar11 = ((param_3 - 1) + param_5) / param_5;
      }
      uVar5 = uVar10;
      if (uVar10 < 2) {
        uVar5 = 1;
      }
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar52 = 0;
      uVar54 = 0;
      uVar56 = 0;
      uVar58 = 0;
      uVar60 = 0;
      do {
        if (param_4 <= uVar8) {
          uVar44 = 0;
          uVar41 = param_2;
          do {
            iVar31 = (int)uVar44;
            uVar7 = param_2 - iVar31 * param_4;
            uVar3 = param_4;
            if (uVar41 <= param_4) {
              uVar3 = uVar41;
            }
            uVar39 = param_2 + iVar31 * -param_4;
            uVar4 = param_4;
            if (uVar39 <= param_4) {
              uVar4 = uVar39;
            }
            uVar40 = (ulong)uVar4;
            uVar39 = param_4;
            if (uVar7 <= param_4) {
              uVar39 = uVar7;
            }
            uVar32 = basisu::astc::decompress
                               (local_2e0,param_1 + (uVar25 * uVar10 + iVar31) * 0x10,false,param_4,
                                param_5);
            if ((uVar32 & 1) == 0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar31 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar31 != 0)) {
                    /* try { // try from 00aa417c to 00aa4183 has its CatchHandler @ 00aa41cc */
                pLVar34 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aa4188 to 00aa418b has its CatchHandler @ 00aa41c0 */
                Logger::Logger(pLVar34);
                LogManager::getInstance()::singletonLogManager = pLVar34;
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error: Failed to decompress ASTC texture (astc-codec returned error)"
                                );
              goto LAB_00aa40dc;
            }
            uVar9 = param_2 - iVar31 * param_4;
            uVar7 = param_4;
            if (uVar9 <= param_4) {
              uVar7 = uVar9;
            }
            auVar24._12_4_ = 0;
            auVar24._0_12_ = ZEXT812(0);
            auVar23._12_4_ = 0;
            auVar23._0_12_ = ZEXT812(0);
            auVar22._12_4_ = 0;
            auVar22._0_12_ = ZEXT812(0);
            auVar21._12_4_ = 0;
            auVar21._0_12_ = ZEXT812(0);
            auVar20._12_4_ = 0;
            auVar20._0_12_ = ZEXT812(0);
            auVar19._12_4_ = 0;
            auVar19._0_12_ = ZEXT812(0);
            auVar18._12_4_ = 0;
            auVar18._0_12_ = ZEXT812(0);
            auVar17._12_4_ = 0;
            auVar17._0_12_ = ZEXT812(0);
            auVar16._12_4_ = 0;
            auVar16._0_12_ = ZEXT812(0);
            uStack_308 = 0;
            auVar15._12_4_ = 0;
            auVar15._0_12_ = ZEXT812(0);
            if (param_5 != 0) {
              uVar42 = (ulong)uVar39 - 1;
              uVar32 = 0;
              bVar30 = uVar42 >> 0x3c == 0;
              puVar43 = local_2e0;
              uVar33 = uVar40 & 0xfffffff0;
              auVar62 = extraout_q0;
              uVar45 = uVar49;
              uVar51 = uVar50;
              uVar53 = uVar52;
              uVar55 = uVar54;
              uVar57 = uVar56;
              uVar59 = uVar58;
              uVar61 = uVar60;
              do {
                uVar39 = uVar25 * param_5 + (int)uVar32;
                uVar49 = uVar45;
                uVar50 = uVar51;
                uVar52 = uVar53;
                uVar54 = uVar55;
                uVar56 = uVar57;
                uVar58 = uVar59;
                uVar60 = uVar61;
                if ((uVar39 < param_3) && (uVar7 != 0)) {
                  iVar6 = iVar31 * param_4 + uVar39 * param_2;
                  if (uVar4 < 8) {
                    uVar35 = 0;
                  }
                  else {
                    uVar35 = 0;
                    uVar36 = (ulong)(uVar25 * param_5 * param_2 * 4 + iVar31 * param_4 * 4 +
                                    (int)uVar32 * param_2 * 4);
                    if ((((uVar42 >> 0x20 == 0) &&
                         (param_6 + uVar36 + 2 <= param_6 + uVar36 + 2 + uVar42 * 4 && bVar30)) &&
                        (param_6 + uVar36 + 3 <= param_6 + uVar36 + 3 + uVar42 * 4 && bVar30)) &&
                       ((param_6 + uVar36 + 1 <= param_6 + uVar36 + 1 + uVar42 * 4 && bVar30 &&
                        (param_6 + uVar36 <= param_6 + uVar36 + uVar42 * 4 && bVar30)))) {
                      uVar49 = 0;
                      uVar50 = 0;
                      uVar52 = 0;
                      uVar54 = 0;
                      uVar56 = 0;
                      uVar58 = 0;
                      uVar60 = 0;
                      if (uVar4 < 0x10) {
                        uVar35 = 0;
                      }
                      else {
                        uVar39 = 3;
                        uVar35 = (ulong)uVar3 & 0xfffffff0;
                        do {
                          uVar35 = uVar35 - 0x10;
                          puVar1 = puVar43 + (uVar39 - 3);
                          auVar66[0] = *puVar1;
                          in_q2[0] = puVar1[2];
                          auVar66[1] = puVar1[4];
                          in_q2[1] = puVar1[6];
                          auVar66[2] = puVar1[8];
                          in_q2[2] = puVar1[10];
                          auVar66[3] = puVar1[0xc];
                          in_q2[3] = puVar1[0xe];
                          auVar66[4] = puVar1[0x10];
                          in_q2[4] = puVar1[0x12];
                          auVar66[5] = puVar1[0x14];
                          in_q2[5] = puVar1[0x16];
                          auVar66[6] = puVar1[0x18];
                          in_q2[6] = puVar1[0x1a];
                          auVar66[7] = puVar1[0x1c];
                          in_q2[7] = puVar1[0x1e];
                          auVar66[8] = puVar1[0x20];
                          in_q2[8] = puVar1[0x22];
                          auVar66[9] = puVar1[0x24];
                          in_q2[9] = puVar1[0x26];
                          auVar66[10] = puVar1[0x28];
                          in_q2[10] = puVar1[0x2a];
                          auVar66[11] = puVar1[0x2c];
                          in_q2[11] = puVar1[0x2e];
                          auVar66[12] = puVar1[0x30];
                          in_q2[12] = puVar1[0x32];
                          auVar66[13] = puVar1[0x34];
                          in_q2[13] = puVar1[0x36];
                          auVar66[14] = puVar1[0x38];
                          in_q2[14] = puVar1[0x3a];
                          auVar66[15] = puVar1[0x3c];
                          in_q2[15] = puVar1[0x3e];
                          pfVar2 = param_6 + (ulong)(uint)(iVar6 * 4) + ((ulong)uVar39 - 3);
                          uVar39 = uVar39 + 0x40;
                          uVar14 = CONCAT17(puVar1[0x3f],
                                            CONCAT16(puVar1[0x3b],
                                                     CONCAT15(puVar1[0x37],
                                                              CONCAT14(puVar1[0x33],
                                                                       CONCAT13(puVar1[0x2f],
                                                                                CONCAT12(puVar1[0x2b
                                                  ],CONCAT11(puVar1[0x27],puVar1[0x23])))))));
                          uVar13 = CONCAT17(puVar1[0x1f],
                                            CONCAT16(puVar1[0x1b],
                                                     CONCAT15(puVar1[0x17],
                                                              CONCAT14(puVar1[0x13],
                                                                       CONCAT13(puVar1[0xf],
                                                                                CONCAT12(puVar1[0xb]
                                                                                         ,CONCAT11(
                                                  puVar1[7],puVar1[3])))))));
                          auVar68[9] = puVar1[0x25];
                          auVar68[8] = puVar1[0x21];
                          auVar68[10] = puVar1[0x29];
                          auVar68[11] = puVar1[0x2d];
                          auVar68[12] = puVar1[0x31];
                          auVar68[13] = puVar1[0x35];
                          auVar68[14] = puVar1[0x39];
                          auVar68[15] = puVar1[0x3d];
                          auVar68[1] = puVar1[5];
                          auVar68[0] = puVar1[1];
                          auVar68[2] = puVar1[9];
                          auVar68[3] = puVar1[0xd];
                          auVar68[4] = puVar1[0x11];
                          auVar68[5] = puVar1[0x15];
                          auVar68[6] = puVar1[0x19];
                          auVar68[7] = puVar1[0x1d];
                          auVar62 = a64_TBL(ZEXT816(0),auVar66,ZEXT216(0) << 0x40,auVar27);
                          auVar47 = a64_TBL(ZEXT816(0),auVar68,auVar21,auVar27);
                          auVar63 = a64_TBL(ZEXT816(0),auVar68,auVar22,auVar26);
                          auVar64 = a64_TBL(ZEXT816(0),auVar68,auVar23,auVar28);
                          auVar67 = NEON_ucvtf(auVar62,4);
                          auVar69 = NEON_ucvtf(auVar47,4);
                          auVar72 = NEON_ucvtf(auVar63,4);
                          auVar76 = NEON_ucvtf(auVar64,4);
                          auVar62 = a64_TBL(ZEXT816(0),auVar68,auVar24,auVar29);
                          auVar68 = NEON_ucvtf(auVar62,4);
                          auVar62 = a64_TBL(ZEXT816(0),in_q2,ZEXT216(0) << 0x40,auVar27);
                          auVar70 = NEON_ucvtf(auVar62,4);
                          auVar62 = a64_TBL(ZEXT816(0),auVar66,ZEXT216(0) << 0x40,auVar26);
                          auVar71 = NEON_ucvtf(auVar62,4);
                          auVar62 = a64_TBL(ZEXT816(0),in_q2,ZEXT216(0) << 0x40,auVar26);
                          auVar73 = NEON_ucvtf(auVar62,4);
                          auVar47._8_8_ = uVar14;
                          auVar47._0_8_ = uVar13;
                          auVar62 = a64_TBL(ZEXT816(0),auVar47,auVar15,auVar26);
                          auVar74 = NEON_ucvtf(auVar62,4);
                          auVar62 = a64_TBL(ZEXT816(0),auVar66,ZEXT216(0) << 0x40,auVar28);
                          auVar75 = NEON_ucvtf(auVar62,4);
                          auVar62 = a64_TBL(ZEXT816(0),in_q2,ZEXT216(0) << 0x40,auVar28);
                          auVar77 = NEON_ucvtf(auVar62,4);
                          auVar47 = a64_TBL(ZEXT816(0),auVar66,ZEXT216(0) << 0x40,auVar29);
                          auVar62 = a64_TBL(ZEXT816(0),in_q2,ZEXT216(0) << 0x40,auVar29);
                          auVar66 = NEON_ucvtf(auVar47,4);
                          auVar62 = NEON_ucvtf(auVar62,4);
                          auVar63._8_8_ = uVar14;
                          auVar63._0_8_ = uVar13;
                          auVar47 = a64_TBL(ZEXT816(0),auVar63,auVar16,auVar29);
                          auVar47 = NEON_ucvtf(auVar47,4);
                          auVar64._8_8_ = uVar14;
                          auVar64._0_8_ = uVar13;
                          auVar63 = a64_TBL(ZEXT816(0),auVar64,auVar17,auVar28);
                          auVar63 = NEON_ucvtf(auVar63,4);
                          auVar65._8_8_ = uVar14;
                          auVar65._0_8_ = uVar13;
                          auVar64 = a64_TBL(ZEXT816(0),auVar65,auVar18,auVar27);
                          *pfVar2 = auVar66._0_4_ / 255.0;
                          pfVar2[1] = auVar68._0_4_ / 255.0;
                          pfVar2[2] = auVar62._0_4_ / 255.0;
                          pfVar2[3] = auVar47._0_4_ / 255.0;
                          pfVar2[4] = auVar66._4_4_ / 255.0;
                          pfVar2[5] = auVar68._4_4_ / 255.0;
                          pfVar2[6] = auVar62._4_4_ / 255.0;
                          pfVar2[7] = auVar47._4_4_ / 255.0;
                          pfVar2[8] = auVar66._8_4_ / 255.0;
                          pfVar2[9] = auVar68._8_4_ / 255.0;
                          pfVar2[10] = auVar62._8_4_ / 255.0;
                          pfVar2[0xb] = auVar47._8_4_ / 255.0;
                          pfVar2[0xc] = auVar66._12_4_ / 255.0;
                          pfVar2[0xd] = auVar68._12_4_ / 255.0;
                          pfVar2[0xe] = auVar62._12_4_ / 255.0;
                          pfVar2[0xf] = auVar47._12_4_ / 255.0;
                          auVar62 = NEON_ucvtf(auVar64,4);
                          pfVar2[0x10] = auVar75._0_4_ / 255.0;
                          pfVar2[0x11] = auVar76._0_4_ / 255.0;
                          pfVar2[0x12] = auVar77._0_4_ / 255.0;
                          pfVar2[0x13] = auVar63._0_4_ / 255.0;
                          pfVar2[0x14] = auVar75._4_4_ / 255.0;
                          pfVar2[0x15] = auVar76._4_4_ / 255.0;
                          pfVar2[0x16] = auVar77._4_4_ / 255.0;
                          pfVar2[0x17] = auVar63._4_4_ / 255.0;
                          pfVar2[0x18] = auVar75._8_4_ / 255.0;
                          pfVar2[0x19] = auVar76._8_4_ / 255.0;
                          pfVar2[0x1a] = auVar77._8_4_ / 255.0;
                          pfVar2[0x1b] = auVar63._8_4_ / 255.0;
                          pfVar2[0x1c] = auVar75._12_4_ / 255.0;
                          pfVar2[0x1d] = auVar76._12_4_ / 255.0;
                          pfVar2[0x1e] = auVar77._12_4_ / 255.0;
                          pfVar2[0x1f] = auVar63._12_4_ / 255.0;
                          pfVar2[0x20] = auVar71._0_4_ / 255.0;
                          pfVar2[0x21] = auVar72._0_4_ / 255.0;
                          pfVar2[0x22] = auVar73._0_4_ / 255.0;
                          pfVar2[0x23] = auVar74._0_4_ / 255.0;
                          pfVar2[0x24] = auVar71._4_4_ / 255.0;
                          pfVar2[0x25] = auVar72._4_4_ / 255.0;
                          pfVar2[0x26] = auVar73._4_4_ / 255.0;
                          pfVar2[0x27] = auVar74._4_4_ / 255.0;
                          pfVar2[0x28] = auVar71._8_4_ / 255.0;
                          pfVar2[0x29] = auVar72._8_4_ / 255.0;
                          pfVar2[0x2a] = auVar73._8_4_ / 255.0;
                          pfVar2[0x2b] = auVar74._8_4_ / 255.0;
                          pfVar2[0x2c] = auVar71._12_4_ / 255.0;
                          pfVar2[0x2d] = auVar72._12_4_ / 255.0;
                          pfVar2[0x2e] = auVar73._12_4_ / 255.0;
                          pfVar2[0x2f] = auVar74._12_4_ / 255.0;
                          pfVar2[0x30] = auVar67._0_4_ / 255.0;
                          pfVar2[0x31] = auVar69._0_4_ / 255.0;
                          pfVar2[0x32] = auVar70._0_4_ / 255.0;
                          pfVar2[0x33] = auVar62._0_4_ / 255.0;
                          pfVar2[0x34] = auVar67._4_4_ / 255.0;
                          pfVar2[0x35] = auVar69._4_4_ / 255.0;
                          pfVar2[0x36] = auVar70._4_4_ / 255.0;
                          pfVar2[0x37] = auVar62._4_4_ / 255.0;
                          pfVar2[0x38] = auVar67._8_4_ / 255.0;
                          pfVar2[0x39] = auVar69._8_4_ / 255.0;
                          pfVar2[0x3a] = auVar70._8_4_ / 255.0;
                          pfVar2[0x3b] = auVar62._8_4_ / 255.0;
                          pfVar2[0x3c] = auVar67._12_4_ / 255.0;
                          pfVar2[0x3d] = auVar69._12_4_ / 255.0;
                          pfVar2[0x3e] = auVar70._12_4_ / 255.0;
                          pfVar2[0x3f] = auVar62._12_4_ / 255.0;
                        } while (uVar35 != 0);
                        uVar48 = uStack_308;
                        in_register_00005068 = uStack_308;
                        in_register_00005069 = uVar49;
                        in_register_0000506a = uVar50;
                        in_register_0000506b = uVar52;
                        in_register_0000506c = uVar54;
                        in_register_0000506d = uVar56;
                        in_register_0000506e = uVar58;
                        in_register_0000506f = uVar60;
                        if (uVar33 == uVar40) goto LAB_00aa3d78;
                        uVar35 = uVar33;
                        uVar45 = uVar49;
                        uVar51 = uVar50;
                        uVar53 = uVar52;
                        uVar55 = uVar54;
                        uVar57 = uVar56;
                        uVar59 = uVar58;
                        uVar61 = uVar60;
                        if ((uVar4 >> 3 & 1) == 0) goto LAB_00aa3db0;
                      }
                      lVar37 = uVar35 - ((ulong)uVar3 & 0xfffffff8);
                      uVar39 = (int)uVar35 << 2;
                      do {
                        puVar1 = puVar43 + uVar39;
                        lVar37 = lVar37 + 8;
                        auVar73[1] = puVar1[4];
                        auVar73[0] = *puVar1;
                        auVar75[1] = puVar1[6];
                        auVar75[0] = puVar1[2];
                        auVar73[2] = puVar1[8];
                        auVar75[2] = puVar1[10];
                        auVar73[3] = puVar1[0xc];
                        auVar75[3] = puVar1[0xe];
                        auVar73[4] = puVar1[0x10];
                        auVar75[4] = puVar1[0x12];
                        auVar73[5] = puVar1[0x14];
                        auVar75[5] = puVar1[0x16];
                        auVar73[6] = puVar1[0x18];
                        auVar75[6] = puVar1[0x1a];
                        auVar73[7] = puVar1[0x1c];
                        auVar75[7] = puVar1[0x1e];
                        uVar9 = uVar39 + 3;
                        uVar39 = uVar39 + 0x20;
                        pfVar2 = param_6 + (ulong)(uint)(iVar6 * 4) + ((ulong)uVar9 - 3);
                        auVar73._8_8_ = auVar62._8_8_;
                        auVar74[9] = uVar45;
                        auVar74[8] = uVar48;
                        auVar74[10] = uVar51;
                        auVar74[11] = uVar53;
                        auVar74[12] = uVar55;
                        auVar74[13] = uVar57;
                        auVar74[14] = uVar59;
                        auVar74[15] = uVar61;
                        auVar74[1] = puVar1[5];
                        auVar74[0] = puVar1[1];
                        auVar74[2] = puVar1[9];
                        auVar74[3] = puVar1[0xd];
                        auVar74[4] = puVar1[0x11];
                        auVar74[5] = puVar1[0x15];
                        auVar74[6] = puVar1[0x19];
                        auVar74[7] = puVar1[0x1d];
                        auVar75._8_8_ = in_q2._8_8_;
                        auVar67._12_4_ = 0;
                        auVar67._0_12_ = ZEXT812(0);
                        auVar47 = a64_TBL(ZEXT816(0),auVar73,auVar67,auVar28);
                        auVar69._12_4_ = 0;
                        auVar69._0_12_ = ZEXT812(0);
                        auVar62 = a64_TBL(ZEXT816(0),auVar73,auVar69,auVar29);
                        auVar72[9] = in_register_00005069;
                        auVar72[8] = in_register_00005068;
                        auVar72[10] = in_register_0000506a;
                        auVar72[11] = in_register_0000506b;
                        auVar72[12] = in_register_0000506c;
                        auVar72[13] = in_register_0000506d;
                        auVar72[14] = in_register_0000506e;
                        auVar72[15] = in_register_0000506f;
                        auVar72[1] = puVar1[7];
                        auVar72[0] = puVar1[3];
                        auVar72[2] = puVar1[0xb];
                        auVar72[3] = puVar1[0xf];
                        auVar72[4] = puVar1[0x13];
                        auVar72[5] = puVar1[0x17];
                        auVar72[6] = puVar1[0x1b];
                        auVar72[7] = puVar1[0x1f];
                        auVar64 = NEON_ucvtf(auVar47,4);
                        auVar63 = NEON_ucvtf(auVar62,4);
                        auVar65 = a64_TBL(ZEXT816(0),auVar74,auVar19,auVar28);
                        auVar66 = a64_TBL(ZEXT816(0),auVar74,auVar20,auVar29);
                        auVar47 = a64_TBL(ZEXT816(0),auVar72,ZEXT216(0) << 0x40,auVar29);
                        auVar62 = a64_TBL(ZEXT816(0),auVar72,ZEXT216(0) << 0x40,auVar28);
                        auVar65 = NEON_ucvtf(auVar65,4);
                        auVar66 = NEON_ucvtf(auVar66,4);
                        in_q2 = NEON_ucvtf(auVar47,4);
                        auVar62 = NEON_ucvtf(auVar62,4);
                        auVar70._12_4_ = 0;
                        auVar70._0_12_ = ZEXT812(0);
                        auVar47 = a64_TBL(ZEXT816(0),auVar75,auVar70,auVar28);
                        auVar47 = NEON_ucvtf(auVar47,4);
                        auVar71._12_4_ = 0;
                        auVar71._0_12_ = ZEXT812(0);
                        auVar67 = a64_TBL(ZEXT816(0),auVar75,auVar71,auVar29);
                        auVar67 = NEON_ucvtf(auVar67,4);
                        *pfVar2 = auVar63._0_4_ / 255.0;
                        pfVar2[1] = auVar66._0_4_ / 255.0;
                        pfVar2[2] = auVar67._0_4_ / 255.0;
                        pfVar2[3] = in_q2._0_4_ / 255.0;
                        pfVar2[4] = auVar63._4_4_ / 255.0;
                        pfVar2[5] = auVar66._4_4_ / 255.0;
                        pfVar2[6] = auVar67._4_4_ / 255.0;
                        pfVar2[7] = in_q2._4_4_ / 255.0;
                        pfVar2[8] = auVar63._8_4_ / 255.0;
                        pfVar2[9] = auVar66._8_4_ / 255.0;
                        pfVar2[10] = auVar67._8_4_ / 255.0;
                        pfVar2[0xb] = in_q2._8_4_ / 255.0;
                        pfVar2[0xc] = auVar63._12_4_ / 255.0;
                        pfVar2[0xd] = auVar66._12_4_ / 255.0;
                        pfVar2[0xe] = auVar67._12_4_ / 255.0;
                        pfVar2[0xf] = in_q2._12_4_ / 255.0;
                        pfVar2[0x10] = auVar64._0_4_ / 255.0;
                        pfVar2[0x11] = auVar65._0_4_ / 255.0;
                        pfVar2[0x12] = auVar47._0_4_ / 255.0;
                        pfVar2[0x13] = auVar62._0_4_ / 255.0;
                        pfVar2[0x14] = auVar64._4_4_ / 255.0;
                        pfVar2[0x15] = auVar65._4_4_ / 255.0;
                        pfVar2[0x16] = auVar47._4_4_ / 255.0;
                        pfVar2[0x17] = auVar62._4_4_ / 255.0;
                        pfVar2[0x18] = auVar64._8_4_ / 255.0;
                        pfVar2[0x19] = auVar65._8_4_ / 255.0;
                        pfVar2[0x1a] = auVar47._8_4_ / 255.0;
                        pfVar2[0x1b] = auVar62._8_4_ / 255.0;
                        pfVar2[0x1c] = auVar64._12_4_ / 255.0;
                        pfVar2[0x1d] = auVar65._12_4_ / 255.0;
                        pfVar2[0x1e] = auVar47._12_4_ / 255.0;
                        pfVar2[0x1f] = auVar62._12_4_ / 255.0;
                        uVar48 = uStack_308;
                        uVar45 = uVar49;
                        uVar51 = uVar50;
                        uVar53 = uVar52;
                        uVar55 = uVar54;
                        uVar57 = uVar56;
                        uVar59 = uVar58;
                        uVar61 = uVar60;
                      } while (lVar37 != 0);
                      uVar35 = uVar40 & 0xfffffff8;
                      if ((uVar40 & 0xfffffff8) == uVar40) goto LAB_00aa3d78;
                    }
                  }
LAB_00aa3db0:
                  uVar36 = uVar35 << 2;
                  do {
                    uVar38 = uVar36 & 0xfffffffc;
                    uVar35 = uVar35 + 1;
                    uVar36 = uVar36 + 4;
                    uVar46 = *(undefined4 *)(puVar43 + uVar38);
                    uVar45 = (undefined)((uint)uVar46 >> 8);
                    auVar76._6_2_ = 0;
                    auVar76._0_6_ =
                         (uint6)CONCAT14(uVar45,(uint)CONCAT12(uVar45,(ushort)(byte)uVar46)) &
                         0xffff0000ffff;
                    auVar76[8] = (char)((uint)uVar46 >> 0x10);
                    auVar76._9_3_ = 0;
                    auVar76[12] = (char)((uint)uVar46 >> 0x18);
                    auVar76._13_3_ = 0;
                    auVar47 = NEON_ucvtf(auVar76,4);
                    auVar62._0_8_ = CONCAT44(auVar47._4_4_ / 255.0,auVar47._0_4_ / 255.0);
                    auVar62._8_4_ = auVar47._8_4_ / 255.0;
                    auVar62._12_4_ = auVar47._12_4_ / 255.0;
                    *(long *)((long)(param_6 + (uint)(iVar6 * 4) + uVar38) + 8) = auVar62._8_8_;
                    *(undefined8 *)(param_6 + (uint)(iVar6 * 4) + uVar38) = auVar62._0_8_;
                  } while (uVar35 < uVar7);
                }
LAB_00aa3d78:
                puVar43 = puVar43 + param_4 * 4;
                uVar32 = uVar32 + 1;
                uVar45 = uVar49;
                uVar51 = uVar50;
                uVar53 = uVar52;
                uVar55 = uVar54;
                uVar57 = uVar56;
                uVar59 = uVar58;
                uVar61 = uVar60;
              } while (uVar32 != param_5);
            }
            uVar44 = uVar44 + 1;
            uVar41 = uVar41 - param_4;
          } while (uVar44 != uVar5);
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar11);
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar31 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar31 != 0))
    {
                    /* try { // try from 00aa4128 to 00aa412f has its CatchHandler @ 00aa41e0 */
      pLVar34 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aa4134 to 00aa4137 has its CatchHandler @ 00aa41d0 */
      Logger::Logger(pLVar34);
      LogManager::getInstance()::singletonLogManager = pLVar34;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to decompress ASTC texture with invalid block size %ux%u\n",
                       (ulong)param_4,(ulong)param_5);
  }
LAB_00aa40dc:
  if (*(long *)(lVar12 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


