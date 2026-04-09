// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyMultiTapDelay
// Entry Point: 00b13a00
// Size: 16 bytes
// Signature: undefined __thiscall destroyMultiTapDelay(FDNReverb * this, MultiTapDelay * param_1)


/* FDNReverb::destroyMultiTapDelay(FDNReverb::MultiTapDelay&) */

void __thiscall FDNReverb::destroyMultiTapDelay(FDNReverb *this,MultiTapDelay *param_1)

{
  if (*(void **)param_1 != (void *)0x0) {
    operator_delete__(*(void **)param_1);
    return;
  }
  return;
}


