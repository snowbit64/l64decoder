// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignValue
// Entry Point: 00ce11dc
// Size: 128 bytes
// Signature: undefined __thiscall AssignValue(AlgorithmParametersTemplate<unsigned_int> * this, char * param_1, type_info * param_2, void * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptoPP::AlgorithmParametersTemplate<unsigned int>::AssignValue(char const*, std::type_info
   const&, void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<unsigned_int>::AssignValue
          (AlgorithmParametersTemplate<unsigned_int> *this,char *param_1,type_info *param_2,
          void *param_3)

{
  ulong uVar1;
  
  if ((_vtable != _typeinfo) ||
     (uVar1 = AssignIntToInteger(param_2,param_3,this + 0x20), (uVar1 & 1) == 0)) {
    NameValuePairs::ThrowIfTypeMismatch(param_1,(type_info *)&unsigned_int::typeinfo,param_2);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x20);
  }
  return;
}


