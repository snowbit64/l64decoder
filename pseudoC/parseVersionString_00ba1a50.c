// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseVersionString
// Entry Point: 00ba1a50
// Size: 364 bytes
// Signature: undefined __cdecl parseVersionString(char * param_1)


/* StringUtil::parseVersionString(char const*) */

uint StringUtil::parseVersionString(char *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = (uint)(byte)*param_1;
  if ((byte)*param_1 - 0x30 < 10) {
    uVar5 = 0;
    do {
      iVar4 = uVar3 + uVar5 * 10;
      param_1 = (char *)((byte *)param_1 + 1);
      uVar3 = (uint)(byte)*param_1;
      uVar5 = iVar4 - 0x30;
    } while (uVar3 - 0x30 < 10);
    if (0xfe < uVar5) {
      uVar5 = 0xff;
    }
    uVar5 = uVar5 << 0x18;
  }
  else {
    uVar5 = 0;
  }
  pcVar1 = strchr(param_1,0x2e);
  if (pcVar1 != (char *)0x0) {
    pbVar2 = (byte *)(pcVar1 + 1);
    uVar3 = (uint)*pbVar2;
    if (*pbVar2 - 0x30 < 10) {
      uVar6 = 0;
      do {
        iVar4 = uVar3 + uVar6 * 10;
        pbVar2 = pbVar2 + 1;
        uVar3 = (uint)*pbVar2;
        uVar6 = iVar4 - 0x30;
      } while (uVar3 - 0x30 < 10);
      if (0xfe < uVar6) {
        uVar6 = 0xff;
      }
      iVar4 = uVar6 << 0x10;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = iVar4 + uVar5;
    pcVar1 = strchr((char *)pbVar2,0x2e);
    if (pcVar1 != (char *)0x0) {
      pbVar2 = (byte *)(pcVar1 + 1);
      uVar3 = (uint)*pbVar2;
      if (*pbVar2 - 0x30 < 10) {
        uVar6 = 0;
        do {
          iVar4 = uVar3 + uVar6 * 10;
          pbVar2 = pbVar2 + 1;
          uVar3 = (uint)*pbVar2;
          uVar6 = iVar4 - 0x30;
        } while (uVar3 - 0x30 < 10);
        if (0xfe < uVar6) {
          uVar6 = 0xff;
        }
        iVar4 = uVar6 << 8;
      }
      else {
        iVar4 = 0;
      }
      uVar5 = iVar4 + uVar5;
      pcVar1 = strchr((char *)pbVar2,0x2e);
      if (pcVar1 != (char *)0x0) {
        uVar3 = (uint)(byte)pcVar1[1];
        if ((byte)pcVar1[1] - 0x30 < 10) {
          uVar6 = 0;
          pbVar2 = (byte *)(pcVar1 + 2);
          do {
            iVar4 = uVar3 + uVar6 * 10;
            uVar3 = (uint)*pbVar2;
            uVar6 = iVar4 - 0x30;
            pbVar2 = pbVar2 + 1;
          } while (uVar3 - 0x30 < 10);
          if (0xfe < uVar6) {
            uVar6 = 0xff;
          }
        }
        else {
          uVar6 = 0;
        }
        uVar5 = uVar6 | uVar5;
      }
    }
  }
  return uVar5;
}


