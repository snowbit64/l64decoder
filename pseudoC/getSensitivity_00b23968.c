// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSensitivity
// Entry Point: 00b23968
// Size: 140 bytes
// Signature: undefined __thiscall getSensitivity(HeadTrackingDevice * this, float * param_1)


/* HeadTrackingDevice::getSensitivity(float*) */

void __thiscall HeadTrackingDevice::getSensitivity(HeadTrackingDevice *this,float *param_1)

{
  int iVar1;
  
  if (this[8] != (HeadTrackingDevice)0x0) {
    if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar1 != 0)) {
                    /* try { // try from 00b239bc to 00b239c7 has its CatchHandler @ 00b239f4 */
      HeadMountedDisplayManager::HeadMountedDisplayManager
                ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
      __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                   HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
    }
    HeadMountedDisplayManager::getSensitivity
              ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self,param_1);
  }
  return;
}


