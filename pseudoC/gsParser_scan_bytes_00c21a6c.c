// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser__scan_bytes
// Entry Point: 00c21a6c
// Size: 152 bytes
// Signature: undefined __cdecl gsParser__scan_bytes(char * param_1, int param_2, void * param_3)


/* gsParser__scan_bytes(char const*, int, void*) */

void gsParser__scan_bytes(char *param_1,int param_2,void *param_3)

{
  char *__dest;
  long lVar1;
  
  __dest = (char *)malloc((ulong)(param_2 + 2U));
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00c21450("out of dynamic memory in yy_scan_bytes()");
  }
  if (0 < param_2) {
    memcpy(__dest,param_1,(ulong)(uint)param_2);
  }
  *(undefined2 *)(__dest + param_2) = 0;
  lVar1 = gsParser__scan_buffer(__dest,param_2 + 2U,param_3);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c21450("bad buffer in yy_scan_bytes()");
}


