// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isBase64
// Entry Point: 00ba1068
// Size: 176 bytes
// Signature: undefined __cdecl isBase64(char * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringUtil::isBase64(char const*) */

undefined8 StringUtil::isBase64(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  byte *pbVar7;
  
  sVar5 = strlen(param_1);
  iVar4 = (int)sVar5;
  pbVar7 = (byte *)param_1;
  if (iVar4 != 0) {
    pbVar1 = (byte *)param_1;
    do {
      pbVar7 = pbVar1;
      bVar2 = *pbVar7;
      if (bVar2 == 0x3d) goto LAB_00ba10e8;
      if (((*(byte *)((ulong)bVar2 + __ctype_ + 1) & 7) == 0) && ((bVar2 | 4) != 0x2f)) break;
      uVar3 = (int)sVar5 - 1;
      sVar5 = (size_t)uVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = (byte *)(param_1 + (ulong)(iVar4 - 1) + 1);
    } while (uVar3 != 0);
  }
  if (*pbVar7 == 0) {
LAB_00ba1108:
    uVar6 = 1;
  }
  else {
    if (*pbVar7 == 0x3d) {
LAB_00ba10e8:
      if ((pbVar7[1] == 0) || ((pbVar7[1] == 0x3d && (pbVar7[2] == 0)))) goto LAB_00ba1108;
    }
    uVar6 = 0;
  }
  return uVar6;
}


