// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AndroidInAppPurchase
// Entry Point: 00b064a4
// Size: 128 bytes
// Signature: undefined __thiscall ~AndroidInAppPurchase(AndroidInAppPurchase * this)


/* AndroidInAppPurchase::~AndroidInAppPurchase() */

void __thiscall AndroidInAppPurchase::~AndroidInAppPurchase(AndroidInAppPurchase *this)

{
  AndroidInAppPurchase AVar1;
  void *pvVar2;
  AndroidJNICall *this_00;
  
  this_00 = *(AndroidJNICall **)this;
  if (this_00 != (AndroidJNICall *)0x0) {
    AndroidJNICall::~AndroidJNICall(this_00);
    operator_delete(this_00);
    *(undefined8 *)this = 0;
  }
  if (((byte)this[0x50] & 1) == 0) {
    AVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    AVar1 = this[0x38];
  }
  if (((byte)AVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x10);
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    pvVar2 = *(void **)(this + 0x10);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}


