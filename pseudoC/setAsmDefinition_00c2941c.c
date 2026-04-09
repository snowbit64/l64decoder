// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAsmDefinition
// Entry Point: 00c2941c
// Size: 60 bytes
// Signature: undefined __thiscall setAsmDefinition(IR_Function * this, char * param_1, bool param_2, IR_Type * param_3)


/* IR_Function::setAsmDefinition(char const*, bool, IR_Type*) */

void __thiscall
IR_Function::setAsmDefinition(IR_Function *this,char *param_1,bool param_2,IR_Type *param_3)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x40));
  this[0x60] = (IR_Function)param_2;
  *(IR_Type **)(this + 0x58) = param_3;
  return;
}


