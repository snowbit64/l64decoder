// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00caab9c
// Size: 112 bytes
// Signature: undefined __thiscall GetVoidValue(DL_PrivateKey_ECGDSA<CryptoPP::ECP> * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::GetVoidValue(char const*, std::type_info const&,
   void*) const */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::GetVoidValue
          (DL_PrivateKey_ECGDSA<CryptoPP::ECP> *this,char *param_1,type_info *param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  GetValueHelperClass<CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>,CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>>
  aGStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GetValueHelperClass<CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>,CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>>
  ::GetValueHelperClass
            (aGStack_50,(DL_PrivateKey_ECGDSA *)this,param_1,param_2,param_3,(NameValuePairs *)0x0);
  lVar2 = GetValueHelperClass<CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>,CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>>
          ::Assignable();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(char *)(lVar2 + 0x20) != '\0');
}


