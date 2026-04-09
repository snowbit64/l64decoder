// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser__scan_string
// Entry Point: 00c219c8
// Size: 164 bytes
// Signature: undefined __cdecl gsParser__scan_string(char * param_1, void * param_2)


/* gsParser__scan_string(char const*, void*) */

void gsParser__scan_string(char *param_1,void *param_2)

{
  size_t sVar1;
  char *__dest;
  long lVar2;
  int iVar3;
  
  sVar1 = strlen(param_1);
  iVar3 = (int)sVar1;
  __dest = (char *)malloc((ulong)(iVar3 + 2U));
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00c21450("out of dynamic memory in yy_scan_bytes()");
  }
  if (0 < iVar3) {
    memcpy(__dest,param_1,sVar1 & 0xffffffff);
  }
  __dest[iVar3] = '\0';
  __dest[iVar3 + 1] = '\0';
  lVar2 = gsParser__scan_buffer(__dest,iVar3 + 2U,param_2);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x20) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c21450("bad buffer in yy_scan_bytes()");
}


