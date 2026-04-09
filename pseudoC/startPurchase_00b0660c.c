// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startPurchase
// Entry Point: 00b0660c
// Size: 120 bytes
// Signature: undefined __thiscall startPurchase(AndroidInAppPurchase * this, uint param_1, _func_void_ErrorCode_uint_void_ptr * param_2, void * param_3)


/* AndroidInAppPurchase::startPurchase(unsigned int, void (*)(InAppPurchaseBase::ErrorCode, unsigned
   int, void*), void*) */

void __thiscall
AndroidInAppPurchase::startPurchase
          (AndroidInAppPurchase *this,uint param_1,_func_void_ErrorCode_uint_void_ptr *param_2,
          void *param_3)

{
  long lVar1;
  uint local_50 [2];
  _func_void_ErrorCode_uint_void_ptr *local_48;
  void *pvStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = param_1;
  local_48 = param_2;
  pvStack_40 = param_3;
  FUN_00b06684(this + 0x10,local_50);
  AndroidJNICall::callVoidFromInt(*(AndroidJNICall **)this,"startPurchase",param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


