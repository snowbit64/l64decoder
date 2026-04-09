// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: warnMessage
// Entry Point: 00aaa7f4
// Size: 56 bytes
// Signature: undefined __thiscall warnMessage(StdOutLogSink * this, char * param_1, uint param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StdOutLogSink::warnMessage(char const*, unsigned int) */

int __thiscall StdOutLogSink::warnMessage(StdOutLogSink *this,char *param_1,uint param_2)

{
  int iVar1;
  
  fwrite(param_1,1,(ulong)param_2,_stdout);
  iVar1 = fflush(_stdout);
  return iVar1;
}


