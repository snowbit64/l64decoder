// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPadding
// Entry Point: 00af5f6c
// Size: 344 bytes
// Signature: undefined __thiscall addPadding(GiantsAdsProvider * this, uint param_1, uint param_2, uchar * param_3, uint param_4, uint param_5, uint param_6, uchar * * param_7, uint * param_8, uint * param_9, bool param_10)


/* GiantsAdsProvider::addPadding(unsigned int, unsigned int, unsigned char const*, unsigned int,
   unsigned int, unsigned int, unsigned char*&, unsigned int&, unsigned int&, bool) */

void __thiscall
GiantsAdsProvider::addPadding
          (GiantsAdsProvider *this,uint param_1,uint param_2,uchar *param_3,uint param_4,
          uint param_5,uint param_6,uchar **param_7,uint *param_8,uint *param_9,bool param_10)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = param_4 / param_1;
  }
  iVar1 = param_4 - uVar3 * param_1;
  if (iVar1 == 0) {
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = param_5 / param_2;
    }
    if (param_5 == uVar3 * param_2) {
      return;
    }
  }
  if (param_10) {
    uVar3 = 0;
    if (param_1 != 0) {
      uVar3 = ((param_1 + param_4) - 1) / param_1;
    }
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = ((param_2 + param_5) - 1) / param_2;
    }
    *param_8 = uVar3 * param_1;
    uVar4 = uVar4 * param_2;
    *param_9 = uVar4;
    uVar3 = *param_8;
    puVar5 = (uchar *)operator_new__((ulong)(uVar4 * param_6 * uVar3));
    *param_7 = puVar5;
    ImageUtil::addPaddingToImageRGB(param_3,param_4,param_5,param_6,uVar3,uVar4,puVar5);
    return;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = param_5 / param_2;
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 4 - iVar1;
  }
  *param_8 = iVar2 + param_4;
  iVar2 = param_5 - uVar3 * param_2;
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = 4 - iVar2;
  }
  uVar3 = iVar1 + param_5;
  *param_9 = uVar3;
  uVar4 = *param_8;
  puVar5 = (uchar *)operator_new__((ulong)(uVar3 * param_6 * uVar4));
  *param_7 = puVar5;
  ImageScale::scaleImageBilinear(param_3,param_4,param_5,param_6,puVar5,0,uVar4,uVar3);
  return;
}


