// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetPublicElement
// Entry Point: 00cb2578
// Size: 104 bytes
// Signature: undefined __thiscall SetPublicElement(DL_PublicKey<CryptoPP::ECPPoint> * this, ECPPoint * param_1)


/* CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>::SetPublicElement(CryptoPP::ECPPoint const&) */

void __thiscall
CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>::SetPublicElement
          (DL_PublicKey<CryptoPP::ECPPoint> *this,ECPPoint *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x48))();
  plVar2 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  uVar3 = (**(code **)(*plVar2 + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00cb25dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,param_1);
  return;
}


