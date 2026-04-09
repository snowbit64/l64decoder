// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFromHelperClass
// Entry Point: 00cc6bcc
// Size: 252 bytes
// Signature: undefined __thiscall AssignFromHelperClass(AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>> * this, DL_PublicKeyImpl * param_1, NameValuePairs * param_2)


/* CryptoPP::AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >, CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>
   >::AssignFromHelperClass(CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >*, CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
::AssignFromHelperClass
          (AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
           *this,DL_PublicKeyImpl *param_1,NameValuePairs *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  DL_PrivateKey<CryptoPP::EC2NPoint> *local_58;
  DL_PublicKeyImpl *local_50;
  NameValuePairs *pNStack_48;
  undefined local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(DL_PublicKeyImpl **)this = param_1;
  *(NameValuePairs **)(this + 8) = param_2;
  this[0x10] = (AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
                )0x0;
  bVar2 = NameValuePairs::
          GetThisObject<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>>
                    (param_2,param_1);
  if (bVar2) {
    this[0x10] = (AssignFromHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
                  )0x1;
  }
  else {
    local_58 = (DL_PrivateKey<CryptoPP::EC2NPoint> *)0x0;
    bVar2 = NameValuePairs::GetThisPointer<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
                      (param_2,(DL_PrivateKey **)&local_58);
    if (bVar2) {
      DL_PrivateKey<CryptoPP::EC2NPoint>::MakePublicKey(local_58,(DL_PublicKey *)param_1);
    }
    else {
      plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
      plVar3 = (long *)((long)plVar3 + *(long *)(*plVar3 + -0x70));
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      local_40 = 0;
      local_50 = param_1;
      pNStack_48 = param_2;
      bVar2 = NameValuePairs::GetThisObject<CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
                        (param_2,(DL_PublicKey *)param_1);
      if (bVar2) {
        local_40 = 1;
      }
      AssignFromHelperClass<CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>
      ::operator()((char *)&local_50,(_func_void_EC2NPoint_ptr *)"PublicElement");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


