// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: atsc_rank
// Entry Point: 00e517e8
// Size: 4 bytes
// Signature: undefined __cdecl atsc_rank(rgba_surface * param_1, int param_2, int param_3, uint * param_4, astc_enc_settings * param_5)


/* atsc_rank(rgba_surface const*, int, int, unsigned int*, astc_enc_settings*) */

void atsc_rank(rgba_surface *param_1,int param_2,int param_3,uint *param_4,
              astc_enc_settings *param_5)

{
  astc_rank_ispc(param_1,param_2,param_3);
  return;
}


