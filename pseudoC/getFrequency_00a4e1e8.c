// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFrequency
// Entry Point: 00a4e1e8
// Size: 116 bytes
// Signature: undefined getFrequency(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::getFrequency() const */

ulong AudioSourceSample::getFrequency(void)

{
  uint *puVar1;
  long in_x0;
  long lVar2;
  ulong uVar3;
  
  puVar1 = (uint *)(in_x0 + 0xb0) + (ulong)*(uint *)(in_x0 + 0xac) * 0xe + 1;
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    puVar1 = (uint *)(*(long *)(in_x0 + 0xf0) + (ulong)*(uint *)(in_x0 + 0xac) * 0x38);
  }
  if (*(long *)(puVar1 + 10) != 0) {
    lVar2 = LoopSynthesisResource::getLoopSynthesisData();
    return (ulong)*(uint *)(lVar2 + 0xc);
  }
  if (*(long *)(puVar1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a4e24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(long **)(*(long *)(puVar1 + 8) + 0x48) + 0x28))();
    return uVar3;
  }
  return 1;
}


