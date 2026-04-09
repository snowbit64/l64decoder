// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: errorMessage
// Entry Point: 00aaa82c
// Size: 56 bytes
// Signature: undefined __thiscall errorMessage(StdOutLogSink * this, char * param_1, uint param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StdOutLogSink::errorMessage(char const*, unsigned int) */

int __thiscall StdOutLogSink::errorMessage(StdOutLogSink *this,char *param_1,uint param_2)

{
  int iVar1;
  
  fwrite(param_1,1,(ulong)param_2,_stderr);
  iVar1 = fflush(_stderr);
  return iVar1;
}


