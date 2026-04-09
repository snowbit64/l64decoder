// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00763740
// Size: 3240 bytes
// Signature: undefined __thiscall initialize(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::initialize(MethodInvocation*) */

void __thiscall DensityMapFilterLua::initialize(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  EntityRegistryManager *this_00;
  TerrainDataPlane *pTVar7;
  basic_string *pbVar8;
  undefined8 uVar9;
  IDensityPixelSource *pIVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_78 [4];
  void *local_68;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 8) == 0xd) {
    plVar13 = *(long **)param_1;
    if ((plVar13 == (long *)0x0) ||
       (iVar6 = strcmp((char *)plVar13[1],"DensityMapModifier"), iVar6 != 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00763f74 to 00763f7f has its CatchHandler @ 00764424 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Supplied object to DensityMapFilter is not a DensityMapModifier.\n"
                        );
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00763fbc to 00763fc7 has its CatchHandler @ 00764420 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar8);
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
                    /* try { // try from 00763894 to 007638a7 has its CatchHandler @ 00764460 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapFilter: called from %s\n",pvVar1);
    }
    else {
      lVar11 = *plVar13;
      if (lVar11 != 0) {
        pIVar10 = *(IDensityPixelSource **)(this + 8);
        if (pIVar10 != (IDensityPixelSource *)0x0) {
          IDensityPixelSource::removeDeletedListener(pIVar10,(DeletedListener *)this);
        }
        uVar9 = *(undefined8 *)(lVar11 + 100);
        uVar17 = *(undefined8 *)(lVar11 + 0x60);
        uVar16 = *(undefined8 *)(lVar11 + 0x58);
        uVar18 = *(undefined8 *)(lVar11 + 0x50);
        pIVar10 = *(IDensityPixelSource **)(lVar11 + 0x48);
        *(undefined8 *)(this + 0x2c) = *(undefined8 *)(lVar11 + 0x6c);
        *(undefined8 *)(this + 0x24) = uVar9;
        *(undefined8 *)(this + 0x10) = uVar18;
        *(IDensityPixelSource **)(this + 8) = pIVar10;
        *(undefined8 *)(this + 0x20) = uVar17;
        *(undefined8 *)(this + 0x18) = uVar16;
        IDensityPixelSource::addDeletedListener
                  (*(IDensityPixelSource **)(this + 8),(DeletedListener *)this);
        uVar9 = 1;
        *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar11 + 0x44);
        goto LAB_007639a0;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00764244 to 0076424f has its CatchHandler @ 007643fc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Supplied object to DensityMapFilter is NULL.\n");
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 0076428c to 00764297 has its CatchHandler @ 007643f8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar8);
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
                    /* try { // try from 00763adc to 00763aef has its CatchHandler @ 0076444c */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapFilter: called from %s\n",pvVar1);
    }
  }
  else if (*(int *)(param_1 + 8) == 5) {
    dVar15 = *(double *)param_1;
    this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pTVar7 = (TerrainDataPlane *)EntityRegistryManager::getEntityById(this_00,(int)dVar15);
    if (pTVar7 == (TerrainDataPlane *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00764004 to 0076400f has its CatchHandler @ 0076441c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: DensityMapFilter with invalid entity id %u.\n",
                         (ulong)(uint)(int)dVar15);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 0076404c to 00764057 has its CatchHandler @ 00764418 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar8);
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
                    /* try { // try from 00763978 to 0076398b has its CatchHandler @ 0076445c */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapFilter: called from %s\n",pvVar1);
    }
    else {
      if ((*(ulong *)(pTVar7 + 0x10) >> 0x2f & 1) != 0) {
        uVar12 = 0;
        switch(*(int *)(param_1 + 0x18)) {
        case 1:
        case 2:
          uVar12 = *(uint *)(param_1 + 0x10);
          break;
        case 4:
          uVar12 = (uint)*(float *)(param_1 + 0x10);
          break;
        case 5:
          uVar12 = (uint)*(double *)(param_1 + 0x10);
        }
        iVar6 = *(int *)(param_1 + 0x28);
        uVar14 = *(int *)(pTVar7 + 0x78) - uVar12;
        switch(iVar6) {
        case 1:
        case 2:
          uVar14 = *(uint *)(param_1 + 0x20);
          break;
        case 4:
          uVar14 = (uint)*(float *)(param_1 + 0x20);
          break;
        case 5:
          uVar14 = (uint)*(double *)(param_1 + 0x20);
        }
        if ((*(int *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x10) == 0)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 00764124 to 0076412f has its CatchHandler @ 0076440c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "DensityMapFilter: defaulting first channel to %u\n",(ulong)uVar12);
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 0076416c to 00764177 has its CatchHandler @ 00764408 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          ScriptSystemManager::getInstance();
          pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::getCallerSite(pbVar8);
          pvVar1 = (void *)((ulong)local_78 | 1);
          if ((local_78[0] & 1) != 0) {
            pvVar1 = local_68;
          }
                    /* try { // try from 00763bbc to 00763bcf has its CatchHandler @ 00764454 */
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "DensityMapFilter: called from %s\n",pvVar1);
          if ((local_78[0] & 1) != 0) {
            operator_delete(local_68);
          }
          iVar6 = *(int *)(param_1 + 0x28);
        }
        if ((iVar6 == 0) && (*(long *)(param_1 + 0x20) == 0)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 007641b4 to 007641bf has its CatchHandler @ 00764404 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "DensityMapFilter: defaulting num channels to %u\n",(ulong)uVar14);
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 007641fc to 00764207 has its CatchHandler @ 00764400 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          ScriptSystemManager::getInstance();
          pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::getCallerSite(pbVar8);
          pvVar1 = (void *)((ulong)local_78 | 1);
          if ((local_78[0] & 1) != 0) {
            pvVar1 = local_68;
          }
                    /* try { // try from 00763c4c to 00763c5f has its CatchHandler @ 00764450 */
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "DensityMapFilter: called from %s\n",pvVar1);
          if ((local_78[0] & 1) != 0) {
            operator_delete(local_68);
          }
        }
        initialize(this,pTVar7,uVar12,uVar14,*(uint *)(pTVar7 + 0x7c));
        uVar9 = 1;
        goto LAB_007639a0;
      }
      if ((*(ulong *)(pTVar7 + 0x10) >> 0x2d & 1) != 0) {
        uVar12 = 0;
        plVar13 = *(long **)(pTVar7 + 0x20);
        switch(*(undefined4 *)(param_1 + 0x18)) {
        case 1:
        case 2:
          uVar12 = *(uint *)(param_1 + 0x10);
          break;
        case 4:
          uVar12 = (uint)*(float *)(param_1 + 0x10);
          break;
        case 5:
          uVar12 = (uint)*(double *)(param_1 + 0x10);
        }
        iVar3 = (**(code **)(*plVar13 + 0x58))(plVar13);
        iVar4 = (**(code **)(*plVar13 + 0x60))(plVar13);
        iVar6 = *(int *)(param_1 + 0x28);
        uVar14 = iVar3 - (uVar12 + iVar4);
        switch(iVar6) {
        case 1:
        case 2:
          uVar14 = *(uint *)(param_1 + 0x20);
          break;
        case 4:
          uVar14 = (uint)*(float *)(param_1 + 0x20);
          break;
        case 5:
          uVar14 = (uint)*(double *)(param_1 + 0x20);
        }
        if ((*(int *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x10) == 0)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 007642d4 to 007642df has its CatchHandler @ 007643f4 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "DensityMapFilter: defaulting first channel to %u\n",(ulong)uVar12);
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 0076431c to 00764327 has its CatchHandler @ 007643f0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          ScriptSystemManager::getInstance();
          pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::getCallerSite(pbVar8);
          pvVar1 = (void *)((ulong)local_78 | 1);
          if ((local_78[0] & 1) != 0) {
            pvVar1 = local_68;
          }
                    /* try { // try from 00763d80 to 00763d93 has its CatchHandler @ 00764448 */
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "DensityMapFilter: called from %s\n",pvVar1);
          if ((local_78[0] & 1) != 0) {
            operator_delete(local_68);
          }
          iVar6 = *(int *)(param_1 + 0x28);
        }
        if ((iVar6 == 0) && (*(long *)(param_1 + 0x20) == 0)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 00764364 to 0076436f has its CatchHandler @ 007643ec */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "DensityMapFilter: defaulting num channels to %u\n",(ulong)uVar14);
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 007643ac to 007643b7 has its CatchHandler @ 007643e8 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          ScriptSystemManager::getInstance();
          pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
          LuauScriptSystem::getCallerSite(pbVar8);
          pvVar1 = (void *)((ulong)local_78 | 1);
          if ((local_78[0] & 1) != 0) {
            pvVar1 = local_68;
          }
                    /* try { // try from 00763e10 to 00763e23 has its CatchHandler @ 00764444 */
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "DensityMapFilter: called from %s\n",pvVar1);
          if (((byte)local_78[0] & 1) != 0) {
            operator_delete(local_68);
          }
        }
        uVar5 = (**(code **)(*plVar13 + 0x60))(plVar13);
        local_78[0] = uVar12;
        local_5c = uVar14;
        reportAndFixProblems
                  (*(DensityMap **)(pTVar7 + 0x20),local_78,&local_5c,uVar5,"DensityMapFilter");
        if (*(IDensityPixelSource **)(this + 8) != (IDensityPixelSource *)0x0) {
          IDensityPixelSource::removeDeletedListener
                    (*(IDensityPixelSource **)(this + 8),(DeletedListener *)this);
        }
        lVar11 = *(long *)(pTVar7 + 0x20);
        this[0x28] = (DensityMapFilterLua)0x0;
        pIVar10 = (IDensityPixelSource *)0x0;
        if (lVar11 != 0) {
          pIVar10 = (IDensityPixelSource *)(lVar11 + 0x58);
        }
        *(undefined8 *)(this + 0x10) = 2;
        *(undefined4 *)(this + 0x2c) = 0;
        *(undefined4 *)(this + 0x30) = 0;
        *(uint *)(this + 0x18) = local_78[0] + uVar5;
        *(uint *)(this + 0x1c) = local_5c;
        *(undefined8 *)(this + 0x20) = 0x7fffffff00000000;
        *(IDensityPixelSource **)(this + 8) = pIVar10;
        IDensityPixelSource::addDeletedListener(pIVar10,(DeletedListener *)this);
        uVar9 = 1;
        *(uint *)(this + 0x38) = uVar5;
        goto LAB_007639a0;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00764094 to 0076409f has its CatchHandler @ 00764414 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: DensityMapFilter has invalid entity \'%s\'.\n",
                         *(undefined8 *)(pTVar7 + 8));
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 007640dc to 007640e7 has its CatchHandler @ 00764410 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar8);
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
                    /* try { // try from 00763808 to 0076381b has its CatchHandler @ 00764458 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapFilter: called from %s\n",pvVar1);
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00763ee4 to 00763eef has its CatchHandler @ 0076442c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid object parameter in DensityMapFilter.\n");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00763f2c to 00763f37 has its CatchHandler @ 00764428 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar8 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar8);
    pvVar1 = (void *)((ulong)local_78 | 1);
    if ((local_78[0] & 1) != 0) {
      pvVar1 = local_68;
    }
                    /* try { // try from 00763904 to 00763917 has its CatchHandler @ 00764464 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapFilter: called from %s\n",pvVar1);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  uVar9 = 0;
LAB_007639a0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


