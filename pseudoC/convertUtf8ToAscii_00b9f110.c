// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertUtf8ToAscii
// Entry Point: 00b9f110
// Size: 456 bytes
// Signature: undefined __cdecl convertUtf8ToAscii(char * param_1, char * * param_2, bool param_3)


/* StringUtil::convertUtf8ToAscii(char const*, char*&, bool) */

int StringUtil::convertUtf8ToAscii(char *param_1,char **param_2,bool param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  iVar6 = 0;
  bVar2 = *param_1;
  pbVar1 = (byte *)param_1;
  while (bVar2 != 0) {
    uVar8 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      bVar2 = pbVar1[1];
      uVar9 = (uint)bVar2;
      if (bVar2 != 0) {
        if ((uVar8 & 0xe0) == 0xc0) {
          uVar8 = (uVar8 & 0x1f) << 6;
          lVar10 = 2;
        }
        else {
          bVar3 = pbVar1[2];
          uVar9 = (uint)bVar3;
          if (bVar3 == 0) goto LAB_00b9f1ec;
          if ((uVar8 & 0xf0) == 0xe0) {
            uVar8 = (uVar8 & 0xf) << 0xc | (bVar2 & 0x3f) << 6;
            lVar10 = 3;
          }
          else {
            uVar9 = (uint)pbVar1[3];
            if ((uVar9 == 0) || ((uVar8 & 0xf8) != 0xf0)) goto LAB_00b9f1ec;
            uVar8 = (uVar8 & 7) << 0x12 | (bVar2 & 0x3f) << 0xc | (bVar3 & 0x3f) << 6;
            lVar10 = 4;
          }
        }
        uVar8 = uVar8 | uVar9 & 0x3f;
        if (uVar8 != 0) goto LAB_00b9f1dc;
      }
LAB_00b9f1ec:
      if (param_3) {
LAB_00b9f1f0:
        iVar6 = 0;
      }
      break;
    }
    lVar10 = 1;
LAB_00b9f1dc:
    if (uVar8 < 0xff) {
      iVar6 = iVar6 + 1;
    }
    else if (param_3) goto LAB_00b9f1f0;
    pbVar1 = pbVar1 + lVar10;
    bVar2 = *pbVar1;
  }
  pcVar5 = (char *)operator_new__((ulong)(iVar6 + 1));
  *param_2 = pcVar5;
  bVar2 = *param_1;
  pcVar4 = pcVar5;
  while (bVar2 != 0) {
    uVar8 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      bVar2 = ((byte *)param_1)[1];
      uVar9 = (uint)bVar2;
      if (bVar2 == 0) break;
      if ((uVar8 & 0xe0) == 0xc0) {
        uVar8 = (uVar8 & 0x1f) << 6;
        lVar10 = 2;
      }
      else {
        bVar3 = ((byte *)param_1)[2];
        uVar9 = (uint)bVar3;
        if (bVar3 == 0) break;
        if ((uVar8 & 0xf0) == 0xe0) {
          uVar8 = (uVar8 & 0xf) << 0xc | (bVar2 & 0x3f) << 6;
          lVar10 = 3;
        }
        else {
          uVar9 = (uint)((byte *)param_1)[3];
          if ((uVar9 == 0) || ((uVar8 & 0xf8) != 0xf0)) break;
          uVar8 = (uVar8 & 7) << 0x12 | (bVar2 & 0x3f) << 0xc | (bVar3 & 0x3f) << 6;
          lVar10 = 4;
        }
      }
      uVar8 = uVar8 | uVar9 & 0x3f;
      if (uVar8 == 0) break;
    }
    else {
      lVar10 = 1;
    }
    pcVar7 = pcVar4;
    if (uVar8 < 0xff) {
      pcVar7 = pcVar4 + 1;
      *pcVar4 = (char)uVar8;
    }
    param_1 = (char *)((byte *)param_1 + lVar10);
    pcVar4 = pcVar7;
    bVar2 = *param_1;
  }
  *pcVar4 = '\0';
  return (int)pcVar4 - (int)pcVar5;
}


