// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_tell_memfile_func
// Entry Point: 00b360ec
// Size: 28 bytes
// Signature: undefined __cdecl gs_tell_memfile_func(void * param_1, void * param_2)


/* ZipArchiveWriter::gs_tell_memfile_func(void*, void*) */

undefined8 ZipArchiveWriter::gs_tell_memfile_func(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00b360fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
    return uVar1;
  }
  return 0;
}


