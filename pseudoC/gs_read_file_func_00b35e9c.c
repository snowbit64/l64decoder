// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_read_file_func
// Entry Point: 00b35e9c
// Size: 56 bytes
// Signature: undefined __cdecl gs_read_file_func(void * param_1, void * param_2, void * param_3, ulong param_4)


/* ZipArchiveWriter::gs_read_file_func(void*, void*, void*, unsigned long) */

long ZipArchiveWriter::gs_read_file_func(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  int iVar1;
  
  if (param_2 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4 & 0xffffffff);
    return (long)iVar1;
  }
  return 0;
}


