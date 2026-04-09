// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyDelay
// Entry Point: 00b139f0
// Size: 16 bytes
// Signature: undefined __thiscall destroyDelay(FDNReverb * this, Delay * param_1)


/* FDNReverb::destroyDelay(FDNReverb::Delay&) */

void __thiscall FDNReverb::destroyDelay(FDNReverb *this,Delay *param_1)

{
  if (*(void **)param_1 != (void *)0x0) {
    operator_delete__(*(void **)param_1);
    return;
  }
  return;
}


