// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ccbd3c
// Size: 220 bytes
// Signature: GetValueHelperClass * __cdecl operator()(char * param_1, _func_ECPPoint_ptr * param_2)


/* CryptoPP::GetValueHelperClass<CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> >&
   CryptoPP::GetValueHelperClass<CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> >::TEMPNAMEPLACEHOLDERVALUE(char const*,
   CryptoPP::ECPPoint const& (CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::*)() const) */

GetValueHelperClass *
CryptoPP::
GetValueHelperClass<CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
::operator()(char *param_1,_func_ECPPoint_ptr *param_2)

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
              ((char *)param_2,(type_info *)&ECPPoint::typeinfo,*(type_info **)(param_1 + 0x10));
    if ((in_x3 & 1) != 0) {
      in_x2 = *(code **)(in_x2 + *(long *)(*(long *)param_1 + ((long)in_x3 >> 1)));
    }
    lVar3 = (*in_x2)();
    lVar4 = *(long *)(param_1 + 0x18);
    Integer::operator=((Integer *)(lVar4 + 8),(Integer *)(lVar3 + 8));
    Integer::operator=((Integer *)(lVar4 + 0x38),(Integer *)(lVar3 + 0x38));
    *(undefined *)(lVar4 + 0x68) = *(undefined *)(lVar3 + 0x68);
    param_1[0x20] = '\x01';
    return (GetValueHelperClass *)param_1;
  }
  return (GetValueHelperClass *)param_1;
}


