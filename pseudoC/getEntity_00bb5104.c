// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntity
// Entry Point: 00bb5104
// Size: 344 bytes
// Signature: undefined __cdecl getEntity(uint param_1, ulonglong param_2, char * param_3, char * param_4)


/* ReflectionUtil::getEntity(unsigned int, unsigned long long, char const*, char const*) */

long ReflectionUtil::getEntity(uint param_1,ulonglong param_2,char *param_3,char *param_4)

{
  int iVar1;
  EntityRegistryManager *this;
  long lVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,param_1);
  if (lVar2 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00bb51dc to 00bb51e7 has its CatchHandler @ 00bb5260 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning (script): Unknown entity id %u for \'%s\' in method \'%s\'.\n",
                      (ulong)param_1,param_4,param_3);
  }
  else {
    if (param_2 == 0) {
      return lVar2;
    }
    if ((*(ulong *)(lVar2 + 0x10) & param_2) != 0) {
      return lVar2;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00bb5224 to 00bb522f has its CatchHandler @ 00bb525c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning (script): Entity \'%s\' for \'%s\' has invalid type in method \'%s\'.\n"
                      ,*(undefined8 *)(lVar2 + 8),param_4,param_3);
  }
  return 0;
}


