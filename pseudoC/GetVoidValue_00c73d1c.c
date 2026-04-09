// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00c73d1c
// Size: 16 bytes
// Signature: undefined __thiscall GetVoidValue(AlgorithmParameters * this, char * param_1, type_info * param_2, void * param_3)


/* CryptoPP::AlgorithmParameters::GetVoidValue(char const*, std::type_info const&, void*) const */

void __thiscall
CryptoPP::AlgorithmParameters::GetVoidValue
          (AlgorithmParameters *this,char *param_1,type_info *param_2,void *param_3)

{
  if (*(AlgorithmParametersBase **)(this + 8) != (AlgorithmParametersBase *)0x0) {
    AlgorithmParametersBase::GetVoidValue
              (*(AlgorithmParametersBase **)(this + 8),param_1,param_2,param_3);
    return;
  }
  return;
}


