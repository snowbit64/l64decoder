// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_error_func
// Entry Point: 00a98e20
// Size: 32 bytes
// Signature: undefined __cdecl png_error_func(png_struct_def * param_1, char * param_2)


/* PNGUtil::png_error_func(png_struct_def*, char const*) */

void PNGUtil::png_error_func(png_struct_def *param_1,char *param_2)

{
  __jmp_buf_tag *__env;
  
  __env = (__jmp_buf_tag *)png_set_longjmp_fn(param_1,longjmp,0x100);
                    /* WARNING: Subroutine does not return */
  longjmp(__env,1);
}


