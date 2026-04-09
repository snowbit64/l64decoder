// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b61a0
// Entry Point: 007b61a0
// Size: 132 bytes
// Signature: undefined FUN_007b61a0(void)


void FUN_007b61a0(uint *param_1)

{
  int iVar1;
  
  if (((CollisionEffectManager::getInstance()::s_instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&CollisionEffectManager::getInstance()::s_instance), iVar1 != 0))
  {
                    /* try { // try from 007b61ec to 007b61f7 has its CatchHandler @ 007b6224 */
    CollisionEffectManager::CollisionEffectManager
              ((CollisionEffectManager *)CollisionEffectManager::getInstance()::s_instance);
    __cxa_atexit(CollisionEffectManager::~CollisionEffectManager,
                 CollisionEffectManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&CollisionEffectManager::getInstance()::s_instance);
  }
  CollisionEffectManager::setCollisionEffectEnabled
            ((CollisionEffectManager *)CollisionEffectManager::getInstance()::s_instance,*param_1,
             *(bool *)(param_1 + 4));
  return;
}


