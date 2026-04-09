// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init1
// Entry Point: 0074f0e8
// Size: 1840 bytes
// Signature: undefined __thiscall init1(EngineManager * this, EngineManagerDesc * param_1)


/* EngineManager::init1(EngineManagerDesc&) */

void __thiscall EngineManager::init1(EngineManager *this,EngineManagerDesc *param_1)

{
  EngineManager *pEVar1;
  long lVar2;
  int iVar3;
  LocalizationManager *this_00;
  void *pvVar4;
  ulong uVar5;
  ScriptSystemManager *this_01;
  long lVar6;
  ResourceManager *pRVar7;
  undefined8 *puVar8;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (LocalizationManager *)LocalizationManager::getInstance();
  LocalizationManager::loadData<86,24>
            (this_00,(LANGUAGE_TYPE *)EngineLocalizationData::m_languages,
             (char **)EngineLocalizationData::m_pData);
  *(undefined4 *)(this + 0x314) = *(undefined4 *)(param_1 + 100);
  pvVar4 = (void *)ThreadUtil::getCurrentThreadHandle();
  ThreadUtil::setThreadAffinityMask(pvVar4,*(uint *)(param_1 + 100));
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x44);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x120));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x138));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x150));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x168));
  }
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x180));
  }
  pEVar1 = this + 0x169;
  if (((byte)this[0x168] & 1) != 0) {
    pEVar1 = *(EngineManager **)(this + 0x178);
  }
  AndroidSysUtil::setUserProfilePath((char *)pEVar1);
  if (param_1[0x50] == (EngineManagerDesc)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f50c to 0074f517 has its CatchHandler @ 0074f874 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "GIANTS Engine Runtime 9.5.0 (%s) ",*(undefined8 *)(param_1 + 0x38));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f554 to 0074f55f has its CatchHandler @ 0074f870 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"(Build Date: %s)\n",
                      &DAT_004da752);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f59c to 0074f5a7 has its CatchHandler @ 0074f86c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Copyright (c) 2008-%s, GIANTS Software GmbH (giants-software.com), All Rights Reserved.\n"
                      ,&DAT_004da759);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f5e4 to 0074f5ef has its CatchHandler @ 0074f868 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Copyright (c) 2003-%s, Christian Ammann and Stefan Geiger, All Rights Reserved.\n"
                      ,&DAT_004da759);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f62c to 0074f637 has its CatchHandler @ 0074f864 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Application: %s\n",
                      *(undefined8 *)param_1);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f674 to 0074f67f has its CatchHandler @ 0074f860 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Main System\n");
    local_50 = 0;
    uStack_48 = 0;
    local_40 = (void *)0x0;
                    /* try { // try from 0074f28c to 0074f2eb has its CatchHandler @ 0074f8bc */
    EnvUtil::getProcessorName((basic_string *)&local_50);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f6bc to 0074f6c7 has its CatchHandler @ 0074f844 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pvVar4 = (void *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      pvVar4 = local_40;
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  CPU: %s\n",pvVar4);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f704 to 0074f70f has its CatchHandler @ 0074f840 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar5 = EnvUtil::getTotalMemory();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Memory: %u MB\n",
                      uVar5 >> 0x14);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = (void *)0x0;
                    /* try { // try from 0074f2f4 to 0074f32f has its CatchHandler @ 0074f88c */
    EnvUtil::getOSVersionName((basic_string *)&local_68);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074f74c to 0074f757 has its CatchHandler @ 0074f82c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pvVar4 = (void *)((ulong)&local_68 | 1);
    if ((local_68 & 1) != 0) {
      pvVar4 = local_58;
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  OS: %s\n",pvVar4);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x108));
  this_01 = (ScriptSystemManager *)ScriptSystemManager::getInstance();
  lVar6 = ScriptSystemManager::createScriptSystem(this_01,*(uint *)(param_1 + 0x68));
  if (lVar6 != 0) {
    pRVar7 = (ResourceManager *)ResourceManager::getInstance();
    puVar8 = (undefined8 *)operator_new(0x10);
    *(undefined4 *)(puVar8 + 1) = 2;
    *puVar8 = &PTR__ResourceLoader_00fdadb8;
    ResourceManager::addResourceLoader(pRVar7,(ResourceLoader *)puVar8);
    pRVar7 = (ResourceManager *)ResourceManager::getInstance();
    puVar8 = (undefined8 *)operator_new(0x10);
    *(undefined4 *)(puVar8 + 1) = 3;
    *puVar8 = &PTR__ResourceLoader_00fdae08;
    ResourceManager::addResourceLoader(pRVar7,(ResourceLoader *)puVar8);
    pRVar7 = (ResourceManager *)ResourceManager::getInstance();
    puVar8 = (undefined8 *)operator_new(0x10);
    *(undefined4 *)(puVar8 + 1) = 4;
    *puVar8 = &PTR__ResourceLoader_00fdae58;
    ResourceManager::addResourceLoader(pRVar7,(ResourceLoader *)puVar8);
    pRVar7 = (ResourceManager *)ResourceManager::getInstance();
    puVar8 = (undefined8 *)operator_new(0x10);
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__ResourceLoader_00fdaea8;
    ResourceManager::addResourceLoader(pRVar7,(ResourceLoader *)puVar8);
    pRVar7 = (ResourceManager *)ResourceManager::getInstance();
    puVar8 = (undefined8 *)operator_new(0x10);
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR__ResourceLoader_00fdaef8;
    ResourceManager::addResourceLoader(pRVar7,(ResourceLoader *)puVar8);
    EngineScriptBinding::init();
    Bt2PhysicsContextManager::getInstance();
    uVar5 = Bt2PhysicsContextManager::init();
    lVar6 = 0;
    if ((uVar5 & 1) != 0) {
      if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar3 != 0)) {
                    /* try { // try from 0074f794 to 0074f79f has its CatchHandler @ 0074f81c */
        UserBlockManager::UserBlockManager
                  ((UserBlockManager *)UserBlockManager::getInstance()::instance);
        __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&UserBlockManager::getInstance()::instance);
      }
      uVar5 = UserBlockManager::init(UserBlockManager::getInstance()::instance);
      if ((uVar5 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 0074f7dc to 0074f7e7 has its CatchHandler @ 0074f818 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Failed to initialize UserBlockManager.\n");
        lVar6 = 0;
      }
      else {
        lVar6 = 1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


