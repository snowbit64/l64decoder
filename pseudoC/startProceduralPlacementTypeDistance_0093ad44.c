// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startProceduralPlacementTypeDistance
// Entry Point: 0093ad44
// Size: 528 bytes
// Signature: undefined __cdecl startProceduralPlacementTypeDistance(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startProceduralPlacementTypeDistance(void*, char const*, char const**) */

void I3DSceneGraphFactory::startProceduralPlacementTypeDistance
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  ProceduralPlacementManager *this;
  size_t __n;
  long lVar5;
  void *__dest;
  undefined8 local_78;
  size_t local_70;
  void *local_68;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)ExpatUtil::getAttr("to",param_3);
  if (pcVar3 == (char *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093aec8 to 0093aed3 has its CatchHandler @ 0093af58 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Warning: Missing I3D attribute \'to\' for procedural placement distance type\n";
  }
  else {
    local_5c = 0;
    uVar4 = ExpatUtil::getIntAttr("min",&local_5c,param_3);
    if ((uVar4 & 1) != 0) {
      this = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
      lVar5 = *(long *)((long)param_1 + 0x280);
      __n = strlen(pcVar3);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        __dest = (void *)((ulong)&local_78 | 1);
        local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
        if (__n != 0) goto LAB_0093ae7c;
      }
      else {
        uVar4 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar4);
        local_78 = uVar4 | 1;
        local_70 = __n;
        local_68 = __dest;
LAB_0093ae7c:
        memcpy(__dest,pcVar3,__n);
      }
      *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0093ae94 to 0093aea3 has its CatchHandler @ 0093af70 */
      ProceduralPlacementManager::addTypeDistance
                (this,(basic_string *)(lVar5 + 0x228),(basic_string *)&local_78,local_5c);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      goto LAB_0093ae30;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093af18 to 0093af23 has its CatchHandler @ 0093af54 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Warning: Missing I3D attribute \'min\' for procedural placement distance type\n";
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar3);
LAB_0093ae30:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


