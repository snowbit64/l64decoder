// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hash
// Entry Point: 00b9e450
// Size: 52 bytes
// Signature: undefined __cdecl hash(char * param_1)


/* StringUtil::hash(char const*) */

int StringUtil::hash(char *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)(byte)*param_1;
  if (*param_1 != 0) {
    iVar1 = 0;
    lVar3 = 1;
    do {
      iVar1 = iVar1 + ((int)lVar3 + 0x76) * uVar2;
      uVar2 = (uint)(byte)param_1[lVar3];
      lVar3 = lVar3 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}


