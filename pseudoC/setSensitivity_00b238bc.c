// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSensitivity
// Entry Point: 00b238bc
// Size: 148 bytes
// Signature: undefined __thiscall setSensitivity(HeadTrackingDevice * this, float param_1)


/* HeadTrackingDevice::setSensitivity(float) */

void __thiscall HeadTrackingDevice::setSensitivity(HeadTrackingDevice *this,float param_1)

{
  int iVar1;
  
  if (this[8] != (HeadTrackingDevice)0x0) {
    if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar1 != 0)) {
                    /* try { // try from 00b23918 to 00b23923 has its CatchHandler @ 00b23950 */
      HeadMountedDisplayManager::HeadMountedDisplayManager
                ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
      __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                   HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
    }
    HeadMountedDisplayManager::setSensitivity
              ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self,param_1);
  }
  return;
}


