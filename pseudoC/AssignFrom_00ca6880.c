// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00ca6880
// Size: 232 bytes
// Signature: undefined __thiscall AssignFrom(DL_PublicKey_ECGDSA<CryptoPP::ECP> * this, NameValuePairs * param_1)


/* virtual thunk to
   CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::AssignFrom
          (DL_PublicKey_ECGDSA<CryptoPP::ECP> *this,NameValuePairs *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *local_58;
  long *local_50;
  NameValuePairs *pNStack_48;
  undefined local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = (long *)0x0;
  plVar1 = (long *)(this + *(long *)(*(long *)this + -0x28));
  bVar3 = NameValuePairs::GetThisPointer<CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>>
                    (param_1,(DL_PrivateKey_ECGDSA **)&local_58);
  if (bVar3) {
    (**(code **)(*local_58 + 0x80))(local_58,plVar1);
  }
  else {
    plVar4 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1);
    plVar4 = (long *)((long)plVar4 + *(long *)(*plVar4 + -0x70));
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    local_40 = 0;
    local_50 = plVar1;
    pNStack_48 = param_1;
    bVar3 = NameValuePairs::GetThisObject<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>>
                      (param_1,(DL_PublicKey_ECGDSA *)plVar1);
    if (bVar3) {
      local_40 = 1;
    }
    AssignFromHelperClass<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>,CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>>
    ::operator()((char *)&local_50,(_func_void_ECPPoint_ptr *)"PublicElement");
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


