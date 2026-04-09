// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00c8729c
// Size: 16 bytes
// Signature: undefined __thiscall GetVoidValue(DL_GroupParameters<CryptoPP::Integer> * this, char * param_1, type_info * param_2, void * param_3)


/* virtual thunk to CryptoPP::DL_GroupParameters<CryptoPP::Integer>::GetVoidValue(char const*,
   std::type_info const&, void*) const */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::Integer>::GetVoidValue
          (DL_GroupParameters<CryptoPP::Integer> *this,char *param_1,type_info *param_2,
          void *param_3)

{
  GetVoidValue(this + *(long *)(*(long *)this + -0x20),param_1,param_2,param_3);
  return;
}


