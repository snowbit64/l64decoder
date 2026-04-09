// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: windowFocusChanged
// Entry Point: 00ad980c
// Size: 228 bytes
// Signature: undefined __thiscall windowFocusChanged(AndroidVulkanRenderWindow * this, WINDOW_FOCUS param_1)


/* AndroidVulkanRenderWindow::windowFocusChanged(IRenderWindowEventListener::WINDOW_FOCUS) */

void __thiscall
AndroidVulkanRenderWindow::windowFocusChanged(AndroidVulkanRenderWindow *this,WINDOW_FOCUS param_1)

{
  int iVar1;
  long *plVar2;
  Logger *this_00;
  long lVar3;
  ulong uVar4;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00ad98b0 to 00ad98b7 has its CatchHandler @ 00ad9900 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00ad98bc to 00ad98bf has its CatchHandler @ 00ad98f0 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "windowFocusChanged: %s\n",
                    &DAT_00523db8 + *(int *)(&DAT_00523db8 + (ulong)param_1 * 4));
  lVar3 = *(long *)(this + 200);
  if (*(long *)(this + 0xd0) != lVar3) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(lVar3 + uVar4 * 8);
      (**(code **)(*plVar2 + 0x10))(plVar2,(ulong)param_1);
      lVar3 = *(long *)(this + 200);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(this + 0xd0) - lVar3 >> 3));
  }
  return;
}


