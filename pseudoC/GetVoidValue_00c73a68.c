// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00c73a68
// Size: 236 bytes
// Signature: undefined __thiscall GetVoidValue(AlgorithmParametersBase * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::AlgorithmParametersBase::GetVoidValue(char const*, std::type_info const&, void*) const
    */

undefined8 __thiscall
CryptoPP::AlgorithmParametersBase::GetVoidValue
          (AlgorithmParametersBase *this,char *param_1,type_info *param_2,void *param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = strcmp(param_1,"ValueNames");
  if (iVar1 == 0) {
    NameValuePairs::ThrowIfTypeMismatch
              (param_1,(type_info *)
                       &std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::typeinfo,param_2);
    if (*(AlgorithmParametersBase **)(this + 0x18) != (AlgorithmParametersBase *)0x0) {
      GetVoidValue(*(AlgorithmParametersBase **)(this + 0x18),param_1,param_2,param_3);
    }
    pcVar2 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(pcVar2);
    return 1;
  }
  do {
    iVar1 = strcmp(param_1,*(char **)((long)this + 8));
    if (iVar1 == 0) {
      (**(code **)(*(long *)this + 0x10))(this,param_1,param_2,param_3);
      *(AlgorithmParametersBase *)((long)this + 0x11) = (AlgorithmParametersBase)0x1;
      return 1;
    }
    this = *(AlgorithmParametersBase **)((long)this + 0x18);
  } while ((long *)this != (long *)0x0);
  return 0;
}


