// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainProceduralPlacementIndexMaskOption
// Entry Point: 0093b624
// Size: 408 bytes
// Signature: undefined __cdecl startTerrainProceduralPlacementIndexMaskOption(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainProceduralPlacementIndexMaskOption(void*, char const*, char
   const**) */

void I3DSceneGraphFactory::startTerrainProceduralPlacementIndexMaskOption
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *__s;
  char *pcVar4;
  ProceduralPlacementManager *this;
  size_t __n;
  void *__dest;
  ulong uVar5;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __s = (char *)ExpatUtil::getAttr("name",param_3);
  pcVar4 = (char *)ExpatUtil::getAttr("index",param_3);
  if ((__s == (char *)0x0) || (pcVar4 == (char *)0x0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0093b780 to 0093b78b has its CatchHandler @ 0093b7bc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Missing I3D attribute \'name\', \'index\', for procedural placement indexmask option\n"
                     );
    goto LAB_0093b73c;
  }
  uVar2 = StringUtil::strtoint(pcVar4);
  this = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0093b708;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_70 = uVar5 | 1;
    local_68 = __n;
    local_60 = __dest;
LAB_0093b708:
    memcpy(__dest,__s,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0093b71c to 0093b72b has its CatchHandler @ 0093b7d4 */
  ProceduralPlacementManager::addOptionToLastIndexMask(this,uVar2,(basic_string *)&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0093b73c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


