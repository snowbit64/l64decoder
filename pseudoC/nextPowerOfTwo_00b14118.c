// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nextPowerOfTwo
// Entry Point: 00b14118
// Size: 44 bytes
// Signature: undefined __thiscall nextPowerOfTwo(FDNReverb * this, uint param_1)


/* FDNReverb::nextPowerOfTwo(unsigned int) */

int __thiscall FDNReverb::nextPowerOfTwo(FDNReverb *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = param_1 - 1 | param_1 - 1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    return (uVar1 | uVar1 >> 0x10) + 1;
  }
  return 1;
}


