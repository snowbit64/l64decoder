// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: astc_encode
// Entry Point: 00e5184c
// Size: 168 bytes
// Signature: undefined __cdecl astc_encode(rgba_surface * param_1, float * param_2, uchar * param_3, ulong * param_4, astc_enc_settings * param_5)


/* astc_encode(rgba_surface const*, float*, unsigned char*, unsigned long*, astc_enc_settings*) */

void astc_encode(rgba_surface *param_1,float *param_2,uchar *param_3,ulong *param_4,
                astc_enc_settings *param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  NEON_ushl(CONCAT44(*(undefined4 *)(param_4 + 1),*(undefined4 *)(param_4 + 1)),0xfffffff0fffffff3,4
           );
  astc_encode_ispc();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


