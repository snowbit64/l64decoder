// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set_block_bits
// Entry Point: 00a8a73c
// Size: 80 bytes
// Signature: undefined __cdecl set_block_bits(uchar * param_1, uint param_2, uint param_3, uint * param_4)


/* BC7EncodeUtil::BC7Enc16::set_block_bits(unsigned char*, unsigned int, unsigned int, unsigned
   int*) */

void BC7EncodeUtil::BC7Enc16::set_block_bits(uchar *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    uVar2 = *param_4;
    do {
      uVar1 = 8 - (uVar2 & 7);
      param_1[uVar2 >> 3] = param_1[uVar2 >> 3] | (byte)(param_2 << (ulong)(uVar2 & 7));
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      param_3 = param_3 - uVar1;
      param_2 = param_2 >> (ulong)(uVar1 & 0x1f);
      uVar2 = uVar1 + *param_4;
      *param_4 = uVar2;
    } while (param_3 != 0);
  }
  return;
}


