// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00ca6334
// Size: 224 bytes
// Signature: undefined __thiscall AssignFrom(DL_PublicKey_ECGDSA<CryptoPP::ECP> * this, NameValuePairs * param_1)


/* CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::AssignFrom
          (DL_PublicKey_ECGDSA<CryptoPP::ECP> *this,NameValuePairs *param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *local_58;
  DL_PublicKey_ECGDSA<CryptoPP::ECP> *local_50;
  NameValuePairs *pNStack_48;
  undefined local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = (long *)0x0;
  bVar2 = NameValuePairs::GetThisPointer<CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>>
                    (param_1,(DL_PrivateKey_ECGDSA **)&local_58);
  if (bVar2) {
    (**(code **)(*local_58 + 0x80))(local_58,this);
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x18))(this);
    plVar3 = (long *)((long)plVar3 + *(long *)(*plVar3 + -0x70));
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
    local_40 = 0;
    local_50 = this;
    pNStack_48 = param_1;
    bVar2 = NameValuePairs::GetThisObject<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>>
                      (param_1,(DL_PublicKey_ECGDSA *)this);
    if (bVar2) {
      local_40 = 1;
    }
    AssignFromHelperClass<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>,CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>>
    ::operator()((char *)&local_50,(_func_void_ECPPoint_ptr *)"PublicElement");
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


