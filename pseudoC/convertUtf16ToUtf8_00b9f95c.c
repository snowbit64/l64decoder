// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertUtf16ToUtf8
// Entry Point: 00b9f95c
// Size: 304 bytes
// Signature: undefined __cdecl convertUtf16ToUtf8(ushort * param_1, char * param_2, uint param_3)


/* StringUtil::convertUtf16ToUtf8(unsigned short const*, char*, unsigned int) */

void StringUtil::convertUtf16ToUtf8(ushort *param_1,char *param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if (4 < param_3) {
    do {
      uVar1 = *param_1;
      uVar4 = (uint)uVar1;
      uVar5 = (uint)uVar1;
      if (uVar5 == 0) break;
      if (((uVar5 + 0x2400 >> 10 & 0x3f) < 0x3f) || ((param_1[1] + 0x2000 >> 10 & 0x3f) < 0x3f)) {
        lVar3 = 1;
        if (uVar1 < 0x80) goto LAB_00b9f974;
LAB_00b9f9e0:
        bVar2 = (byte)uVar4;
        if (uVar4 < 0x800) {
          lVar6 = 2;
          *param_2 = (byte)(uVar4 >> 6) | 0xc0;
          ((byte *)param_2)[1] = bVar2 & 0x3f | 0x80;
        }
        else if (uVar4 >> 0x10 == 0) {
          lVar6 = 3;
          *param_2 = (byte)(uVar4 >> 0xc) | 0xe0;
          ((byte *)param_2)[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
          ((byte *)param_2)[2] = bVar2 & 0x3f | 0x80;
        }
        else if (uVar4 >> 0x15 == 0) {
          *param_2 = (byte)(uVar4 >> 0x12) | 0xf0;
          lVar6 = 4;
          ((byte *)param_2)[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
          ((byte *)param_2)[2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
          ((byte *)param_2)[3] = bVar2 & 0x3f | 0x80;
        }
        else {
          lVar6 = 0;
        }
      }
      else {
        uVar5 = (uint)param_1[1] + (uint)uVar1 * 0x400 + 0xfca02400;
        lVar3 = 2;
        uVar4 = uVar5;
        if (0x7f < uVar5) goto LAB_00b9f9e0;
LAB_00b9f974:
        lVar6 = 1;
        *param_2 = (byte)uVar5;
      }
      param_1 = param_1 + lVar3;
      param_2 = (char *)((byte *)param_2 + lVar6);
      param_3 = param_3 - (int)lVar6;
    } while (4 < param_3);
  }
  *param_2 = 0;
  return;
}


