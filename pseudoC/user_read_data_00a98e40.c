// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: user_read_data
// Entry Point: 00a98e40
// Size: 84 bytes
// Signature: undefined __cdecl user_read_data(png_struct_def * param_1, uchar * param_2, ulong param_3)


/* PNGUtil::user_read_data(png_struct_def*, unsigned char*, unsigned long) */

void PNGUtil::user_read_data(png_struct_def *param_1,uchar *param_2,ulong param_3)

{
  long *plVar1;
  
  plVar1 = (long *)png_get_io_ptr();
  memcpy(param_2,(void *)(*plVar1 + (ulong)*(uint *)((long)plVar1 + 0xc)),param_3);
  *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + (int)param_3;
  return;
}


