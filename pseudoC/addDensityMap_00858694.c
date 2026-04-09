// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDensityMap
// Entry Point: 00858694
// Size: 624 bytes
// Signature: undefined __thiscall addDensityMap(DensityMapSyncer * this, DensityMap * param_1)


/* DensityMapSyncer::addDensityMap(DensityMap*) */

void __thiscall DensityMapSyncer::addDensityMap(DensityMapSyncer *this,DensityMap *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Logger *pLVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(this + 0x28);
  lVar1 = *(long *)(this + 0x30) - lVar10;
  if (lVar1 == 0) {
    if (*(long *)(this + 0x40) != *(long *)(this + 0x48)) goto LAB_00858750;
  }
  else {
    uVar9 = 0;
    uVar8 = (lVar1 >> 4) * -0x5555555555555555;
    do {
      if (*(DensityMap **)(lVar10 + uVar9 * 0x30) == param_1) goto LAB_00858834;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 <= uVar8 && uVar8 - uVar9 != 0);
    if (*(long *)(this + 0x40) != *(long *)(this + 0x48)) {
LAB_00858750:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00858870 to 00858877 has its CatchHandler @ 0085891c */
        pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 0085887c to 0085887f has its CatchHandler @ 0085890c */
        Logger::Logger(pLVar7);
        LogManager::getInstance()::singletonLogManager = pLVar7;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: All density maps to sync need to be added before any connections are added.\n"
                        );
      goto LAB_00858834;
    }
    if (0x1f < uVar8) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 008588c0 to 008588c7 has its CatchHandler @ 00858908 */
        pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 008588cc to 008588cf has its CatchHandler @ 00858904 */
        Logger::Logger(pLVar7);
        LogManager::getInstance()::singletonLogManager = pLVar7;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Too many density maps to sync. Maximum is %u.\n",0x20);
      goto LAB_00858834;
    }
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  FUN_00858934(this + 0x28,&local_80);
  lVar10 = *(long *)(this + 0x30);
  iVar6 = BaseTerrain::getHeightMapSize();
  fVar11 = (float)BaseTerrain::getUnitsPerPixel();
  *(DensityMap **)(lVar10 + -0x30) = param_1;
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(this + 100));
  uVar8 = DensityMap::getSquareSize();
  *(float *)(lVar10 + -0x20) =
       (fVar11 * (float)(ulong)(iVar6 - 1) * fVar12) / (float)(uVar8 & 0xffffffff);
  uVar4 = DensityMap::getSquareSize();
  uVar5 = *(uint *)(this + 100);
  *(undefined8 *)(lVar10 + -0x18) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(undefined4 *)(lVar10 + -8) = 0;
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar4 / uVar5;
  }
  *(uint *)(lVar10 + -0x28) = uVar2 * uVar2;
  *(uint *)(lVar10 + -0x24) = uVar2;
  uVar5 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  DensityMap::addDirtyListener(param_1,(DirtyListener *)(this + 0x20),false,0,uVar5);
  FUN_00f276d0(1,param_1 + 8);
LAB_00858834:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


