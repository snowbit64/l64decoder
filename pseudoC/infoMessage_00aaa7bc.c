// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: infoMessage
// Entry Point: 00aaa7bc
// Size: 56 bytes
// Signature: undefined __thiscall infoMessage(StdOutLogSink * this, char * param_1, uint param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StdOutLogSink::infoMessage(char const*, unsigned int) */

int __thiscall StdOutLogSink::infoMessage(StdOutLogSink *this,char *param_1,uint param_2)

{
  int iVar1;
  
  fwrite(param_1,1,(ulong)param_2,_stdout);
  iVar1 = fflush(_stdout);
  return iVar1;
}


