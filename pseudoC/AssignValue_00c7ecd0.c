// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignValue
// Entry Point: 00c7ecd0
// Size: 156 bytes
// Signature: undefined __thiscall AssignValue(AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter> * this, char * param_1, type_info * param_2, void * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>::AssignValue(char
   const*, std::type_info const&, void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>::AssignValue
          (AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter> *this,char *param_1,
          type_info *param_2,void *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((_typeinfo == "N8CryptoPP23ConstByteArrayParameterE") &&
     (uVar1 = AssignIntToInteger(param_2,param_3,this + 0x20), (uVar1 & 1) != 0)) {
    return;
  }
  NameValuePairs::ThrowIfTypeMismatch
            (param_1,(type_info *)&ConstByteArrayParameter::typeinfo,param_2);
  uVar3 = *(undefined8 *)(this + 0x20);
  uVar2 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)((long)param_3 + 8) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)param_3 = uVar3;
  *(undefined8 *)((long)param_3 + 0x10) = uVar2;
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::Assign
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             ((long)param_3 + 0x18),(SecBlock *)(this + 0x38));
  return;
}


