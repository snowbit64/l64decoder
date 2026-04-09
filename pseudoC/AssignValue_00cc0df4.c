// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignValue
// Entry Point: 00cc0df4
// Size: 132 bytes
// Signature: undefined __thiscall AssignValue(AlgorithmParametersTemplate<CryptoPP::Integer> * this, char * param_1, type_info * param_2, void * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer>::AssignValue(char const*, std::type_info
   const&, void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer>::AssignValue
          (AlgorithmParametersTemplate<CryptoPP::Integer> *this,char *param_1,type_info *param_2,
          void *param_3)

{
  ulong uVar1;
  
  if ((_typeinfo != "N8CryptoPP7IntegerE") ||
     (uVar1 = AssignIntToInteger(param_2,param_3,this + 0x20), (uVar1 & 1) == 0)) {
    NameValuePairs::ThrowIfTypeMismatch(param_1,(type_info *)&Integer::typeinfo,param_2);
    Integer::operator=((Integer *)param_3,(Integer *)(this + 0x20));
  }
  return;
}


