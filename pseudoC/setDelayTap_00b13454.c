// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDelayTap
// Entry Point: 00b13454
// Size: 40 bytes
// Signature: undefined __thiscall setDelayTap(FDNReverb * this, MultiTapDelay * param_1, uint param_2, float param_3)


/* FDNReverb::setDelayTap(FDNReverb::MultiTapDelay&, unsigned int, float) */

void __thiscall
FDNReverb::setDelayTap(FDNReverb *this,MultiTapDelay *param_1,uint param_2,float param_3)

{
  uint uVar1;
  
  uVar1 = (int)(*(float *)this * param_3);
  if (*(uint *)(param_1 + 8) <= (uint)(int)(*(float *)this * param_3)) {
    uVar1 = *(uint *)(param_1 + 8) - 1;
  }
  *(uint *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 4) = uVar1;
  return;
}


