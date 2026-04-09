// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct
// Entry Point: 00764b30
// Size: 1808 bytes
// Signature: undefined __cdecl construct(MethodInvocation * param_1)


/* PerlinNoiseFilterLua::construct(MethodInvocation*) */

undefined8 * PerlinNoiseFilterLua::construct(MethodInvocation *param_1)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  EntityRegistryManager *this;
  long lVar7;
  basic_string *pbVar8;
  ulong *puVar9;
  long **pplVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  double dVar16;
  float fVar17;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 8) == 0xd) {
    plVar15 = *(long **)param_1;
    if ((plVar15 == (long *)0x0) ||
       (iVar6 = strcmp((char *)plVar15[1],"DensityMapModifier"), iVar6 != 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 0076500c to 00765017 has its CatchHandler @ 0076525c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Supplied object to PerlinNoiseFilter is not a DensityMapModifier.\n"
                        );
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00765054 to 0076505f has its CatchHandler @ 00765258 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar8);
      pvVar1 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar1 = local_60;
      }
                    /* try { // try from 00764c80 to 00764c93 has its CatchHandler @ 00765298 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "PerlinNoiseFilter: called from %s\n",pvVar1);
    }
    else {
      pplVar10 = (long **)*plVar15;
      if (pplVar10 != (long **)0x0) goto LAB_00764e14;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 007651bc to 007651c7 has its CatchHandler @ 00765244 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Supplied object to PerlinNoiseFilter is NULL.\n");
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00765204 to 0076520f has its CatchHandler @ 00765240 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar8);
      pvVar1 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar1 = local_60;
      }
                    /* try { // try from 00764df8 to 00764e0b has its CatchHandler @ 0076527c */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "PerlinNoiseFilter: called from %s\n",pvVar1);
    }
  }
  else if (*(int *)(param_1 + 8) == 5) {
    dVar16 = *(double *)param_1;
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    lVar7 = EntityRegistryManager::getEntityById(this,(int)dVar16);
    if (lVar7 != 0) {
      if ((*(ulong *)(lVar7 + 0x10) >> 0x2f & 1) == 0) {
        if ((*(ulong *)(lVar7 + 0x10) >> 0x2d & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 0076512c to 00765137 has its CatchHandler @ 0076524c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: PerlinNoiseFilter has invalid entity \'%s\'.\n",
                             *(undefined8 *)(lVar7 + 8));
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 00765174 to 0076517f has its CatchHandler @ 00765248 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          ScriptSystemManager::getInstance();
          pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::getCallerSite(pbVar8);
          pvVar1 = (void *)((ulong)local_70 | 1);
          if ((local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
                    /* try { // try from 00764bf4 to 00764c07 has its CatchHandler @ 00765280 */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "PerlinNoiseFilter: called from %s\n",pvVar1);
          goto LAB_00764d78;
        }
        pplVar10 = (long **)(lVar7 + 0x20);
      }
      else {
        pplVar10 = (long **)(lVar7 + 0x50);
      }
LAB_00764e14:
      fVar17 = 0.5;
      plVar15 = *pplVar10;
      if (*(int *)(param_1 + 0x38) == 4) {
        fVar17 = *(float *)(param_1 + 0x30);
      }
      if (*(int *)(param_1 + 0x48) == 1) {
        uVar14 = *(uint *)(param_1 + 0x40);
      }
      else {
        puVar9 = (ulong *)MathUtil::getPCGRand();
        uVar11 = *puVar9;
        uVar12 = (uint)(uVar11 >> 0x20);
        uVar14 = uVar12 >> 0xd ^ (uint)(uVar11 >> 0x1b);
        uVar12 = uVar12 >> 0x1b;
        uVar14 = uVar14 >> uVar12 | uVar14 << 0x20 - uVar12;
        *puVar9 = uVar11 * 0x5851f42d4c957f2d + 0xdead1337beef6800;
      }
      puVar13 = (undefined8 *)operator_new(0x98);
                    /* try { // try from 00764e98 to 00764eb3 has its CatchHandler @ 007652b0 */
      uVar4 = (**(code **)(*plVar15 + 0x48))(plVar15);
      uVar5 = (**(code **)(*plVar15 + 0x50))(plVar15);
      *(undefined8 *)((long)puVar13 + 0x1c) = 0;
      *(undefined8 *)((long)puVar13 + 0x14) = 0;
      *(undefined4 *)(puVar13 + 2) = 2;
      uVar12 = *(uint *)(param_1 + 0x10);
      *(undefined *)(puVar13 + 5) = 0;
      uVar2 = *(uint *)(param_1 + 0x20);
      *(undefined4 *)((long)puVar13 + 0x24) = 0x7fffffff;
      *(undefined4 *)((long)puVar13 + 0x2c) = 0;
      *(undefined4 *)(puVar13 + 6) = 0;
      *puVar13 = &PTR__PerlinNoiseFilterLua_00fdb5f0;
      puVar13[1] = 0;
      *(undefined4 *)(puVar13 + 7) = 0;
                    /* try { // try from 00764ef8 to 00764f13 has its CatchHandler @ 00765288 */
      PerlinNoisePixelSource::PerlinNoisePixelSource
                ((PerlinNoisePixelSource *)(puVar13 + 8),"Perlin Noise",uVar4,uVar5,uVar12,uVar2,
                 fVar17,uVar14);
      puVar13[1] = puVar13 + 8;
      *(undefined *)(puVar13 + 5) = 0;
      *(undefined4 *)(puVar13 + 3) = 0;
      *(undefined4 *)((long)puVar13 + 0x1c) = *(undefined4 *)(puVar13 + 0x10);
      puVar13[2] = 0;
      *(undefined8 *)((long)puVar13 + 0x2c) = 0;
      puVar13[4] = 0x7fffffff00001388;
      goto LAB_00764f3c;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 0076509c to 007650a7 has its CatchHandler @ 00765254 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: PerlinNoiseFilter with invalid entity id %u.\n",
                       (ulong)(uint)(int)dVar16);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 007650e4 to 007650ef has its CatchHandler @ 00765250 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar8);
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
                    /* try { // try from 00764d64 to 00764d77 has its CatchHandler @ 00765284 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "PerlinNoiseFilter: called from %s\n",pvVar1);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00764f7c to 00764f87 has its CatchHandler @ 00765264 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid object parameter in PerlinNoiseFilter.\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00764fc4 to 00764fcf has its CatchHandler @ 00765260 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar8);
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
                    /* try { // try from 00764cf0 to 00764d03 has its CatchHandler @ 0076529c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "PerlinNoiseFilter: called from %s\n",pvVar1);
  }
LAB_00764d78:
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  puVar13 = (undefined8 *)0x0;
LAB_00764f3c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return puVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


