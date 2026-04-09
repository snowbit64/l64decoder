// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Divide
// Entry Point: 00d04ac4
// Size: 68 bytes
// Signature: undefined __thiscall Divide(ModularArithmetic * this, Integer * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::Divide(CryptoPP::Integer const&, CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::ModularArithmetic::Divide(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x88))(this,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d04b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x80))(this,param_1,uVar1);
  return;
}


