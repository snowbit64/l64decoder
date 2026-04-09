// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Assignable
// Entry Point: 00cca4b8
// Size: 260 bytes
// Signature: undefined Assignable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>,
   CryptoPP::DL_PublicKey<CryptoPP::Integer> >::Assignable() */

void CryptoPP::
     GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DL_PublicKey<CryptoPP::Integer>>
     ::Assignable(void)

{
  char cVar1;
  int iVar2;
  long *in_x0;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
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
    pcVar3 = (char *)in_x0[1];
    iVar2 = strncmp(pcVar3,"ThisObject:",0xb);
    if ((iVar2 == 0) &&
       (iVar2 = strcmp(pcVar3 + 0xb,"N8CryptoPP16DL_PublicKeyImplINS_22DL_GroupParameters_DSAEEE"),
       iVar2 == 0)) {
      NameValuePairs::ThrowIfTypeMismatch
                (pcVar3,(type_info *)&DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::typeinfo,
                 (type_info *)in_x0[2]);
      lVar4 = *in_x0;
      lVar5 = in_x0[3];
      DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
      ::operator=((DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
                   *)(lVar5 + 0x18),(DL_GroupParametersImpl *)(lVar4 + 0x18));
      Integer::operator=((Integer *)(lVar5 + 0x100),(Integer *)(lVar4 + 0x100));
      *(undefined4 *)(lVar5 + 0x130) = *(undefined4 *)(lVar4 + 0x130);
      Integer::operator=((Integer *)(lVar5 + 0x138),(Integer *)(lVar4 + 0x138));
      if (lVar5 != lVar4) {
        std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::
        assign<CryptoPP::Integer*>
                  ((vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *)
                   (lVar5 + 0x168),*(Integer **)(lVar4 + 0x168),*(Integer **)(lVar4 + 0x170));
      }
      *(undefined *)(in_x0 + 4) = 1;
      return;
    }
  }
  return;
}


