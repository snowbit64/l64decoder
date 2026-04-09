// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFrequency
// Entry Point: 00a4d444
// Size: 76 bytes
// Signature: undefined getFrequency(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::Element::getFrequency() const */

ulong AudioSourceSample::Element::getFrequency(void)

{
  long in_x0;
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(in_x0 + 0x28) != 0) {
    lVar1 = LoopSynthesisResource::getLoopSynthesisData();
    return (ulong)*(uint *)(lVar1 + 0xc);
  }
  if (*(long *)(in_x0 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a4d480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(*(long *)(in_x0 + 0x20) + 0x48) + 0x28))();
    return uVar2;
  }
  return 1;
}


