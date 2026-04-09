// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherSetKey
// Entry Point: 00be86d4
// Size: 188 bytes
// Signature: undefined __thiscall CipherSetKey(ModePolicyCommonTemplate<CryptoPP::AdditiveCipherAbstractPolicy> * this, NameValuePairs * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::ModePolicyCommonTemplate<CryptoPP::AdditiveCipherAbstractPolicy>::CipherSetKey(CryptoPP::NameValuePairs
   const&, unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::ModePolicyCommonTemplate<CryptoPP::AdditiveCipherAbstractPolicy>::CipherSetKey
          (ModePolicyCommonTemplate<CryptoPP::AdditiveCipherAbstractPolicy> *this,
          NameValuePairs *param_1,uchar *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x10) + 0x38))(*(long **)(this + 0x10),param_2,param_3,param_1);
  (**(code **)(*(long *)this + 0x98))(this);
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"FeedbackSize",&int::typeinfo,&local_3c);
  if ((uVar2 & 1) == 0) {
    local_3c = 0;
  }
  (**(code **)(*(long *)this + 0x90))(this,local_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


