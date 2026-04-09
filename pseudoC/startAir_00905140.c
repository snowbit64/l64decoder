// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startAir
// Entry Point: 00905140
// Size: 276 bytes
// Signature: undefined __cdecl startAir(void * param_1, char * param_2, char * * param_3)


/* I3DDynamicsPoolFactory::startAir(void*, char const*, char const**) */

void I3DDynamicsPoolFactory::startAir(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  float local_34;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)((long)param_1 + 0x290);
  pcVar4 = (char *)ExpatUtil::getAttr("velocity",param_3);
  if (((pcVar4 != (char *)0x0) &&
      (iVar3 = StringUtil::splitIntoFloats(pcVar4,&local_34,3,' '), iVar3 == 3)) &&
     ((local_34 != 0.0 || ((local_30 != 0.0 || (local_2c != 0.0)))))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00905218 to 00905223 has its CatchHandler @ 00905254 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar1 = lVar5 + 0x81;
    if ((*(byte *)(lVar5 + 0x80) & 1) != 0) {
      lVar1 = *(long *)(lVar5 + 0x90);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: \'%s\' air feature is not supported anymore. Use gravity instead.\n"
                      ,lVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


