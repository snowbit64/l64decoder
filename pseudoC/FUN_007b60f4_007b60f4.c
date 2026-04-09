// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b60f4
// Entry Point: 007b60f4
// Size: 148 bytes
// Signature: undefined FUN_007b60f4(void)


void FUN_007b60f4(char **param_1)

{
  byte bVar1;
  int iVar2;
  
  if (((CollisionEffectManager::getInstance()::s_instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&CollisionEffectManager::getInstance()::s_instance), iVar2 != 0))
  {
                    /* try { // try from 007b6150 to 007b615b has its CatchHandler @ 007b6188 */
    CollisionEffectManager::CollisionEffectManager
              ((CollisionEffectManager *)CollisionEffectManager::getInstance()::s_instance);
    __cxa_atexit(CollisionEffectManager::~CollisionEffectManager,
                 CollisionEffectManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&CollisionEffectManager::getInstance()::s_instance);
  }
  bVar1 = CollisionEffectManager::loadConfig
                    ((CollisionEffectManager *)CollisionEffectManager::getInstance()::s_instance,
                     *param_1);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar1 & 1;
  return;
}


