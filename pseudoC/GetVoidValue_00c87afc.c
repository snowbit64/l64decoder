// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetVoidValue
// Entry Point: 00c87afc
// Size: 112 bytes
// Signature: undefined __thiscall GetVoidValue(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>> * this, char * param_1, type_info * param_2, void * param_3)


/* non-virtual thunk to
   CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer> >::GetVoidValue(char const*,
   std::type_info const&, void*) const */

void __thiscall
CryptoPP::
DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
::GetVoidValue(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
               *this,char *param_1,type_info *param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  GetValueHelperClass<CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>,CryptoPP::DL_GroupParameters_IntegerBased>
  aGStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GetValueHelperClass<CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>,CryptoPP::DL_GroupParameters_IntegerBased>
  ::GetValueHelperClass
            (aGStack_50,(DL_GroupParameters_IntegerBasedImpl *)(this + -8),param_1,param_2,param_3,
             (NameValuePairs *)0x0);
  lVar2 = GetValueHelperClass<CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>,CryptoPP::DL_GroupParameters_IntegerBased>
          ::Assignable();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(char *)(lVar2 + 0x20) != '\0');
}


