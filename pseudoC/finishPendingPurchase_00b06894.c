// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishPendingPurchase
// Entry Point: 00b06894
// Size: 20 bytes
// Signature: undefined __thiscall finishPendingPurchase(AndroidInAppPurchase * this, uint param_1)


/* AndroidInAppPurchase::finishPendingPurchase(unsigned int) */

void __thiscall AndroidInAppPurchase::finishPendingPurchase(AndroidInAppPurchase *this,uint param_1)

{
  AndroidJNICall::callVoidFromInt(*(AndroidJNICall **)this,"finishPendingPurchase",param_1);
  return;
}


