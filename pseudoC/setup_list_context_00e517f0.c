// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setup_list_context
// Entry Point: 00e517f0
// Size: 92 bytes
// Signature: undefined __cdecl setup_list_context(astc_enc_context * param_1, uint param_2)


/* setup_list_context(ispc::astc_enc_context*, unsigned int) */

void setup_list_context(astc_enc_context *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar1 = param_2 >> 5 & 6;
  param_1[0xc] = (astc_enc_context)((byte)(param_2 >> 0x13) & 1);
  uVar3 = NEON_ushl(CONCAT44(param_2,param_2),0xfffffff0fffffff3,4);
  uVar2 = 3;
  if (2 < uVar1) {
    uVar2 = 4;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(uint *)(param_1 + 0x14) = (uVar1 + 6 >> 2) + 1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(ulong *)param_1 =
       CONCAT44((int)((uVar3 & 0x700000007) >> 0x20) + 2,(int)(uVar3 & 0x700000007) + 2);
  return;
}


