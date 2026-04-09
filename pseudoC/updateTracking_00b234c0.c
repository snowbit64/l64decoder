// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTracking
// Entry Point: 00b234c0
// Size: 140 bytes
// Signature: undefined __cdecl updateTracking(float param_1)


/* HeadTrackingDevice::updateTracking(float) */

void HeadTrackingDevice::updateTracking(float param_1)

{
  int iVar1;
  long in_x0;
  
  if (*(char *)(in_x0 + 8) != '\0') {
    if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar1 != 0)) {
                    /* try { // try from 00b23514 to 00b2351f has its CatchHandler @ 00b2354c */
      HeadMountedDisplayManager::HeadMountedDisplayManager
                ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
      __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                   HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
    }
    HeadMountedDisplayManager::updateTracking();
    return;
  }
  return;
}


