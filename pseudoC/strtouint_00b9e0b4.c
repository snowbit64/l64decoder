// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strtouint
// Entry Point: 00b9e0b4
// Size: 64 bytes
// Signature: undefined __cdecl strtouint(char * param_1, uint * param_2)


/* StringUtil::strtouint(char const*, unsigned int&) */

void StringUtil::strtouint(char *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(byte)*param_1;
  if ((byte)*param_1 - 0x30 < 10) {
    uVar2 = 0;
    do {
      iVar1 = uVar3 + uVar2 * 10;
      param_1 = (char *)((byte *)param_1 + 1);
      uVar3 = (uint)(byte)*param_1;
      uVar2 = iVar1 - 0x30;
    } while (uVar3 - 0x30 < 10);
    *param_2 = uVar2;
    return;
  }
  *param_2 = 0;
  return;
}


