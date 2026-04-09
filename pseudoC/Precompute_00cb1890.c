// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00cb1890
// Size: 120 bytes
// Signature: undefined __thiscall Precompute(DL_GroupParameters<CryptoPP::ECPPoint> * this, uint param_1)


/* CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::Precompute(unsigned int) */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::Precompute
          (DL_GroupParameters<CryptoPP::ECPPoint> *this,uint param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(**(code **)(*(long *)this + 0x98))(this,param_1);
  uVar3 = (**(code **)(*(long *)this + 0x88))(this);
  (**(code **)(*(long *)this + 0xa0))(this);
  uVar1 = Integer::BitCount();
                    /* WARNING: Could not recover jumptable at 0x00cb1904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar3,uVar1,param_1);
  return;
}


