// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDescription
// Entry Point: 00b067cc
// Size: 72 bytes
// Signature: undefined __thiscall getDescription(AndroidInAppPurchase * this, uint param_1)


/* AndroidInAppPurchase::getDescription(unsigned int) */

AndroidInAppPurchase * __thiscall
AndroidInAppPurchase::getDescription(AndroidInAppPurchase *this,uint param_1)

{
  AndroidInAppPurchase *pAVar1;
  
  AndroidJNICall::callStringFromInt
            (*(AndroidJNICall **)this,"getDescription",(basic_string *)(this + 0x50),param_1);
  pAVar1 = this + 0x51;
  if (((byte)this[0x50] & 1) != 0) {
    pAVar1 = *(AndroidInAppPurchase **)(this + 0x60);
  }
  return pAVar1;
}


