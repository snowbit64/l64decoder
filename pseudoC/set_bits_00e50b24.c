// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set_bits
// Entry Point: 00e50b24
// Size: 56 bytes
// Signature: undefined __cdecl set_bits(uint * param_1, int * param_2, int param_3, uint param_4)


/* set_bits(unsigned int*, int*, int, unsigned int) */

void set_bits(uint *param_1,int *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *param_2;
  uVar1 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  lVar3 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  *(uint *)((long)param_1 + lVar3) =
       param_4 << (ulong)(uVar2 & 7) | *(uint *)((long)param_1 + lVar3);
  *param_2 = *param_2 + param_3;
  return;
}


