// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddDifferential
// Entry Point: 009a5d48
// Size: 372 bytes
// Signature: undefined __thiscall enqueueAddDifferential(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, bool param_3, uint param_4, bool param_5, float param_6, float param_7)


/* Bt2ScenegraphPhysicsContext::enqueueAddDifferential(TransformGroup*, unsigned int, bool, unsigned
   int, bool, float, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueAddDifferential
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,bool param_3,
          uint param_4,bool param_5,float param_6,float param_7)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  TransformGroup *local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined local_a4;
  uint local_a0;
  undefined local_9c;
  float local_98;
  float fStack_94;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((param_1 == (TransformGroup *)0x0) ||
      (lVar4 = RawTransformGroup::getPhysicsObject(), lVar4 == 0)) ||
     (uVar1 = *(uint *)(lVar4 + 8), ((uVar1 ^ 0xffffffff) & 0x88) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 009a5e80 to 009a5e8b has its CatchHandler @ 009a5ebc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): enqueueAddDifferential failed, object %s is not dynamic\n",
                       *(undefined8 *)(param_1 + 8));
  }
  else if ((uVar1 & 3) != 0) {
    local_b0 = 0xb;
    local_b8 = param_1;
    local_a8 = param_2;
    local_a4 = param_3;
    local_a0 = param_4;
    local_9c = param_5;
    local_98 = param_6;
    fStack_94 = param_7;
    if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) {
      addDifferential(this,param_1,(AddDifferential *)&local_a8);
    }
    else {
      SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                 (this + 0x170),(TransformCommand *)&local_b8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


