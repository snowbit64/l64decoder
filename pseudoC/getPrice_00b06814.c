// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPrice
// Entry Point: 00b06814
// Size: 72 bytes
// Signature: undefined __thiscall getPrice(AndroidInAppPurchase * this, uint param_1)


/* AndroidInAppPurchase::getPrice(unsigned int) */

AndroidInAppPurchase * __thiscall
AndroidInAppPurchase::getPrice(AndroidInAppPurchase *this,uint param_1)

{
  AndroidInAppPurchase *pAVar1;
  
  AndroidJNICall::callStringFromInt
            (*(AndroidJNICall **)this,"getPrice",(basic_string *)(this + 0x38),param_1);
  pAVar1 = this + 0x39;
  if (((byte)this[0x38] & 1) != 0) {
    pAVar1 = *(AndroidInAppPurchase **)(this + 0x48);
  }
  return pAVar1;
}


