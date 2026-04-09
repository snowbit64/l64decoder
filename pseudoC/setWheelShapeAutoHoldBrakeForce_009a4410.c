// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelShapeAutoHoldBrakeForce
// Entry Point: 009a4410
// Size: 264 bytes
// Signature: undefined __thiscall setWheelShapeAutoHoldBrakeForce(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, SetWheelAutoHoldBrakeForce * param_2)


/* Bt2ScenegraphPhysicsContext::setWheelShapeAutoHoldBrakeForce(TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetWheelAutoHoldBrakeForce const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setWheelShapeAutoHoldBrakeForce
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,
          SetWheelAutoHoldBrakeForce *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Logger *this_00;
  Bt2RaycastVehicle *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = getWheelIndex(this,param_1,*(uint *)param_2,"setAutoHoldBrakeForce",&local_48,&local_3c);
  if (((uVar3 & 1) == 0) || (*(long *)(local_48 + 0x48) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 009a44d4 to 009a44db has its CatchHandler @ 009a4528 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 009a44e0 to 009a44e3 has its CatchHandler @ 009a4518 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): enqueueSetWheelShapeAutoHoldBrakeForce failed, wheel shape with index %u does not exist.\n"
                       ,(ulong)*(uint *)param_2);
  }
  else {
    *(undefined4 *)(*(long *)(local_48 + 0x48) + (long)local_3c * 0x1a0 + 0x108) =
         *(undefined4 *)(param_2 + 4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


