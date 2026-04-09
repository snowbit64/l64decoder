// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNumGrowthStates
// Entry Point: 00854e30
// Size: 584 bytes
// Signature: undefined __thiscall setNumGrowthStates(FieldCropsUpdater * this, uint param_1, uint param_2)


/* FieldCropsUpdater::setNumGrowthStates(unsigned int, unsigned int) */

void __thiscall
FieldCropsUpdater::setNumGrowthStates(FieldCropsUpdater *this,uint param_1,uint param_2)

{
  uint5 uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  short sVar28;
  int iVar29;
  
  uVar4 = (ulong)param_1;
  if (0x1f < param_1) {
    return;
  }
  if (*(int *)(this + (ulong)param_1 * 100 + 0x60) == 0) {
    return;
  }
  uVar11 = 0;
  if (param_2 != 1) {
    uVar11 = param_2;
  }
  if (uVar11 < 0x41) {
    if (uVar11 < 2) goto LAB_00854fa8;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00855040 to 0085504b has its CatchHandler @ 00855078 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar11 = 0x40;
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Num growth states for crop type %u is too big and will be clamped to %u.\n"
                      ,uVar4,0x40);
  }
  uVar7 = (ulong)uVar11 - 1;
  if (uVar7 < 0x10) {
    uVar5 = 1;
LAB_00854f80:
    do {
      uVar7 = uVar5 + 1;
      this[uVar5 + uVar4 * 100 + 0x80] = SUB81(uVar7,0);
      uVar5 = uVar7;
    } while (uVar11 != uVar7);
  }
  else {
    uVar8 = uVar7 & 0xfffffffffffffff0;
    uVar5 = uVar8 | 1;
    cVar24 = '\x02';
    iVar29 = 1;
    puVar10 = (undefined8 *)(this + uVar4 * 100 + 0x81);
    uVar6 = uVar8;
    cVar12 = '\x0f';
    cVar13 = '\x10';
    cVar14 = '\r';
    cVar15 = '\x0e';
    cVar16 = '\x03';
    cVar17 = '\x04';
    iVar3 = 5;
    sVar28 = 6;
    cVar18 = '\a';
    cVar19 = '\b';
    cVar20 = '\t';
    cVar21 = '\n';
    cVar22 = '\v';
    cVar23 = '\f';
    do {
      uVar6 = uVar6 - 0x10;
      uVar2 = (ulong)CONCAT24(sVar28,iVar3) & 0xffffffff0000ffff;
      uVar1 = CONCAT14(cVar24,iVar29) & 0xff000000ff;
      iVar29 = iVar29 + 0x10;
      cVar24 = cVar24 + '\x10';
      puVar10[1] = CONCAT17(cVar13 + '\x01',
                            CONCAT16(cVar12 + '\x01',
                                     CONCAT15(cVar15 + '\x01',
                                              CONCAT14(cVar14 + '\x01',
                                                       CONCAT13(cVar23 + '\x01',
                                                                CONCAT12(cVar22 + '\x01',
                                                                         CONCAT11(cVar21 + '\x01',
                                                                                  cVar20 + '\x01')))
                                                      ))));
      *puVar10 = CONCAT17(cVar19 + '\x01',
                          CONCAT16(cVar18 + '\x01',
                                   CONCAT15((char)(uVar2 >> 0x20) + '\x01',
                                            CONCAT14((char)uVar2 + '\x01',
                                                     CONCAT13(cVar17 + '\x01',
                                                              CONCAT12(cVar16 + '\x01',
                                                                       CONCAT11((char)(uVar1 >> 0x20
                                                                                      ) + '\x01',
                                                                                (char)uVar1 + '\x01'
                                                                               )))))));
      puVar10 = puVar10 + 2;
      cVar12 = cVar12 + '\x10';
      cVar13 = cVar13 + '\x10';
      cVar14 = cVar14 + '\x10';
      cVar15 = cVar15 + '\x10';
      cVar16 = cVar16 + '\x10';
      cVar17 = cVar17 + '\x10';
      iVar3 = iVar3 + 0x10;
      sVar28 = sVar28 + 0x10;
      cVar18 = cVar18 + '\x10';
      cVar19 = cVar19 + '\x10';
      cVar20 = cVar20 + '\x10';
      cVar21 = cVar21 + '\x10';
      cVar22 = cVar22 + '\x10';
      cVar23 = cVar23 + '\x10';
    } while (uVar6 != 0);
    if (uVar7 != uVar8) goto LAB_00854f80;
  }
  if (0x3f < uVar11) {
    return;
  }
LAB_00854fa8:
  uVar7 = (ulong)uVar11;
  uVar6 = 0x40 - uVar7;
  if (0xf < uVar6) {
    cVar12 = (char)uVar11;
    lVar9 = uVar7 + uVar4 * 100;
    uVar8 = uVar6 & 0xfffffffffffffff0;
    uVar7 = uVar8 + uVar7;
    cVar13 = cVar12 + '\x01';
    cVar14 = cVar12 + '\x02';
    cVar15 = cVar12 + '\x03';
    cVar16 = cVar12 + '\x04';
    cVar17 = cVar12 + '\x05';
    cVar18 = cVar12 + '\x06';
    cVar19 = cVar12 + '\a';
    cVar20 = cVar12 + '\b';
    cVar21 = cVar12 + '\t';
    cVar22 = cVar12 + '\n';
    cVar23 = cVar12 + '\v';
    cVar24 = cVar12 + '\f';
    cVar25 = cVar12 + '\r';
    cVar26 = cVar12 + '\x0e';
    cVar27 = cVar12 + '\x0f';
    puVar10 = (undefined8 *)(this + lVar9 + 0x80);
    uVar5 = uVar8;
    do {
      puVar10[1] = CONCAT17(cVar27,CONCAT16(cVar26,CONCAT15(cVar25,CONCAT14(cVar24,CONCAT13(cVar23,
                                                  CONCAT12(cVar22,CONCAT11(cVar21,cVar20)))))));
      *puVar10 = CONCAT17(cVar19,CONCAT16(cVar18,CONCAT15(cVar17,CONCAT14(cVar16,CONCAT13(cVar15,
                                                  CONCAT12(cVar14,CONCAT11(cVar13,cVar12)))))));
      cVar12 = cVar12 + '\x10';
      cVar13 = cVar13 + '\x10';
      cVar14 = cVar14 + '\x10';
      cVar15 = cVar15 + '\x10';
      cVar16 = cVar16 + '\x10';
      cVar17 = cVar17 + '\x10';
      cVar18 = cVar18 + '\x10';
      cVar19 = cVar19 + '\x10';
      cVar20 = cVar20 + '\x10';
      cVar21 = cVar21 + '\x10';
      cVar22 = cVar22 + '\x10';
      cVar23 = cVar23 + '\x10';
      cVar24 = cVar24 + '\x10';
      cVar25 = cVar25 + '\x10';
      cVar26 = cVar26 + '\x10';
      cVar27 = cVar27 + '\x10';
      uVar5 = uVar5 - 0x10;
      puVar10 = puVar10 + 2;
    } while (uVar5 != 0);
    if (uVar6 == uVar8) {
      return;
    }
  }
  do {
    this[uVar7 + uVar4 * 100 + 0x80] = SUB81(uVar7,0);
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x40);
  return;
}


