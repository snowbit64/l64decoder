// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_enc_patch_initial_bits
// Entry Point: 00e66ba0
// Size: 152 bytes
// Signature: undefined ec_enc_patch_initial_bits(void)


void ec_enc_patch_initial_bits(byte **param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 8 - param_3;
  uVar1 = ~(-1 << (ulong)(param_3 & 0x1f)) << (ulong)(uVar2 & 0x1f);
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    **param_1 = **param_1 & ((byte)uVar1 ^ 0xff) | (byte)(param_2 << (ulong)(uVar2 & 0x1f));
    return;
  }
  if (-1 < (int)*(uint *)((long)param_1 + 0x2c)) {
    *(uint *)((long)param_1 + 0x2c) =
         *(uint *)((long)param_1 + 0x2c) & (uVar1 ^ 0xffffffff) | param_2 << (ulong)(uVar2 & 0x1f);
    return;
  }
  if (0x80000000U >> (ulong)(param_3 & 0x1f) < *(uint *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return;
  }
  *(uint *)((long)param_1 + 0x24) =
       *(uint *)((long)param_1 + 0x24) & (uVar1 << 0x17 ^ 0xffffffff) |
       param_2 << (ulong)(0x1f - param_3 & 0x1f);
  return;
}


