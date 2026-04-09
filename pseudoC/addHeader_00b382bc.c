// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addHeader
// Entry Point: 00b382bc
// Size: 92 bytes
// Signature: undefined __thiscall addHeader(AndroidHTTPSRequest * this, char * param_1, char * param_2)


/* AndroidHTTPSRequest::addHeader(char const*, char const*) */

void __thiscall
AndroidHTTPSRequest::addHeader(AndroidHTTPSRequest *this,char *param_1,char *param_2)

{
  AndroidHTTPSRequest *pAVar1;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    pAVar1 = this + 0x20;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pAVar1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pAVar1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pAVar1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pAVar1);
  }
  return;
}


