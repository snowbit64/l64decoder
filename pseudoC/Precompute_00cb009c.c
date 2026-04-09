// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00cb009c
// Size: 176 bytes
// Signature: undefined __thiscall Precompute(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this, uint param_1)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::Precompute(unsigned int) */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::Precompute
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this,uint param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)(**(code **)(*(long *)this + 0x18))();
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
  plVar2 = (long *)(**(code **)(*(long *)this + 0x48))(this);
  plVar3 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  uVar4 = (**(code **)(*plVar3 + 0x88))();
  plVar3 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  (**(code **)(*plVar3 + 0xa0))();
  uVar1 = Integer::BitCount();
                    /* WARNING: Could not recover jumptable at 0x00cb0148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar4,uVar1,param_1);
  return;
}


