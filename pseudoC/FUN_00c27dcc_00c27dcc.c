// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c27dcc
// Entry Point: 00c27dcc
// Size: 120 bytes
// Signature: undefined FUN_00c27dcc(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00c27dcc(short *param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  
  fwrite("Stack now",9,1,_stderr);
  if (param_1 <= param_2) {
    do {
      psVar2 = param_1 + 1;
      fprintf(_stderr," %d",(long)*param_1);
      param_1 = psVar2;
    } while (psVar2 <= param_2);
  }
  iVar1 = fputc(10,_stderr);
  return iVar1;
}


