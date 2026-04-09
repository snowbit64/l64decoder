// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00c87334
// Size: 132 bytes
// Signature: undefined __thiscall Precompute(DL_GroupParameters<CryptoPP::Integer> * this, uint param_1)


/* virtual thunk to CryptoPP::DL_GroupParameters<CryptoPP::Integer>::Precompute(unsigned int) */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::Integer>::Precompute
          (DL_GroupParameters<CryptoPP::Integer> *this,uint param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)(this + *(long *)(*(long *)this + -0x58));
  plVar3 = (long *)(**(code **)(*plVar1 + 0x98))(plVar1,param_1);
  uVar4 = (**(code **)(*plVar1 + 0x88))(plVar1);
  (**(code **)(*plVar1 + 0xa0))(plVar1);
  uVar2 = Integer::BitCount();
                    /* WARNING: Could not recover jumptable at 0x00c873b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,uVar4,uVar2,param_1);
  return;
}


