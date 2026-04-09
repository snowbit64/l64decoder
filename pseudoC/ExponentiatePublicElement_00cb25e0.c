// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ExponentiatePublicElement
// Entry Point: 00cb25e0
// Size: 120 bytes
// Signature: undefined __cdecl ExponentiatePublicElement(Integer * param_1)


/* CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>::ExponentiatePublicElement(CryptoPP::Integer const&)
   const */

void CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>::ExponentiatePublicElement(Integer *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x10))();
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
  uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00cb2654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2,uVar3);
  return;
}


