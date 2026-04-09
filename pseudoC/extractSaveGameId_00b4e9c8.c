// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extractSaveGameId
// Entry Point: 00b4e9c8
// Size: 68 bytes
// Signature: undefined __cdecl extractSaveGameId(char * param_1, uint * param_2)


/* GenericSaveGameUtil::extractSaveGameId(char const*, unsigned int&) */

char * GenericSaveGameUtil::extractSaveGameId(char *param_1,uint *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = strrchr(param_1,0x5f);
  if (pcVar2 != (char *)0x0) {
    iVar1 = sscanf(pcVar2 + 1,"%u",param_2);
    pcVar2 = (char *)(ulong)(iVar1 == 1);
  }
  return pcVar2;
}


