// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParameter
// Entry Point: 00b12d58
// Size: 24 bytes
// Signature: undefined __thiscall getParameter(FDNReverbEffect * this, uint param_1)


/* FDNReverbEffect::getParameter(unsigned int) */

undefined4 __thiscall FDNReverbEffect::getParameter(FDNReverbEffect *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0xb) {
    uVar1 = *(undefined4 *)(this + (ulong)param_1 * 4 + 0x34);
  }
  return uVar1;
}


