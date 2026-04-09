// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00c0697c
// Size: 4 bytes
// Signature: undefined __thiscall initialize(ShaderConverter * this, char * param_1, char * param_2, char * param_3)


/* ShaderConverter::initialize(char const*, char const*, char const*) */

void __thiscall
ShaderConverter::initialize(ShaderConverter *this,char *param_1,char *param_2,char *param_3)

{
  HlslParser::globalInitialize((Context *)this,param_1,param_2,param_3);
  return;
}


