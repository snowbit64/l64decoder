// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00ca4a74
// Size: 80 bytes
// Signature: undefined __thiscall AssignFrom(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, NameValuePairs * param_1)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::AssignFrom
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          NameValuePairs *param_1)

{
  long lVar1;
  AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
  aAStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
  ::AssignFromHelperClass(aAStack_40,(DL_PublicKeyImpl *)this,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


