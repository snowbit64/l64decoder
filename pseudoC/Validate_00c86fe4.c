// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Validate
// Entry Point: 00c86fe4
// Size: 284 bytes
// Signature: undefined __thiscall Validate(DL_GroupParameters<CryptoPP::Integer> * this, RandomNumberGenerator * param_1, uint param_2)


/* virtual thunk to
   CryptoPP::DL_GroupParameters<CryptoPP::Integer>::Validate(CryptoPP::RandomNumberGenerator&,
   unsigned int) const */

uint __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::Integer>::Validate
          (DL_GroupParameters<CryptoPP::Integer> *this,RandomNumberGenerator *param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  plVar1 = (long *)(this + *(long *)(*(long *)this + -0x30));
  plVar4 = (long *)(**(code **)(*plVar1 + 0x90))(plVar1);
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (param_2 < *(uint *)(plVar1 + 1)) {
    return 1;
  }
  uVar5 = (**(code **)(*plVar1 + 0xe0))(plVar1,param_1,param_2);
  if ((uVar5 & 1) != 0) {
    uVar6 = (**(code **)(*plVar1 + 0x68))(plVar1);
    uVar7 = (**(code **)(*plVar1 + 0x90))(plVar1);
    uVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,param_2,uVar6,uVar7);
    iVar2 = 0;
    if ((uVar3 & 1) != 0) {
      iVar2 = param_2 + 1;
    }
    *(int *)(plVar1 + 1) = iVar2;
    return uVar3 & 1;
  }
  *(undefined4 *)(plVar1 + 1) = 0;
  return 0;
}


