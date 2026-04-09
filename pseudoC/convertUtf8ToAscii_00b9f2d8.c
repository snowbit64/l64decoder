// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertUtf8ToAscii
// Entry Point: 00b9f2d8
// Size: 420 bytes
// Signature: undefined __cdecl convertUtf8ToAscii(char * param_1, char * param_2, uint param_3, bool param_4)


/* StringUtil::convertUtf8ToAscii(char const*, char*, unsigned int, bool) */

int StringUtil::convertUtf8ToAscii(char *param_1,char *param_2,uint param_3,bool param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  
  iVar3 = (int)param_2;
  uVar5 = (uint)(byte)*param_1;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
    while (uVar5 != 0) {
      if (uVar5 >> 7 == 0) {
        lVar7 = 1;
      }
      else {
        bVar1 = ((byte *)param_1)[1];
        uVar4 = (uint)bVar1;
        if (bVar1 == 0) {
LAB_00b9f470:
          if (!param_4) {
            return iVar3;
          }
          return 0;
        }
        if ((uVar5 & 0xe0) == 0xc0) {
          uVar5 = (uVar5 & 0x1f) << 6;
          lVar7 = 2;
        }
        else {
          bVar2 = ((byte *)param_1)[2];
          uVar4 = (uint)bVar2;
          if (bVar2 == 0) goto LAB_00b9f470;
          if ((uVar5 & 0xf0) == 0xe0) {
            uVar5 = (uVar5 & 0xf) << 0xc | (bVar1 & 0x3f) << 6;
            lVar7 = 3;
          }
          else {
            uVar4 = (uint)((byte *)param_1)[3];
            if ((uVar4 == 0) || ((uVar5 & 0xf8) != 0xf0)) goto LAB_00b9f470;
            uVar5 = (uVar5 & 7) << 0x12 | (bVar1 & 0x3f) << 0xc | (bVar2 & 0x3f) << 6;
            lVar7 = 4;
          }
        }
        uVar5 = uVar5 | uVar4 & 0x3f;
        if (uVar5 == 0) goto LAB_00b9f470;
      }
      if (uVar5 < 0xff) {
        iVar3 = iVar3 + 1;
      }
      else if (param_4) {
        return 0;
      }
      param_1 = (char *)((byte *)param_1 + lVar7);
      uVar5 = (uint)(byte)*param_1;
    }
  }
  else {
    if (uVar5 != 0) {
      do {
        if (uVar5 >> 7 == 0) {
          lVar7 = 1;
        }
        else {
          bVar1 = ((byte *)param_1)[1];
          uVar4 = (uint)bVar1;
          if (bVar1 == 0) break;
          if ((uVar5 & 0xe0) == 0xc0) {
            uVar5 = (uVar5 & 0x1f) << 6;
            lVar7 = 2;
          }
          else {
            bVar2 = ((byte *)param_1)[2];
            uVar4 = (uint)bVar2;
            if (bVar2 == 0) break;
            if ((uVar5 & 0xf0) == 0xe0) {
              uVar5 = (uVar5 & 0xf) << 0xc | (bVar1 & 0x3f) << 6;
              lVar7 = 3;
            }
            else {
              uVar4 = (uint)((byte *)param_1)[3];
              if ((uVar4 == 0) || ((uVar5 & 0xf8) != 0xf0)) break;
              uVar5 = (uVar5 & 7) << 0x12 | (bVar1 & 0x3f) << 0xc | (bVar2 & 0x3f) << 6;
              lVar7 = 4;
            }
          }
          uVar5 = uVar5 | uVar4 & 0x3f;
          if (uVar5 == 0) break;
        }
        pcVar6 = param_2;
        if (uVar5 < 0xff) {
          pcVar6 = param_2 + 1;
          *param_2 = (char)uVar5;
        }
        param_1 = (char *)((byte *)param_1 + lVar7);
        uVar5 = (uint)(byte)*param_1;
        param_2 = pcVar6;
      } while (*param_1 != 0);
    }
    iVar3 = (int)param_2 - iVar3;
    *param_2 = '\0';
  }
  return iVar3;
}


