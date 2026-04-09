// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ExponentiateBase
// Entry Point: 00cb214c
// Size: 100 bytes
// Signature: undefined __cdecl ExponentiateBase(Integer * param_1)


/* CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::ExponentiateBase(CryptoPP::Integer const&)
   const */

void CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::ExponentiateBase(Integer *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x90))();
  uVar2 = (**(code **)(*(long *)param_1 + 0x88))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00cb21ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,uVar2);
  return;
}


