// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertUtf8ToUtf16
// Entry Point: 00b9f828
// Size: 308 bytes
// Signature: undefined __cdecl convertUtf8ToUtf16(char * param_1, ushort * param_2, uint param_3)


/* StringUtil::convertUtf8ToUtf16(char const*, unsigned short*, unsigned int) */

void StringUtil::convertUtf8ToUtf16(char *param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint in_w8;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (2 < param_3) {
    do {
      bVar1 = *param_1;
      if (bVar1 == 0) break;
      pbVar4 = (byte *)param_1 + 1;
      uVar5 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        bVar2 = ((byte *)param_1)[1];
        uVar5 = (uint)bVar2;
        if (bVar2 == 0) {
LAB_00b9f8b0:
          lVar7 = 0;
        }
        else {
          uVar6 = (uint)bVar1;
          if ((uVar6 & 0xe0) == 0xc0) {
            uVar6 = (bVar1 & 0x1f) << 6;
            lVar7 = 2;
          }
          else {
            bVar3 = ((byte *)param_1)[2];
            uVar5 = (uint)bVar3;
            if (bVar3 == 0) goto LAB_00b9f8b0;
            if ((uVar6 & 0xf0) == 0xe0) {
              lVar7 = 3;
              uVar6 = (bVar1 & 0xf) << 0xc | (bVar2 & 0x3f) << 6;
            }
            else {
              lVar7 = 0;
              uVar5 = (uint)((byte *)param_1)[3];
              if ((uVar5 == 0) || ((uVar6 & 0xf8) != 0xf0)) goto LAB_00b9f8f4;
              uVar6 = (uVar6 & 7) << 0x12 | (bVar2 & 0x3f) << 0xc | (bVar3 & 0x3f) << 6;
              lVar7 = 4;
            }
          }
          in_w8 = uVar6 | uVar5 & 0x3f;
        }
LAB_00b9f8f4:
        param_1 = (char *)((byte *)param_1 + lVar7);
        pbVar4 = (byte *)param_1;
        uVar5 = in_w8;
        if (in_w8 >> 0xb < 0x1b) goto LAB_00b9f838;
        if (in_w8 < 0xe000) {
          lVar7 = 0;
        }
        else if (in_w8 >> 0x10 == 0) {
          lVar7 = 1;
          *param_2 = (ushort)in_w8;
        }
        else {
          lVar7 = 2;
          param_2[1] = (ushort)in_w8 & 0x3ff | 0xdc00;
          *param_2 = (ushort)(in_w8 + 0xf0000 >> 10) & 0x3ff | 0xd800;
        }
      }
      else {
LAB_00b9f838:
        in_w8 = uVar5;
        param_1 = (char *)pbVar4;
        lVar7 = 1;
        *param_2 = (ushort)in_w8;
      }
      param_2 = param_2 + lVar7;
      param_3 = param_3 - (int)lVar7;
    } while (2 < param_3);
  }
  *param_2 = 0;
  return;
}


