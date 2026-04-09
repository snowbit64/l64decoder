// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificFilename
// Entry Point: 00963a20
// Size: 124 bytes
// Signature: undefined __cdecl getSpecificFilename(char * param_1)


/* TextureUtil::getSpecificFilename(char const*) */

char * TextureUtil::getSpecificFilename(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  pcVar1 = strrchr(param_1,0x2e);
  if ((pcVar1 != (char *)0x0) && (pcVar2 = *(char **)s_specificFileSuffixes, pcVar2 != (char *)0x0))
  {
    uVar3 = 1;
    do {
      pcVar2 = (char *)checkFileExistWithAnotherExtension(param_1,pcVar1,pcVar2);
      if (pcVar2 != param_1) {
        return pcVar2;
      }
      pcVar2 = *(char **)(s_specificFileSuffixes + uVar3 * 8);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (pcVar2 != (char *)0x0);
  }
  return param_1;
}


