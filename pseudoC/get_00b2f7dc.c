// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get
// Entry Point: 00b2f7dc
// Size: 88 bytes
// Signature: undefined __cdecl get(char * param_1, ACCESS_MODE param_2, bool param_3, bool param_4)


/* ArchiveFileLoader::get(char const*, File::ACCESS_MODE, bool, bool) */

void ArchiveFileLoader::get(char *param_1,ACCESS_MODE param_2,bool param_3,bool param_4)

{
  long lVar1;
  File *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (File *)0x0;
  getArchiveForFile((ArchiveFileLoader *)param_1,(char *)(ulong)param_2,(uint)param_3,param_4,
                    &local_30,(basic_string *)0x0,false);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


