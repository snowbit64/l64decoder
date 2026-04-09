// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadCostMap
// Entry Point: 0072d970
// Size: 1452 bytes
// Signature: undefined __thiscall loadCostMap(VehicleNavigationMapGenerator * this, char * param_1)


/* VehicleNavigationMapGenerator::loadCostMap(char const*) */

undefined8 __thiscall
VehicleNavigationMapGenerator::loadCostMap(VehicleNavigationMapGenerator *this,char *param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  
  plVar8 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if ((plVar8 == (long *)0x0) || (uVar9 = (**(code **)(*plVar8 + 0x10))(), (uVar9 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 0072de0c to 0072de17 has its CatchHandler @ 0072df28 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Error: Failed to open file \'%s\' for reading.\n",param_1);
  }
  else {
    uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
    puVar10 = (ushort *)operator_new__((ulong)uVar6);
    iVar7 = (**(code **)(*plVar8 + 0x28))(plVar8,puVar10,uVar6);
    if (iVar7 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 0072de9c to 0072dea7 has its CatchHandler @ 0072df20 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Error: Failed to read cost map data from file \'%s\'.\n",param_1);
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    else {
      (**(code **)(*plVar8 + 8))(plVar8);
      iVar7 = strncmp((char *)puVar10,COST_MAP_MARKER,4);
      if (iVar7 == 0) {
        uVar19 = *(uint *)(puVar10 + 4);
        puVar11 = (ushort *)operator_new__((ulong)uVar19);
        ZLIBCompressionUtil::decompress((uchar *)(puVar10 + 6),uVar6 - 0xc,(uchar *)puVar11,uVar19);
        operator_delete__(puVar10);
        uVar2 = *puVar11;
        lVar15 = *(long *)(this + 0x108);
        fVar20 = *(float *)(lVar15 + 0xc0);
        if (*(uint *)(lVar15 + 0xc4) == (int)(fVar20 * (float)(ulong)uVar2)) {
          uVar3 = puVar11[1];
          if ((*(uint *)(lVar15 + 200) == (int)(fVar20 * (float)(ulong)uVar3)) &&
             (uVar2 == *(ushort *)(lVar15 + 0x24))) {
            uVar4 = puVar11[2];
            if ((uint)uVar4 == (int)((float)(ulong)*(uint *)(lVar15 + 0xc4) / (fVar20 * 64.0))) {
              uVar5 = puVar11[3];
              if ((uint)uVar5 == (int)((float)(ulong)*(uint *)(lVar15 + 200) / (fVar20 * 64.0))) {
                puVar10 = puVar11 + 4;
                VehicleNavigationPlanner::pausePlanning();
                this[0x148] = (VehicleNavigationMapGenerator)0x1;
                Mutex::enterCriticalSection();
                lVar13 = *(long *)(this + 0x70);
                lVar15 = *(long *)(this + 0x78);
                lVar17 = *(long *)(this + 0x80);
                *(undefined *)(*(long *)(this + 0x68) + 0x3a) = 1;
                lVar12 = *(long *)(this + 0x88);
                *(undefined *)(lVar13 + 0x3a) = 1;
                lVar13 = *(long *)(this + 0x90);
                *(undefined *)(lVar15 + 0x3a) = 1;
                lVar16 = *(long *)(this + 0x98);
                *(undefined *)(lVar17 + 0x3a) = 1;
                lVar18 = *(long *)(this + 0xa0);
                *(undefined *)(lVar12 + 0x3a) = 1;
                lVar15 = *(long *)(this + 0xa8);
                *(undefined *)(lVar13 + 0x3a) = 1;
                lVar13 = *(long *)(this + 0xb0);
                *(undefined *)(lVar16 + 0x3a) = 1;
                lVar17 = *(long *)(this + 0xb8);
                *(undefined *)(lVar18 + 0x3a) = 1;
                lVar12 = *(long *)(this + 0xc0);
                *(undefined *)(lVar15 + 0x3a) = 1;
                lVar15 = *(long *)(this + 200);
                *(undefined *)(lVar13 + 0x3a) = 1;
                lVar13 = *(long *)(this + 0xd0);
                *(undefined *)(lVar17 + 0x3a) = 1;
                lVar17 = *(long *)(this + 0xd8);
                *(undefined *)(lVar12 + 0x3a) = 1;
                lVar12 = *(long *)(this + 0xe0);
                *(undefined *)(lVar15 + 0x3a) = 1;
                lVar15 = *(long *)(this + 0xe8);
                *(undefined *)(lVar13 + 0x3a) = 1;
                lVar13 = *(long *)(this + 0xf0);
                *(undefined *)(lVar17 + 0x3a) = 1;
                *(undefined *)(lVar12 + 0x3a) = 1;
                lVar17 = *(long *)(this + 0xf8);
                *(undefined *)(lVar15 + 0x3a) = 1;
                lVar15 = *(long *)(this + 0x100);
                *(undefined *)(lVar13 + 0x3a) = 1;
                *(undefined *)(lVar17 + 0x3a) = 1;
                *(undefined *)(lVar15 + 0x3a) = 1;
                Mutex::leaveCriticalSection();
                std::__ndk1::
                deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
                ::resize((deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
                          *)(this + 0x150),0);
                if (uVar4 != 0) {
                  uVar6 = 0;
                  do {
                    if (uVar5 != 0) {
                      uVar19 = 0;
                      lVar15 = 0;
                      do {
                        cVar1 = *(char *)((long)puVar10 + lVar15);
                        if (cVar1 != '\0') {
                          lVar13 = *(long *)(this + 0x158);
                          uVar9 = 0;
                          if (*(long *)(this + 0x160) - lVar13 != 0) {
                            uVar9 = (*(long *)(this + 0x160) - lVar13) * 0x80 - 1;
                          }
                          uVar14 = *(long *)(this + 0x178) + *(long *)(this + 0x170);
                          if (uVar9 == uVar14) {
                            std::__ndk1::
                            deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
                            ::__add_back_capacity();
                            lVar13 = *(long *)(this + 0x158);
                            uVar14 = *(long *)(this + 0x170) + *(long *)(this + 0x178);
                          }
                          *(uint *)(*(long *)(lVar13 + (uVar14 >> 7 & 0x1fffffffffffff8)) +
                                   (uVar14 & 0x3ff) * 4) = uVar19 | uVar6;
                          *(long *)(this + 0x178) = *(long *)(this + 0x178) + 1;
                        }
                        uVar19 = uVar19 + 0x10000;
                        iVar7 = (int)lVar15;
                        lVar15 = lVar15 + 1;
                        *(bool *)(*(long *)(*(long *)(this + 0x108) + 0xb8) +
                                 (ulong)(uVar6 + *(int *)(*(long *)(this + 0x108) + 0xcc) * iVar7))
                             = cVar1 != '\0';
                      } while ((uint)uVar5 != (uint)lVar15);
                      puVar10 = (ushort *)((long)puVar10 + lVar15);
                    }
                    uVar6 = uVar6 + 1;
                  } while (uVar6 != uVar4);
                }
                memcpy(*(void **)(*(long *)(this + 0x108) + 0x10),puVar10,
                       (ulong)uVar3 * (ulong)uVar2);
                operator_delete__(puVar11);
                uVar6 = (uint)uVar4 * 0x40 - 1;
                uVar19 = (uint)uVar5 * 0x40 - 1;
                VehicleNavigationPlanner::invalidateGridArea
                          (*(VehicleNavigationPlanner **)(this + 0x138),0,uVar6,0,uVar19);
                lVar15 = *(long *)(this + 0x120);
                if (*(long *)(this + 0x128) != lVar15) {
                  uVar9 = 0;
                  do {
                    VehicleNavigationAgentEntity::invalidateGridArea
                              (*(VehicleNavigationAgentEntity **)(lVar15 + uVar9 * 8),0,uVar6,0,
                               uVar19);
                    lVar15 = *(long *)(this + 0x120);
                    uVar9 = (ulong)((int)uVar9 + 1);
                  } while (uVar9 < (ulong)(*(long *)(this + 0x128) - lVar15 >> 3));
                  return 1;
                }
                return 1;
              }
            }
          }
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 0072dee4 to 0072deef has its CatchHandler @ 0072df1c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Error: Cost map from file \'%s\' has wrong dimensions for the current map.\n"
                          ,param_1);
        puVar10 = puVar11;
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0
           )) {
                    /* try { // try from 0072de54 to 0072de5f has its CatchHandler @ 0072df24 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Error: Cost map file is invalid (wrong marker) from file \'%s\'.\n",
                          param_1);
      }
    }
    operator_delete__(puVar10);
  }
  return 0;
}


