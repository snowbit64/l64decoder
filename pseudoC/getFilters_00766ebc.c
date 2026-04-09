// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilters
// Entry Point: 00766ebc
// Size: 732 bytes
// Signature: undefined __thiscall getFilters(DensityMapModifierLua * this, MethodInvocation * param_1, uint param_2, char * param_3, DensityMapFilter * * param_4, DensityMapFilter * * param_5, DensityMapFilter * * param_6)


/* DensityMapModifierLua::getFilters(MethodInvocation*, unsigned int, char const*,
   DensityMapFilter*&, DensityMapFilter*&, DensityMapFilter*&) */

undefined8 __thiscall
DensityMapModifierLua::getFilters
          (DensityMapModifierLua *this,MethodInvocation *param_1,uint param_2,char *param_3,
          DensityMapFilter **param_4,DensityMapFilter **param_5,DensityMapFilter **param_6)

{
  DensityMapFilter *pDVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  LuauScriptSystem *this_00;
  long *plVar6;
  DensityMapFilter **ppDVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  
  *param_4 = (DensityMapFilter *)0x0;
  *param_5 = (DensityMapFilter *)0x0;
  *param_6 = (DensityMapFilter *)0x0;
  uVar11 = (ulong)param_2;
  lVar9 = 0;
  if (*(long *)this != 0) {
    lVar9 = *(long *)this + 0x58;
  }
  if (param_2 < 0xfffffffd) {
    iVar4 = *(int *)(this + 0x3c);
    iVar2 = *(int *)(this + 0x40);
    piVar8 = (int *)(param_1 + uVar11 * 0x10 + 8);
    uVar12 = uVar11;
    do {
      if (*piVar8 != 0xd) {
        if (*piVar8 != 0) {
LAB_00766fe0:
          if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 == 0)) goto LAB_00767100;
                    /* try { // try from 00767000 to 0076700b has its CatchHandler @ 0076719c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          goto LAB_0076716c;
        }
        break;
      }
      plVar6 = *(long **)(piVar8 + -2);
      if ((plVar6 == (long *)0x0) || (lVar10 = *plVar6, lVar10 == 0)) goto LAB_00766fe0;
      pcVar13 = (char *)plVar6[1];
      iVar3 = strcmp(pcVar13,"DensityMapFilter");
      if ((iVar3 != 0) && (iVar3 = strcmp(pcVar13,"PerlinNoiseFilter"), iVar3 != 0))
      goto LAB_00766fe0;
      plVar6 = (long *)(lVar10 + 8);
      if (((*plVar6 == lVar9) && (*(int *)(lVar10 + 0x18) == iVar4)) &&
         (*(int *)(lVar10 + 0x1c) == iVar2)) goto LAB_00767014;
      uVar12 = uVar12 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar12 < param_2 + 3);
  }
  if (*param_4 == (DensityMapFilter *)0x0) {
    plVar6 = (long *)(this + 0x48);
LAB_00767014:
    *param_4 = (DensityMapFilter *)plVar6;
  }
  if (param_2 < 0xfffffffd) {
    piVar8 = (int *)(param_1 + uVar11 * 0x10 + 8);
    do {
      if (*piVar8 != 0xd) {
        if (*piVar8 == 0) {
          return 1;
        }
LAB_007670f0:
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00767160 to 0076716b has its CatchHandler @ 00767198 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
LAB_0076716c:
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
LAB_00767100:
        pcVar13 = "Error: Supplied object to \'%s\' is not a valid DensityMapFilter.\n";
        puVar5 = &LogManager::getInstance()::singletonLogManager;
LAB_00767110:
        LogManager::errorf((char *)puVar5,pcVar13,param_3);
        ScriptSystemManager::getInstance();
        this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::handleInternalError(this_00,param_3);
        return 0;
      }
      plVar6 = *(long **)(piVar8 + -2);
      if ((plVar6 == (long *)0x0) || (lVar9 = *plVar6, lVar9 == 0)) goto LAB_007670f0;
      pcVar13 = (char *)plVar6[1];
      iVar4 = strcmp(pcVar13,"DensityMapFilter");
      if ((iVar4 != 0) && (iVar4 = strcmp(pcVar13,"PerlinNoiseFilter"), iVar4 != 0))
      goto LAB_007670f0;
      pDVar1 = (DensityMapFilter *)(lVar9 + 8);
      if (((*param_4 != pDVar1) && (*param_5 != pDVar1)) && (*param_6 != pDVar1)) {
        ppDVar7 = param_5;
        if ((*param_5 != (DensityMapFilter *)0x0) &&
           (ppDVar7 = param_6, *param_6 != (DensityMapFilter *)0x0)) {
          puVar5 = (undefined8 *)LogManager::getInstance();
          pcVar13 = "Error: Filter setup for \'%s\' is too complex.\n";
          goto LAB_00767110;
        }
        *ppDVar7 = pDVar1;
      }
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar11 < param_2 + 3);
  }
  return 1;
}


