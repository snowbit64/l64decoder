// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: skipWhitespace
// Entry Point: 00b29538
// Size: 48 bytes
// Signature: undefined __cdecl skipWhitespace(char * * param_1)


/* JSONUtil::skipWhitespace(char const*&) */

void JSONUtil::skipWhitespace(char **param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  while (bVar1 - 1 < 0x20) {
    pbVar2 = pbVar2 + 1;
    *param_1 = (char *)pbVar2;
    bVar1 = *pbVar2;
  }
  return;
}


