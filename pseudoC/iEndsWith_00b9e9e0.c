// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: iEndsWith
// Entry Point: 00b9e9e0
// Size: 160 bytes
// Signature: undefined __cdecl iEndsWith(char * param_1, char * param_2)


/* StringUtil::iEndsWith(char const*, char const*) */

bool StringUtil::iEndsWith(char *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  size_t sVar4;
  size_t sVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  sVar4 = strlen(param_1);
  sVar5 = strlen(param_2);
  if ((uint)sVar4 < (uint)sVar5) {
    bVar3 = false;
  }
  else {
    uVar6 = (uint)(byte)*param_2;
    if (*param_2 == 0) {
      bVar3 = true;
    }
    else {
      pbVar7 = (byte *)(param_1 + ((sVar4 & 0xffffffff) - (sVar5 & 0xffffffff)));
      pbVar8 = (byte *)(param_2 + 1);
      do {
        bVar2 = *pbVar7;
        uVar9 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar9 = (uint)bVar2;
        }
        uVar1 = uVar6 | 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        bVar3 = uVar9 == uVar1;
        if (!bVar3) {
          return bVar3;
        }
        uVar6 = (uint)*pbVar8;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
  }
  return bVar3;
}


