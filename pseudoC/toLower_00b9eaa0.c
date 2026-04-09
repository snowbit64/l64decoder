// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toLower
// Entry Point: 00b9eaa0
// Size: 52 bytes
// Signature: undefined __cdecl toLower(char * param_1)


/* StringUtil::toLower(char*) */

void StringUtil::toLower(char *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)(byte)*param_1;
  if (*param_1 != 0) {
    pbVar3 = (byte *)(param_1 + 1);
    do {
      uVar1 = uVar2 | 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar1 = uVar2;
      }
      uVar2 = (uint)*pbVar3;
      pbVar3[-1] = (byte)uVar1;
      pbVar3 = pbVar3 + 1;
    } while (uVar2 != 0);
  }
  return;
}


