// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: restorePurchases
// Entry Point: 00b068b8
// Size: 48 bytes
// Signature: undefined __thiscall restorePurchases(AndroidInAppPurchase * this, _func_void_ErrorCode_void_ptr * param_1, void * param_2)


/* AndroidInAppPurchase::restorePurchases(void (*)(InAppPurchaseBase::ErrorCode, void*), void*) */

void __thiscall
AndroidInAppPurchase::restorePurchases
          (AndroidInAppPurchase *this,_func_void_ErrorCode_void_ptr *param_1,void *param_2)

{
  if (*(long *)(this + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b068cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_1)(2,param_2);
    return;
  }
  *(_func_void_ErrorCode_void_ptr **)(this + 0x28) = param_1;
  *(void **)(this + 0x30) = param_2;
  AndroidJNICall::callVoid(*(AndroidJNICall **)this,"restorePurchases");
  return;
}


