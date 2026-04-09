// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireColShape
// Entry Point: 0099f9a4
// Size: 160 bytes
// Signature: undefined __thiscall acquireColShape(Bt2ScenegraphPhysicsContext * this, btCollisionShape * param_1)


/* Bt2ScenegraphPhysicsContext::acquireColShape(btCollisionShape*) */

void __thiscall
Bt2ScenegraphPhysicsContext::acquireColShape
          (Bt2ScenegraphPhysicsContext *this,btCollisionShape *param_1)

{
  int iVar1;
  ulong uVar2;
  Logger *this_00;
  
  uVar2 = Bt2PhysicsColShapeCache::acquireColShape((Bt2PhysicsColShapeCache *)(this + 0x90),param_1)
  ;
  if ((uVar2 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0099fa04 to 0099fa0b has its CatchHandler @ 0099fa54 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0099fa10 to 0099fa13 has its CatchHandler @ 0099fa44 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): Invalid collision shape type %d to acquire.\n",
                       (ulong)*(uint *)(param_1 + 8));
  }
  return;
}


