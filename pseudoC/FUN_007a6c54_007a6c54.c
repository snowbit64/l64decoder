// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6c54
// Entry Point: 007a6c54
// Size: 208 bytes
// Signature: undefined FUN_007a6c54(void)


void FUN_007a6c54(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  Logger *this;
  uint uVar3;
  
  lVar2 = RawTransformGroup::getPhysicsObject();
  uVar3 = *(uint *)(lVar2 + 8);
  if ((uVar3 & 0xb) == 8) {
    if (*param_2 == '\0') {
      uVar3 = uVar3 & 0xfffffdff;
    }
    else {
      uVar3 = uVar3 & 0xfffff9ff | 0x200;
    }
    *(uint *)(lVar2 + 8) = uVar3;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007a6ce4 to 007a6ceb has its CatchHandler @ 007a6d34 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 007a6cf0 to 007a6cf3 has its CatchHandler @ 007a6d24 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Failed to call setIsCompound on \'%s\'. This is only allowed for non-added rigid bodies.\n"
                      ,*(undefined8 *)(param_1 + 8));
  }
  return;
}


