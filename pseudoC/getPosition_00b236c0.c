// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPosition
// Entry Point: 00b236c0
// Size: 148 bytes
// Signature: undefined __thiscall getPosition(HeadTrackingDevice * this, float * param_1)


/* HeadTrackingDevice::getPosition(float*) */

void __thiscall HeadTrackingDevice::getPosition(HeadTrackingDevice *this,float *param_1)

{
  HeadTrackingDevice HVar1;
  int iVar2;
  
  *(undefined8 *)param_1 = 0;
  HVar1 = this[8];
  param_1[2] = 0.0;
  if (HVar1 != (HeadTrackingDevice)0x0) {
    if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar2 != 0)) {
                    /* try { // try from 00b2371c to 00b23727 has its CatchHandler @ 00b23754 */
      HeadMountedDisplayManager::HeadMountedDisplayManager
                ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
      __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                   HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
    }
    HeadMountedDisplayManager::getTrackingPosition
              ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self,param_1);
  }
  return;
}


