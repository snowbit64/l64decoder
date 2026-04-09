// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795234
// Entry Point: 00795234
// Size: 252 bytes
// Signature: undefined FUN_00795234(void)


void FUN_00795234(uint *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  Bt2ScenegraphPhysicsContext *this;
  Logger *this_00;
  uint local_48;
  uint uStack_44;
  uint local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = param_1[4];
  if (uVar1 < 2) {
    local_48 = param_1[8];
    uStack_44 = param_1[0xc];
    local_40 = param_1[0x10];
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueSetLightJointPosition
              (this,*param_1,uVar1,(Vector3 *)&local_48);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007952ec to 007952f3 has its CatchHandler @ 00795340 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007952f8 to 007952fb has its CatchHandler @ 00795330 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: setJointPosition, actor must be 0 or 1.\n");
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


