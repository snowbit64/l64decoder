// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: iHash
// Entry Point: 00b9e618
// Size: 68 bytes
// Signature: undefined __cdecl iHash(char * param_1)


/* StringUtil::iHash(char const*) */

int StringUtil::iHash(char *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  uVar3 = (uint)(byte)*param_1;
  if (*param_1 != 0) {
    iVar2 = 0;
    lVar5 = 1;
    do {
      uVar1 = uVar3 | 0x20;
      if (0x19 < uVar3 - 0x41) {
        uVar1 = uVar3;
      }
      iVar4 = (int)lVar5;
      uVar3 = (uint)(byte)param_1[lVar5];
      lVar5 = lVar5 + 1;
      iVar2 = iVar2 + uVar1 * (iVar4 + 0x76);
    } while (uVar3 != 0);
    return iVar2;
  }
  return 0;
}


