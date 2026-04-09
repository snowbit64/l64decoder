// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmParametersTemplate
// Entry Point: 00c7eb30
// Size: 40 bytes
// Signature: undefined __thiscall AlgorithmParametersTemplate(AlgorithmParametersTemplate<int> * this, char * param_1, int * param_2, bool param_3)


/* CryptoPP::AlgorithmParametersTemplate<int>::AlgorithmParametersTemplate(char const*, int const&,
   bool) */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<int>::AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<int> *this,char *param_1,int *param_2,bool param_3)

{
  int iVar1;
  
  this[0x10] = (AlgorithmParametersTemplate<int>)param_3;
  iVar1 = *param_2;
  this[0x11] = (AlgorithmParametersTemplate<int>)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(int *)(this + 0x20) = iVar1;
  *(undefined ***)this = &PTR__AlgorithmParametersBase_00ff0ef0;
  *(char **)(this + 8) = param_1;
  return;
}


