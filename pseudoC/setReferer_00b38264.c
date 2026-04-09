// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReferer
// Entry Point: 00b38264
// Size: 72 bytes
// Signature: undefined __thiscall setReferer(AndroidHTTPSRequest * this, char * param_1)


/* AndroidHTTPSRequest::setReferer(char const*) */

void __thiscall AndroidHTTPSRequest::setReferer(AndroidHTTPSRequest *this,char *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(this + 0x50);
  if (param_1 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)puVar1);
    return;
  }
  if ((*(byte *)puVar1 & 1) == 0) {
    *puVar1 = 0;
    return;
  }
  **(undefined **)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


