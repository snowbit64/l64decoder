// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Equal
// Entry Point: 00cd2ef4
// Size: 164 bytes
// Signature: undefined __thiscall Equal(ECP * this, ECPPoint * param_1, ECPPoint * param_2)


/* CryptoPP::ECP::Equal(CryptoPP::ECPPoint const&, CryptoPP::ECPPoint const&) const */

undefined8 __thiscall CryptoPP::ECP::Equal(ECP *this,ECPPoint *param_1,ECPPoint *param_2)

{
  ECPPoint EVar1;
  ECPPoint EVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  EVar1 = param_1[0x68];
  EVar2 = param_2[0x68];
  if ((EVar1 != (ECPPoint)0x0) && (EVar2 != (ECPPoint)0x0)) {
    return 1;
  }
  if (((EVar1 == (ECPPoint)0x0) || (EVar2 != (ECPPoint)0x0)) &&
     (((EVar1 != (ECPPoint)0x0 || (EVar2 == (ECPPoint)0x0)) &&
      (uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x10))
                         (*(long **)(this + 0x10),param_1 + 8,param_2 + 8), (uVar3 & 1) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00cd2f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(**(long **)(this + 0x10) + 0x10))
                      (*(long **)(this + 0x10),param_1 + 0x38,param_2 + 0x38);
    return uVar4;
  }
  return 0;
}


