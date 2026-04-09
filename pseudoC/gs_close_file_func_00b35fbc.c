// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_close_file_func
// Entry Point: 00b35fbc
// Size: 40 bytes
// Signature: undefined __cdecl gs_close_file_func(void * param_1, void * param_2)


/* ZipArchiveWriter::gs_close_file_func(void*, void*) */

undefined8 ZipArchiveWriter::gs_close_file_func(void *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*param_2 + 8))(param_2);
  }
  return 0;
}


