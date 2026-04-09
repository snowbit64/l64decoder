// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00cb167c
// Size: 252 bytes
// Signature: undefined __thiscall GetVoidValue(DL_GroupParameters<CryptoPP::ECPPoint> * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::GetVoidValue(char const*, std::type_info
   const&, void*) const */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::GetVoidValue
          (DL_GroupParameters<CryptoPP::ECPPoint> *this,char *param_1,type_info *param_2,
          void *param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  Integer *pIVar4;
  GetValueHelperClass *pGVar5;
  long *local_50;
  char *local_48;
  type_info *local_40;
  Integer *local_38;
  char local_30;
  char local_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GetValueHelperClass<CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::GetValueHelperClass
            ((GetValueHelperClass<CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
              *)&local_50,(DL_GroupParameters *)this,param_1,param_2,param_3,(NameValuePairs *)0x0);
  if (local_2f != '\0') {
    pcVar3 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)local_38);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(pcVar3);
  }
  if ((local_30 == '\0') && (iVar2 = strcmp("SubgroupOrder",local_48), iVar2 == 0)) {
    NameValuePairs::ThrowIfTypeMismatch("SubgroupOrder",(type_info *)&Integer::typeinfo,local_40);
    pIVar4 = (Integer *)(**(code **)(*local_50 + 0xa0))();
    Integer::operator=(local_38,pIVar4);
    local_30 = '\x01';
  }
  pGVar5 = GetValueHelperClass<CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
           ::operator()((char *)&local_50,(_func_ECPPoint_ptr *)"SubgroupGenerator");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar5[0x20] != (GetValueHelperClass)0x0);
}


