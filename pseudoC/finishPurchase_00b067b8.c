// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishPurchase
// Entry Point: 00b067b8
// Size: 20 bytes
// Signature: undefined __thiscall finishPurchase(AndroidInAppPurchase * this, uint param_1)


/* AndroidInAppPurchase::finishPurchase(unsigned int) */

void __thiscall AndroidInAppPurchase::finishPurchase(AndroidInAppPurchase *this,uint param_1)

{
  AndroidJNICall::callVoidFromInt(*(AndroidJNICall **)this,"finishPurchase",param_1);
  return;
}


