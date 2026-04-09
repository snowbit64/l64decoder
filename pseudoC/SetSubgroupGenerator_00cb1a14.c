// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetSubgroupGenerator
// Entry Point: 00cb1a14
// Size: 92 bytes
// Signature: undefined __thiscall SetSubgroupGenerator(DL_GroupParameters<CryptoPP::ECPPoint> * this, ECPPoint * param_1)


/* CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::SetSubgroupGenerator(CryptoPP::ECPPoint const&)
    */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::SetSubgroupGenerator
          (DL_GroupParameters<CryptoPP::ECPPoint> *this,ECPPoint *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x98))();
  uVar2 = (**(code **)(*(long *)this + 0x88))(this);
                    /* WARNING: Could not recover jumptable at 0x00cb1a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,param_1);
  return;
}


