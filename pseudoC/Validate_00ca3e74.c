// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Validate
// Entry Point: 00ca3e74
// Size: 180 bytes
// Signature: undefined __thiscall Validate(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::Validate(CryptoPP::RandomNumberGenerator&, unsigned int) const */

undefined8 __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::Validate
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          RandomNumberGenerator *param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)(**(code **)(*(long *)this + 0x10))(this);
    uVar3 = (**(code **)(*(long *)this + 0x20))(this);
    uVar4 = (**(code **)(*(long *)this + 0x40))(this);
                    /* WARNING: Could not recover jumptable at 0x00ca3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,param_2,uVar3,uVar4);
    return uVar3;
  }
  return 0;
}


