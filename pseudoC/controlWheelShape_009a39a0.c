// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: controlWheelShape
// Entry Point: 009a39a0
// Size: 476 bytes
// Signature: undefined __thiscall controlWheelShape(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, ControlWheel * param_2)


/* Bt2ScenegraphPhysicsContext::controlWheelShape(TransformGroup*,
   Bt2ScenegraphPhysicsContext::ControlWheel const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::controlWheelShape
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,ControlWheel *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  Bt2RaycastVehicle *local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = getWheelIndex(this,param_1,*(uint *)param_2,"control",&local_58,&local_4c);
  if (((uVar3 & 1) == 0) || (lVar5 = *(long *)(local_58 + 0x48), lVar5 == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 009a3b40 to 009a3b4b has its CatchHandler @ 009a3b7c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): enqueueControlWheelShape failed, wheel shape with index %u does not exist.\n"
                       ,(ulong)*(uint *)param_2);
    goto LAB_009a3b08;
  }
  lVar6 = (long)local_4c;
  fVar7 = ABS(*(float *)(param_2 + 4));
  lVar4 = lVar5 + lVar6 * 0x1a0;
  fVar8 = 0.0;
  if (0.001 <= fVar7) {
    fVar8 = *(float *)(param_2 + 4);
  }
  *(float *)(lVar4 + 0x178) = fVar8;
  fVar8 = 0.0;
  if (0.0001 <= ABS(*(float *)(param_2 + 8))) {
    fVar8 = *(float *)(param_2 + 8);
  }
  *(float *)(lVar4 + 0x17c) = fVar8;
  fVar8 = *(float *)(param_2 + 0xc);
  if (0.0005 <= ABS(fVar8)) {
    if (ABS(*(float *)(lVar4 + 0x158) - fVar8) < 0.0005) goto LAB_009a3adc;
LAB_009a3a68:
    *(float *)(lVar4 + 0x158) = fVar8;
    Bt2WheelInfo::updateSteering();
    *(undefined4 *)(lVar5 + lVar6 * 0x1a0 + 0x13c) = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    fVar8 = 0.0;
    if (*(float *)(lVar4 + 0x158) != 0.0) goto LAB_009a3a68;
LAB_009a3adc:
    *(undefined4 *)(lVar5 + lVar6 * 0x1a0 + 0x13c) = *(undefined4 *)(param_2 + 0x10);
    if (fVar7 < 0.001) goto LAB_009a3b08;
  }
  Bt2RaycastVehicle::activateAllBodies();
LAB_009a3b08:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


