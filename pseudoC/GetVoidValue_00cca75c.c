// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00cca75c
// Size: 308 bytes
// Signature: undefined __thiscall GetVoidValue(DL_PublicKey<CryptoPP::Integer> * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::DL_PublicKey<CryptoPP::Integer>::GetVoidValue(char const*, std::type_info const&,
   void*) const */

void __thiscall
CryptoPP::DL_PublicKey<CryptoPP::Integer>::GetVoidValue
          (DL_PublicKey<CryptoPP::Integer> *this,char *param_1,type_info *param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  Integer *pIVar6;
  long *local_70;
  char *local_68;
  type_info *local_60;
  Integer *local_58;
  char local_50;
  char local_4f;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(**(code **)(*(long *)this + 0x10))();
  GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
  ::GetValueHelperClass
            ((GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
              *)&local_70,(DL_PublicKey *)this,param_1,param_2,param_3,
             (NameValuePairs *)((long)plVar3 + *(long *)(*plVar3 + -0x70)));
  if (local_4f != '\0') {
    pcVar4 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)local_58);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(pcVar4);
  }
  if (local_50 == '\0') {
    iVar2 = strcmp("PublicElement",local_68);
    if (iVar2 == 0) {
      NameValuePairs::ThrowIfTypeMismatch("PublicElement",(type_info *)&Integer::typeinfo,local_60);
      pIVar6 = (Integer *)(**(code **)(*local_70 + 0x20))();
      Integer::operator=(local_58,pIVar6);
      uVar5 = 1;
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00cca840;
    }
    else {
      uVar5 = 0;
      if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_00cca840:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar5);
      }
    }
  }
  else {
    uVar5 = 1;
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00cca840;
  }
  return;
}


