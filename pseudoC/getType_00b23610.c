// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getType
// Entry Point: 00b23610
// Size: 152 bytes
// Signature: undefined getType(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadTrackingDevice::getType() */

undefined * HeadTrackingDevice::getType(void)

{
  int iVar1;
  long in_x0;
  ulong uVar2;
  
  if (*(char *)(in_x0 + 8) != '\0') {
    if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar1 != 0)) {
                    /* try { // try from 00b23670 to 00b2367b has its CatchHandler @ 00b236a8 */
      HeadMountedDisplayManager::HeadMountedDisplayManager
                ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
      __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                   HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
    }
    uVar2 = HeadMountedDisplayManager::isTrackingAvailable();
    if ((uVar2 & 1) != 0) {
      return &DAT_004f5423;
    }
  }
  return (undefined *)0x0;
}


