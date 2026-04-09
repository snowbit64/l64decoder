// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLodTextureTypeMapSys
// Entry Point: 008f22e4
// Size: 2052 bytes
// Signature: undefined __thiscall createLodTextureTypeMapSys(TerrainLodTexture * this, BaseTerrain * param_1, BaseTerrainSyncer * param_2)


/* TerrainLodTexture::createLodTextureTypeMapSys(BaseTerrain*, BaseTerrainSyncer*) */

undefined8 __thiscall
TerrainLodTexture::createLodTextureTypeMapSys
          (TerrainLodTexture *this,BaseTerrain *param_1,BaseTerrainSyncer *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  Logger *pLVar7;
  void *pvVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  uint uVar22;
  ulong uVar23;
  undefined2 uVar24;
  undefined8 uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined8 uVar34;
  undefined uVar41;
  undefined uVar42;
  undefined uVar44;
  undefined uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  undefined uVar49;
  undefined8 uVar43;
  undefined uVar50;
  undefined uVar51;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  undefined uVar57;
  undefined uVar58;
  undefined8 uVar52;
  undefined uVar59;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_74;
  undefined2 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(param_1 + 8);
  uVar12 = (*(long *)(param_1 + 0x10) - lVar10 >> 4) * 0xba2e8ba3;
  if ((int)uVar12 != 0) {
    uVar23 = 0;
    uVar22 = 0;
    pvVar21 = (void *)0x0;
    do {
      lVar10 = lVar10 + uVar23 * 0xb0;
      local_c0 = 0;
      local_80 = 0;
      local_b0 = 0;
      local_a8 = 0;
      pcVar3 = (char *)(lVar10 + 0x71);
      if ((*(byte *)(lVar10 + 0x70) & 1) != 0) {
        pcVar3 = *(char **)(lVar10 + 0x80);
      }
      local_a0 = 0;
      local_98 = (void *)0x0;
      local_b8 = 0x100000001;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0;
      local_90 = 0;
      uStack_88 = 0;
      uVar6 = ImageLoadUtil::loadImage(pcVar3,0,(ImageDesc *)&local_c0,0);
      if ((uVar6 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 008f269c to 008f26a3 has its CatchHandler @ 008f2b18 */
          pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 008f26a8 to 008f26ab has its CatchHandler @ 008f2b08 */
          Logger::Logger(pLVar7);
          LogManager::getInstance()::singletonLogManager = pLVar7;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar9 = "Error: Terrain weight map \'%s\' not found.\n";
LAB_008f2498:
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar9,pcVar3);
        uVar11 = uVar22;
LAB_008f24a4:
        uVar6 = (ulong)uVar11;
      }
      else {
        if (((local_b0._4_4_ != 1) || ((int)local_a8 != 1)) || ((int)local_80 != 1)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 008f26ec to 008f26f3 has its CatchHandler @ 008f2af0 */
            pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 008f26f8 to 008f26fb has its CatchHandler @ 008f2aec */
            Logger::Logger(pLVar7);
            LogManager::getInstance()::singletonLogManager = pLVar7;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar9 = 
          "Error: Terrain weight map \'%s\' incorrect format. Must be 8bit single channel.\n";
          goto LAB_008f2498;
        }
        uVar11 = (uint)local_c0;
        uVar6 = local_c0 & 0xffffffff;
        if ((uint)local_c0 != local_c0._4_4_) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 008f273c to 008f2743 has its CatchHandler @ 008f2b04 */
            pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 008f2748 to 008f274b has its CatchHandler @ 008f2b00 */
            Logger::Logger(pLVar7);
            LogManager::getInstance()::singletonLogManager = pLVar7;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar9 = "Error: Terrain weight map \'%s\' size incorrect. Must be square.\n";
          goto LAB_008f2498;
        }
        uVar25 = NEON_cnt(uVar6,1);
        uVar24 = NEON_uaddlv(uVar25,1);
        if ((int)CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) != 1) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 008f278c to 008f2793 has its CatchHandler @ 008f2afc */
            pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 008f2798 to 008f279b has its CatchHandler @ 008f2af8 */
            Logger::Logger(pLVar7);
            LogManager::getInstance()::singletonLogManager = pLVar7;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar9 = 
          "Error: Terrain weight map \'%s\' size incorrect. Must be power of two, not %u.\n";
LAB_008f24e8:
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar9,pcVar3,
                             (ulong)uVar22);
          uVar11 = uVar22;
          goto LAB_008f24a4;
        }
        if ((uVar22 != 0) && ((uint)local_c0 != uVar22)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 008f27dc to 008f27e3 has its CatchHandler @ 008f2af4 */
            pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 008f27e8 to 008f27eb has its CatchHandler @ 008f2ae8 */
            Logger::Logger(pLVar7);
            LogManager::getInstance()::singletonLogManager = pLVar7;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar9 = 
          "Error: Terrain weight map \'%s\' size incorrect. Same size (%upx) for all layers is needed .\n"
          ;
          goto LAB_008f24e8;
        }
        uVar26 = (undefined)uVar23;
        if (uVar22 != 0) {
          uVar11 = uVar22;
          if (uVar22 * uVar22 != 0) {
            uVar6 = 0;
            uVar16 = 1;
            do {
              if (*(byte *)((long)pvVar21 + (ulong)uVar16) < *(byte *)((long)local_98 + uVar6)) {
                *(byte *)((long)pvVar21 + (ulong)uVar16) = *(byte *)((long)local_98 + uVar6);
                *(undefined *)((long)pvVar21 + (ulong)(uVar16 - 1)) = uVar26;
              }
              uVar6 = uVar6 + 1;
              uVar16 = uVar16 + 2;
            } while (uVar22 * uVar22 != uVar6);
          }
          goto LAB_008f24a4;
        }
        uVar22 = (uint)local_c0 * (uint)local_c0;
        uVar19 = (ulong)uVar22;
        pvVar21 = operator_new__((ulong)(uVar22 * 2));
        if (uVar22 != 0) {
          if (uVar22 < 8) {
            uVar6 = 0;
          }
          else {
            uVar14 = uVar19 - 1;
            uVar6 = 0;
            if ((((uVar14 >> 0x20 == 0) && (pvVar21 <= (void *)((long)pvVar21 + uVar14 * 2))) &&
                (CARRY8(uVar14,uVar14) == false)) &&
               ((long)pvVar21 + 1U <= (long)pvVar21 + 1U + uVar14 * 2)) {
              if (uVar22 < 0x20) {
                uVar14 = 0;
              }
              else {
                uVar6 = uVar19 & 0xffffffe0;
                uVar14 = 0;
                puVar15 = (undefined8 *)((long)local_98 + 0x10);
                uVar17 = uVar6;
                do {
                  uVar20 = uVar14 & 0xffffffc0;
                  uVar14 = uVar14 + 0x40;
                  uVar34 = puVar15[-1];
                  uVar25 = puVar15[-2];
                  uVar52 = puVar15[1];
                  uVar43 = *puVar15;
                  puVar15 = puVar15 + 4;
                  uVar17 = uVar17 - 0x20;
                  *(undefined *)((long)pvVar21 + uVar20) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 1) = (char)uVar25;
                  *(undefined *)((long)pvVar21 + uVar20 + 2) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 3) = (char)((ulong)uVar25 >> 8);
                  *(undefined *)((long)pvVar21 + uVar20 + 4) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 5) = (char)((ulong)uVar25 >> 0x10);
                  *(undefined *)((long)pvVar21 + uVar20 + 6) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 7) = (char)((ulong)uVar25 >> 0x18);
                  *(undefined *)((long)pvVar21 + uVar20 + 8) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 9) = (char)((ulong)uVar25 >> 0x20);
                  *(undefined *)((long)pvVar21 + uVar20 + 10) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0xb) = (char)((ulong)uVar25 >> 0x28);
                  *(undefined *)((long)pvVar21 + uVar20 + 0xc) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0xd) = (char)((ulong)uVar25 >> 0x30);
                  *(undefined *)((long)pvVar21 + uVar20 + 0xe) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0xf) = (char)((ulong)uVar25 >> 0x38);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x10) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x11) = (char)uVar34;
                  *(undefined *)((long)pvVar21 + uVar20 + 0x12) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x13) = (char)((ulong)uVar34 >> 8);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x14) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x15) = (char)((ulong)uVar34 >> 0x10);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x16) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x17) = (char)((ulong)uVar34 >> 0x18);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x18) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x19) = (char)((ulong)uVar34 >> 0x20);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x1a) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x1b) = (char)((ulong)uVar34 >> 0x28);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x1c) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x1d) = (char)((ulong)uVar34 >> 0x30);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x1e) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x1f) = (char)((ulong)uVar34 >> 0x38);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x20) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x21) = (char)uVar43;
                  *(undefined *)((long)pvVar21 + uVar20 + 0x22) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x23) = (char)((ulong)uVar43 >> 8);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x24) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x25) = (char)((ulong)uVar43 >> 0x10);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x26) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x27) = (char)((ulong)uVar43 >> 0x18);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x28) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x29) = (char)((ulong)uVar43 >> 0x20);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x2a) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x2b) = (char)((ulong)uVar43 >> 0x28);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x2c) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x2d) = (char)((ulong)uVar43 >> 0x30);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x2e) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x2f) = (char)((ulong)uVar43 >> 0x38);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x30) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x31) = (char)uVar52;
                  *(undefined *)((long)pvVar21 + uVar20 + 0x32) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x33) = (char)((ulong)uVar52 >> 8);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x34) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x35) = (char)((ulong)uVar52 >> 0x10);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x36) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x37) = (char)((ulong)uVar52 >> 0x18);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x38) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x39) = (char)((ulong)uVar52 >> 0x20);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x3a) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x3b) = (char)((ulong)uVar52 >> 0x28);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x3c) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x3d) = (char)((ulong)uVar52 >> 0x30);
                  *(undefined *)((long)pvVar21 + uVar20 + 0x3e) = uVar26;
                  *(char *)((long)pvVar21 + uVar20 + 0x3f) = (char)((ulong)uVar52 >> 0x38);
                } while (uVar17 != 0);
                if (uVar6 == uVar19) goto LAB_008f24a4;
                uVar14 = uVar6;
                if ((uVar22 & 0x18) == 0) goto LAB_008f2570;
              }
              uVar6 = uVar19 & 0xfffffff8;
              uVar17 = uVar14 << 1;
              lVar10 = uVar14 - uVar6;
              puVar15 = (undefined8 *)((long)local_98 + uVar14);
              do {
                uVar14 = uVar17 & 0xfffffff0;
                uVar17 = uVar17 + 0x10;
                lVar10 = lVar10 + 8;
                uVar25 = *puVar15;
                *(undefined *)((long)pvVar21 + uVar14) = uVar26;
                *(char *)((long)pvVar21 + uVar14 + 1) = (char)uVar25;
                *(undefined *)((long)pvVar21 + uVar14 + 2) = uVar26;
                *(char *)((long)pvVar21 + uVar14 + 3) = (char)((ulong)uVar25 >> 8);
                *(undefined *)((long)pvVar21 + uVar14 + 4) = uVar26;
                *(char *)((long)pvVar21 + uVar14 + 5) = (char)((ulong)uVar25 >> 0x10);
                *(undefined *)((long)pvVar21 + uVar14 + 6) = uVar26;
                *(char *)((long)pvVar21 + uVar14 + 7) = (char)((ulong)uVar25 >> 0x18);
                *(undefined *)((long)pvVar21 + uVar14 + 8) = uVar26;
                *(char *)((long)pvVar21 + uVar14 + 9) = (char)((ulong)uVar25 >> 0x20);
                *(undefined *)((long)pvVar21 + uVar14 + 10) = uVar26;
                *(char *)((long)pvVar21 + uVar14 + 0xb) = (char)((ulong)uVar25 >> 0x28);
                *(undefined *)((long)pvVar21 + uVar14 + 0xc) = uVar26;
                *(char *)((long)pvVar21 + uVar14 + 0xd) = (char)((ulong)uVar25 >> 0x30);
                *(undefined *)((long)pvVar21 + uVar14 + 0xe) = uVar26;
                *(char *)((long)pvVar21 + uVar14 + 0xf) = (char)((ulong)uVar25 >> 0x38);
                puVar15 = puVar15 + 1;
              } while (lVar10 != 0);
              if (uVar6 == uVar19) goto LAB_008f24a4;
            }
          }
LAB_008f2570:
          uVar22 = (int)uVar6 << 1;
          lVar10 = uVar19 - uVar6;
          puVar13 = (undefined *)((long)local_98 + uVar6);
          do {
            *(undefined *)((long)pvVar21 + (ulong)uVar22) = uVar26;
            uVar16 = uVar22 + 1;
            uVar22 = uVar22 + 2;
            lVar10 = lVar10 + -1;
            *(undefined *)((long)pvVar21 + (ulong)uVar16) = *puVar13;
            puVar13 = puVar13 + 1;
          } while (lVar10 != 0);
          goto LAB_008f24a4;
        }
      }
      uVar22 = (uint)uVar6;
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
      }
      uVar23 = uVar23 + 1;
      if (uVar23 == (uVar12 & 0xffffffff)) goto LAB_008f281c;
      lVar10 = *(long *)(param_1 + 8);
    } while( true );
  }
LAB_008f28d8:
  *(undefined4 *)(this + 0x10) = 9;
  *(undefined8 *)(this + 8) = 0x3b00000000000200;
  if (*(void **)(this + 0x18) == (void *)0x0) {
    uVar11 = 0x200;
  }
  else {
    operator_delete__(*(void **)(this + 0x18));
    uVar11 = *(uint *)(this + 8);
  }
  uVar22 = uVar11 * uVar11;
  uVar12 = (ulong)uVar22;
  pvVar21 = operator_new__(uVar12 << 1);
  *(void **)(this + 0x18) = pvVar21;
  if (uVar22 == 0) goto LAB_008f2aa0;
  if (uVar22 < 8) {
    uVar6 = 0;
  }
  else {
    if (uVar22 < 0x20) {
      uVar23 = 0;
    }
    else {
      uVar6 = uVar12 & 0xffffffe0;
      puVar15 = (undefined8 *)((long)pvVar21 + 0x20);
      uVar23 = uVar6;
      do {
        uVar23 = uVar23 - 0x20;
        puVar15[-3] = 0xff00ff00ff00ff00;
        puVar15[-4] = 0xff00ff00ff00ff00;
        puVar15[-1] = 0xff00ff00ff00ff00;
        puVar15[-2] = 0xff00ff00ff00ff00;
        puVar15[1] = 0xff00ff00ff00ff00;
        *puVar15 = 0xff00ff00ff00ff00;
        puVar15[3] = 0xff00ff00ff00ff00;
        puVar15[2] = 0xff00ff00ff00ff00;
        puVar15 = puVar15 + 8;
      } while (uVar23 != 0);
      if (uVar6 == uVar12) goto LAB_008f2aa0;
      uVar23 = uVar6;
      if ((uVar22 & 0x18) == 0) goto LAB_008f2990;
    }
    uVar6 = uVar12 & 0xfffffff8;
    lVar10 = uVar23 - uVar6;
    puVar15 = (undefined8 *)((long)pvVar21 + uVar23 * 2);
    do {
      lVar10 = lVar10 + 8;
      puVar15[1] = 0xff00ff00ff00ff00;
      *puVar15 = 0xff00ff00ff00ff00;
      puVar15 = puVar15 + 2;
    } while (lVar10 != 0);
    if (uVar6 == uVar12) goto LAB_008f2aa0;
  }
LAB_008f2990:
  lVar18 = uVar12 - uVar6;
  lVar10 = (long)pvVar21 + uVar6 * 2 + 1;
  do {
    *(undefined2 *)(lVar10 + -1) = 0xff00;
    lVar10 = lVar10 + 2;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
LAB_008f2aa0:
  BaseTerrainSyncer::setLodTextureSize(param_2,uVar11,uVar11);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_008f281c:
  if (uVar22 != 0) {
    iVar5 = 0;
    *(uint *)(this + 8) = uVar22;
    *(float *)(this + 0xc) = 1.0 / (float)uVar6;
    if (uVar22 != 1) {
      do {
        uVar11 = (uint)uVar6;
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 >> 1;
      } while (3 < uVar11);
    }
    *(int *)(this + 0x10) = iVar5;
    uVar11 = uVar22;
    if (*(void **)(this + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x18));
      uVar11 = *(uint *)(this + 8);
    }
    pvVar8 = operator_new__((ulong)(uVar11 * uVar11) << 1);
    uVar22 = uVar22 * uVar22;
    uVar12 = (ulong)uVar22;
    *(void **)(this + 0x18) = pvVar8;
    if (uVar22 == 0) goto LAB_008f2aa0;
    lVar10 = 0;
    if ((8 < uVar22) && (0xffffffff7fffffff < uVar12 - 0x80000001)) {
      if ((pvVar8 < (void *)((long)pvVar21 + uVar12 * 2 + -1)) &&
         (pvVar21 < (void *)((long)pvVar8 + uVar12 * 2))) {
        lVar10 = 0;
      }
      else {
        if (uVar22 < 0x21) {
          lVar10 = 0;
        }
        else {
          uVar23 = 0;
          uVar6 = 0x20;
          if ((uVar22 & 0x1f) != 0) {
            uVar6 = uVar12 & 0x1f;
          }
          lVar10 = uVar12 - uVar6;
          uVar19 = uVar12;
          do {
            puVar13 = (undefined *)((long)pvVar21 + (uVar23 & 0xffffffc0));
            uVar19 = uVar19 - 0x20;
            uVar26 = puVar13[2];
            uVar27 = puVar13[4];
            uVar28 = puVar13[6];
            uVar29 = puVar13[8];
            uVar30 = puVar13[10];
            uVar31 = puVar13[0xc];
            uVar32 = puVar13[0xe];
            uVar33 = puVar13[0x10];
            uVar35 = puVar13[0x12];
            uVar36 = puVar13[0x14];
            uVar37 = puVar13[0x16];
            uVar38 = puVar13[0x18];
            uVar39 = puVar13[0x1a];
            uVar40 = puVar13[0x1c];
            uVar41 = puVar13[0x1e];
            puVar2 = (undefined *)((long)pvVar21 + (ulong)((int)uVar23 + 0x20));
            puVar1 = (undefined *)((long)pvVar8 + uVar23);
            uVar23 = uVar23 + 0x40;
            uVar42 = *puVar2;
            uVar44 = puVar2[2];
            uVar45 = puVar2[4];
            uVar46 = puVar2[6];
            uVar47 = puVar2[8];
            uVar48 = puVar2[10];
            uVar49 = puVar2[0xc];
            uVar50 = puVar2[0xe];
            uVar51 = puVar2[0x10];
            uVar53 = puVar2[0x12];
            uVar54 = puVar2[0x14];
            uVar55 = puVar2[0x16];
            uVar56 = puVar2[0x18];
            uVar57 = puVar2[0x1a];
            uVar58 = puVar2[0x1c];
            uVar59 = puVar2[0x1e];
            *puVar1 = *puVar13;
            puVar1[1] = 0xff;
            puVar1[2] = uVar26;
            puVar1[3] = 0xff;
            puVar1[4] = uVar27;
            puVar1[5] = 0xff;
            puVar1[6] = uVar28;
            puVar1[7] = 0xff;
            puVar1[8] = uVar29;
            puVar1[9] = 0xff;
            puVar1[10] = uVar30;
            puVar1[0xb] = 0xff;
            puVar1[0xc] = uVar31;
            puVar1[0xd] = 0xff;
            puVar1[0xe] = uVar32;
            puVar1[0xf] = 0xff;
            puVar1[0x10] = uVar33;
            puVar1[0x11] = 0xff;
            puVar1[0x12] = uVar35;
            puVar1[0x13] = 0xff;
            puVar1[0x14] = uVar36;
            puVar1[0x15] = 0xff;
            puVar1[0x16] = uVar37;
            puVar1[0x17] = 0xff;
            puVar1[0x18] = uVar38;
            puVar1[0x19] = 0xff;
            puVar1[0x1a] = uVar39;
            puVar1[0x1b] = 0xff;
            puVar1[0x1c] = uVar40;
            puVar1[0x1d] = 0xff;
            puVar1[0x1e] = uVar41;
            puVar1[0x1f] = 0xff;
            puVar1[0x20] = uVar42;
            puVar1[0x21] = 0xff;
            puVar1[0x22] = uVar44;
            puVar1[0x23] = 0xff;
            puVar1[0x24] = uVar45;
            puVar1[0x25] = 0xff;
            puVar1[0x26] = uVar46;
            puVar1[0x27] = 0xff;
            puVar1[0x28] = uVar47;
            puVar1[0x29] = 0xff;
            puVar1[0x2a] = uVar48;
            puVar1[0x2b] = 0xff;
            puVar1[0x2c] = uVar49;
            puVar1[0x2d] = 0xff;
            puVar1[0x2e] = uVar50;
            puVar1[0x2f] = 0xff;
            puVar1[0x30] = uVar51;
            puVar1[0x31] = 0xff;
            puVar1[0x32] = uVar53;
            puVar1[0x33] = 0xff;
            puVar1[0x34] = uVar54;
            puVar1[0x35] = 0xff;
            puVar1[0x36] = uVar55;
            puVar1[0x37] = 0xff;
            puVar1[0x38] = uVar56;
            puVar1[0x39] = 0xff;
            puVar1[0x3a] = uVar57;
            puVar1[0x3b] = 0xff;
            puVar1[0x3c] = uVar58;
            puVar1[0x3d] = 0xff;
            puVar1[0x3e] = uVar59;
            puVar1[0x3f] = 0xff;
          } while (uVar6 != uVar19);
          if (uVar6 < 9) goto LAB_008f2a74;
        }
        uVar23 = 8;
        if ((uVar22 & 7) != 0) {
          uVar23 = uVar12 & 7;
        }
        uVar6 = lVar10 << 1;
        lVar18 = uVar23 + lVar10;
        lVar10 = uVar12 - uVar23;
        lVar18 = lVar18 - uVar12;
        do {
          lVar18 = lVar18 + 8;
          puVar13 = (undefined *)((long)pvVar21 + (uVar6 & 0xfffffffe));
          uVar26 = puVar13[2];
          uVar27 = puVar13[4];
          uVar28 = puVar13[6];
          uVar29 = puVar13[8];
          uVar30 = puVar13[10];
          uVar31 = puVar13[0xc];
          uVar32 = puVar13[0xe];
          puVar2 = (undefined *)((long)pvVar8 + uVar6);
          uVar6 = uVar6 + 0x10;
          *puVar2 = *puVar13;
          puVar2[1] = 0xff;
          puVar2[2] = uVar26;
          puVar2[3] = 0xff;
          puVar2[4] = uVar27;
          puVar2[5] = 0xff;
          puVar2[6] = uVar28;
          puVar2[7] = 0xff;
          puVar2[8] = uVar29;
          puVar2[9] = 0xff;
          puVar2[10] = uVar30;
          puVar2[0xb] = 0xff;
          puVar2[0xc] = uVar31;
          puVar2[0xd] = 0xff;
          puVar2[0xe] = uVar32;
          puVar2[0xf] = 0xff;
        } while (lVar18 != 0);
      }
    }
LAB_008f2a74:
    uVar23 = lVar10 << 1;
    lVar10 = uVar12 - lVar10;
    do {
      uVar12 = uVar23 & 0xfffffffe;
      puVar13 = (undefined *)((long)pvVar8 + uVar23);
      uVar23 = uVar23 + 2;
      lVar10 = lVar10 + -1;
      uVar26 = *(undefined *)((long)pvVar21 + uVar12);
      puVar13[1] = 0xff;
      *puVar13 = uVar26;
    } while (lVar10 != 0);
    goto LAB_008f2aa0;
  }
  goto LAB_008f28d8;
}


