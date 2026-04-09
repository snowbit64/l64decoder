// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00cc68d4
// Size: 220 bytes
// Signature: GetValueHelperClass * __cdecl operator()(char * param_1, _func_EC2NPoint_ptr * param_2)


/* CryptoPP::GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>,
   CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint> >&
   CryptoPP::GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>,
   CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint> >::TEMPNAMEPLACEHOLDERVALUE(char const*,
   CryptoPP::EC2NPoint const& (CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>::*)() const) */

GetValueHelperClass *
CryptoPP::
GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
::operator()(char *param_1,_func_EC2NPoint_ptr *param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  code *in_x2;
  ulong in_x3;
  long lVar4;
  
  if (param_1[0x21] != '\0') {
    pcVar2 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(*(char **)(param_1 + 0x18));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(pcVar2);
  }
  if ((param_1[0x20] == '\0') &&
     (iVar1 = strcmp((char *)param_2,*(char **)(param_1 + 8)), iVar1 == 0)) {
    NameValuePairs::ThrowIfTypeMismatch
              ((char *)param_2,(type_info *)&EC2NPoint::typeinfo,*(type_info **)(param_1 + 0x10));
    if ((in_x3 & 1) != 0) {
      in_x2 = *(code **)(in_x2 + *(long *)(*(long *)param_1 + ((long)in_x3 >> 1)));
    }
    lVar3 = (*in_x2)();
    lVar4 = *(long *)(param_1 + 0x18);
    PolynomialMod2::operator=((PolynomialMod2 *)(lVar4 + 8),(PolynomialMod2 *)(lVar3 + 8));
    PolynomialMod2::operator=((PolynomialMod2 *)(lVar4 + 0x28),(PolynomialMod2 *)(lVar3 + 0x28));
    *(undefined *)(lVar4 + 0x48) = *(undefined *)(lVar3 + 0x48);
    param_1[0x20] = '\x01';
    return (GetValueHelperClass *)param_1;
  }
  return (GetValueHelperClass *)param_1;
}


