// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetValueHelperClass
// Entry Point: 00cca890
// Size: 364 bytes
// Signature: undefined __thiscall GetValueHelperClass(GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>> * this, DL_PublicKey * param_1, char * param_2, type_info * param_3, void * param_4, NameValuePairs * param_5)


/* CryptoPP::GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,
   CryptoPP::DL_PublicKey<CryptoPP::Integer>
   >::GetValueHelperClass(CryptoPP::DL_PublicKey<CryptoPP::Integer> const*, char const*,
   std::type_info const&, void*, CryptoPP::NameValuePairs const*) */

void __thiscall
CryptoPP::
GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
::GetValueHelperClass
          (GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
           *this,DL_PublicKey *param_1,char *param_2,type_info *param_3,void *param_4,
          NameValuePairs *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
  GVar5;
  
  *(DL_PublicKey **)this = param_1;
  *(char **)(this + 8) = param_2;
  *(type_info **)(this + 0x10) = param_3;
  *(void **)(this + 0x18) = param_4;
  *(undefined2 *)(this + 0x20) = 0;
  iVar3 = strcmp(param_2,"ValueNames");
  if (iVar3 == 0) {
    *(undefined2 *)(this + 0x20) = 0x101;
    NameValuePairs::ThrowIfTypeMismatch
              (param_2,(type_info *)
                       &std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::typeinfo,param_3);
    if (param_5 != (NameValuePairs *)0x0) {
      (**(code **)(*(long *)param_5 + 0x10))(param_5,*(undefined8 *)(this + 8),param_3,param_4);
    }
    pcVar4 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(*(char **)(this + 0x18));
    cVar1 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (pcVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
    if (this[0x20] !=
        (GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
         )0x0) {
      return;
    }
    param_2 = *(char **)(this + 8);
    iVar3 = strncmp(param_2,"ThisPointer:",0xc);
  }
  else {
    iVar3 = strncmp(param_2,"ThisPointer:",0xc);
  }
  if ((iVar3 == 0) &&
     (iVar3 = strcmp(param_2 + 0xc,"N8CryptoPP12DL_PublicKeyINS_7IntegerEEE"), iVar3 == 0)) {
    NameValuePairs::ThrowIfTypeMismatch
              (param_2,(type_info *)&DL_PublicKey<CryptoPP::Integer>*::typeinfo,
               *(type_info **)(this + 0x10));
    GVar5 = (GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
             )0x1;
    *(DL_PublicKey **)param_4 = param_1;
  }
  else {
    if (param_5 == (NameValuePairs *)0x0) {
      return;
    }
    bVar2 = (**(code **)(*(long *)param_5 + 0x10))(param_5,param_2,param_3,param_4);
    GVar5 = (GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::Integer>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
             )(bVar2 & 1);
  }
  this[0x20] = GVar5;
  return;
}


