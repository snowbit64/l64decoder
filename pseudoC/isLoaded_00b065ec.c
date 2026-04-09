// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isLoaded
// Entry Point: 00b065ec
// Size: 16 bytes
// Signature: undefined isLoaded(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInAppPurchase::isLoaded() const */

void AndroidInAppPurchase::isLoaded(void)

{
  AndroidJNICall **in_x0;
  
  AndroidJNICall::callBool(*in_x0,"isLoaded");
  return;
}


