// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Equal
// Entry Point: 00cd0dcc
// Size: 164 bytes
// Signature: undefined __thiscall Equal(EC2N * this, EC2NPoint * param_1, EC2NPoint * param_2)


/* CryptoPP::EC2N::Equal(CryptoPP::EC2NPoint const&, CryptoPP::EC2NPoint const&) const */

undefined8 __thiscall CryptoPP::EC2N::Equal(EC2N *this,EC2NPoint *param_1,EC2NPoint *param_2)

{
  EC2NPoint EVar1;
  EC2NPoint EVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  EVar1 = param_1[0x48];
  EVar2 = param_2[0x48];
  if ((EVar1 != (EC2NPoint)0x0) && (EVar2 != (EC2NPoint)0x0)) {
    return 1;
  }
  if (((EVar1 == (EC2NPoint)0x0) || (EVar2 != (EC2NPoint)0x0)) &&
     (((EVar1 != (EC2NPoint)0x0 || (EVar2 == (EC2NPoint)0x0)) &&
      (uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x10))
                         (*(long **)(this + 0x10),param_1 + 8,param_2 + 8), (uVar3 & 1) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00cd0e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(**(long **)(this + 0x10) + 0x10))
                      (*(long **)(this + 0x10),param_1 + 0x28,param_2 + 0x28);
    return uVar4;
  }
  return 0;
}


