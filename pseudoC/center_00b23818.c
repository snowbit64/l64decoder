// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: center
// Entry Point: 00b23818
// Size: 140 bytes
// Signature: undefined center(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadTrackingDevice::center() */

void HeadTrackingDevice::center(void)

{
  int iVar1;
  long in_x0;
  
  if (*(char *)(in_x0 + 8) != '\0') {
    if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar1 != 0)) {
                    /* try { // try from 00b2386c to 00b23877 has its CatchHandler @ 00b238a4 */
      HeadMountedDisplayManager::HeadMountedDisplayManager
                ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
      __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                   HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
    }
    HeadMountedDisplayManager::resetPoseOnActiveHmd();
    return;
  }
  return;
}


