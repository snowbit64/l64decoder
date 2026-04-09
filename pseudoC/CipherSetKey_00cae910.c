// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherSetKey
// Entry Point: 00cae910
// Size: 188 bytes
// Signature: undefined __thiscall CipherSetKey(ModePolicyCommonTemplate<CryptoPP::CFB_CipherAbstractPolicy> * this, NameValuePairs * param_1, uchar * param_2, ulong param_3)


/* non-virtual thunk to
   CryptoPP::ModePolicyCommonTemplate<CryptoPP::CFB_CipherAbstractPolicy>::CipherSetKey(CryptoPP::NameValuePairs
   const&, unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::ModePolicyCommonTemplate<CryptoPP::CFB_CipherAbstractPolicy>::CipherSetKey
          (ModePolicyCommonTemplate<CryptoPP::CFB_CipherAbstractPolicy> *this,
          NameValuePairs *param_1,uchar *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + -0x28) + 0x38))(*(long **)(this + -0x28),param_2,param_3,param_1);
  plVar3 = (long *)(this + -0x38);
  (**(code **)(*plVar3 + 0x98))(plVar3);
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"FeedbackSize",&int::typeinfo,&local_3c);
  if ((uVar2 & 1) == 0) {
    local_3c = 0;
  }
  (**(code **)(*plVar3 + 0x90))(plVar3,local_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


