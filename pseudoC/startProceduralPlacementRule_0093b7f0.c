// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startProceduralPlacementRule
// Entry Point: 0093b7f0
// Size: 940 bytes
// Signature: undefined __cdecl startProceduralPlacementRule(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startProceduralPlacementRule(void*, char const*, char const**) */

void I3DSceneGraphFactory::startProceduralPlacementRule(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  ProceduralPlacementManager *this;
  size_t __n;
  long lVar5;
  void *__dest;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  bool local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)ExpatUtil::getAttr("name",param_3);
  if (pcVar3 == (char *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093ba38 to 0093ba43 has its CatchHandler @ 0093bbac */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Warning: Missing I3D attribute \'name\' for procedural placement rule\n";
  }
  else {
    local_5c[0] = true;
    uVar4 = ExpatUtil::getBoolAttr("isMainRule",local_5c,param_3);
    if ((uVar4 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 0093ba80 to 0093ba8b has its CatchHandler @ 0093bba8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar3 = "Warning: Missing I3D attribute \'isMainRule\' for procedural placement rule\n";
    }
    else {
      local_60 = 0;
      uVar4 = ExpatUtil::getUIntAttr("objectMinDistance",&local_60,param_3);
      if ((uVar4 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 0093bac8 to 0093bad3 has its CatchHandler @ 0093bba4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar3 = 
        "Warning: Missing I3D attribute \'objectMinDistance\' for procedural placement rule\n";
      }
      else {
        local_64 = 0;
        uVar4 = ExpatUtil::getUIntAttr("slopeStart",&local_64,param_3);
        if ((uVar4 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar2 != 0)) {
                    /* try { // try from 0093bb10 to 0093bb1b has its CatchHandler @ 0093bba0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar3 = "Warning: Missing I3D attribute \'slopeStart\' for procedural placement rule\n";
        }
        else {
          local_68 = 0;
          uVar4 = ExpatUtil::getUIntAttr("slopeEnd",&local_68,param_3);
          if ((uVar4 & 1) != 0) {
            this = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
            __n = strlen(pcVar3);
            if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n < 0x17) {
              __dest = (void *)((ulong)&local_80 | 1);
              local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
              if (__n != 0) goto LAB_0093b9d8;
            }
            else {
              uVar4 = __n + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar4);
              local_80 = uVar4 | 1;
              local_78 = __n;
              local_70 = __dest;
LAB_0093b9d8:
              memcpy(__dest,pcVar3,__n);
            }
            *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0093b9f8 to 0093ba03 has its CatchHandler @ 0093bbc4 */
            ProceduralPlacementManager::addRule
                      (this,(basic_string *)&local_80,local_5c[0],local_60,local_64,local_68);
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
            lVar5 = ProceduralPlacementManager::getInstance();
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(lVar5 + 0xf0),(basic_string *)((long)param_1 + 0x1f8));
            goto LAB_0093b98c;
          }
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar2 != 0)) {
                    /* try { // try from 0093bb60 to 0093bb6b has its CatchHandler @ 0093bb9c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar3 = "Warning: Missing I3D attribute \'slopeEnd\' for procedural placement rule\n";
        }
      }
    }
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar3);
LAB_0093b98c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


