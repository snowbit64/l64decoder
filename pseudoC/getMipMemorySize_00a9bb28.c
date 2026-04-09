// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMipMemorySize
// Entry Point: 00a9bb28
// Size: 44 bytes
// Signature: undefined __cdecl getMipMemorySize(uint param_1, uint param_2, uint param_3, uint param_4, PIXEL_FORMAT param_5)


/* PixelFormatUtil::getMipMemorySize(unsigned int, unsigned int, unsigned int, unsigned int,
   PixelFormat::PIXEL_FORMAT) */

void PixelFormatUtil::getMipMemorySize
               (uint param_1,uint param_2,uint param_3,uint param_4,PIXEL_FORMAT param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 >> (ulong)(param_4 & 0x1f);
  uVar2 = param_2 >> (ulong)(param_4 & 0x1f);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar3 = param_3 >> (ulong)(param_4 & 0x1f);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  getMemorySize(uVar1,uVar2,uVar3,param_5);
  return;
}


