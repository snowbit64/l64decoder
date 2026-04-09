// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 007654f4
// Size: 2868 bytes
// Signature: undefined __thiscall initialize(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::initialize(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::initialize(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  EntityRegistryManager *pEVar8;
  long lVar9;
  basic_string *pbVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  uint local_78 [4];
  void *local_68;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pEVar8 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar9 = EntityRegistryManager::getEntityById(pEVar8,*(uint *)param_1);
  if (lVar9 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00765c44 to 00765c4f has its CatchHandler @ 0076605c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapModifier: invalid entity id %u.\n",(ulong)*(uint *)param_1);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00765c8c to 00765c97 has its CatchHandler @ 00766058 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    ScriptSystemManager::getInstance();
    pbVar10 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::getCallerSite(pbVar10);
    pvVar1 = (void *)((ulong)local_78 | 1);
    if ((local_78[0] & 1) != 0) {
      pvVar1 = local_68;
    }
                    /* try { // try from 00765614 to 00765627 has its CatchHandler @ 0076608c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "DensityMapModifier: called from %s\n",pvVar1);
LAB_00765628:
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    uVar11 = 0;
  }
  else {
    if ((*(ulong *)(lVar9 + 0x10) >> 0x2f & 1) != 0) {
      uVar14 = 0;
      switch(*(int *)(param_1 + 0x18)) {
      case 1:
      case 2:
        uVar14 = *(uint *)(param_1 + 0x10);
        break;
      case 4:
        uVar14 = (uint)*(float *)(param_1 + 0x10);
        break;
      case 5:
        uVar14 = (uint)*(double *)(param_1 + 0x10);
      }
      iVar7 = *(int *)(param_1 + 0x28);
      uVar15 = *(int *)(lVar9 + 0x78) - uVar14;
      switch(iVar7) {
      case 1:
      case 2:
        uVar15 = *(uint *)(param_1 + 0x20);
        break;
      case 4:
        uVar15 = (uint)*(float *)(param_1 + 0x20);
        break;
      case 5:
        uVar15 = (uint)*(double *)(param_1 + 0x20);
      }
      if ((*(int *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x10) == 0)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00765d64 to 00765d6f has its CatchHandler @ 0076604c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "DensityMapModifier: defaulting first channel to %u\n",(ulong)uVar14);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00765dac to 00765db7 has its CatchHandler @ 00766048 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        ScriptSystemManager::getInstance();
        pbVar10 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::getCallerSite(pbVar10);
        pvVar1 = (void *)((ulong)local_78 | 1);
        if ((local_78[0] & 1) != 0) {
          pvVar1 = local_68;
        }
                    /* try { // try from 0076576c to 0076577f has its CatchHandler @ 00766084 */
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "DensityMapModifier: called from %s\n",pvVar1);
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
        iVar7 = *(int *)(param_1 + 0x28);
      }
      if ((iVar7 == 0) && (*(long *)(param_1 + 0x20) == 0)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00765df4 to 00765dff has its CatchHandler @ 00766044 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "DensityMapModifier: defaulting num channels to %u\n",(ulong)uVar15);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00765e3c to 00765e47 has its CatchHandler @ 00766040 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        ScriptSystemManager::getInstance();
        pbVar10 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::getCallerSite(pbVar10);
        pvVar1 = (void *)((ulong)local_78 | 1);
        if ((local_78[0] & 1) != 0) {
          pvVar1 = local_68;
        }
                    /* try { // try from 007657fc to 0076580f has its CatchHandler @ 00766080 */
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "DensityMapModifier: called from %s\n",pvVar1);
        if (((byte)local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
      }
      uVar5 = *(uint *)(lVar9 + 0x7c);
      local_78[0] = uVar14;
      local_5c = uVar15;
      DensityMapFilterLua::reportAndFixProblems
                (*(DensityMap **)(lVar9 + 0x50),local_78,&local_5c,uVar5,"DensityMapModifier");
      uVar14 = local_5c;
      lVar12 = *(long *)(lVar9 + 0x50);
      *(long *)this = lVar12;
      iVar3 = *(int *)(lVar9 + 0x80);
      iVar7 = local_78[0] + uVar5;
      lVar17 = 0;
      if (lVar12 != 0) {
        lVar17 = lVar12 + 0x58;
      }
      this[0x68] = (DensityMapModifierLua)0x0;
      *(undefined4 *)(this + 0x6c) = 0;
      *(undefined4 *)(this + 0x70) = 0;
      iVar4 = 0;
      if (iVar3 != -1) {
        iVar4 = iVar3;
      }
      *(int *)(this + 0x58) = iVar7;
      *(uint *)(this + 0x5c) = local_5c;
      *(undefined8 *)(this + 0x60) = 0x7fffffff00000000;
      *(long *)(this + 0x48) = lVar17;
      *(uint *)(this + 0x50) = (uint)(iVar3 == -1) << 1;
      *(int *)(this + 0x54) = iVar4;
      uVar6 = DensityMap::getPolygonRoundingMode();
      *(undefined4 *)(this + 0x20) = uVar6;
      uVar11 = 1;
      uVar6 = *(undefined4 *)(lVar9 + 0x80);
      *(undefined4 *)(this + 0x38) = 0;
      *(int *)(this + 0x3c) = iVar7;
      *(uint *)(this + 0x40) = uVar14;
      *(uint *)(this + 0x44) = uVar5;
      *(undefined4 *)(this + 0x30) = uVar6;
      *(undefined4 *)(this + 0x34) = uVar6;
      *(long *)(this + 0x28) = *(long *)(lVar9 + 0x40) + 0x170;
      goto LAB_00765c08;
    }
    if ((*(ulong *)(lVar9 + 0x10) >> 0x2d & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00765cd4 to 00765cdf has its CatchHandler @ 00766054 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: invalid entity type %u.\n",(ulong)*(uint *)param_1);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00765d1c to 00765d27 has its CatchHandler @ 00766050 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar10 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar10);
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
                    /* try { // try from 007655a0 to 007655b3 has its CatchHandler @ 00766088 */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: called from %s\n",pvVar1);
      goto LAB_00765628;
    }
    uVar14 = 0;
    plVar16 = *(long **)(lVar9 + 0x20);
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 2:
      uVar14 = *(uint *)(param_1 + 0x10);
      break;
    case 4:
      uVar14 = (uint)*(float *)(param_1 + 0x10);
      break;
    case 5:
      uVar14 = (uint)*(double *)(param_1 + 0x10);
    }
    iVar3 = (**(code **)(*plVar16 + 0x58))(plVar16);
    iVar4 = (**(code **)(*plVar16 + 0x60))(plVar16);
    iVar7 = *(int *)(param_1 + 0x28);
    uVar15 = iVar3 - (uVar14 + iVar4);
    switch(iVar7) {
    case 1:
    case 2:
      uVar15 = *(uint *)(param_1 + 0x20);
      break;
    case 4:
      uVar15 = (uint)*(float *)(param_1 + 0x20);
      break;
    case 5:
      uVar15 = (uint)*(double *)(param_1 + 0x20);
    }
    if ((*(int *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x10) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00765e84 to 00765e8f has its CatchHandler @ 0076603c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "DensityMapModifier: defaulting first channel to %u\n",(ulong)uVar14);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00765ecc to 00765ed7 has its CatchHandler @ 00766038 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar10 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar10);
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
                    /* try { // try from 007659c8 to 007659db has its CatchHandler @ 0076607c */
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "DensityMapModifier: called from %s\n",pvVar1);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      iVar7 = *(int *)(param_1 + 0x28);
    }
    if ((iVar7 == 0) && (*(long *)(param_1 + 0x20) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00765f14 to 00765f1f has its CatchHandler @ 00766034 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "DensityMapModifier: defaulting num channels to %u\n",(ulong)uVar15);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00765f5c to 00765f67 has its CatchHandler @ 00766030 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      ScriptSystemManager::getInstance();
      pbVar10 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar10);
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
                    /* try { // try from 00765a58 to 00765a6b has its CatchHandler @ 00766078 */
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "DensityMapModifier: called from %s\n",pvVar1);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    }
    uVar5 = (**(code **)(*plVar16 + 0x60))(plVar16);
    lVar17 = 0;
    switch(*(undefined4 *)(param_1 + 0x38)) {
    case 1:
    case 2:
      uVar13 = *(uint *)(param_1 + 0x30);
      if (uVar13 != 0) goto LAB_00765ac4;
      goto LAB_00765b5c;
    default:
      goto switchD_00765ab8_caseD_3;
    case 4:
      uVar13 = (uint)*(float *)(param_1 + 0x30);
      break;
    case 5:
      uVar13 = (uint)*(double *)(param_1 + 0x30);
    }
    if (uVar13 == 0) {
LAB_00765b5c:
      lVar17 = 0;
    }
    else {
LAB_00765ac4:
      pEVar8 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
      lVar17 = EntityRegistryManager::getEntityById(pEVar8,uVar13);
      if ((lVar17 == 0) || (-1 < *(char *)(lVar17 + 0x10))) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00765fa4 to 00765faf has its CatchHandler @ 0076602c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "DensityMapModifier: invalid terrain id %u.\n",(ulong)uVar13);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 00765fec to 00765ff7 has its CatchHandler @ 00766028 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        ScriptSystemManager::getInstance();
        pbVar10 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::getCallerSite(pbVar10);
        pvVar1 = (void *)((ulong)local_78 | 1);
        if ((local_78[0] & 1) != 0) {
          pvVar1 = local_68;
        }
                    /* try { // try from 00765b38 to 00765b4b has its CatchHandler @ 00766074 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "DensityMapModifier: called from %s\n",pvVar1);
        goto LAB_00765628;
      }
      lVar17 = lVar17 + 0x170;
    }
switchD_00765ab8_caseD_3:
    local_78[0] = uVar14;
    local_5c = uVar15;
    DensityMapFilterLua::reportAndFixProblems
              (*(DensityMap **)(lVar9 + 0x20),local_78,&local_5c,uVar5,"DensityMapModifier");
    uVar14 = local_5c;
    lVar12 = *(long *)(lVar9 + 0x20);
    this[0x68] = (DensityMapModifierLua)0x0;
    lVar9 = 0;
    if (lVar12 != 0) {
      lVar9 = lVar12 + 0x58;
    }
    *(undefined8 *)(this + 0x50) = 2;
    iVar7 = local_78[0] + uVar5;
    *(long *)this = lVar12;
    *(undefined8 *)(this + 0x60) = 0x7fffffff00000000;
    *(long *)(this + 0x48) = lVar9;
    *(int *)(this + 0x58) = iVar7;
    *(uint *)(this + 0x5c) = local_5c;
    *(undefined8 *)(this + 0x6c) = 0;
    uVar6 = DensityMap::getPolygonRoundingMode();
    *(undefined4 *)(this + 0x38) = 0;
    *(int *)(this + 0x3c) = iVar7;
    *(undefined4 *)(this + 0x20) = uVar6;
    uVar11 = 1;
    *(uint *)(this + 0x40) = uVar14;
    *(uint *)(this + 0x44) = uVar5;
    *(long *)(this + 0x28) = lVar17;
    *(undefined8 *)(this + 0x30) = 0;
  }
LAB_00765c08:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


