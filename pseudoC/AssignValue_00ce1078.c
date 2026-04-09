// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignValue
// Entry Point: 00ce1078
// Size: 124 bytes
// Signature: undefined __thiscall AssignValue(AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme> * this, char * param_1, type_info * param_2, void * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>::AssignValue(char
   const*, std::type_info const&, void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>::
AssignValue(AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme> *this,
           char *param_1,type_info *param_2,void *param_3)

{
  ulong uVar1;
  
  if ((_typeinfo != "N8CryptoPP21BlockPaddingSchemeDef18BlockPaddingSchemeE") ||
     (uVar1 = AssignIntToInteger(param_2,param_3,this + 0x20), (uVar1 & 1) == 0)) {
    NameValuePairs::ThrowIfTypeMismatch
              (param_1,(type_info *)&BlockPaddingSchemeDef::BlockPaddingScheme::typeinfo,param_2);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x20);
  }
  return;
}


