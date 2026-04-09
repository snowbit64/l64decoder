// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5574
// Entry Point: 007b5574
// Size: 120 bytes
// Signature: undefined FUN_007b5574(void)


void FUN_007b5574(void)

{
  int iVar1;
  
  if (((WebResourceManager::getInstance()::me & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&WebResourceManager::getInstance()::me), iVar1 != 0)) {
                    /* try { // try from 007b55b4 to 007b55bf has its CatchHandler @ 007b55ec */
    WebResourceManager::WebResourceManager
              ((WebResourceManager *)WebResourceManager::getInstance()::me);
    __cxa_atexit(WebResourceManager::~WebResourceManager,WebResourceManager::getInstance()::me,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&WebResourceManager::getInstance()::me);
  }
  WebResourceManager::flushUnpinnedUrls();
  return;
}


