// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeExponentiateBaseAndPublicElement
// Entry Point: 00cb2920
// Size: 156 bytes
// Signature: undefined __cdecl CascadeExponentiateBaseAndPublicElement(Integer * param_1, Integer * param_2)


/* CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>::CascadeExponentiateBaseAndPublicElement(CryptoPP::Integer
   const&, CryptoPP::Integer const&) const */

void CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>::CascadeExponentiateBaseAndPublicElement
               (Integer *param_1,Integer *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x10))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x90))();
  uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
  uVar4 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00cb29b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,uVar3,param_2,uVar4);
  return;
}


