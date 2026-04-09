// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b065fc
// Size: 16 bytes
// Signature: undefined __thiscall update(AndroidInAppPurchase * this, float param_1)


/* AndroidInAppPurchase::update(float) */

void __thiscall AndroidInAppPurchase::update(AndroidInAppPurchase *this,float param_1)

{
  AndroidJNICall::callVoidFromFloat(*(AndroidJNICall **)this,"update",param_1);
  return;
}


