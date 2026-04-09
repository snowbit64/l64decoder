// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueUpdateDifferential
// Entry Point: 009a5ed4
// Size: 412 bytes
// Signature: undefined __thiscall enqueueUpdateDifferential(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, float param_3, float param_4)


/* Bt2ScenegraphPhysicsContext::enqueueUpdateDifferential(TransformGroup*, unsigned int, float,
   float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueUpdateDifferential
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,float param_3,
          float param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Bt2ScenegraphPhysicsContext *pBVar6;
  Bt2ScenegraphPhysicsContext *pBVar7;
  TransformGroup *local_98;
  undefined4 local_90;
  uint local_88;
  float local_84;
  float fStack_80;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((param_1 == (TransformGroup *)0x0) ||
      (lVar4 = RawTransformGroup::getPhysicsObject(), lVar4 == 0)) ||
     (uVar1 = *(uint *)(lVar4 + 8), ((uVar1 ^ 0xffffffff) & 0x88) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 009a6034 to 009a603f has its CatchHandler @ 009a6070 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): enqueueUpdateDifferential failed, object %s is not dynamic\n"
                       ,*(undefined8 *)(param_1 + 8));
  }
  else if ((uVar1 & 3) != 0) {
    local_90 = 0xc;
    local_98 = param_1;
    local_88 = param_2;
    local_84 = param_3;
    fStack_80 = param_4;
    if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) {
      lVar4 = RawTransformGroup::getPhysicsObject();
      uVar5 = *(ulong *)(lVar4 + 0x30);
      if (((uVar5 != 0) && ((*(byte *)(uVar5 + 0xe0) & 3) == 0)) &&
         (pBVar7 = *(Bt2ScenegraphPhysicsContext **)(this + 400),
         pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0)) {
        pBVar6 = this + 400;
        do {
          if (*(ulong *)(pBVar7 + 0x20) >= uVar5) {
            pBVar6 = pBVar7;
          }
          pBVar7 = *(Bt2ScenegraphPhysicsContext **)
                    (pBVar7 + (ulong)(*(ulong *)(pBVar7 + 0x20) < uVar5) * 8);
        } while (pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0);
        if ((pBVar6 != this + 400) && (*(ulong *)(pBVar6 + 0x20) <= uVar5)) {
          Bt2RaycastVehicle::updateDifferential
                    (*(Bt2RaycastVehicle **)(pBVar6 + 0x28),param_2,param_3,param_4);
        }
      }
    }
    else {
      SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                 (this + 0x170),(TransformCommand *)&local_98);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


