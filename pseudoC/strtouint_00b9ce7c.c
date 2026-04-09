// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strtouint
// Entry Point: 00b9ce7c
// Size: 68 bytes
// Signature: undefined __cdecl strtouint(char * param_1)


/* StringUtil::strtouint(char const*) */

int StringUtil::strtouint(char *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = (uint)(byte)*param_1;
  if ((byte)*param_1 - 0x30 < 10) {
    iVar1 = 0;
    pbVar2 = (byte *)(param_1 + 1);
    do {
      iVar1 = uVar3 + iVar1 * 10;
      uVar3 = (uint)*pbVar2;
      iVar1 = iVar1 + -0x30;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 - 0x30 < 10);
    return iVar1;
  }
  return 0;
}


