// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 006daf4c
// Size: 2176 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::init() */

byte EngineApplication::init(void)

{
  void **ppvVar1;
  EngineApplication *pEVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  EngineApplication *in_x0;
  ulong uVar8;
  IShaderCompiler *pIVar9;
  ulong uVar10;
  long lVar11;
  StatsOverlayManager *pSVar12;
  undefined8 *puVar13;
  Console *pCVar14;
  ConsoleCommand *pCVar15;
  void *pvVar16;
  ResourceManager *this;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  void *pvVar22;
  size_t sVar23;
  undefined8 *puVar24;
  bool abStack_84 [4];
  undefined8 local_80;
  undefined7 uStack_78;
  undefined uStack_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (in_x0[0x1ce] == (EngineApplication)0x0) {
    bVar6 = 0;
  }
  else {
    initLoadingScreen(in_x0,false);
    GenericStoreUtil::init();
    uVar8 = (**(code **)(**(long **)(in_x0 + 0x170) + 0xa8))();
    pIVar9 = (IShaderCompiler *)MaterialShaderManager::getInstance();
    bVar5 = (bool)(**(code **)(**(long **)(in_x0 + 0x170) + 0x88))();
    MaterialShaderManager::init(pIVar9,bVar5,1,1,0x20,0x20);
    pEVar2 = in_x0 + 0x2a9;
    if (((byte)in_x0[0x2a8] & 1) != 0) {
      pEVar2 = *(EngineApplication **)(in_x0 + 0x2b8);
    }
    GenericSaveGameUtil::init((char *)pEVar2);
    EngineManager::getInstance();
    EngineManager::initAchievements();
    EngineManager::getInstance();
    EngineManager::initInAppPurchase();
    uVar10 = Properties::getBoolDefault
                       (*(Properties **)(in_x0 + 0x188),"game.development.controls",false);
    in_x0[0x214] = (EngineApplication)0x0;
    if ((uVar10 & 1) != 0) {
      lVar11 = EngineManager::getInstance();
      *(undefined *)(lVar11 + 0x339) = 1;
      bVar6 = Properties::getBoolDefault
                        (*(Properties **)(in_x0 + 0x188),
                         "game.development.openDevConsole#onWarnings",false);
      bVar7 = Properties::getBoolDefault
                        (*(Properties **)(in_x0 + 0x188),"game.development.openDevConsole#onErrors",
                         false);
      lVar11 = EngineManager::getInstance();
      *(byte *)(lVar11 + 0x33a) = bVar6 & 1;
      *(byte *)(lVar11 + 0x33b) = bVar7 & 1;
    }
    pSVar12 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
    puVar13 = (undefined8 *)operator_new(0x10);
    *puVar13 = &PTR__StatsOverlay_00fd91f0;
    puVar13[1] = 0;
    StatsOverlayManager::addStatsOverlay(pSVar12,(StatsOverlay *)puVar13,0);
    pSVar12 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
    puVar13 = (undefined8 *)operator_new(0x10);
    *puVar13 = &PTR__StatsOverlay_00fd9250;
    puVar13[1] = 0;
    StatsOverlayManager::addStatsOverlay(pSVar12,(StatsOverlay *)puVar13,0);
    pSVar12 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
    puVar13 = (undefined8 *)operator_new(0x10);
    *puVar13 = &PTR__StatsOverlay_00fdb300;
    puVar13[1] = 0;
    StatsOverlayManager::addStatsOverlay(pSVar12,(StatsOverlay *)puVar13,0);
    pSVar12 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
    puVar13 = (undefined8 *)operator_new(0x10);
    *puVar13 = &PTR__StatsOverlay_00fd92a0;
    puVar13[1] = 0;
    StatsOverlayManager::addStatsOverlay(pSVar12,(StatsOverlay *)puVar13,0);
    pSVar12 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
    puVar13 = (undefined8 *)operator_new(0x10);
    *(undefined2 *)(puVar13 + 1) = 0;
    *(undefined4 *)((long)puVar13 + 0xc) = 0;
    *puVar13 = &PTR__StatsOverlay_00fd92f0;
    StatsOverlayManager::addStatsOverlay(pSVar12,(StatsOverlay *)puVar13,0);
    pSVar12 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
    puVar13 = (undefined8 *)operator_new(0x10);
    *puVar13 = &PTR__StatsOverlay_00fd9340;
    puVar13[1] = 0;
    StatsOverlayManager::addStatsOverlay(pSVar12,(StatsOverlay *)puVar13,0);
    pCVar14 = (Console *)Application::getConsole();
    pCVar15 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006db1b0 to 006db1d7 has its CatchHandler @ 006db7d0 */
    ScenegraphPhysicsContextManager::getInstance();
    lVar11 = ScenegraphPhysicsContextManager::getContext();
    ConsoleCommand::ConsoleCommand
              (pCVar15,"parallelRenderingAndPhysics","Enable parallel rendering and physics",
               (bool *)(lVar11 + 0x5d1),false);
    Console::addCommand(pCVar14,(IConsoleCommand *)pCVar15);
    if (in_x0[0x1c1] != (EngineApplication)0x0) {
      pCVar14 = (Console *)Application::getConsole();
      pCVar15 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006db204 to 006db21f has its CatchHandler @ 006db7cc */
      ConsoleCommand::ConsoleCommand(pCVar15,"setAdsRequestTime","",FUN_006dbd28);
      Console::addCommand(pCVar14,(IConsoleCommand *)pCVar15);
    }
    puVar13 = *(undefined8 **)(in_x0 + 0x200);
    ppvVar1 = (void **)(in_x0 + 0x1f8);
    *(undefined4 *)(in_x0 + 0x1ec) = 0;
    if (puVar13 < *(undefined8 **)(in_x0 + 0x208)) {
      puVar19 = puVar13 + 1;
      *puVar13 = 0;
      *(undefined8 **)(in_x0 + 0x200) = puVar19;
    }
    else {
      pvVar22 = *ppvVar1;
      sVar23 = (long)puVar13 - (long)pvVar22;
      uVar10 = ((long)sVar23 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) goto LAB_006db7b4;
      uVar20 = (long)*(undefined8 **)(in_x0 + 0x208) - (long)pvVar22;
      uVar21 = (long)uVar20 >> 2;
      if (uVar10 <= uVar21) {
        uVar10 = uVar21;
      }
      if (0x7ffffffffffffff7 < uVar20) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) goto LAB_006db7bc;
        pvVar16 = operator_new(uVar10 << 3);
      }
      puVar13 = (undefined8 *)((long)pvVar16 + ((long)sVar23 >> 3) * 8);
      puVar19 = puVar13 + 1;
      *puVar13 = 0;
      if (0 < (long)sVar23) {
        memcpy(pvVar16,pvVar22,sVar23);
      }
      *(void **)(in_x0 + 0x1f8) = pvVar16;
      *(undefined8 **)(in_x0 + 0x200) = puVar19;
      *(void **)(in_x0 + 0x208) = (void *)((long)pvVar16 + uVar10 * 8);
      if (pvVar22 != (void *)0x0) {
        operator_delete(pvVar22);
        puVar19 = *(undefined8 **)(in_x0 + 0x200);
      }
    }
    puVar13 = (undefined8 *)operator_new(8);
    puVar18 = *(undefined8 **)(in_x0 + 0x208);
    *puVar13 = &PTR__IEngineApplicationDebugTexture_00fd9578;
    if (puVar19 < puVar18) {
      puVar18 = puVar19 + 1;
      *puVar19 = puVar13;
      *(undefined8 **)(in_x0 + 0x200) = puVar18;
    }
    else {
      pvVar22 = *ppvVar1;
      sVar23 = (long)puVar19 - (long)pvVar22;
      uVar10 = ((long)sVar23 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) goto LAB_006db7b4;
      uVar20 = (long)puVar18 - (long)pvVar22;
      uVar21 = (long)uVar20 >> 2;
      if (uVar10 <= uVar21) {
        uVar10 = uVar21;
      }
      if (0x7ffffffffffffff7 < uVar20) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) goto LAB_006db7bc;
        pvVar16 = operator_new(uVar10 << 3);
      }
      puVar19 = (undefined8 *)((long)pvVar16 + ((long)sVar23 >> 3) * 8);
      puVar18 = puVar19 + 1;
      *puVar19 = puVar13;
      if (0 < (long)sVar23) {
        memcpy(pvVar16,pvVar22,sVar23);
      }
      *(void **)(in_x0 + 0x1f8) = pvVar16;
      *(undefined8 **)(in_x0 + 0x200) = puVar18;
      *(void **)(in_x0 + 0x208) = (void *)((long)pvVar16 + uVar10 * 8);
      if (pvVar22 != (void *)0x0) {
        operator_delete(pvVar22);
        puVar18 = *(undefined8 **)(in_x0 + 0x200);
      }
    }
    puVar13 = (undefined8 *)operator_new(8);
    puVar19 = *(undefined8 **)(in_x0 + 0x208);
    *puVar13 = &PTR__IEngineApplicationDebugTexture_00fd95e8;
    if (puVar18 < puVar19) {
      puVar24 = puVar18 + 1;
      *puVar18 = puVar13;
      *(undefined8 **)(in_x0 + 0x200) = puVar24;
    }
    else {
      pvVar22 = *ppvVar1;
      sVar23 = (long)puVar18 - (long)pvVar22;
      uVar10 = ((long)sVar23 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) goto LAB_006db7b4;
      uVar20 = (long)puVar19 - (long)pvVar22;
      uVar21 = (long)uVar20 >> 2;
      if (uVar10 <= uVar21) {
        uVar10 = uVar21;
      }
      if (0x7ffffffffffffff7 < uVar20) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) goto LAB_006db7bc;
        pvVar16 = operator_new(uVar10 << 3);
      }
      puVar19 = (undefined8 *)((long)pvVar16 + ((long)sVar23 >> 3) * 8);
      puVar24 = puVar19 + 1;
      *puVar19 = puVar13;
      if (0 < (long)sVar23) {
        memcpy(pvVar16,pvVar22,sVar23);
      }
      *(void **)(in_x0 + 0x1f8) = pvVar16;
      *(undefined8 **)(in_x0 + 0x200) = puVar24;
      *(void **)(in_x0 + 0x208) = (void *)((long)pvVar16 + uVar10 * 8);
      if (pvVar22 != (void *)0x0) {
        operator_delete(pvVar22);
        puVar24 = *(undefined8 **)(in_x0 + 0x200);
      }
    }
    puVar13 = (undefined8 *)operator_new(8);
    puVar19 = *(undefined8 **)(in_x0 + 0x208);
    *puVar13 = &PTR__IEngineApplicationDebugTexture_00fd9648;
    if (puVar24 < puVar19) {
      puVar18 = puVar24 + 1;
      *puVar24 = puVar13;
      *(undefined8 **)(in_x0 + 0x200) = puVar18;
    }
    else {
      pvVar22 = *ppvVar1;
      sVar23 = (long)puVar24 - (long)pvVar22;
      uVar10 = ((long)sVar23 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) goto LAB_006db7b4;
      uVar20 = (long)puVar19 - (long)pvVar22;
      uVar21 = (long)uVar20 >> 2;
      if (uVar10 <= uVar21) {
        uVar10 = uVar21;
      }
      if (0x7ffffffffffffff7 < uVar20) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) goto LAB_006db7bc;
        pvVar16 = operator_new(uVar10 << 3);
      }
      puVar19 = (undefined8 *)((long)pvVar16 + ((long)sVar23 >> 3) * 8);
      puVar18 = puVar19 + 1;
      *puVar19 = puVar13;
      if (0 < (long)sVar23) {
        memcpy(pvVar16,pvVar22,sVar23);
      }
      *(void **)(in_x0 + 0x1f8) = pvVar16;
      *(undefined8 **)(in_x0 + 0x200) = puVar18;
      *(void **)(in_x0 + 0x208) = (void *)((long)pvVar16 + uVar10 * 8);
      if (pvVar22 != (void *)0x0) {
        operator_delete(pvVar22);
        puVar18 = *(undefined8 **)(in_x0 + 0x200);
      }
    }
    puVar13 = (undefined8 *)operator_new(8);
    puVar19 = *(undefined8 **)(in_x0 + 0x208);
    *puVar13 = &PTR__IEngineApplicationDebugTexture_00fd96a8;
    if (puVar18 < puVar19) {
      *puVar18 = puVar13;
      *(undefined8 **)(in_x0 + 0x200) = puVar18 + 1;
    }
    else {
      pvVar22 = *ppvVar1;
      sVar23 = (long)puVar18 - (long)pvVar22;
      uVar10 = ((long)sVar23 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) {
LAB_006db7b4:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar20 = (long)puVar19 - (long)pvVar22;
      uVar21 = (long)uVar20 >> 2;
      if (uVar10 <= uVar21) {
        uVar10 = uVar21;
      }
      if (0x7ffffffffffffff7 < uVar20) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3d != 0) {
LAB_006db7bc:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar16 = operator_new(uVar10 << 3);
      }
      puVar19 = (undefined8 *)((long)pvVar16 + ((long)sVar23 >> 3) * 8);
      *puVar19 = puVar13;
      if (0 < (long)sVar23) {
        memcpy(pvVar16,pvVar22,sVar23);
      }
      *(void **)(in_x0 + 0x1f8) = pvVar16;
      *(undefined8 **)(in_x0 + 0x200) = puVar19 + 1;
      *(void **)(in_x0 + 0x208) = (void *)((long)pvVar16 + uVar10 * 8);
      if (pvVar22 != (void *)0x0) {
        operator_delete(pvVar22);
      }
    }
    *(undefined4 *)(in_x0 + 0x210) = 0;
    initCamera();
    FileHashManager::init((char *)&FileHashManager::s_fileHashManager);
    GameScriptBinding::init(in_x0);
    lVar11 = 1;
    uStack_78 = 0x4fd3cf0e7ae7d3;
    local_80 = 0x418f93296bfac064;
    uStack_71 = 0xc0;
    uStack_70 = 0xa14389d05464e7;
    do {
      uVar17 = (uint)lVar11;
      uVar3 = (uVar17 & 0xff) * 0x25 >> 8;
      *(byte *)((long)&local_80 + lVar11) =
           (&UNK_00516bcc)
           [(ulong)(uVar17 + (uVar3 + ((uVar17 - uVar3 & 0xfe) >> 1) >> 2) * -7) & 0xff] ^
           *(byte *)((long)&local_80 + lVar11);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x17);
    this = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::getStaticDelete(this,(char *)&local_80,0,(ResourceDesc *)0x0,1,true,abStack_84)
    ;
    bVar6 = initScript(in_x0,false);
    deinitLoadingScreen();
    if (*(long **)(in_x0 + 0x278) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x278) + 8))();
    }
    *(undefined8 *)(in_x0 + 0x278) = 0;
    if (*(long **)(in_x0 + 0x270) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x270) + 8))();
    }
    *(undefined8 *)(in_x0 + 0x270) = 0;
    if (*(long **)(in_x0 + 600) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 600) + 8))();
    }
    *(undefined8 *)(in_x0 + 600) = 0;
    *(undefined4 *)(in_x0 + 0x228) = 0;
    *(undefined8 *)(in_x0 + 0x220) = 0;
    if ((uVar8 & 1) != 0) {
      (**(code **)(**(long **)(in_x0 + 0x170) + 0xb0))();
    }
    if ((*(int *)(in_x0 + 0x378) != -1) || (*(int *)(in_x0 + 0x37c) != -1)) {
      (**(code **)(**(long **)(in_x0 + 0x178) + 0x88))();
    }
    in_x0[0x215] = (EngineApplication)(bVar6 & 1);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return bVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


