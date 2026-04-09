// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df4eec
// Entry Point: 00df4eec
// Size: 116 bytes
// Signature: undefined FUN_00df4eec(void)


void FUN_00df4eec(undefined *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = param_2[1];
  cVar2 = param_2[3];
  *param_1 = (char)((int)param_2[2] + (int)*param_2 + ((int)param_2[2] + (int)*param_2 >> 0x1f) + 1U
                   >> 1);
  param_1[1] = (char)((int)cVar2 + (int)cVar1 + ((int)cVar2 + (int)cVar1 >> 0x1f) + 1U >> 1);
  cVar1 = param_2[5];
  cVar2 = param_2[7];
  param_1[4] = (char)((int)param_2[6] + (int)param_2[4] +
                      ((int)param_2[6] + (int)param_2[4] >> 0x1f) + 1U >> 1);
  param_1[5] = (char)((int)cVar2 + (int)cVar1 + ((int)cVar2 + (int)cVar1 >> 0x1f) + 1U >> 1);
  return;
}


