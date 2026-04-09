// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBasicAuth
// Entry Point: 00b381a0
// Size: 88 bytes
// Signature: undefined __thiscall setBasicAuth(AndroidHTTPSRequest * this, char * param_1, char * param_2)


/* AndroidHTTPSRequest::setBasicAuth(char const*, char const*) */

void __thiscall
AndroidHTTPSRequest::setBasicAuth(AndroidHTTPSRequest *this,char *param_1,char *param_2)

{
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    if (((byte)this[0x20] & 1) == 0) {
      *(undefined2 *)(this + 0x20) = 0;
    }
    else {
      **(undefined **)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x28) = 0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x68));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x80));
  }
  return;
}


