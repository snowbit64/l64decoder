// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00ca1cac
// Size: 268 bytes
// Signature: undefined __thiscall GetVoidValue(DL_GroupParameters_EC<CryptoPP::EC2N> * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::GetVoidValue(char const*, std::type_info const&,
   void*) const */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::GetVoidValue
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,char *param_1,type_info *param_2,
          void *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  GetValueHelperClass *pGVar5;
  GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  aGStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = strcmp(param_1,"GroupOID");
  if (iVar3 == 0) {
    if (*(long *)(this + 0x170) == *(long *)(this + 0x178)) {
      bVar2 = false;
    }
    else {
      NameValuePairs::ThrowIfTypeMismatch(param_1,(type_info *)&OID::typeinfo,param_2);
      if (this + 0x168 == (DL_GroupParameters_EC<CryptoPP::EC2N> *)param_3) {
        bVar2 = true;
      }
      else {
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
        assign<unsigned_int*>
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)((long)param_3 + 8),
                   *(uint **)(this + 0x170),*(uint **)(this + 0x178));
        bVar2 = true;
      }
    }
  }
  else {
    GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
    ::GetValueHelperClass
              (aGStack_70,(DL_GroupParameters_EC *)this,param_1,param_2,param_3,
               (NameValuePairs *)0x0);
    pcVar4 = (char *)GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
                     ::Assignable();
    pGVar5 = GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
             ::operator()(pcVar4,(_func_EC2N_ptr *)"Curve");
    bVar2 = pGVar5[0x20] != (GetValueHelperClass)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


