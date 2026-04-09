// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPairCollision
// Entry Point: 009a4a30
// Size: 332 bytes
// Signature: undefined __cdecl setPairCollision(TransformGroup * param_1, TransformGroup * param_2, SetPairCollision * param_3)


/* Bt2ScenegraphPhysicsContext::setPairCollision(TransformGroup*, TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetPairCollision const&) */

void Bt2ScenegraphPhysicsContext::setPairCollision
               (TransformGroup *param_1,TransformGroup *param_2,SetPairCollision *param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *in_x3;
  ulong uVar6;
  long *plVar7;
  long *this;
  
  lVar4 = RawTransformGroup::getPhysicsObject();
  lVar5 = RawTransformGroup::getPhysicsObject();
  plVar7 = *(long **)(lVar4 + 0x30);
  if ((plVar7 == (long *)0x0) || (this = *(long **)(lVar5 + 0x30), this == (long *)0x0)) {
    return;
  }
  plVar1 = plVar7;
  if (plVar7 <= this) {
    plVar1 = this;
    this = plVar7;
  }
  uVar6 = (ulong)*(uint *)((long)this + 0x234);
  if (0 < (int)*(uint *)((long)this + 0x234)) {
    plVar7 = (long *)this[0x48];
    do {
      if ((*(long **)(*plVar7 + 0x28) == plVar1) || (*(long **)(*plVar7 + 0x30) == plVar1)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 009a4b44 to 009a4b4f has its CatchHandler @ 009a4b7c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (physics): Setting pair collision on actors which already have a constraint\n"
                         );
        return;
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*in_x3 == '\0') {
    uVar6 = (**(code **)(*this + 0x18))(this,plVar1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    bVar2 = *in_x3 == '\0';
  }
  else {
    bVar2 = false;
  }
  btCollisionObject::setIgnoreCollisionCheck
            ((btCollisionObject *)this,(btCollisionObject *)plVar1,bVar2);
  return;
}


