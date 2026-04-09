// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strtouint64
// Entry Point: 00b9e140
// Size: 72 bytes
// Signature: undefined __cdecl strtouint64(char * param_1)


/* StringUtil::strtouint64(char const*) */

long StringUtil::strtouint64(char *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  
  if ((byte)*param_1 - 0x30 < 10) {
    lVar2 = 0;
    pbVar3 = (byte *)(param_1 + 1);
    uVar4 = (uint)(byte)*param_1;
    do {
      bVar1 = *pbVar3;
      lVar2 = (ulong)(uVar4 - 0x30) + lVar2 * 10;
      pbVar3 = pbVar3 + 1;
      uVar4 = (uint)bVar1;
    } while (bVar1 - 0x30 < 10);
    return lVar2;
  }
  return 0;
}


