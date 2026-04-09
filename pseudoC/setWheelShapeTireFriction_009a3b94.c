// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelShapeTireFriction
// Entry Point: 009a3b94
// Size: 296 bytes
// Signature: undefined __cdecl setWheelShapeTireFriction(TransformGroup * param_1, SetWheelTireFriction * param_2)


/* Bt2ScenegraphPhysicsContext::setWheelShapeTireFriction(TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetWheelTireFriction const&) */

void Bt2ScenegraphPhysicsContext::setWheelShapeTireFriction
               (TransformGroup *param_1,SetWheelTireFriction *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Logger *this;
  uint *in_x2;
  undefined4 uVar4;
  float fVar5;
  float in_s1;
  undefined4 in_s2;
  uint local_44;
  Bt2RaycastVehicle *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = getWheelIndex((Bt2ScenegraphPhysicsContext *)param_1,(TransformGroup *)param_2,*in_x2,
                        "setTireFriction",&local_40,(int *)&local_44);
  if ((uVar3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 009a3c78 to 009a3c7f has its CatchHandler @ 009a3ccc */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 009a3c84 to 009a3c87 has its CatchHandler @ 009a3cbc */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): enqueueSetWheelShapeTireFunction failed, wheel shape with index %u does not exist.\n"
                       ,(ulong)*in_x2);
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x98))();
    uVar4 = NEON_fmadd(uVar4,uVar4,in_s1 * in_s1);
    fVar5 = (float)NEON_fmadd(in_s2,in_s2,uVar4);
    fVar5 = SQRT(fVar5);
    Bt2RaycastVehicle::setWheelFriction
              (local_40,local_44,(float)in_x2[2] * fVar5,(float)in_x2[1] * fVar5,
               (float)in_x2[3] * fVar5,(float)in_x2[4]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


