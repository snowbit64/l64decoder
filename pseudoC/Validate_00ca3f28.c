// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Validate
// Entry Point: 00ca3f28
// Size: 192 bytes
// Signature: undefined __thiscall Validate(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, RandomNumberGenerator * param_1, uint param_2)


/* virtual thunk to CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::Validate(CryptoPP::RandomNumberGenerator&, unsigned int) const */

undefined8 __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::Validate
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          RandomNumberGenerator *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(this + *(long *)(*(long *)this + -0x30));
  plVar2 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
  if ((uVar3 & 1) != 0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1);
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar5 = (**(code **)(*plVar1 + 0x40))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00ca3fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar2 + 0xe8))(plVar2,param_2,uVar4,uVar5);
    return uVar4;
  }
  return 0;
}


