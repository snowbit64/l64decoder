// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUserAgent
// Entry Point: 00b3821c
// Size: 72 bytes
// Signature: undefined __thiscall setUserAgent(AndroidHTTPSRequest * this, char * param_1)


/* AndroidHTTPSRequest::setUserAgent(char const*) */

void __thiscall AndroidHTTPSRequest::setUserAgent(AndroidHTTPSRequest *this,char *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(this + 0x38);
  if (param_1 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)puVar1);
    return;
  }
  if ((*(byte *)puVar1 & 1) == 0) {
    *puVar1 = 0;
    return;
  }
  **(undefined **)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}


