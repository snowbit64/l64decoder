// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParameterSupported
// Entry Point: 00cb2e64
// Size: 40 bytes
// Signature: undefined __thiscall ParameterSupported(OAEP_Base * this, char * param_1)


/* CryptoPP::OAEP_Base::ParameterSupported(char const*) const */

bool __thiscall CryptoPP::OAEP_Base::ParameterSupported(OAEP_Base *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"EncodingParameters");
  return iVar1 == 0;
}


