// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWorldProperties
// Entry Point: 008c28a8
// Size: 1772 bytes
// Signature: undefined __thiscall setWorldProperties(DecalCullingStructure * this, float param_1, float param_2, float param_3, float param_4, uint param_5)


/* WARNING: Removing unreachable block (ram,0x008c2978) */
/* WARNING: Removing unreachable block (ram,0x008c296c) */
/* WARNING: Removing unreachable block (ram,0x008c2974) */
/* WARNING: Removing unreachable block (ram,0x008c297c) */
/* DecalCullingStructure::setWorldProperties(float, float, float, float, unsigned int) */

void __thiscall
DecalCullingStructure::setWorldProperties
          (DecalCullingStructure *this,float param_1,float param_2,float param_3,float param_4,
          uint param_5)

{
  long *plVar1;
  CullingEntity **ppCVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  uint uVar13;
  bool bVar14;
  int iVar15;
  ulong *puVar16;
  void *pvVar17;
  Logger *this_00;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong *puVar23;
  int iVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  int iVar32;
  long *plVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  float fVar47;
  float fVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  
  uVar28 = *(uint *)(this + 8);
  if (param_5 != 0) {
    uVar28 = param_5;
  }
  lVar31 = *(long *)this;
  uVar4 = *(uint *)(this + 0x10);
  uVar7 = uVar28 - 1 | uVar28 - 1 >> 1;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar28 = uVar7 + 1;
  if (uVar7 == 0xffffffff) {
    uVar28 = 1;
  }
  if (0x80 < uVar28) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar15 != 0))
    {
                    /* try { // try from 008c2f54 to 008c2f5b has its CatchHandler @ 008c2fa4 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c2f60 to 008c2f63 has its CatchHandler @ 008c2f94 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Invalid culling grid size %u. Maximum allowed size is %u.\n ",
                      (ulong)uVar28,0x80);
    uVar28 = 0x80;
  }
  fVar47 = param_3 - param_1;
  fVar48 = param_4 - param_2;
  uVar30 = 0;
  *(float *)(this + 0x14) = param_1;
  *(float *)(this + 0x18) = param_3;
  *(float *)(this + 0x1c) = param_2;
  *(float *)(this + 0x20) = param_4;
  *(undefined4 *)(this + 0x10) = 0;
  iVar15 = *(int *)(MathUtil::s_multiplyDeBruijnBitPositionPow2 +
                   (ulong)(uVar28 * 0x77cb531 >> 0x1b) * 4);
  uVar7 = iVar15 + 1;
  *(uint *)(this + 8) = uVar28;
  *(uint *)(this + 0xc) = uVar7;
  *(float *)(this + 0x2c) = (float)(ulong)uVar28 / fVar47;
  *(float *)(this + 0x30) = (float)(ulong)uVar28 / fVar48;
  if (iVar15 != -1) {
    uVar30 = 0;
    iVar22 = 1;
    uVar28 = uVar7;
    do {
      uVar30 = uVar30 + iVar22 * iVar22;
      iVar22 = iVar22 << 1;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    *(uint *)(this + 0x10) = uVar30;
  }
  uVar29 = (ulong)uVar30;
  puVar16 = (ulong *)operator_new__(uVar29 << 5 | 8);
  puVar23 = puVar16 + 1;
  *puVar16 = uVar29;
  if (uVar30 != 0) {
    uVar36 = uVar29 - 1 & 0x7ffffffffffffff;
    puVar25 = puVar23;
    if (uVar36 != 0) {
      uVar36 = uVar36 + 1;
      uVar26 = uVar36 & 0xffffffffffffffe;
      puVar16 = puVar16 + 5;
      uVar27 = uVar26;
      do {
        uVar27 = uVar27 - 2;
        puVar16[-4] = 0;
        *puVar16 = 0;
        puVar16 = puVar16 + 8;
      } while (uVar27 != 0);
      puVar25 = puVar23 + uVar26 * 4;
      if (uVar36 == uVar26) goto LAB_008c2a60;
    }
    do {
      puVar16 = puVar25 + 4;
      *puVar25 = 0;
      puVar25 = puVar16;
    } while (puVar16 != puVar23 + uVar29 * 4);
  }
LAB_008c2a60:
  *(ulong **)this = puVar23;
  if (uVar7 == 0) {
LAB_008c2e28:
    if (lVar31 == 0) {
      return;
    }
    if (uVar4 != 0) {
      uVar29 = 0;
      do {
        plVar1 = (long *)(lVar31 + uVar29 * 0x20);
        plVar33 = plVar1 + 1;
        if (*(ushort *)plVar33 != 0) {
          lVar34 = 0;
          uVar36 = 0;
          do {
            ppCVar2 = (CullingEntity **)(*plVar1 + lVar34);
            if (*(float *)(ppCVar2 + 1) == -3.402823e+38) {
              fVar42 = -3.402823e+38;
              fVar41 = 3.402823e+38;
              fVar47 = fVar41;
              fVar48 = fVar42;
            }
            else {
              fVar42 = *(float *)((long)ppCVar2 + 0xc);
              fVar41 = *(float *)(ppCVar2 + 2);
              fVar47 = *(float *)((long)ppCVar2 + 0x14);
              fVar48 = *(float *)(ppCVar2 + 1);
            }
            addEntity(this,*ppCVar2,fVar48,fVar42,fVar41,fVar47);
            uVar36 = uVar36 + 1;
            lVar34 = lVar34 + 0x18;
          } while (uVar36 < *(ushort *)plVar33);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar4);
    }
    lVar34 = *(long *)(lVar31 + -8);
    if (lVar34 != 0) {
      lVar34 = lVar34 << 5;
      do {
        pvVar17 = *(void **)(lVar31 + -0x20 + lVar34);
        if (pvVar17 != (void *)0x0) {
          operator_delete__(pvVar17);
        }
        lVar34 = lVar34 + -0x20;
      } while (lVar34 != 0);
    }
    operator_delete__((long *)(lVar31 + -8));
    return;
  }
  uVar8 = iVar15 - 1;
  uVar28 = uVar8 & 0xfffffff8;
  iVar24 = 0;
  iVar22 = 0;
  uVar6 = uVar28 | 1;
  uVar18 = iVar15 << 1;
  iVar39 = 3;
  iVar40 = 4;
  iVar37 = 1;
  iVar38 = 2;
  uVar19 = 1;
  do {
    uVar20 = 0;
    fVar41 = param_2;
    do {
      uVar3 = (uVar20 | uVar20 << 8) & 0xff00ff;
      uVar21 = 0;
      uVar3 = (uVar3 | uVar3 << 4) & 0xf0f0f0f;
      uVar3 = (uVar3 | uVar3 << 2) & 0x33333333;
      fVar42 = param_1;
      do {
        uVar43 = (uVar21 | uVar21 << 8) & 0xff00ff;
        uVar43 = (uVar43 | uVar43 << 4) & 0xf0f0f0f;
        uVar43 = (uVar43 | uVar43 << 2) & 0x33333333;
        uVar5 = ((uVar43 | uVar43 << 1) & 0x55555555 | (uVar3 << 2 | uVar3 << 1) & 0xaaaaaaaa) <<
                (ulong)((iVar15 - iVar22) * 2 & 0x1f);
        uVar43 = uVar5 + iVar22;
        uVar29 = (ulong)uVar43;
        if (2 < uVar7) {
          if (uVar8 < 8) {
            uVar43 = 1;
          }
          else {
            iVar45 = 0;
            iVar46 = 0;
            iVar49 = 0;
            iVar50 = 0;
            iVar51 = 0;
            iVar52 = 0;
            iVar44 = 0;
            uVar35 = uVar28;
            iVar32 = iVar37;
            iVar53 = iVar38;
            iVar54 = iVar39;
            iVar55 = iVar40;
            do {
              auVar61._0_4_ = iVar32 * 2;
              auVar61._4_4_ = iVar53 * 2;
              auVar61._8_4_ = iVar54 * 2;
              auVar61._12_4_ = iVar55 * 2;
              uVar35 = uVar35 - 8;
              auVar63 = NEON_neg(auVar61,4);
              auVar56._0_4_ = iVar32 * -2 + -8;
              auVar56._4_4_ = iVar53 * -2 + -8;
              auVar56._8_4_ = iVar54 * -2 + -8;
              auVar56._12_4_ = iVar55 * -2 + -8;
              auVar62._4_4_ = uVar5;
              auVar62._0_4_ = uVar5;
              auVar62._8_4_ = uVar5;
              auVar62._12_4_ = uVar5;
              auVar61 = NEON_ushl(auVar62,auVar63,4);
              auVar63._4_4_ = uVar5;
              auVar63._0_4_ = uVar5;
              auVar63._8_4_ = uVar5;
              auVar63._12_4_ = uVar5;
              auVar62 = NEON_ushl(auVar63,auVar56,4);
              uVar43 = auVar61._0_4_ + uVar43;
              iVar44 = auVar61._4_4_ + iVar44;
              iVar45 = auVar61._8_4_ + iVar45;
              iVar46 = auVar61._12_4_ + iVar46;
              iVar49 = auVar62._0_4_ + iVar49;
              iVar50 = auVar62._4_4_ + iVar50;
              iVar51 = auVar62._8_4_ + iVar51;
              iVar52 = auVar62._12_4_ + iVar52;
              iVar32 = iVar32 + 8;
              iVar53 = iVar53 + 8;
              iVar54 = iVar54 + 8;
              iVar55 = iVar55 + 8;
            } while (uVar35 != 0);
            uVar29 = (ulong)(iVar49 + uVar43 + iVar50 + iVar44 + iVar51 + iVar45 + iVar52 + iVar46);
            uVar43 = uVar6;
            if (uVar8 == uVar28) goto LAB_008c2bf8;
          }
          iVar32 = iVar15 - uVar43;
          uVar43 = uVar43 << 1;
          do {
            iVar32 = iVar32 + -1;
            uVar29 = (ulong)((uVar5 >> (ulong)(uVar43 & 0x1f)) + (int)uVar29);
            uVar43 = uVar43 + 2;
          } while (iVar32 != 0);
        }
LAB_008c2bf8:
        uVar43 = uVar30;
        iVar32 = iVar24;
        uVar5 = uVar18;
        uVar35 = uVar20;
        uVar13 = uVar21;
        if (iVar22 != 0) {
LAB_008c2c10:
          if ((uVar13 & 1) == 0) {
            uVar43 = (uVar35 | uVar35 << 8) & 0xff00ff;
            uVar35 = (uVar13 + 1 | (uVar13 + 1) * 0x100) & 0xff00ff;
            uVar43 = (uVar43 | uVar43 << 4) & 0xf0f0f0f;
            uVar35 = (uVar35 | uVar35 << 4) & 0xf0f0f0f;
            uVar43 = (uVar43 | uVar43 << 2) & 0x33333333;
            uVar35 = (uVar35 | uVar35 << 2) & 0x33333333;
            uVar5 = ((uVar43 << 2 | uVar43 << 1) & 0xaaaaaaaa | (uVar35 | uVar35 << 1) & 0x55555555)
                    << (ulong)(uVar5 & 0x1f);
            uVar43 = uVar5 - iVar32;
            if (2 < uVar7) {
              if (uVar8 < 8) {
                uVar35 = 1;
              }
              else {
                iVar45 = 0;
                iVar46 = 0;
                iVar49 = 0;
                iVar50 = 0;
                iVar51 = 0;
                iVar52 = 0;
                iVar44 = 0;
                uVar35 = uVar28;
                iVar32 = iVar37;
                iVar53 = iVar38;
                iVar54 = iVar39;
                iVar55 = iVar40;
                do {
                  auVar57._0_4_ = iVar32 * 2;
                  auVar57._4_4_ = iVar53 * 2;
                  auVar57._8_4_ = iVar54 * 2;
                  auVar57._12_4_ = iVar55 * 2;
                  uVar35 = uVar35 - 8;
                  auVar62 = NEON_neg(auVar57,4);
                  auVar58._0_4_ = iVar32 * -2 + -8;
                  auVar58._4_4_ = iVar53 * -2 + -8;
                  auVar58._8_4_ = iVar54 * -2 + -8;
                  auVar58._12_4_ = iVar55 * -2 + -8;
                  auVar11._4_4_ = uVar5;
                  auVar11._0_4_ = uVar5;
                  auVar11._8_4_ = uVar5;
                  auVar11._12_4_ = uVar5;
                  auVar63 = NEON_ushl(auVar11,auVar62,4);
                  auVar12._4_4_ = uVar5;
                  auVar12._0_4_ = uVar5;
                  auVar12._8_4_ = uVar5;
                  auVar12._12_4_ = uVar5;
                  auVar62 = NEON_ushl(auVar12,auVar58,4);
                  uVar43 = auVar63._0_4_ + uVar43;
                  iVar44 = auVar63._4_4_ + iVar44;
                  iVar45 = auVar63._8_4_ + iVar45;
                  iVar46 = auVar63._12_4_ + iVar46;
                  iVar49 = auVar62._0_4_ + iVar49;
                  iVar50 = auVar62._4_4_ + iVar50;
                  iVar51 = auVar62._8_4_ + iVar51;
                  iVar52 = auVar62._12_4_ + iVar52;
                  iVar32 = iVar32 + 8;
                  iVar53 = iVar53 + 8;
                  iVar54 = iVar54 + 8;
                  iVar55 = iVar55 + 8;
                } while (uVar35 != 0);
                uVar43 = iVar49 + uVar43 + iVar50 + iVar44 + iVar51 + iVar45 + iVar52 + iVar46;
                uVar35 = uVar6;
                if (uVar8 == uVar28) goto LAB_008c2b0c;
              }
              iVar32 = iVar15 - uVar35;
              uVar35 = uVar35 << 1;
              do {
                iVar32 = iVar32 + -1;
                uVar43 = (uVar5 >> (ulong)(uVar35 & 0x1f)) + uVar43;
                uVar35 = uVar35 + 2;
              } while (iVar32 != 0);
            }
          }
          else {
            if ((uVar35 & 1) != 0) goto code_r0x008c2c18;
            uVar43 = (uVar13 - 1 | (uVar13 - 1) * 0x100) & 0xff00ff;
            uVar35 = (uVar35 + 1 | (uVar35 + 1) * 0x100) & 0xff00ff;
            uVar43 = (uVar43 | uVar43 << 4) & 0xf0f0f0f;
            uVar35 = (uVar35 | uVar35 << 4) & 0xf0f0f0f;
            uVar43 = (uVar43 | uVar43 << 2) & 0x33333333;
            uVar35 = (uVar35 | uVar35 << 2) & 0x33333333;
            uVar5 = ((uVar35 << 2 | uVar35 << 1) & 0xaaaaaaaa | (uVar43 | uVar43 << 1) & 0x55555555)
                    << (ulong)(uVar5 & 0x1f);
            uVar43 = uVar5 - iVar32;
            if (2 < uVar7) {
              if (uVar8 < 8) {
                uVar35 = 1;
              }
              else {
                iVar45 = 0;
                iVar46 = 0;
                iVar49 = 0;
                iVar50 = 0;
                iVar51 = 0;
                iVar52 = 0;
                iVar44 = 0;
                uVar35 = uVar28;
                iVar32 = iVar37;
                iVar53 = iVar38;
                iVar54 = iVar39;
                iVar55 = iVar40;
                do {
                  auVar59._0_4_ = iVar32 * 2;
                  auVar59._4_4_ = iVar53 * 2;
                  auVar59._8_4_ = iVar54 * 2;
                  auVar59._12_4_ = iVar55 * 2;
                  uVar35 = uVar35 - 8;
                  auVar62 = NEON_neg(auVar59,4);
                  auVar60._0_4_ = iVar32 * -2 + -8;
                  auVar60._4_4_ = iVar53 * -2 + -8;
                  auVar60._8_4_ = iVar54 * -2 + -8;
                  auVar60._12_4_ = iVar55 * -2 + -8;
                  auVar9._4_4_ = uVar5;
                  auVar9._0_4_ = uVar5;
                  auVar9._8_4_ = uVar5;
                  auVar9._12_4_ = uVar5;
                  auVar63 = NEON_ushl(auVar9,auVar62,4);
                  auVar10._4_4_ = uVar5;
                  auVar10._0_4_ = uVar5;
                  auVar10._8_4_ = uVar5;
                  auVar10._12_4_ = uVar5;
                  auVar62 = NEON_ushl(auVar10,auVar60,4);
                  uVar43 = auVar63._0_4_ + uVar43;
                  iVar44 = auVar63._4_4_ + iVar44;
                  iVar45 = auVar63._8_4_ + iVar45;
                  iVar46 = auVar63._12_4_ + iVar46;
                  iVar49 = auVar62._0_4_ + iVar49;
                  iVar50 = auVar62._4_4_ + iVar50;
                  iVar51 = auVar62._8_4_ + iVar51;
                  iVar52 = auVar62._12_4_ + iVar52;
                  iVar32 = iVar32 + 8;
                  iVar53 = iVar53 + 8;
                  iVar54 = iVar54 + 8;
                  iVar55 = iVar55 + 8;
                } while (uVar35 != 0);
                uVar43 = iVar49 + uVar43 + iVar50 + iVar44 + iVar51 + iVar45 + iVar52 + iVar46;
                uVar35 = uVar6;
                if (uVar8 == uVar28) goto LAB_008c2b0c;
              }
              iVar32 = iVar15 - uVar35;
              uVar35 = uVar35 << 1;
              do {
                iVar32 = iVar32 + -1;
                uVar43 = (uVar5 >> (ulong)(uVar35 & 0x1f)) + uVar43;
                uVar35 = uVar35 + 2;
              } while (iVar32 != 0);
            }
          }
        }
LAB_008c2b0c:
        uVar21 = uVar21 + 1;
        puVar16 = puVar23 + uVar29 * 4;
        *(float *)((long)puVar16 + 0xc) = fVar42;
        fVar42 = fVar47 + fVar42;
        *(uint *)((long)puVar16 + 0x1c) = uVar43;
        *(float *)(puVar16 + 2) = fVar41;
        *(float *)(puVar16 + 3) = fVar48 + fVar41;
        *(undefined4 *)(puVar16 + 1) = 0;
        *(float *)((long)puVar16 + 0x14) = fVar42;
        *puVar16 = 0;
      } while (uVar21 != uVar19);
      uVar20 = uVar20 + 1;
      fVar41 = fVar48 + fVar41;
    } while (uVar20 != uVar19);
    do {
      if (iVar15 == iVar22) goto LAB_008c2e28;
      puVar23 = *(ulong **)this;
      iVar22 = iVar22 + 1;
      uVar19 = uVar19 << 1;
      fVar48 = fVar48 * 0.5;
      fVar47 = fVar47 * 0.5;
      uVar18 = uVar18 - 2;
      iVar24 = iVar24 + -1;
    } while (uVar19 == 0);
  } while( true );
code_r0x008c2c18:
  bVar14 = iVar32 == -1;
  iVar32 = iVar32 + 1;
  uVar5 = uVar5 + 2;
  uVar35 = uVar35 >> 1;
  uVar13 = uVar13 >> 1;
  if (bVar14) goto LAB_008c2b0c;
  goto LAB_008c2c10;
}


