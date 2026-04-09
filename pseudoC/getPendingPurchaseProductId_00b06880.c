// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPendingPurchaseProductId
// Entry Point: 00b06880
// Size: 20 bytes
// Signature: undefined __thiscall getPendingPurchaseProductId(AndroidInAppPurchase * this, uint param_1)


/* AndroidInAppPurchase::getPendingPurchaseProductId(unsigned int) const */

void __thiscall
AndroidInAppPurchase::getPendingPurchaseProductId(AndroidInAppPurchase *this,uint param_1)

{
  AndroidJNICall::callIntFromInt(*(AndroidJNICall **)this,"getPendingPurchaseProductId",param_1);
  return;
}


