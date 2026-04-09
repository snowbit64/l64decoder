// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isAvailable
// Entry Point: 00b23564
// Size: 148 bytes
// Signature: undefined isAvailable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadTrackingDevice::isAvailable() */

undefined8 HeadTrackingDevice::isAvailable(void)

{
  int iVar1;
  long in_x0;
  ulong uVar2;
  
  if (*(char *)(in_x0 + 8) != '\0') {
    if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar1 != 0)) {
                    /* try { // try from 00b235c0 to 00b235cb has its CatchHandler @ 00b235f8 */
      HeadMountedDisplayManager::HeadMountedDisplayManager
                ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
      __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                   HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
    }
    uVar2 = HeadMountedDisplayManager::isTrackingAvailable();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


