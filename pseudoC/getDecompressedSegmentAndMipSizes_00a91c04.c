// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDecompressedSegmentAndMipSizes
// Entry Point: 00a91c04
// Size: 216 bytes
// Signature: undefined __cdecl getDecompressedSegmentAndMipSizes(uint param_1, uint param_2, uint param_3, uint param_4, FORMAT param_5, TYPE param_6, uint * param_7, uint * param_8)


/* GS2DUtil::getDecompressedSegmentAndMipSizes(unsigned int, unsigned int, unsigned int, unsigned
   int, ImageDesc::FORMAT, ImageDesc::TYPE, unsigned int*, unsigned int*) */

void GS2DUtil::getDecompressedSegmentAndMipSizes
               (uint param_1,uint param_2,uint param_3,uint param_4,FORMAT param_5,TYPE param_6,
               uint *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ImageUtil::getMemorySize(param_1,param_2,param_3,param_5,param_6);
    if (param_7 != (uint *)0x0) {
      if (uVar2 < 4) {
        param_7[uVar2] = uVar1;
      }
      else {
        param_7[3] = param_7[3] + uVar1;
      }
    }
    if (param_8 != (uint *)0x0) {
      param_8[uVar2] = uVar1;
    }
    param_1 = param_1 >> 1;
    param_2 = param_2 >> 1;
    uVar2 = uVar2 + 1;
    if (param_1 < 2) {
      param_1 = 1;
    }
    param_3 = param_3 >> 1;
    if (param_2 < 2) {
      param_2 = 1;
    }
    if (param_3 < 2) {
      param_3 = 1;
    }
  } while (uVar2 <= param_4);
  return;
}


