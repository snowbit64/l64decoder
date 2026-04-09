// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execute
// Entry Point: 00c00dd4
// Size: 1344 bytes
// Signature: undefined __thiscall execute(MapFold * this, void * * param_1, uint param_2, Config * param_3)


/* MapFold::execute(void**, unsigned int, MapFold::Config const&) */

uint __thiscall MapFold::execute(MapFold *this,void **param_1,uint param_2,Config *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  void *pvVar9;
  long lVar10;
  code **ppcVar11;
  char *pcVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  ulong *this_00;
  ulong uVar19;
  undefined8 uVar20;
  float fVar21;
  double dVar22;
  
  uVar5 = *(uint *)(param_3 + 0x10);
  if ((uVar5 == 0) || (uVar4 = EnvUtil::getNumOfProcessors(), uVar4 < uVar5)) {
    uVar5 = EnvUtil::getNumOfProcessors();
  }
  uVar4 = param_2;
  if (uVar5 <= param_2) {
    uVar4 = uVar5;
  }
  uVar13 = (ulong)uVar4;
  puVar8 = (ulong *)operator_new__(uVar13 * 0x48 + 8);
  this_00 = puVar8 + 1;
  *puVar8 = uVar13;
  if (uVar4 == 0) {
    pvVar9 = operator_new__(uVar13 << 5);
LAB_00c00f5c:
    *(uint *)(this + 8) = param_2;
  }
  else {
    lVar17 = 0;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = ((param_2 + uVar4) - 1) / uVar4;
    }
    do {
                    /* try { // try from 00c00e70 to 00c00e73 has its CatchHandler @ 00c01334 */
      Thread::Thread((Thread *)((long)puVar8 + lVar17 + 8));
      lVar17 = lVar17 + 0x48;
    } while (uVar13 * 0x48 - lVar17 != 0);
    pvVar9 = operator_new__(uVar13 << 5);
    if (uVar4 == 0) goto LAB_00c00f5c;
    uVar19 = 0;
    uVar16 = 0;
    plVar18 = (long *)((long)pvVar9 + 0x10);
    do {
      ppcVar11 = *(code ***)this;
      plVar18[-2] = (long)this;
      lVar17 = (**ppcVar11)(this,uVar19 & 0xffffffff);
      *(undefined *)((long)plVar18 + 0xc) = 1;
      uVar1 = uVar5;
      if (param_2 - uVar16 <= uVar5) {
        uVar1 = param_2 - uVar16;
      }
      uVar19 = uVar19 + 1;
      plVar18[-1] = lVar17;
      *plVar18 = (long)(param_1 + uVar16);
      uVar16 = uVar1 + uVar16;
      *(uint *)(plVar18 + 1) = uVar1;
      plVar18 = plVar18 + 4;
    } while (uVar13 != uVar19);
    *(uint *)(this + 8) = param_2;
    if (uVar4 != 0) {
      uVar19 = 0;
      do {
        Thread::start((Thread *)this_00,staticThreadExecuteFunction,(void *)((long)pvVar9 + uVar19),
                      0xffffffff,(char *)0x0,2,0x8000);
        this_00 = this_00 + 9;
        uVar19 = uVar19 + 0x20;
      } while (uVar13 << 5 != uVar19);
    }
  }
  piVar14 = (int *)(this + 8);
  lVar17 = Watch::getCurrentTicks();
  if (*param_3 != (Config)0x0) {
    if (*piVar14 != 0) {
      uVar5 = 0;
      do {
        ThreadUtil::usleep(100000);
        iVar7 = *piVar14;
        uVar16 = 0;
        if (param_2 != 0) {
          uVar16 = ((param_2 - iVar7) * 100) / param_2;
        }
        if (uVar16 != uVar5) {
          lVar10 = Watch::getCurrentTicks();
          dVar22 = (double)Watch::convertTicksToMs(lVar10 - lVar17);
          iVar2 = *piVar14;
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 00c01054 to 00c0105f has its CatchHandler @ 00c0131c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          fVar21 = ((float)dVar22 * 1000.0) / (float)(ulong)(param_2 - iVar7);
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar21,
                            (double)((fVar21 * (float)iVar2) / 1000000.0),
                            "%s: %u%% complete (%f us/item) ETA %f s\n",*(undefined8 *)(param_3 + 8)
                            ,(ulong)uVar16);
          uVar5 = uVar16;
        }
      } while (*piVar14 != 0);
      if (uVar5 == 100) goto LAB_00c01104;
    }
    lVar10 = Watch::getCurrentTicks();
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00c012dc to 00c012e7 has its CatchHandler @ 00c01314 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar20 = *(undefined8 *)(param_3 + 8);
    dVar22 = (double)Watch::convertTicksToMs(lVar10 - lVar17);
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)(((float)dVar22 * 1000.0) / (float)(ulong)param_2),
                      "%s: 100%% complete (%f us/item)\n",uVar20);
  }
LAB_00c01104:
  uVar19 = uVar13;
  if (uVar4 != 0) {
    do {
      Thread::join();
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  for (lVar10 = *puVar8 * 0x48; lVar10 != 0; lVar10 = lVar10 + -0x48) {
    Thread::~Thread((Thread *)((long)puVar8 + lVar10 + -0x40));
  }
  operator_delete__(puVar8);
  if (uVar4 == 0) {
    operator_delete__(pvVar9);
  }
  else {
    bVar3 = 1;
    pcVar12 = (char *)((long)pvVar9 + 0x1c);
    uVar19 = uVar13;
    do {
      uVar19 = uVar19 - 1;
      bVar3 = *pcVar12 != '\0' & bVar3;
      pcVar12 = pcVar12 + 0x20;
    } while (uVar19 != 0);
    if (uVar4 != 0) {
      puVar15 = (undefined8 *)((long)pvVar9 + 8);
      do {
        if ((bVar3 & 1) == 0) {
          bVar3 = 0;
        }
        else {
          bVar3 = (**(code **)(*(long *)this + 0x18))(this,*puVar15);
        }
        (**(code **)(*(long *)this + 8))(this,*puVar15);
        uVar13 = uVar13 - 1;
        puVar15 = puVar15 + 4;
      } while (uVar13 != 0);
    }
    operator_delete__(pvVar9);
    if ((bVar3 & 1) == 0) {
      uVar5 = 0;
      goto LAB_00c011f0;
    }
  }
  uVar5 = (**(code **)(*(long *)this + 0x20))(this);
LAB_00c011f0:
  if (*param_3 != (Config)0x0) {
    lVar10 = Watch::getCurrentTicks();
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00c01294 to 00c0129f has its CatchHandler @ 00c01318 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar20 = *(undefined8 *)(param_3 + 8);
    dVar22 = (double)Watch::convertTicksToMs(lVar10 - lVar17);
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)((float)dVar22 / 1000.0),"%s took %f s\n",uVar20);
  }
  return uVar5 & 1;
}


