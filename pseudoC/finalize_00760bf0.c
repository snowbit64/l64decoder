// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalize
// Entry Point: 00760bf0
// Size: 284 bytes
// Signature: undefined __thiscall finalize(TerrainDetailDistanceConstructor * this, MethodInvocation * param_1)


/* TerrainDetailDistanceConstructor::finalize(MethodInvocation*) */

void __thiscall
TerrainDetailDistanceConstructor::finalize
          (TerrainDetailDistanceConstructor *this,MethodInvocation *param_1)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this_00;
  long lVar3;
  Logger *this_01;
  
  uVar1 = *(uint *)param_1;
  param_1[0x100] = (MethodInvocation)0x0;
  *(undefined4 *)(param_1 + 0x108) = 3;
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this_00,uVar1);
  if ((lVar3 == 0) || (-1 < *(char *)(lVar3 + 0x15))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00760ccc to 00760cd3 has its CatchHandler @ 00760d1c */
      this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 00760cd8 to 00760cdb has its CatchHandler @ 00760d0c */
      Logger::Logger(this_01);
      LogManager::getInstance()::singletonLogManager = this_01;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Terrain detail distance invalid detail id %u.\n",(ulong)uVar1);
  }
  else {
    uVar1 = ~(-1 << (ulong)(*(uint *)(this + 0xc) & 0x1f));
    TerrainLodTexture::addDynamicLayer
              (*(TerrainLodTexture **)(*(long *)(lVar3 + 0x40) + 0x248),
               *(DensityMap **)(lVar3 + 0x50),*(uint *)(lVar3 + 0x80),
               *(int *)(this + 8) + *(int *)(lVar3 + 0x7c),*(uint *)(this + 0xc),uVar1,
               *(DistanceTextureDesc **)(this + 0x10),false,uVar1,*(uchar **)(this + 0x18));
    param_1[0x100] = (MethodInvocation)0x1;
    *(undefined4 *)(param_1 + 0x108) = 3;
  }
  return;
}


