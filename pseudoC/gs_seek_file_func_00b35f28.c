// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gs_seek_file_func
// Entry Point: 00b35f28
// Size: 148 bytes
// Signature: undefined __cdecl gs_seek_file_func(void * param_1, void * param_2, ulong param_3, int param_4)


/* ZipArchiveWriter::gs_seek_file_func(void*, void*, unsigned long, int) */

undefined8
ZipArchiveWriter::gs_seek_file_func(void *param_1,void *param_2,ulong param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    lVar1 = (**(code **)(*param_2 + 0x40))(param_2);
                    /* WARNING: Load size is inaccurate */
    lVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    if (param_4 != 0) {
      if (param_4 == 2) {
        param_3 = lVar2 - param_3;
      }
      else {
        if (param_4 != 1) {
          return 0xffffffffffffffff;
        }
        param_3 = lVar1 + param_3;
      }
    }
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*param_2 + 0x38))(param_2,param_3);
  }
  return 0;
}


