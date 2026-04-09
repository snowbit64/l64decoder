// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007997e8
// Entry Point: 007997e8
// Size: 320 bytes
// Signature: undefined FUN_007997e8(void)


void FUN_007997e8(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ResourceManager *this;
  Texture *pTVar4;
  undefined **local_50;
  undefined local_48;
  undefined4 local_44;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  lVar3 = Renderer::getPostFxParams();
  *(undefined4 *)(lVar3 + 0x1cc) = *param_1;
  local_48 = 1;
  local_44 = 0;
  local_50 = &PTR__ResourceDesc_00fd99b0;
  local_40 = 0;
  *(undefined4 *)(lVar3 + 0x1d0) = param_1[4];
  *(undefined4 *)(lVar3 + 0x1d4) = param_1[8];
  *(undefined4 *)(lVar3 + 0x1d8) = param_1[0xc];
  this = (ResourceManager *)ResourceManager::getInstance();
  pTVar4 = (Texture *)
           ResourceManager::get
                     (this,*(char **)(param_1 + 0x10),2,(ResourceDesc *)&local_50,1,true,true);
  if (pTVar4 == (Texture *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007998ec to 007998f7 has its CatchHandler @ 00799928 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Selected Texture \'%s\' is of an unsupported format",
                       *(undefined8 *)(param_1 + 0x10));
  }
  lVar3 = EngineManager::getInstance();
  Renderer::setLocalCloudCoverageMap(*(Renderer **)(lVar3 + 0xb8),pTVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


