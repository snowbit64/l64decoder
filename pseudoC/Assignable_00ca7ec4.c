// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Assignable
// Entry Point: 00ca7ec4
// Size: 284 bytes
// Signature: undefined Assignable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GetValueHelperClass<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >, CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint> >::Assignable() */

void CryptoPP::
     GetValueHelperClass<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>>
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
       (iVar2 = strcmp(pcVar3 + 0xb,
                       "N8CryptoPP17DL_PrivateKeyImplINS_21DL_GroupParameters_ECINS_3ECPEEEEE"),
       iVar2 == 0)) {
      NameValuePairs::ThrowIfTypeMismatch
                (pcVar3,(type_info *)
                        &DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::typeinfo
                 ,(type_info *)in_x0[2]);
      lVar4 = *in_x0;
      lVar5 = in_x0[3];
      ByteQueue::operator=((ByteQueue *)(lVar5 + 0x18),(ByteQueue *)(lVar4 + 0x18));
      DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
      ::operator=((DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
                   *)(lVar5 + 0x60),(DL_GroupParametersImpl *)(lVar4 + 0x60));
      if (lVar5 != lVar4) {
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
        assign<unsigned_int*>
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar5 + 0x158),
                   *(uint **)(lVar4 + 0x158),*(uint **)(lVar4 + 0x160));
      }
      Integer::operator=((Integer *)(lVar5 + 0x170),(Integer *)(lVar4 + 0x170));
      Integer::operator=((Integer *)(lVar5 + 0x1a0),(Integer *)(lVar4 + 0x1a0));
      *(undefined2 *)(lVar5 + 0x1d0) = *(undefined2 *)(lVar4 + 0x1d0);
      Integer::operator=((Integer *)(lVar5 + 0x1d8),(Integer *)(lVar4 + 0x1d8));
      *(undefined *)(in_x0 + 4) = 1;
      return;
    }
  }
  return;
}


