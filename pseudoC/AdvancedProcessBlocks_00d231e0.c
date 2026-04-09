// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AdvancedProcessBlocks
// Entry Point: 00d231e0
// Size: 4 bytes
// Signature: undefined __thiscall AdvancedProcessBlocks(Dec * this, uchar * param_1, uchar * param_2, uchar * param_3, ulong param_4, uint param_5)


/* non-virtual thunk to CryptoPP::Rijndael::Dec::AdvancedProcessBlocks(unsigned char const*,
   unsigned char const*, unsigned char*, unsigned long, unsigned int) const */

void __thiscall
CryptoPP::Rijndael::Dec::AdvancedProcessBlocks
          (Dec *this,uchar *param_1,uchar *param_2,uchar *param_3,ulong param_4,uint param_5)

{
  BlockTransformation::AdvancedProcessBlocks
            ((BlockTransformation *)this,param_1,param_2,param_3,param_4,param_5);
  return;
}


