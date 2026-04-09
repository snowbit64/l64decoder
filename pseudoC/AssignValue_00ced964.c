// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignValue
// Entry Point: 00ced964
// Size: 128 bytes
// Signature: undefined __thiscall AssignValue(AlgorithmParametersTemplate<unsigned_char_const*> * this, char * param_1, type_info * param_2, void * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptoPP::AlgorithmParametersTemplate<unsigned char const*>::AssignValue(char const*,
   std::type_info const&, void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<unsigned_char_const*>::AssignValue
          (AlgorithmParametersTemplate<unsigned_char_const*> *this,char *param_1,type_info *param_2,
          void *param_3)

{
  ulong uVar1;
  
  if ((_typeinfo != _typeinfo) ||
     (uVar1 = AssignIntToInteger(param_2,param_3,this + 0x20), (uVar1 & 1) == 0)) {
    NameValuePairs::ThrowIfTypeMismatch
              (param_1,(type_info *)&unsigned_char_const*::typeinfo,param_2);
    *(undefined8 *)param_3 = *(undefined8 *)(this + 0x20);
  }
  return;
}


