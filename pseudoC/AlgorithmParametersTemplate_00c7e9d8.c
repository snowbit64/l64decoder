// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmParametersTemplate
// Entry Point: 00c7e9d8
// Size: 40 bytes
// Signature: undefined __thiscall AlgorithmParametersTemplate(AlgorithmParametersTemplate<bool> * this, char * param_1, bool * param_2, bool param_3)


/* CryptoPP::AlgorithmParametersTemplate<bool>::AlgorithmParametersTemplate(char const*, bool
   const&, bool) */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<bool>::AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<bool> *this,char *param_1,bool *param_2,bool param_3)

{
  AlgorithmParametersTemplate<bool> AVar1;
  
  this[0x10] = (AlgorithmParametersTemplate<bool>)param_3;
  this[0x11] = (AlgorithmParametersTemplate<bool>)0x0;
  AVar1 = (AlgorithmParametersTemplate<bool>)*param_2;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = AVar1;
  *(undefined ***)this = &PTR__AlgorithmParametersBase_00ff0ec0;
  *(char **)(this + 8) = param_1;
  return;
}


