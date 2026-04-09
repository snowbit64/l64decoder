// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 008bfd68
// Size: 672 bytes
// Signature: undefined __cdecl load(char * param_1, bool param_2)


/* StreamedSample::load(char const*, bool) */

bool StreamedSample::load(char *param_1,bool param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  AudioLoaderOGG *this;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  undefined4 local_a0;
  undefined local_9c;
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  undefined4 local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  void *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  long local_48;
  undefined local_40;
  char local_3f;
  long local_38;
  
  pcVar7 = (char *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[0x28] != '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008bff84 to 008bff8f has its CatchHandler @ 008c001c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    Logger::infoMessage(LogManager::getInstance()::singletonLogManager,
                        "Error: Stream sample already loaded, please unload before loading another file.\n"
                        ,0x50);
    bVar2 = false;
    goto LAB_008bff4c;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_a0 = 2;
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  local_9c = 1;
  local_98 = 0;
  local_58 = 0;
  local_50 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
                    /* try { // try from 008bfe04 to 008bfe13 has its CatchHandler @ 008c004c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_78);
  local_54 = 0x3f800000;
                    /* try { // try from 008bfe1c to 008bfe27 has its CatchHandler @ 008c0048 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_78);
                    /* try { // try from 008bfe28 to 008bfe4b has its CatchHandler @ 008c0070 */
  uVar4 = StringUtil::iEndsWith(pcVar7,".ogg");
  if (((uVar4 & 1) == 0) && (uVar4 = StringUtil::iEndsWith(pcVar7,".oga"), (uVar4 & 1) == 0)) {
LAB_008bff04:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008bffcc to 008bffd7 has its CatchHandler @ 008c0008 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 008bff14 to 008bff2b has its CatchHandler @ 008c0070 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t load streamed sample \'%s\'.\n",pcVar7);
    bVar2 = false;
  }
  else {
                    /* try { // try from 008bfe50 to 008bfe57 has its CatchHandler @ 008c006c */
    this = (AudioLoaderOGG *)operator_new(0xb8);
                    /* try { // try from 008bfe5c to 008bfe5f has its CatchHandler @ 008c0038 */
    AudioLoaderOGG::AudioLoaderOGG(this);
                    /* try { // try from 008bfe60 to 008bfe6f has its CatchHandler @ 008c006c */
    uVar4 = AudioLoaderOGG::openFileStream(this,pcVar7,(AudioBufferDesc *)&local_a0);
    if ((uVar4 & 1) == 0) goto LAB_008bff04;
    *(AudioLoaderOGG **)(param_1 + 0x40) = this;
    *(AudioLoaderOGG **)(param_1 + 0x48) = this + 8;
                    /* try { // try from 008bfe7c to 008bfe97 has its CatchHandler @ 008c0068 */
    AudioDeviceManager::getInstance();
    plVar5 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    lVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_a0);
    *(long *)(param_1 + 0x30) = lVar6;
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    local_60 = (void *)0x0;
    if (lVar6 != 0) {
      local_3f = param_1[0x29];
      local_40 = 0;
                    /* try { // try from 008bfed0 to 008bfedb has its CatchHandler @ 008c0034 */
      local_48 = lVar6;
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
      *(long *)(param_1 + 0x38) = lVar6;
      if (lVar6 != 0) {
        param_1[0x28] = '\x01';
      }
    }
    bVar2 = param_1[0x28] != '\0';
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_008bff4c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


