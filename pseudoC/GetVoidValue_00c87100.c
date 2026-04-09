// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00c87100
// Size: 412 bytes
// Signature: undefined __thiscall GetVoidValue(DL_GroupParameters<CryptoPP::Integer> * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::DL_GroupParameters<CryptoPP::Integer>::GetVoidValue(char const*, std::type_info const&,
   void*) const */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::Integer>::GetVoidValue
          (DL_GroupParameters<CryptoPP::Integer> *this,char *param_1,type_info *param_2,
          void *param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  Integer *pIVar5;
  char cVar6;
  long *local_50;
  char *local_48;
  type_info *local_40;
  Integer *local_38;
  char local_30;
  char local_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GetValueHelperClass<CryptoPP::DL_GroupParameters<CryptoPP::Integer>,CryptoPP::DL_GroupParameters<CryptoPP::Integer>>
  ::GetValueHelperClass
            ((GetValueHelperClass<CryptoPP::DL_GroupParameters<CryptoPP::Integer>,CryptoPP::DL_GroupParameters<CryptoPP::Integer>>
              *)&local_50,(DL_GroupParameters *)this,param_1,param_2,param_3,(NameValuePairs *)0x0);
  if (local_2f != '\0') {
    pcVar3 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)local_38);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(pcVar3);
  }
  if (local_30 == '\0') {
    iVar2 = strcmp("SubgroupOrder",local_48);
    if (iVar2 == 0) {
      NameValuePairs::ThrowIfTypeMismatch("SubgroupOrder",(type_info *)&Integer::typeinfo,local_40);
      pIVar5 = (Integer *)(**(code **)(*local_50 + 0xa0))();
      Integer::operator=(local_38,pIVar5);
      local_30 = '\x01';
      goto joined_r0x00c87248;
    }
    cVar6 = '\0';
  }
  else {
joined_r0x00c87248:
    cVar6 = '\x01';
  }
  if (local_2f != '\0') {
    pcVar3 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)local_38);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(pcVar3);
    cVar6 = local_30;
  }
  if (cVar6 == '\0') {
    iVar2 = strcmp("SubgroupGenerator",local_48);
    if (iVar2 == 0) {
      NameValuePairs::ThrowIfTypeMismatch
                ("SubgroupGenerator",(type_info *)&Integer::typeinfo,local_40);
      pIVar5 = (Integer *)(**(code **)(*local_50 + 0x68))();
      Integer::operator=(local_38,pIVar5);
      uVar4 = 1;
      if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00c87204;
    }
    else {
      uVar4 = 0;
      if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00c87204:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
      }
    }
  }
  else {
    uVar4 = 1;
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00c87204;
  }
  return;
}


