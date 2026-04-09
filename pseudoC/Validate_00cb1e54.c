// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Validate
// Entry Point: 00cb1e54
// Size: 272 bytes
// Signature: undefined __thiscall Validate(DL_GroupParameters<CryptoPP::EC2NPoint> * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::Validate(CryptoPP::RandomNumberGenerator&,
   unsigned int) const */

uint __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::Validate
          (DL_GroupParameters<CryptoPP::EC2NPoint> *this,RandomNumberGenerator *param_1,uint param_2
          )

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar3 = (long *)(**(code **)(*(long *)this + 0x90))();
  uVar4 = (**(code **)(*plVar3 + 0x10))();
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (param_2 < *(uint *)(this + 8)) {
    return 1;
  }
  uVar4 = (**(code **)(*(long *)this + 0xe0))(this,param_1,param_2);
  if ((uVar4 & 1) != 0) {
    uVar5 = (**(code **)(*(long *)this + 0x68))(this);
    uVar6 = (**(code **)(*(long *)this + 0x90))(this);
    uVar2 = (**(code **)(*(long *)this + 0xe8))(this,param_2,uVar5,uVar6);
    iVar1 = 0;
    if ((uVar2 & 1) != 0) {
      iVar1 = param_2 + 1;
    }
    *(int *)(this + 8) = iVar1;
    return uVar2 & 1;
  }
  *(undefined4 *)(this + 8) = 0;
  return 0;
}


