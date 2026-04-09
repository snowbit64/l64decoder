// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: utf8ToUpper
// Entry Point: 00b9fbac
// Size: 616 bytes
// Signature: undefined __cdecl utf8ToUpper(char * param_1)


/* WARNING: Removing unreachable block (ram,0x00b9fde8) */
/* StringUtil::utf8ToUpper(char const*) */

void StringUtil::utf8ToUpper(char *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  bVar2 = *param_1;
  if (bVar2 == 0) {
    pvVar4 = operator_new__(1);
    uVar13 = 0;
  }
  else {
    iVar12 = 0;
    pcVar10 = param_1;
    do {
      uVar11 = utf8Next(pcVar10);
      uVar13 = uVar11;
      if (uVar11 != 1) {
        if (uVar11 == 0) break;
        if (uVar11 < 4) {
          uVar13 = 3;
        }
      }
      pcVar10 = pcVar10 + uVar11;
      iVar12 = uVar13 + iVar12;
    } while (*pcVar10 != '\0');
    pvVar4 = operator_new__((ulong)(iVar12 + 1));
    uVar13 = 0;
    while (bVar2 != 0) {
      uVar11 = (uint)bVar2;
      pbVar6 = (byte *)param_1 + 1;
      if ((char)bVar2 < '\0') {
        bVar3 = *pbVar6;
        uVar5 = (uint)bVar3;
        if (bVar3 == 0) break;
        if ((bVar2 & 0xe0) == 0xc0) {
          uVar11 = (uVar11 & 0x1f) << 6;
          lVar7 = 2;
        }
        else {
          bVar2 = ((byte *)param_1)[2];
          uVar5 = (uint)bVar2;
          if (bVar2 == 0) break;
          if ((uVar11 & 0xf0) == 0xe0) {
            uVar11 = (uVar11 & 0xf) << 0xc | (bVar3 & 0x3f) << 6;
            lVar7 = 3;
          }
          else {
            uVar5 = (uint)((byte *)param_1)[3];
            if ((uVar5 == 0) || ((uVar11 & 0xf8) != 0xf0)) break;
            uVar11 = (uVar11 & 7) << 0x12 | (bVar3 & 0x3f) << 0xc | (bVar2 & 0x3f) << 6;
            lVar7 = 4;
          }
        }
        uVar11 = uVar11 | uVar5 & 0x3f;
        pbVar6 = (byte *)param_1 + lVar7;
        if (uVar11 < 0xffff) goto LAB_00b9fce8;
        pbVar8 = (byte *)((long)pvVar4 + (ulong)uVar13);
LAB_00b9fd74:
        if (uVar11 >> 0x10 == 0) {
          iVar12 = 3;
          *pbVar8 = (byte)(uVar11 >> 0xc) | 0xe0;
          pbVar8[1] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          pbVar8[2] = (byte)uVar11 & 0x3f | 0x80;
        }
        else {
          *pbVar8 = (byte)(uVar11 >> 0x12) | 0xf0;
          iVar12 = 4;
          pbVar8[1] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
          pbVar8[2] = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          pbVar8[3] = (byte)uVar11 & 0x3f | 0x80;
        }
      }
      else {
LAB_00b9fce8:
        iVar12 = 0;
        iVar9 = 0x3f2;
        do {
          while( true ) {
            uVar5 = iVar9 + iVar12;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 1;
            }
            uVar1 = (int)uVar5 >> 1;
            if (*(ushort *)
                 (&s_upperCaseMappings +
                 (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)) < uVar11)
            break;
            if (*(ushort *)
                 (&s_upperCaseMappings +
                 (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)) <= uVar11) {
              uVar11 = (uint)*(ushort *)
                              (&BYTE_00525a08 + ((long)((ulong)uVar5 << 0x20) >> 0x21) * 4);
              goto LAB_00b9fd40;
            }
            iVar9 = uVar1 - 1;
            if (iVar9 < iVar12) goto LAB_00b9fd40;
          }
          iVar12 = uVar1 + 1;
        } while (iVar12 <= iVar9);
LAB_00b9fd40:
        pbVar8 = (byte *)((long)pvVar4 + (ulong)uVar13);
        if (uVar11 < 0x80) {
          iVar12 = 1;
          *pbVar8 = (byte)uVar11;
        }
        else {
          if (0x7ff < uVar11) goto LAB_00b9fd74;
          iVar12 = 2;
          *pbVar8 = (byte)(uVar11 >> 6) | 0xc0;
          pbVar8[1] = (byte)uVar11 & 0x3f | 0x80;
        }
      }
      uVar13 = iVar12 + uVar13;
      param_1 = (char *)pbVar6;
      bVar2 = *pbVar6;
    }
  }
  *(undefined *)((long)pvVar4 + (ulong)uVar13) = 0;
  return;
}


