// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HeadTrackingDevice
// Entry Point: 00b233ec
// Size: 180 bytes
// Signature: undefined __thiscall HeadTrackingDevice(HeadTrackingDevice * this, bool param_1, bool param_2, bool param_3, bool param_4, float param_5)


/* HeadTrackingDevice::HeadTrackingDevice(bool, bool, bool, bool, float) */

void __thiscall
HeadTrackingDevice::HeadTrackingDevice
          (HeadTrackingDevice *this,bool param_1,bool param_2,bool param_3,bool param_4,
          float param_5)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__HeadTrackingDevice_00fe80d8;
  if ((param_1) && (param_4)) {
    this[8] = (HeadTrackingDevice)0x1;
    if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self,param_1,param_2,
                                    param_3), iVar1 != 0)) {
                    /* try { // try from 00b23468 to 00b23473 has its CatchHandler @ 00b234a0 */
      HeadMountedDisplayManager::HeadMountedDisplayManager
                ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
      __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                   HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
    }
    HeadMountedDisplayManager::setSensitivity
              ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self,param_5);
  }
  else {
    this[8] = (HeadTrackingDevice)0x0;
  }
  return;
}


