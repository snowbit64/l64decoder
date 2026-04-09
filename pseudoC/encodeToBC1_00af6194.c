// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeToBC1
// Entry Point: 00af6194
// Size: 320 bytes
// Signature: undefined __thiscall encodeToBC1(GiantsAdsProvider * this, bool param_1, uchar * param_2, uint param_3, uint param_4, uint param_5, uchar * param_6, uint param_7, uint * param_8, uint * param_9)


/* GiantsAdsProvider::encodeToBC1(bool, unsigned char const*, unsigned int, unsigned int, unsigned
   int, unsigned char*, unsigned int, unsigned int&, unsigned int&) */

uint __thiscall
GiantsAdsProvider::encodeToBC1
          (GiantsAdsProvider *this,bool param_1,uchar *param_2,uint param_3,uint param_4,
          uint param_5,uchar *param_6,uint param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  uint uVar2;
  uchar *puVar3;
  
  *param_8 = param_3;
  *param_9 = param_4;
  if (((param_4 | param_3) & 3) == 0) {
    puVar3 = (uchar *)0x0;
  }
  else {
    uVar2 = param_4 + 3 & 0xfffffffc;
    *param_8 = param_3 + 3 & 0xfffffffc;
    *param_9 = uVar2;
    uVar1 = *param_8;
    puVar3 = (uchar *)operator_new__((ulong)(uVar2 * param_5 * uVar1));
    ImageUtil::addPaddingToImageRGB(param_2,param_3,param_4,param_5,uVar1,uVar2,puVar3);
    param_4 = *param_9;
  }
  if ((*param_8 & 0x7ffffffc) * 2 * (param_4 >> 2) == param_7) {
    if (puVar3 != (uchar *)0x0) {
      param_2 = puVar3;
    }
    uVar2 = DXTUtil::encodeToBC1(param_1,param_2,*param_8,param_4,param_5,param_6,param_7);
    if (puVar3 != (uchar *)0x0) {
      operator_delete__(puVar3);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}


