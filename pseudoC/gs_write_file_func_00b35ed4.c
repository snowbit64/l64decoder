// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_write_file_func
// Entry Point: 00b35ed4
// Size: 56 bytes
// Signature: undefined __cdecl gs_write_file_func(void * param_1, void * param_2, void * param_3, ulong param_4)


/* ZipArchiveWriter::gs_write_file_func(void*, void*, void const*, unsigned long) */

long ZipArchiveWriter::gs_write_file_func(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  int iVar1;
  
  if (param_2 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4 & 0xffffffff);
    return (long)iVar1;
  }
  return 0;
}


