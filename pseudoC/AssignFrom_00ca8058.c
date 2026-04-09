// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00ca8058
// Size: 196 bytes
// Signature: undefined __thiscall AssignFrom(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, NameValuePairs * param_1)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::AssignFrom
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          NameValuePairs *param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *local_50;
  NameValuePairs *pNStack_48;
  undefined local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = NameValuePairs::
          GetThisObject<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>>
                    (param_1,(DL_PrivateKeyImpl *)this);
  if (!bVar2) {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x18))(this);
    plVar3 = (long *)((long)plVar3 + *(long *)(*plVar3 + -0x70));
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
    local_40 = 0;
    local_50 = this;
    pNStack_48 = param_1;
    bVar2 = NameValuePairs::GetThisObject<CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>>
                      (param_1,(DL_PrivateKey *)this);
    if (bVar2) {
      local_40 = 1;
    }
    AssignFromHelperClass<CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>,CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>>
    ::operator()((char *)&local_50,(_func_void_Integer_ptr *)"PrivateExponent");
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


