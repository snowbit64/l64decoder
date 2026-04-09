// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createMultiLayer
// Entry Point: 0076b4ec
// Size: 200 bytes
// Signature: undefined __thiscall createMultiLayer(FoliageTransformGroupConstructor * this, MethodInvocation * param_1)


/* FoliageTransformGroupConstructor::createMultiLayer(MethodInvocation*) */

void __thiscall
FoliageTransformGroupConstructor::createMultiLayer
          (FoliageTransformGroupConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  int iVar2;
  EntityRegistryManager *this_00;
  long lVar3;
  Logger *this_01;
  
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this_00,*(uint *)param_1);
  if ((lVar3 == 0) || (-1 < *(char *)(lVar3 + 0x15))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0076b574 to 0076b57b has its CatchHandler @ 0076b5c4 */
      this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 0076b580 to 0076b583 has its CatchHandler @ 0076b5b4 */
      Logger::Logger(this_01);
      LogManager::getInstance()::singletonLogManager = this_01;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: FoliageTransformGroup: bad terrain detail node.\n");
  }
  else {
    uVar1 = FoliageSystemDesc::createMultiLayer
                      ((FoliageSystemDesc *)this,*(DensityMap **)(lVar3 + 0x50));
    *(undefined4 *)(param_1 + 0x100) = uVar1;
    *(undefined4 *)(param_1 + 0x108) = 1;
  }
  return;
}


