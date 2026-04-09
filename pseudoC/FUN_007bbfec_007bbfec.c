// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbfec
// Entry Point: 007bbfec
// Size: 244 bytes
// Signature: undefined FUN_007bbfec(void)


void FUN_007bbfec(FoliageBendingSystem *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  EntityRegistryManager *this;
  TransformGroup *pTVar3;
  Logger *this_00;
  float fVar4;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0.0;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar3 = (TransformGroup *)EntityRegistryManager::getEntityById(this,(uint)param_2[0x14]);
  if ((pTVar3 == (TransformGroup *)0x0) || (((byte)pTVar3[0x10] >> 5 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007bc0a0 to 007bc0a7 has its CatchHandler @ 007bc0f0 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007bc0ac to 007bc0af has its CatchHandler @ 007bc0e0 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Invalid transform group passed to createFoliageBendingRectangle\n");
  }
  else {
    fVar1 = (float)FoliageBendingSystem::createRectangle
                             (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],
                              pTVar3);
    if (fVar1 != -NAN) {
      fVar4 = 1.401298e-45;
      param_2[0x40] = fVar1;
      goto LAB_007bc050;
    }
  }
  fVar4 = 0.0;
  *(undefined8 *)(param_2 + 0x40) = 0;
LAB_007bc050:
  param_2[0x42] = fVar4;
  return;
}


