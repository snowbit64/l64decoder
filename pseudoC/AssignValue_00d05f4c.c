// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignValue
// Entry Point: 00d05f4c
// Size: 124 bytes
// Signature: undefined __thiscall AssignValue(AlgorithmParametersTemplate<CryptoPP::Integer::RandomNumberType> * this, char * param_1, type_info * param_2, void * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer::RandomNumberType>::AssignValue(char
   const*, std::type_info const&, void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer::RandomNumberType>::AssignValue
          (AlgorithmParametersTemplate<CryptoPP::Integer::RandomNumberType> *this,char *param_1,
          type_info *param_2,void *param_3)

{
  ulong uVar1;
  
  if ((_typeinfo != "N8CryptoPP7Integer16RandomNumberTypeE") ||
     (uVar1 = AssignIntToInteger(param_2,param_3,this + 0x20), (uVar1 & 1) == 0)) {
    NameValuePairs::ThrowIfTypeMismatch
              (param_1,(type_info *)&Integer::RandomNumberType::typeinfo,param_2);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x20);
  }
  return;
}


