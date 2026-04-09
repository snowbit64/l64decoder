// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetDefaultSubgroupOrderSize
// Entry Point: 00cec7e4
// Size: 52 bytes
// Signature: undefined __thiscall GetDefaultSubgroupOrderSize(DL_GroupParameters_IntegerBased * this, uint param_1)


/* CryptoPP::DL_GroupParameters_IntegerBased::GetDefaultSubgroupOrderSize(unsigned int) const */

int __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::GetDefaultSubgroupOrderSize
          (DL_GroupParameters_IntegerBased *this,uint param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0xb0))();
  iVar1 = DiscreteLogWorkFactor(iVar1 * param_1);
  return iVar1 << 1;
}


