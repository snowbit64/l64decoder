// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPaddingToImageRGBA
// Entry Point: 00a97cd0
// Size: 396 bytes
// Signature: undefined __cdecl addPaddingToImageRGBA(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uchar * param_7)


/* ImageUtil::addPaddingToImageRGBA(unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned char*) */

void ImageUtil::addPaddingToImageRGBA
               (uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uchar *param_7)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  bool bVar5;
  uchar *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong __n;
  uint uVar11;
  
  if (param_3 != 0) {
    __n = (ulong)(param_4 * param_2);
    uVar8 = (ulong)(~param_2 + param_5) + 1;
    uVar11 = 0;
    uVar10 = uVar8 & 0x1ffffffe0;
    puVar6 = param_7;
    do {
      memcpy(puVar6,param_1,__n);
      param_7 = puVar6 + __n;
      if (param_5 != param_2) {
        uVar1 = param_7[-4];
        uVar2 = param_7[-3];
        uVar3 = param_7[-2];
        uVar4 = param_7[-1];
        if (~param_2 + param_5 < 0x1f) {
          iVar9 = 0;
        }
        else {
          param_7 = param_7 + uVar10 * 4;
          puVar6 = puVar6 + __n + 0x40;
          uVar7 = uVar10;
          do {
            *puVar6 = uVar1;
            puVar6[1] = uVar2;
            puVar6[2] = uVar3;
            puVar6[3] = uVar4;
            puVar6[4] = uVar1;
            puVar6[5] = uVar2;
            puVar6[6] = uVar3;
            puVar6[7] = uVar4;
            puVar6[8] = uVar1;
            puVar6[9] = uVar2;
            puVar6[10] = uVar3;
            puVar6[0xb] = uVar4;
            puVar6[0xc] = uVar1;
            puVar6[0xd] = uVar2;
            puVar6[0xe] = uVar3;
            puVar6[0xf] = uVar4;
            puVar6[0x10] = uVar1;
            puVar6[0x11] = uVar2;
            puVar6[0x12] = uVar3;
            puVar6[0x13] = uVar4;
            puVar6[0x14] = uVar1;
            puVar6[0x15] = uVar2;
            puVar6[0x16] = uVar3;
            puVar6[0x17] = uVar4;
            puVar6[0x18] = uVar1;
            puVar6[0x19] = uVar2;
            puVar6[0x1a] = uVar3;
            puVar6[0x1b] = uVar4;
            puVar6[0x1c] = uVar1;
            puVar6[0x1d] = uVar2;
            puVar6[0x1e] = uVar3;
            puVar6[0x1f] = uVar4;
            puVar6[0x20] = uVar1;
            puVar6[0x21] = uVar2;
            puVar6[0x22] = uVar3;
            puVar6[0x23] = uVar4;
            puVar6[0x24] = uVar1;
            puVar6[0x25] = uVar2;
            puVar6[0x26] = uVar3;
            puVar6[0x27] = uVar4;
            puVar6[0x28] = uVar1;
            puVar6[0x29] = uVar2;
            puVar6[0x2a] = uVar3;
            puVar6[0x2b] = uVar4;
            puVar6[0x2c] = uVar1;
            puVar6[0x2d] = uVar2;
            puVar6[0x2e] = uVar3;
            puVar6[0x2f] = uVar4;
            puVar6[0x30] = uVar1;
            puVar6[0x31] = uVar2;
            puVar6[0x32] = uVar3;
            puVar6[0x33] = uVar4;
            puVar6[0x34] = uVar1;
            puVar6[0x35] = uVar2;
            puVar6[0x36] = uVar3;
            puVar6[0x37] = uVar4;
            puVar6[0x38] = uVar1;
            puVar6[0x39] = uVar2;
            puVar6[0x3a] = uVar3;
            puVar6[0x3b] = uVar4;
            puVar6[0x3c] = uVar1;
            puVar6[0x3d] = uVar2;
            puVar6[0x3e] = uVar3;
            puVar6[0x3f] = uVar4;
            uVar7 = uVar7 - 0x20;
            puVar6[-0x40] = uVar1;
            puVar6[-0x3f] = uVar2;
            puVar6[-0x3e] = uVar3;
            puVar6[-0x3d] = uVar4;
            puVar6[-0x3c] = uVar1;
            puVar6[-0x3b] = uVar2;
            puVar6[-0x3a] = uVar3;
            puVar6[-0x39] = uVar4;
            puVar6[-0x38] = uVar1;
            puVar6[-0x37] = uVar2;
            puVar6[-0x36] = uVar3;
            puVar6[-0x35] = uVar4;
            puVar6[-0x34] = uVar1;
            puVar6[-0x33] = uVar2;
            puVar6[-0x32] = uVar3;
            puVar6[-0x31] = uVar4;
            puVar6[-0x30] = uVar1;
            puVar6[-0x2f] = uVar2;
            puVar6[-0x2e] = uVar3;
            puVar6[-0x2d] = uVar4;
            puVar6[-0x2c] = uVar1;
            puVar6[-0x2b] = uVar2;
            puVar6[-0x2a] = uVar3;
            puVar6[-0x29] = uVar4;
            puVar6[-0x28] = uVar1;
            puVar6[-0x27] = uVar2;
            puVar6[-0x26] = uVar3;
            puVar6[-0x25] = uVar4;
            puVar6[-0x24] = uVar1;
            puVar6[-0x23] = uVar2;
            puVar6[-0x22] = uVar3;
            puVar6[-0x21] = uVar4;
            puVar6[-0x20] = uVar1;
            puVar6[-0x1f] = uVar2;
            puVar6[-0x1e] = uVar3;
            puVar6[-0x1d] = uVar4;
            puVar6[-0x1c] = uVar1;
            puVar6[-0x1b] = uVar2;
            puVar6[-0x1a] = uVar3;
            puVar6[-0x19] = uVar4;
            puVar6[-0x18] = uVar1;
            puVar6[-0x17] = uVar2;
            puVar6[-0x16] = uVar3;
            puVar6[-0x15] = uVar4;
            puVar6[-0x14] = uVar1;
            puVar6[-0x13] = uVar2;
            puVar6[-0x12] = uVar3;
            puVar6[-0x11] = uVar4;
            puVar6[-0x10] = uVar1;
            puVar6[-0xf] = uVar2;
            puVar6[-0xe] = uVar3;
            puVar6[-0xd] = uVar4;
            puVar6[-0xc] = uVar1;
            puVar6[-0xb] = uVar2;
            puVar6[-10] = uVar3;
            puVar6[-9] = uVar4;
            puVar6[-8] = uVar1;
            puVar6[-7] = uVar2;
            puVar6[-6] = uVar3;
            puVar6[-5] = uVar4;
            puVar6[-4] = uVar1;
            puVar6[-3] = uVar2;
            puVar6[-2] = uVar3;
            puVar6[-1] = uVar4;
            puVar6 = puVar6 + 0x80;
          } while (uVar7 != 0);
          iVar9 = (int)uVar10;
          if (uVar8 == uVar10) goto LAB_00a97d40;
        }
        iVar9 = (param_2 - param_5) + iVar9;
        puVar6 = param_7;
        do {
          param_7 = puVar6 + 4;
          *puVar6 = uVar1;
          puVar6[1] = uVar2;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          puVar6[2] = uVar3;
          puVar6[3] = uVar4;
          puVar6 = param_7;
        } while (bVar5);
      }
LAB_00a97d40:
      param_1 = param_1 + __n;
      uVar11 = uVar11 + 1;
      puVar6 = param_7;
    } while (uVar11 != param_3);
  }
  iVar9 = param_6 - param_3;
  if (iVar9 != 0) {
    uVar8 = (ulong)(param_5 * param_4);
    do {
      memcpy(param_7,param_7 + -uVar8,uVar8);
      param_7 = param_7 + uVar8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}


