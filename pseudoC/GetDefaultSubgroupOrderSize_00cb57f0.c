// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetDefaultSubgroupOrderSize
// Entry Point: 00cb57f0
// Size: 8 bytes
// Signature: undefined __thiscall GetDefaultSubgroupOrderSize(DL_GroupParameters_GFP_DefaultSafePrime * this, uint param_1)


/* CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime::GetDefaultSubgroupOrderSize(unsigned int)
   const */

int __thiscall
CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime::GetDefaultSubgroupOrderSize
          (DL_GroupParameters_GFP_DefaultSafePrime *this,uint param_1)

{
  return param_1 - 1;
}


