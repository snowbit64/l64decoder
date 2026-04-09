// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startProceduralPlacementScript
// Entry Point: 0093bbe0
// Size: 364 bytes
// Signature: undefined __cdecl startProceduralPlacementScript(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startProceduralPlacementScript(void*, char const*, char const**) */

void I3DSceneGraphFactory::startProceduralPlacementScript
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  char *__s;
  basic_string *pbVar3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __s = (char *)ExpatUtil::getAttr("name",param_3);
  if (__s == (char *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093bd10 to 0093bd1b has its CatchHandler @ 0093bd4c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Missing I3D attribute \'name\' for procedural placement script\n");
    goto LAB_0093bcd0;
  }
  pbVar3 = (basic_string *)ProceduralPlacementManager::getInstance();
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0093bca0;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
LAB_0093bca0:
    memcpy(__dest,__s,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0093bcb4 to 0093bcbf has its CatchHandler @ 0093bd64 */
  ProceduralPlacementManager::addScriptToLastRule(pbVar3);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0093bcd0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


