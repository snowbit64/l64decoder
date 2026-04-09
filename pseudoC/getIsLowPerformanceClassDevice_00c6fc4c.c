// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsLowPerformanceClassDevice
// Entry Point: 00c6fc4c
// Size: 24 bytes
// Signature: undefined getIsLowPerformanceClassDevice(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::getIsLowPerformanceClassDevice() */

void AndroidSysUtil::getIsLowPerformanceClassDevice(void)

{
  AndroidJNICall::callBool(s_pActivityJNICall,"getIsLowPerformanceClassDevice");
  return;
}


