// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIRRegisterName
// Entry Point: 00c50bcc
// Size: 84 bytes
// Signature: undefined __thiscall getIRRegisterName(IR_Type * this, uint param_1, char * param_2, basic_string * param_3)


/* IR_Type::getIRRegisterName(unsigned int, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) const */

char * __thiscall
IR_Type::getIRRegisterName(IR_Type *this,uint param_1,char *param_2,basic_string *param_3)

{
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_3);
    param_2 = *(char **)(param_3 + 4);
    if ((*(byte *)param_3 & 1) == 0) {
      param_2 = (char *)((long)param_3 + 1);
    }
  }
  return param_2;
}


