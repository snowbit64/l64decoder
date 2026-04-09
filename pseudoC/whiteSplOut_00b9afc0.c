// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: whiteSplOut
// Entry Point: 00b9afc0
// Size: 160 bytes
// Signature: undefined __cdecl whiteSplOut(char * param_1, uint param_2, uint param_3, int * param_4, int * param_5)


/* StringArithmeticUtil::whiteSplOut(char const*, unsigned int, unsigned int, int*, int*) */

void StringArithmeticUtil::whiteSplOut
               (char *param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = *param_4;
  if (param_2 < uVar1) {
    pbVar2 = (byte *)(param_1 + (int)uVar1);
    do {
      pbVar2 = pbVar2 + -1;
      if (0x20 < *pbVar2 || (1L << ((ulong)*pbVar2 & 0x3f) & 0x100000600U) == 0) break;
      uVar1 = uVar1 - 1;
      *param_4 = uVar1;
    } while (param_2 < uVar1);
  }
  uVar1 = *param_5;
  if (uVar1 < param_3) {
    pbVar2 = (byte *)(param_1 + (int)uVar1);
    do {
      if (0x20 < *pbVar2 || (1L << ((ulong)*pbVar2 & 0x3f) & 0x100000600U) == 0) {
        return;
      }
      uVar1 = uVar1 + 1;
      pbVar2 = pbVar2 + 1;
      *param_5 = uVar1;
    } while (uVar1 < param_3);
  }
  return;
}


