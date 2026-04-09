// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignValue
// Entry Point: 00c7ea00
// Size: 128 bytes
// Signature: undefined __thiscall AssignValue(AlgorithmParametersTemplate<bool> * this, char * param_1, type_info * param_2, void * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptoPP::AlgorithmParametersTemplate<bool>::AssignValue(char const*, std::type_info const&,
   void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<bool>::AssignValue
          (AlgorithmParametersTemplate<bool> *this,char *param_1,type_info *param_2,void *param_3)

{
  ulong uVar1;
  
  if ((_typeinfo != _typeinfo) ||
     (uVar1 = AssignIntToInteger(param_2,param_3,this + 0x20), (uVar1 & 1) == 0)) {
    NameValuePairs::ThrowIfTypeMismatch(param_1,(type_info *)&bool::typeinfo,param_2);
    *(AlgorithmParametersTemplate<bool> *)param_3 = this[0x20];
  }
  return;
}


