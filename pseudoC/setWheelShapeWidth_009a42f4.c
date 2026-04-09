// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelShapeWidth
// Entry Point: 009a42f4
// Size: 244 bytes
// Signature: undefined __thiscall setWheelShapeWidth(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, SetWheelWidth * param_2)


/* Bt2ScenegraphPhysicsContext::setWheelShapeWidth(TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetWheelWidth const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setWheelShapeWidth
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,SetWheelWidth *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Logger *this_00;
  uint local_44;
  Bt2RaycastVehicle *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = getWheelIndex(this,param_1,*(uint *)param_2,"setWidth",&local_40,(int *)&local_44);
  if ((uVar3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 009a43a4 to 009a43ab has its CatchHandler @ 009a43f8 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 009a43b0 to 009a43b3 has its CatchHandler @ 009a43e8 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): enqueueSetWheelShapeWidth failed, wheel shape with index %u does not exist.\n"
                       ,(ulong)*(uint *)param_2);
  }
  else {
    Bt2RaycastVehicle::setWheelWidth
              (local_40,local_44,*(float *)(param_2 + 4),*(float *)(param_2 + 8));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


