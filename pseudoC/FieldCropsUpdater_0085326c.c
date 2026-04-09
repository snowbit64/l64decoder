// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FieldCropsUpdater
// Entry Point: 0085326c
// Size: 1504 bytes
// Signature: undefined __thiscall FieldCropsUpdater(FieldCropsUpdater * this, char * param_1, FieldCropsUpdaterDesc * param_2, bool param_3)


/* FieldCropsUpdater::FieldCropsUpdater(char const*, FieldCropsUpdaterDesc const&, bool) */

void __thiscall
FieldCropsUpdater::FieldCropsUpdater
          (FieldCropsUpdater *this,char *param_1,FieldCropsUpdaterDesc *param_2,bool param_3)

{
  undefined4 uVar1;
  uint uVar2;
  FieldCropsUpdater FVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  void *__s;
  UpdateManager *this_00;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  char cVar23;
  undefined extraout_b0;
  char cVar24;
  undefined extraout_var;
  char cVar25;
  undefined extraout_var_00;
  char cVar26;
  undefined extraout_var_01;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  short sVar39;
  float fVar40;
  
  Entity::Entity((Entity *)this,param_1,param_3);
  uVar21 = 0;
  bVar5 = 0;
  bVar9 = false;
  this[0x28] = (FieldCropsUpdater)0x0;
  *(undefined ***)(this + 0x20) = &PTR__FieldCropsUpdater_00fdbba0;
  *(undefined ***)this = &PTR__FieldCropsUpdater_00fdbb68;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined ***)(this + 0x30) = &PTR__FieldCropsUpdater_00fdbbc8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x40000000000000;
  *(undefined4 *)(this + 0x58) = uVar1;
  do {
    uVar22 = (ulong)uVar21;
    lVar14 = (ulong)uVar21 * 100 + 0x80;
    uVar12 = *(uint *)(param_2 + uVar22 * 0x20 + 0x14);
    if (uVar12 < 0x41) {
      this[uVar22 * 100 + 0x80] = (FieldCropsUpdater)0x0;
      if (1 < uVar12) goto LAB_00853440;
LAB_008534f4:
      uVar19 = (ulong)uVar12;
      uVar15 = 0x40 - uVar19;
      if (0xf < uVar15) {
        cVar23 = (char)uVar12;
        uVar18 = uVar15 & 0xfffffffffffffff0;
        cVar24 = cVar23 + '\x01';
        cVar25 = cVar23 + '\x02';
        cVar26 = cVar23 + '\x03';
        cVar27 = cVar23 + '\x04';
        cVar28 = cVar23 + '\x05';
        cVar29 = cVar23 + '\x06';
        cVar30 = cVar23 + '\a';
        cVar31 = cVar23 + '\b';
        cVar32 = cVar23 + '\t';
        cVar33 = cVar23 + '\n';
        cVar34 = cVar23 + '\v';
        cVar35 = cVar23 + '\f';
        cVar36 = cVar23 + '\r';
        cVar37 = cVar23 + '\x0e';
        cVar38 = cVar23 + '\x0f';
        puVar20 = (undefined8 *)(this + (ulong)uVar21 * 100 + uVar19 + 0x80);
        uVar17 = uVar18;
        do {
          puVar20[1] = CONCAT17(cVar38,CONCAT16(cVar37,CONCAT15(cVar36,CONCAT14(cVar35,CONCAT13(
                                                  cVar34,CONCAT12(cVar33,CONCAT11(cVar32,cVar31)))))
                                               ));
          *puVar20 = CONCAT17(cVar30,CONCAT16(cVar29,CONCAT15(cVar28,CONCAT14(cVar27,CONCAT13(cVar26
                                                  ,CONCAT12(cVar25,CONCAT11(cVar24,cVar23)))))));
          cVar23 = cVar23 + '\x10';
          cVar24 = cVar24 + '\x10';
          cVar25 = cVar25 + '\x10';
          cVar26 = cVar26 + '\x10';
          cVar27 = cVar27 + '\x10';
          cVar28 = cVar28 + '\x10';
          cVar29 = cVar29 + '\x10';
          cVar30 = cVar30 + '\x10';
          cVar31 = cVar31 + '\x10';
          cVar32 = cVar32 + '\x10';
          cVar33 = cVar33 + '\x10';
          cVar34 = cVar34 + '\x10';
          cVar35 = cVar35 + '\x10';
          cVar36 = cVar36 + '\x10';
          cVar37 = cVar37 + '\x10';
          cVar38 = cVar38 + '\x10';
          uVar17 = uVar17 - 0x10;
          puVar20 = puVar20 + 2;
        } while (uVar17 != 0);
        uVar19 = uVar18 + uVar19;
        if (uVar15 == uVar18) goto LAB_00853374;
      }
      do {
        this[uVar19 + lVar14] = SUB81(uVar19,0);
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x40);
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0
         )) {
                    /* try { // try from 00853574 to 0085357f has its CatchHandler @ 00853850 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00853404 to 0085341f has its CatchHandler @ 00853870 */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Num growth states for crop type %u is too big and will be clamped to %u.\n"
                        ,(ulong)uVar21,0x40);
      uVar12 = 0x40;
      this[uVar22 * 100 + 0x80] = (FieldCropsUpdater)0x0;
LAB_00853440:
      uVar19 = (ulong)uVar12 - 1;
      if (uVar19 < 0x10) {
        uVar17 = 1;
LAB_008534d8:
        do {
          uVar19 = uVar17 + 1;
          this[uVar17 + lVar14] = SUB81(uVar19,0);
          uVar17 = uVar19;
        } while (uVar12 != uVar19);
      }
      else {
        uVar18 = uVar19 & 0xfffffffffffffff0;
        uVar17 = uVar18 | 1;
        puVar20 = (undefined8 *)(this + (ulong)uVar21 * 100 + 0x81);
        uVar15 = uVar18;
        cVar23 = '\x01';
        cVar24 = '\x02';
        cVar25 = '\x03';
        cVar26 = '\x04';
        iVar10 = 5;
        sVar39 = 6;
        cVar27 = '\a';
        cVar28 = '\b';
        cVar29 = '\t';
        cVar30 = '\n';
        cVar31 = '\v';
        cVar32 = '\f';
        cVar33 = '\r';
        cVar34 = '\x0e';
        cVar35 = '\x0f';
        cVar36 = '\x10';
        do {
          uVar15 = uVar15 - 0x10;
          uVar8 = (ulong)CONCAT24(sVar39,iVar10) & 0xffffffff0000ffff;
          puVar20[1] = CONCAT17(cVar36 + '\x01',
                                CONCAT16(cVar35 + '\x01',
                                         CONCAT15(cVar34 + '\x01',
                                                  CONCAT14(cVar33 + '\x01',
                                                           CONCAT13(cVar32 + '\x01',
                                                                    CONCAT12(cVar31 + '\x01',
                                                                             CONCAT11(cVar30 + 
                                                  '\x01',cVar29 + '\x01')))))));
          *puVar20 = CONCAT17(cVar28 + '\x01',
                              CONCAT16(cVar27 + '\x01',
                                       CONCAT15((char)(uVar8 >> 0x20) + '\x01',
                                                CONCAT14((char)uVar8 + '\x01',
                                                         CONCAT13(cVar26 + '\x01',
                                                                  CONCAT12(cVar25 + '\x01',
                                                                           CONCAT11(cVar24 + '\x01',
                                                                                    cVar23 + '\x01')
                                                                          ))))));
          puVar20 = puVar20 + 2;
          cVar23 = cVar23 + '\x10';
          cVar24 = cVar24 + '\x10';
          cVar25 = cVar25 + '\x10';
          cVar26 = cVar26 + '\x10';
          iVar10 = iVar10 + 0x10;
          sVar39 = sVar39 + 0x10;
          cVar27 = cVar27 + '\x10';
          cVar28 = cVar28 + '\x10';
          cVar29 = cVar29 + '\x10';
          cVar30 = cVar30 + '\x10';
          cVar31 = cVar31 + '\x10';
          cVar32 = cVar32 + '\x10';
          cVar33 = cVar33 + '\x10';
          cVar34 = cVar34 + '\x10';
          cVar35 = cVar35 + '\x10';
          cVar36 = cVar36 + '\x10';
        } while (uVar15 != 0);
        if (uVar19 != uVar18) goto LAB_008534d8;
      }
      if (uVar12 < 0x40) goto LAB_008534f4;
    }
LAB_00853374:
    uVar21 = uVar21 + 1;
    FVar3 = *(FieldCropsUpdater *)(param_2 + uVar22 * 0x20 + 0x24);
    uVar7 = *(undefined4 *)(param_2 + uVar22 * 0x20 + 0x18);
    *(undefined8 *)(this + uVar22 * 100 + 0x5c) = *(undefined8 *)(param_2 + uVar22 * 0x20 + 0x1c);
    uVar6 = *(undefined8 *)(param_2 + uVar22 * 0x20 + 0x28);
    bVar4 = (byte)FVar3 | bVar9;
    bVar9 = bVar4 != 0;
    this[uVar22 * 100 + 100] = FVar3;
    *(undefined4 *)(this + uVar22 * 100 + 0x7c) = uVar7;
    *(undefined8 *)(this + uVar22 * 100 + 0x68) = uVar6;
    uVar1 = *(undefined4 *)(param_2 + uVar22 * 0x20 + 0x30);
    *(undefined4 *)(this + uVar22 * 100 + 0x74) = uVar7;
    *(undefined4 *)(this + uVar22 * 100 + 0x78) = 0;
    uVar12 = *(uint *)(this + 0x58);
    *(undefined4 *)(this + uVar22 * 100 + 0x70) = uVar1;
    bVar5 = bVar5 | (int)uVar6 != 0;
  } while (uVar21 <= uVar12);
  *(undefined4 *)(this + 0xd00) = 0;
  *(undefined2 *)(this + 0xd04) = 1;
  uVar6 = *(undefined8 *)(param_2 + 0x420);
  lVar14 = *(long *)(param_2 + 0x418);
  uVar16 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_2 + 0x428);
  *(undefined8 *)(this + 0x48) = uVar6;
  *(undefined8 *)(this + 0x38) = uVar16;
  *(long *)(this + 0x40) = lVar14;
  if (lVar14 != 0) {
                    /* try { // try from 008535dc to 0085365f has its CatchHandler @ 00853864 */
    iVar10 = (**(code **)(**(long **)(lVar14 + 0x50) + 0x48))();
    iVar11 = (**(code **)(**(long **)(this + 0x38) + 0x48))();
    if (iVar10 == iVar11) {
      iVar10 = (**(code **)(**(long **)(*(long *)(this + 0x40) + 0x50) + 0x50))();
      iVar11 = (**(code **)(**(long **)(this + 0x38) + 0x50))();
      if (iVar10 == iVar11) goto LAB_00853684;
    }
  }
  if ((bool)(bVar4 != 0 | bVar5)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar10 != 0))
    {
                    /* try { // try from 00853814 to 0085381f has its CatchHandler @ 0085384c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: FieldCropsUpdater requires crops and ground density map to have the same size. Ignoring spray resetting and ground type change.\n"
                     );
    uVar21 = *(uint *)(this + 0x58);
    uVar12 = 0;
    do {
      uVar13 = uVar12 + 1;
      this[(ulong)uVar12 * 100 + 100] = (FieldCropsUpdater)0x0;
      *(undefined4 *)(this + (ulong)uVar12 * 100 + 0x68) = 0;
      uVar12 = uVar13;
    } while (uVar13 <= uVar21);
  }
LAB_00853684:
                    /* try { // try from 00853688 to 00853717 has its CatchHandler @ 0085386c */
  BaseTerrain::getUnitsPerPixel();
  iVar10 = BaseTerrain::getHeightMapSize();
  fVar40 = *(float *)(param_2 + 0x430);
  uVar22 = DensityMap::getSquareSize();
  uVar21 = (int)((fVar40 / ((float)CONCAT13(extraout_var_01,
                                            CONCAT12(extraout_var_00,
                                                     CONCAT11(extraout_var,extraout_b0))) *
                           (float)(ulong)(iVar10 - 1))) * (float)(uVar22 & 0xffffffff)) - 1;
  uVar21 = uVar21 | uVar21 >> 1;
  uVar21 = uVar21 | uVar21 >> 2;
  uVar21 = uVar21 | uVar21 >> 4;
  uVar21 = uVar21 | uVar21 >> 8;
  uVar21 = uVar21 | uVar21 >> 0x10;
  iVar10 = uVar21 + 1;
  if (uVar21 == 0xffffffff) {
    iVar10 = 1;
  }
  *(int *)(this + 0xd08) = iVar10;
  uVar12 = DensityMap::getSquareSize();
  uVar21 = 0;
  if (*(uint *)(this + 0xd08) != 0) {
    uVar21 = uVar12 / *(uint *)(this + 0xd08);
  }
  *(undefined4 *)(this + 0xd10) = 0x14;
  *(uint *)(this + 0xd0c) = uVar21;
  uVar22 = (ulong)(uVar21 * uVar21) << 2;
  __s = operator_new__(uVar22);
  *(void **)(this + 0xcf8) = __s;
  memset(__s,0xff,uVar22);
  uVar21 = 0;
  uVar13 = 0;
  uVar12 = 0xffffffff;
  *(undefined4 *)(this + 0xcdc) = 0xffffffff;
  do {
    iVar10 = *(int *)(this + (ulong)uVar21 * 100 + 0x60);
    uVar2 = uVar13;
    if (iVar10 != 0) {
      uVar2 = *(uint *)(this + (ulong)uVar21 * 100 + 0x5c);
      if (uVar2 < uVar12) {
        *(uint *)(this + 0xcdc) = uVar2;
        uVar12 = uVar2;
      }
      uVar2 = uVar2 + iVar10;
      if (uVar2 <= uVar13) {
        uVar2 = uVar13;
      }
    }
    uVar13 = uVar2;
    uVar21 = uVar21 + 1;
  } while (uVar21 <= *(uint *)(this + 0x58));
  this[0xd24] = (FieldCropsUpdater)0x0;
  *(undefined8 *)(this + 0xd18) = 0;
  *(uint *)(this + 0xce0) = uVar13 - uVar12;
  *(undefined4 *)(this + 0xd14) = 0xffffffff;
  *(undefined8 *)(this + 0xcf0) = 0;
  *(undefined8 *)(this + 0xce8) = 0;
  *(undefined4 *)(this + 0xd20) = 0;
                    /* try { // try from 008537b4 to 008537bf has its CatchHandler @ 00853868 */
  DensityMap::addDirtyListener
            (*(DensityMap **)(this + 0x38),(DirtyListener *)(this + 0x30),false,uVar12,
             uVar13 - uVar12);
  FUN_00f276d0(1,*(long *)(this + 0x38) + 8);
                    /* try { // try from 008537d0 to 008537df has its CatchHandler @ 00853868 */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_00,(Updateable *)(this + 0x20),false);
  return;
}


