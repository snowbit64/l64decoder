// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ca1ebc
// Size: 292 bytes
// Signature: GetValueHelperClass * __cdecl operator()(char * param_1, _func_EC2N_ptr * param_2)


/* CryptoPP::GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,
   CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint> >&
   CryptoPP::GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,
   CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint> >::TEMPNAMEPLACEHOLDERVALUE(char const*,
   CryptoPP::EC2N const& (CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::*)() const) */

GetValueHelperClass *
CryptoPP::
GetValueHelperClass<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
::operator()(char *param_1,_func_EC2N_ptr *param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  code *in_x2;
  ulong in_x3;
  long *plVar5;
  long lVar6;
  
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
              ((char *)param_2,(type_info *)&EC2N::typeinfo,*(type_info **)(param_1 + 0x10));
    if ((in_x3 & 1) != 0) {
      in_x2 = *(code **)(in_x2 + *(long *)(*(long *)param_1 + ((long)in_x3 >> 1)));
    }
    lVar3 = (*in_x2)();
    lVar6 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(lVar3 + 0x10);
    plVar5 = *(long **)(lVar6 + 0x10);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))();
    }
    *(long **)(lVar6 + 0x10) = plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    PolynomialMod2::operator=((PolynomialMod2 *)(lVar6 + 0x18),(PolynomialMod2 *)(lVar3 + 0x18));
    PolynomialMod2::operator=((PolynomialMod2 *)(lVar6 + 0x38),(PolynomialMod2 *)(lVar3 + 0x38));
    PolynomialMod2::operator=((PolynomialMod2 *)(lVar6 + 0x60),(PolynomialMod2 *)(lVar3 + 0x60));
    PolynomialMod2::operator=((PolynomialMod2 *)(lVar6 + 0x80),(PolynomialMod2 *)(lVar3 + 0x80));
    *(undefined *)(lVar6 + 0xa0) = *(undefined *)(lVar3 + 0xa0);
    param_1[0x20] = '\x01';
    return (GetValueHelperClass *)param_1;
  }
  return (GetValueHelperClass *)param_1;
}


