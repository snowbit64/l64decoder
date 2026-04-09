// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPaddingToImageRGB
// Entry Point: 00a97b68
// Size: 360 bytes
// Signature: undefined __cdecl addPaddingToImageRGB(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uchar * param_7)


/* ImageUtil::addPaddingToImageRGB(unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned char*) */

void ImageUtil::addPaddingToImageRGB
               (uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uchar *param_7)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  bool bVar4;
  ulong uVar5;
  uchar *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong __n;
  uint uVar10;
  
  if (param_3 != 0) {
    __n = (ulong)(param_4 * param_2);
    uVar7 = (ulong)(~param_2 + param_5) + 1;
    uVar10 = 0;
    uVar9 = uVar7 & 0x1ffffffe0;
    do {
      memcpy(param_7,param_1,__n);
      param_7 = param_7 + __n;
      if (param_5 != param_2) {
        uVar1 = param_7[-3];
        uVar2 = param_7[-2];
        uVar3 = param_7[-1];
        if (~param_2 + param_5 < 0x1f) {
          iVar8 = 0;
          puVar6 = param_7;
        }
        else {
          puVar6 = param_7 + uVar9 * 3;
          uVar5 = uVar9;
          do {
            uVar5 = uVar5 - 0x20;
            *param_7 = uVar1;
            param_7[1] = uVar2;
            param_7[2] = uVar3;
            param_7[3] = uVar1;
            param_7[4] = uVar2;
            param_7[5] = uVar3;
            param_7[6] = uVar1;
            param_7[7] = uVar2;
            param_7[8] = uVar3;
            param_7[9] = uVar1;
            param_7[10] = uVar2;
            param_7[0xb] = uVar3;
            param_7[0xc] = uVar1;
            param_7[0xd] = uVar2;
            param_7[0xe] = uVar3;
            param_7[0xf] = uVar1;
            param_7[0x10] = uVar2;
            param_7[0x11] = uVar3;
            param_7[0x12] = uVar1;
            param_7[0x13] = uVar2;
            param_7[0x14] = uVar3;
            param_7[0x15] = uVar1;
            param_7[0x16] = uVar2;
            param_7[0x17] = uVar3;
            param_7[0x18] = uVar1;
            param_7[0x19] = uVar2;
            param_7[0x1a] = uVar3;
            param_7[0x1b] = uVar1;
            param_7[0x1c] = uVar2;
            param_7[0x1d] = uVar3;
            param_7[0x1e] = uVar1;
            param_7[0x1f] = uVar2;
            param_7[0x20] = uVar3;
            param_7[0x21] = uVar1;
            param_7[0x22] = uVar2;
            param_7[0x23] = uVar3;
            param_7[0x24] = uVar1;
            param_7[0x25] = uVar2;
            param_7[0x26] = uVar3;
            param_7[0x27] = uVar1;
            param_7[0x28] = uVar2;
            param_7[0x29] = uVar3;
            param_7[0x2a] = uVar1;
            param_7[0x2b] = uVar2;
            param_7[0x2c] = uVar3;
            param_7[0x2d] = uVar1;
            param_7[0x2e] = uVar2;
            param_7[0x2f] = uVar3;
            param_7[0x30] = uVar1;
            param_7[0x31] = uVar2;
            param_7[0x32] = uVar3;
            param_7[0x33] = uVar1;
            param_7[0x34] = uVar2;
            param_7[0x35] = uVar3;
            param_7[0x36] = uVar1;
            param_7[0x37] = uVar2;
            param_7[0x38] = uVar3;
            param_7[0x39] = uVar1;
            param_7[0x3a] = uVar2;
            param_7[0x3b] = uVar3;
            param_7[0x3c] = uVar1;
            param_7[0x3d] = uVar2;
            param_7[0x3e] = uVar3;
            param_7[0x3f] = uVar1;
            param_7[0x40] = uVar2;
            param_7[0x41] = uVar3;
            param_7[0x42] = uVar1;
            param_7[0x43] = uVar2;
            param_7[0x44] = uVar3;
            param_7[0x45] = uVar1;
            param_7[0x46] = uVar2;
            param_7[0x47] = uVar3;
            param_7[0x48] = uVar1;
            param_7[0x49] = uVar2;
            param_7[0x4a] = uVar3;
            param_7[0x4b] = uVar1;
            param_7[0x4c] = uVar2;
            param_7[0x4d] = uVar3;
            param_7[0x4e] = uVar1;
            param_7[0x4f] = uVar2;
            param_7[0x50] = uVar3;
            param_7[0x51] = uVar1;
            param_7[0x52] = uVar2;
            param_7[0x53] = uVar3;
            param_7[0x54] = uVar1;
            param_7[0x55] = uVar2;
            param_7[0x56] = uVar3;
            param_7[0x57] = uVar1;
            param_7[0x58] = uVar2;
            param_7[0x59] = uVar3;
            param_7[0x5a] = uVar1;
            param_7[0x5b] = uVar2;
            param_7[0x5c] = uVar3;
            param_7[0x5d] = uVar1;
            param_7[0x5e] = uVar2;
            param_7[0x5f] = uVar3;
            param_7 = param_7 + 0x60;
          } while (uVar5 != 0);
          iVar8 = (int)uVar9;
          param_7 = puVar6;
          if (uVar7 == uVar9) goto LAB_00a97bd0;
        }
        iVar8 = (param_2 - param_5) + iVar8;
        do {
          param_7 = puVar6 + 3;
          *puVar6 = uVar1;
          puVar6[1] = uVar2;
          bVar4 = iVar8 != -1;
          iVar8 = iVar8 + 1;
          puVar6[2] = uVar3;
          puVar6 = param_7;
        } while (bVar4);
      }
LAB_00a97bd0:
      param_1 = param_1 + __n;
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_3);
  }
  iVar8 = param_6 - param_3;
  if (iVar8 != 0) {
    uVar7 = (ulong)(param_5 * param_4);
    do {
      memcpy(param_7,param_7 + -uVar7,uVar7);
      param_7 = param_7 + uVar7;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}


