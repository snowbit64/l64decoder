// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignValue
// Entry Point: 00c7eb58
// Size: 96 bytes
// Signature: undefined __thiscall AssignValue(AlgorithmParametersTemplate<int> * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::AlgorithmParametersTemplate<int>::AssignValue(char const*, std::type_info const&,
   void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<int>::AssignValue
          (AlgorithmParametersTemplate<int> *this,char *param_1,type_info *param_2,void *param_3)

{
  ulong uVar1;
  
  uVar1 = AssignIntToInteger(param_2,param_3,this + 0x20);
  if ((uVar1 & 1) == 0) {
    NameValuePairs::ThrowIfTypeMismatch(param_1,(type_info *)&int::typeinfo,param_2);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x20);
  }
  return;
}


