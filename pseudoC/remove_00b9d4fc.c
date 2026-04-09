// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 00b9d4fc
// Size: 68 bytes
// Signature: undefined __cdecl remove(char param_1, uint param_2, char * param_3, uint * param_4, char * param_5)


/* StringUtil::remove(char, unsigned int, char const*, unsigned int&, char*) */

void StringUtil::remove(char param_1,uint param_2,char *param_3,uint *param_4,char *param_5)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar2 = (ulong)param_2;
    do {
      if (*param_3 != param_1) {
        param_5[uVar1] = *param_3;
        uVar1 = uVar1 + 1;
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  param_5[uVar1] = '\0';
  *param_4 = uVar1;
  return;
}


