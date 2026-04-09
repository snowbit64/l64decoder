// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseColShape
// Entry Point: 0099f734
// Size: 504 bytes
// Signature: undefined __thiscall releaseColShape(Bt2ScenegraphPhysicsContext * this, btCollisionShape * param_1)


/* Bt2ScenegraphPhysicsContext::releaseColShape(btCollisionShape*) */

void __thiscall
Bt2ScenegraphPhysicsContext::releaseColShape
          (Bt2ScenegraphPhysicsContext *this,btCollisionShape *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 5:
  case 0x15:
  case 0x16:
    Bt2PhysicsColShapeCache::releaseColShape((Bt2PhysicsColShapeCache *)(this + 0x90),param_1);
    return;
  default:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0099f8f4 to 0099f8ff has its CatchHandler @ 0099f92c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): Invalid collision shape type %d.\n",
                       (ulong)*(uint *)(param_1 + 8));
    return;
  case 0x1d:
    goto switchD_0099f778_caseD_1d;
  case 0x1f:
    if (0 < *(int *)(param_1 + 0x24)) {
      lVar3 = 0;
      lVar4 = 0x40;
      do {
        plVar2 = *(long **)(*(long *)(param_1 + 0x30) + lVar4);
        if (*(int *)(plVar2 + 1) == 0x13) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        else if (*(int *)(plVar2 + 1) == 5) {
          Bt2PhysicsColShapeCache::releaseColShape
                    ((Bt2PhysicsColShapeCache *)(this + 0x90),(btCollisionShape *)plVar2);
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar1 != 0)) {
                    /* try { // try from 0099f898 to 0099f89f has its CatchHandler @ 0099f930 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error (physics): Invalid compound child collision shape type %d.\n",
                             (ulong)*(uint *)(param_1 + 8));
        }
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x58;
      } while (lVar3 < *(int *)(param_1 + 0x24));
    }
switchD_0099f778_caseD_1d:
                    /* WARNING: Could not recover jumptable at 0x0099f8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return;
  }
}


