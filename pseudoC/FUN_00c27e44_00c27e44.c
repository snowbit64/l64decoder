// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c27e44
// Entry Point: 00c27e44
// Size: 84 bytes
// Signature: undefined FUN_00c27e44(void)


int FUN_00c27e44(FILE *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = "token";
  if (0x62 < param_2) {
    pcVar1 = "nterm";
  }
  fprintf(param_1,"%s %s (",pcVar1,(&PTR_s__end_of_file__00feda40)[param_2]);
  iVar2 = fputc(0x29,param_1);
  return iVar2;
}


