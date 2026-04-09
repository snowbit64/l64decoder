// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkChar
// Entry Point: 00b29e54
// Size: 80 bytes
// Signature: undefined __cdecl checkChar(char * * param_1, char param_2)


/* JSONUtil::checkChar(char const*&, char) */

bool JSONUtil::checkChar(char **param_1,char param_2)

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
  if (bVar1 == param_2) {
    *param_1 = (char *)(pbVar2 + 1);
  }
  return bVar1 == param_2;
}


