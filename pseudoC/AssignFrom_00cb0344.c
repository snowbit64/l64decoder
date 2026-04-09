// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00cb0344
// Size: 88 bytes
// Signature: undefined __thiscall AssignFrom(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this, NameValuePairs * param_1)


/* virtual thunk to
   CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::AssignFrom(CryptoPP::NameValuePairs
   const&) */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::AssignFrom
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this,NameValuePairs *param_1)

{
  long lVar1;
  AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
  aAStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
  ::AssignFromHelperClass
            (aAStack_40,(DL_PublicKeyImpl *)(this + *(long *)(*(long *)this + -0x28)),param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


