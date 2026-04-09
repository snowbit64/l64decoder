// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00ca8bf8
// Size: 120 bytes
// Signature: undefined __thiscall GetVoidValue(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, char * param_1, type_info * param_2, void * param_3)


/* virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::GetVoidValue(char const*, std::type_info const&, void*) const */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::GetVoidValue
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,char *param_1,
          type_info *param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  GetValueHelperClass<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
  aGStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GetValueHelperClass<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
  ::GetValueHelperClass
            (aGStack_50,(DL_PrivateKeyImpl *)(this + *(long *)(*(long *)this + -0x20)),param_1,
             param_2,param_3,(NameValuePairs *)0x0);
  lVar2 = GetValueHelperClass<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
          ::Assignable();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(char *)(lVar2 + 0x20) != '\0');
}


