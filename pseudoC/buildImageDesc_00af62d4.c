// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildImageDesc
// Entry Point: 00af62d4
// Size: 124 bytes
// Signature: undefined __thiscall buildImageDesc(GiantsAdsProvider * this, uchar * param_1, uint param_2, uint param_3, uint param_4, ORIGIN param_5, FORMAT param_6, uint param_7, uint param_8, bool param_9, ImageDesc * param_10)


/* GiantsAdsProvider::buildImageDesc(unsigned char const*, unsigned int, unsigned int, unsigned int,
   ImageDesc::ORIGIN, ImageDesc::FORMAT, unsigned int, unsigned int, bool, ImageDesc&) */

void __thiscall
GiantsAdsProvider::buildImageDesc
          (GiantsAdsProvider *this,uchar *param_1,uint param_2,uint param_3,uint param_4,
          ORIGIN param_5,FORMAT param_6,uint param_7,uint param_8,bool param_9,ImageDesc *param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(FORMAT *)(param_10 + 0x40) = param_6;
  *(ORIGIN *)(param_10 + 0x44) = param_5;
  *(uint *)param_10 = param_3;
  *(uint *)(param_10 + 4) = param_4;
  *(uint *)(param_10 + 0x10) = param_8;
  *(uint *)(param_10 + 0x14) = param_7;
  *(undefined8 *)(param_10 + 0x18) = 1;
  *(uchar **)(param_10 + 0x28) = param_1;
  *(uint *)(param_10 + 0x20) = param_2;
  if (param_9) {
    uVar1 = param_3 >> 1;
    if (param_3 < 2) {
      uVar1 = 1;
    }
    uVar2 = param_4 >> 1;
    if (param_4 < 2) {
      uVar2 = 1;
    }
    uVar3 = *(uint *)(param_10 + 8) >> 1;
    if (*(uint *)(param_10 + 8) < 2) {
      uVar3 = 1;
    }
    *(uint *)param_10 = uVar1;
    *(uint *)(param_10 + 4) = uVar2;
    *(uint *)(param_10 + 0x10) = param_8 - 1;
    *(uint *)(param_10 + 8) = uVar3;
    *(undefined4 *)(param_10 + 0x4c) = 1;
  }
  return;
}


