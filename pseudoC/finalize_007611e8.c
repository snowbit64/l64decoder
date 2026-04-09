// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalize
// Entry Point: 007611e8
// Size: 216 bytes
// Signature: undefined __thiscall finalize(FieldCropsUpdaterConstructor * this, MethodInvocation * param_1)


/* FieldCropsUpdaterConstructor::finalize(MethodInvocation*) */

void __thiscall
FieldCropsUpdaterConstructor::finalize(FieldCropsUpdaterConstructor *this,MethodInvocation *param_1)

{
  int iVar1;
  FieldCropsUpdater *this_00;
  undefined4 uVar2;
  
  if (*(long *)(this + 8) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00761288 to 00761293 has its CatchHandler @ 007612c0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    Logger::infoMessage(LogManager::getInstance()::singletonLogManager,
                        "FieldCropsUpdaterConstructor::finalize: not all required parameters set!\n"
                        ,0x49);
    uVar2 = 0;
  }
  else {
    this_00 = (FieldCropsUpdater *)operator_new(0xd28);
                    /* try { // try from 00761218 to 00761223 has its CatchHandler @ 007612d8 */
    FieldCropsUpdater::FieldCropsUpdater
              (this_00,*(char **)param_1,(FieldCropsUpdaterDesc *)(this + 8),true);
    uVar2 = *(undefined4 *)(this_00 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


