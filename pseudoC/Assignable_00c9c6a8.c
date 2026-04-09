// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Assignable
// Entry Point: 00c9c6a8
// Size: 260 bytes
// Signature: undefined Assignable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> >::Assignable() */

void CryptoPP::
     GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
     ::Assignable(void)

{
  char cVar1;
  int iVar2;
  DL_GroupParametersImpl **in_x0;
  char *pcVar3;
  DL_GroupParametersImpl *pDVar4;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  *this;
  
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
    pDVar4 = in_x0[1];
    iVar2 = strncmp((char *)pDVar4,"ThisObject:",0xb);
    if ((iVar2 == 0) &&
       (iVar2 = strcmp((char *)(pDVar4 + 0xb),"N8CryptoPP21DL_GroupParameters_ECINS_3ECPEEE"),
       iVar2 == 0)) {
      NameValuePairs::ThrowIfTypeMismatch
                ((char *)pDVar4,(type_info *)&DL_GroupParameters_EC<CryptoPP::ECP>::typeinfo,
                 (type_info *)in_x0[2]);
      pDVar4 = *in_x0;
      this = (DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
              *)in_x0[3];
      DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
      ::operator=(this,pDVar4);
      if (this != (DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
                   *)pDVar4) {
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
        assign<unsigned_int*>
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0xf8),
                   *(uint **)(pDVar4 + 0xf8),*(uint **)(pDVar4 + 0x100));
      }
      Integer::operator=((Integer *)(this + 0x110),(Integer *)(pDVar4 + 0x110));
      Integer::operator=((Integer *)(this + 0x140),(Integer *)(pDVar4 + 0x140));
      *(undefined2 *)(this + 0x170) = *(undefined2 *)(pDVar4 + 0x170);
      *(undefined *)(in_x0 + 4) = 1;
      return;
    }
  }
  return;
}


