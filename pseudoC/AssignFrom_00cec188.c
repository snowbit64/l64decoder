// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00cec188
// Size: 168 bytes
// Signature: undefined __thiscall AssignFrom(DL_GroupParameters_IntegerBased * this, NameValuePairs * param_1)


/* virtual thunk to CryptoPP::DL_GroupParameters_IntegerBased::AssignFrom(CryptoPP::NameValuePairs
   const&) */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::AssignFrom
          (DL_GroupParameters_IntegerBased *this,NameValuePairs *param_1)

{
  long lVar1;
  bool bVar2;
  AssignFromHelperClass *pAVar3;
  DL_GroupParameters_IntegerBased *local_40;
  NameValuePairs *local_38;
  undefined local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_40 = this + *(long *)(*(long *)this + -0x28);
  local_38 = param_1;
  bVar2 = NameValuePairs::GetThisObject<CryptoPP::DL_GroupParameters_IntegerBased>(param_1,local_40)
  ;
  if (bVar2) {
    local_30 = 1;
  }
  pAVar3 = AssignFromHelperClass<CryptoPP::DL_GroupParameters_IntegerBased,CryptoPP::DL_GroupParameters_IntegerBased>
           ::operator()((char *)&local_40,"Modulus",
                        (_func_void_Integer_ptr_Integer_ptr *)"SubgroupGenerator");
  AssignFromHelperClass<CryptoPP::DL_GroupParameters_IntegerBased,CryptoPP::DL_GroupParameters_IntegerBased>
  ::operator()((char *)pAVar3,(_func_void_Integer_ptr *)"SubgroupOrder");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


