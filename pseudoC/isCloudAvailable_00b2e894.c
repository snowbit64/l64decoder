// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isCloudAvailable
// Entry Point: 00b2e894
// Size: 16 bytes
// Signature: undefined isCloudAvailable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidCloudDevice::isCloudAvailable() */

void AndroidCloudDevice::isCloudAvailable(void)

{
  long in_x0;
  
  AndroidJNICall::callBool(*(AndroidJNICall **)(in_x0 + 0x38),"isCloudAvailable");
  return;
}


