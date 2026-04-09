// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00cb0494
// Size: 188 bytes
// Signature: undefined __thiscall Precompute(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this, uint param_1)


/* virtual thunk to
   CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::Precompute(unsigned int) */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::Precompute
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this,uint param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = (long *)(this + *(long *)(*(long *)this + -0x58));
  plVar2 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
  plVar2 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5);
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5);
  uVar4 = (**(code **)(*plVar3 + 0x88))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(*plVar5 + 0xa0))();
  uVar1 = Integer::BitCount();
                    /* WARNING: Could not recover jumptable at 0x00cb054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar4,uVar1,param_1);
  return;
}


