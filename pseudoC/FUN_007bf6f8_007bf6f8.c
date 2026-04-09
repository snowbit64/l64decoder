// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bf6f8
// Entry Point: 007bf6f8
// Size: 344 bytes
// Signature: undefined FUN_007bf6f8(void)


void FUN_007bf6f8(void **param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  Logger *this;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (0xb < *(uint3 *)((long)param_1 + 0xc)) {
    uVar1 = (uint)(*(uint3 *)((long)param_1 + 0xc) >> 1);
    if (uVar1 == uVar1 / 3 + ((uint)((ulong)uVar1 * 0xaaaaaaab >> 0x20) & 0xfffffffe)) {
      pvVar4 = *param_1;
      uVar5 = *(undefined4 *)(param_1 + 2);
      uVar6 = *(undefined4 *)(param_1 + 4);
      uVar7 = *(undefined4 *)(param_1 + 6);
      uVar8 = *(undefined4 *)(param_1 + 8);
      uVar9 = *(undefined4 *)(param_1 + 10);
      EngineManager::getInstance();
      uVar3 = Renderer::getDeferredDebugRenderer();
      VehicleCollisionDistanceUtil::debugDrawCollisionGeometry
                (uVar5,uVar6,uVar7,uVar8,uVar9,(ulong)uVar1 / 3,pvVar4,uVar3);
      pvVar4 = *param_1;
      goto joined_r0x007bf7e0;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007bf810 to 007bf817 has its CatchHandler @ 007bf860 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 007bf81c to 007bf81f has its CatchHandler @ 007bf850 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "getVehicleCollisionDistance: invalid array size for \'positions\' parameter.\n"
                    );
  pvVar4 = *param_1;
joined_r0x007bf7e0:
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete__(pvVar4);
  return;
}


