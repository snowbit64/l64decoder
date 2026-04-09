// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strtoint
// Entry Point: 00b9d030
// Size: 144 bytes
// Signature: undefined __cdecl strtoint(char * param_1)


/* StringUtil::strtoint(char const*) */

int StringUtil::strtoint(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  if (bVar1 != 0x2d) {
    if (bVar1 - 0x30 < 10) {
      iVar4 = 0;
      pbVar2 = (byte *)(param_1 + 1);
      do {
        iVar4 = uVar3 + iVar4 * 10;
        uVar3 = (uint)*pbVar2;
        iVar4 = iVar4 + -0x30;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 - 0x30 < 10);
      return iVar4;
    }
    return 0;
  }
  uVar3 = (uint)(byte)param_1[1];
  if ((byte)param_1[1] - 0x30 < 10) {
    iVar4 = 0;
    pbVar2 = (byte *)(param_1 + 2);
    do {
      iVar4 = uVar3 + iVar4 * 10;
      uVar3 = (uint)*pbVar2;
      iVar4 = iVar4 + -0x30;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 - 0x30 < 10);
    return -iVar4;
  }
  return 0;
}


