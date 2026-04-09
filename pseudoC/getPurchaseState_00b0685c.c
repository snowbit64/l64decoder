// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPurchaseState
// Entry Point: 00b0685c
// Size: 20 bytes
// Signature: undefined __thiscall getPurchaseState(AndroidInAppPurchase * this, uint param_1)


/* AndroidInAppPurchase::getPurchaseState(unsigned int) const */

void __thiscall AndroidInAppPurchase::getPurchaseState(AndroidInAppPurchase *this,uint param_1)

{
  AndroidJNICall::callIntFromInt(*(AndroidJNICall **)this,"getPurchaseState",param_1);
  return;
}


