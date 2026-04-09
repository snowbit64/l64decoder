// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Assignable
// Entry Point: 00ca4058
// Size: 188 bytes
// Signature: undefined Assignable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >, CryptoPP::DL_PublicKey<CryptoPP::ECPPoint> >::Assignable() */

void CryptoPP::
     GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
     ::Assignable(void)

{
  char cVar1;
  int iVar2;
  DL_PublicKeyImpl **in_x0;
  char *pcVar3;
  DL_PublicKeyImpl *__s1;
  
  if (*(char *)((long)in_x0 + 0x21) != '\0') {
    pcVar3 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)in_x0[3]);
    cVar1 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (pcVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar1);
  }
  if (*(char *)(in_x0 + 4) == '\0') {
    __s1 = in_x0[1];
    iVar2 = strncmp((char *)__s1,"ThisObject:",0xb);
    if ((iVar2 == 0) &&
       (iVar2 = strcmp((char *)(__s1 + 0xb),
                       "N8CryptoPP16DL_PublicKeyImplINS_21DL_GroupParameters_ECINS_3ECPEEEEE"),
       iVar2 == 0)) {
      NameValuePairs::ThrowIfTypeMismatch
                ((char *)__s1,
                 (type_info *)
                 &DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::typeinfo,
                 (type_info *)in_x0[2]);
      DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::operator=
                ((DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)in_x0[3],*in_x0
                );
      *(undefined *)(in_x0 + 4) = 1;
      return;
    }
  }
  return;
}


