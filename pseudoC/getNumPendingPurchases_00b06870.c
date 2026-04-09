// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumPendingPurchases
// Entry Point: 00b06870
// Size: 16 bytes
// Signature: undefined getNumPendingPurchases(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInAppPurchase::getNumPendingPurchases() const */

void AndroidInAppPurchase::getNumPendingPurchases(void)

{
  AndroidJNICall **in_x0;
  
  AndroidJNICall::callInt(*in_x0,"getNumPendingPurchases");
  return;
}


