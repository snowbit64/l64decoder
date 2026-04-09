// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearDelay
// Entry Point: 00b13a10
// Size: 28 bytes
// Signature: undefined __thiscall clearDelay(FDNReverb * this, Delay * param_1)


/* FDNReverb::clearDelay(FDNReverb::Delay&) */

void __thiscall FDNReverb::clearDelay(FDNReverb *this,Delay *param_1)

{
  memset(*(void **)param_1,0,(ulong)(*(int *)(param_1 + 0xc) + 1) << 2);
  return;
}


