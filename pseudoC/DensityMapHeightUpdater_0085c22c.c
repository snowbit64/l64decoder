// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DensityMapHeightUpdater
// Entry Point: 0085c22c
// Size: 552 bytes
// Signature: undefined __thiscall DensityMapHeightUpdater(DensityMapHeightUpdater * this, char * param_1, TerrainFillDataPlane * param_2, uint param_3, uint param_4, uint param_5, bool param_6)


/* DensityMapHeightUpdater::DensityMapHeightUpdater(char const*, TerrainFillDataPlane*, unsigned
   int, unsigned int, unsigned int, bool) */

void __thiscall
DensityMapHeightUpdater::DensityMapHeightUpdater
          (DensityMapHeightUpdater *this,char *param_1,TerrainFillDataPlane *param_2,uint param_3,
          uint param_4,uint param_5,bool param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  UpdateManager *this_00;
  long lVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  
  Entity::Entity((Entity *)this,param_1,param_6);
  this[0x30] = (DensityMapHeightUpdater)0x0;
  *(TerrainFillDataPlane **)(this + 0xa40) = param_2;
  uVar2 = *(uint *)(param_2 + 0x8c);
  *(undefined8 *)(this + 0xa38) = 0;
  uVar7 = *(undefined4 *)(param_2 + 0x90);
  *(uint *)(this + 0xa48) = param_3;
  *(undefined ***)(this + 0x20) = &PTR__DensityMapHeightUpdater_00fdbda8;
  *(undefined ***)this = &PTR__DensityMapHeightUpdater_00fdbd70;
  *(undefined ***)(this + 0x28) = &PTR__DensityMapHeightUpdater_00fdbdd8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x100000000000000;
  fVar6 = (float)(ulong)(uint)~(-1 << (ulong)(uVar2 & 0x1f));
  uVar5 = param_4;
  if (6 < param_4) {
    uVar5 = 7;
  }
  *(uint *)(this + 0xa4c) = uVar5;
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 0x28;
    *(undefined4 *)(this + lVar4 + 0x34) = uVar7;
    *(undefined8 *)(this + lVar4 + 0x38) = 0;
    *(undefined8 *)(this + lVar4 + 0x4c) = 0;
    *(undefined4 *)(this + lVar4 + 0x40) = 0;
    *(undefined4 *)(this + lVar4 + 0x54) = 0;
    *(float *)(this + lVar4 + 0x44) = fVar6;
    *(undefined4 *)(this + lVar4 + 0x48) = uVar7;
    *(float *)(this + lVar4 + 0x58) = fVar6;
    lVar4 = lVar1;
  } while (lVar1 != 0xa00);
  uVar5 = *(uint *)(param_2 + 0x88);
  uVar2 = uVar2 + uVar5;
  if (param_3 <= uVar5) {
    uVar5 = param_3;
  }
  if (uVar2 <= param_4 + param_3) {
    uVar2 = param_4 + param_3;
  }
                    /* try { // try from 0085c31c to 0085c323 has its CatchHandler @ 0085c468 */
  DensityMap::addDirtyListener
            (*(DensityMap **)(param_2 + 0x50),(DirtyListener *)(this + 0x20),false,uVar5,
             uVar2 - uVar5);
  FUN_00f276d0(1,*(long *)(*(long *)(this + 0xa40) + 0x50) + 8);
  this[0xa50] = (DensityMapHeightUpdater)0x0;
  *(undefined8 *)(this + 0xa5c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa54) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa6c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa64) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa7c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa74) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa8c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa84) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa9c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa94) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xaac) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xaa4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xabc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xab4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xacc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xac4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xadc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xad4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xaec) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xae4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xafc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xaf4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb0c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb04) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb1c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb14) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb2c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb24) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb3c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb34) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb4c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb44) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb5c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb54) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb6c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb64) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb7c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb74) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb8c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb84) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb9c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb94) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbac) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xba4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbbc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbb4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbcc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbc4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbdc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbd4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbec) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbe4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbfc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xbf4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc0c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc04) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc1c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc14) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc2c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc24) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc3c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc34) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc4c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc44) = 0xffffffffffffffff;
  if (10 < *(uint *)(*(long *)(this + 0xa40) + 0x8c)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0085c41c to 0085c427 has its CatchHandler @ 0085c454 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 0085c3b0 to 0085c3f7 has its CatchHandler @ 0085c468 */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Creating DensityMapHeightUpdater with too many height channels (%u). Maximum supported is 10.\n"
                      ,(ulong)*(uint *)(*(long *)(this + 0xa40) + 0x8c));
  }
  *(undefined4 *)(this + 0xc64) = 1;
  *(undefined8 *)(this + 0xc68) = 0;
  *(undefined8 *)(this + 0xc78) = 0;
  *(undefined8 *)(this + 0xc70) = 0;
  *(undefined4 *)(this + 0xc80) = 0;
  *(undefined8 *)(this + 0xc5c) = 0;
  *(undefined8 *)(this + 0xc54) = 0xffffffff;
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_00,(Updateable *)(this + 0x28),false);
  return;
}


