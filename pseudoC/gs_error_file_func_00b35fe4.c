// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_error_file_func
// Entry Point: 00b35fe4
// Size: 52 bytes
// Signature: undefined __cdecl gs_error_file_func(void * param_1, void * param_2)


/* ZipArchiveWriter::gs_error_file_func(void*, void*) */

undefined8 ZipArchiveWriter::gs_error_file_func(void *param_1,void *param_2)

{
  ulong uVar1;
  
  if (param_2 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
  }
  return 0xffffffff;
}


