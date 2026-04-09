// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00ca8d34
// Size: 204 bytes
// Signature: undefined __thiscall AssignFrom(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, NameValuePairs * param_1)


/* virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::AssignFrom
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          NameValuePairs *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *local_50;
  NameValuePairs *pNStack_48;
  undefined local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(this + *(long *)(*(long *)this + -0x28));
  bVar3 = NameValuePairs::
          GetThisObject<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>>
                    (param_1,(DL_PrivateKeyImpl *)plVar1);
  if (!bVar3) {
    plVar4 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1);
    plVar4 = (long *)((long)plVar4 + *(long *)(*plVar4 + -0x70));
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    local_40 = 0;
    local_50 = plVar1;
    pNStack_48 = param_1;
    bVar3 = NameValuePairs::GetThisObject<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
                      (param_1,(DL_PrivateKey *)plVar1);
    if (bVar3) {
      local_40 = 1;
    }
    AssignFromHelperClass<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>,CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
    ::operator()((char *)&local_50,(_func_void_Integer_ptr *)"PrivateExponent");
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


