// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementDurationAt
// Entry Point: 00a4d490
// Size: 68 bytes
// Signature: undefined __thiscall getElementDurationAt(AudioSourceSample * this, uint param_1)


/* AudioSourceSample::getElementDurationAt(unsigned int) const */

undefined  [16] __thiscall
AudioSourceSample::getElementDurationAt(AudioSourceSample *this,uint param_1)

{
  uint *puVar1;
  undefined auVar2 [16];
  
  puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  if (*(long *)(puVar1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a4d4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(**(long **)(*(long *)(puVar1 + 8) + 0x48) + 0x30))();
    return auVar2;
  }
  return ZEXT816(0);
}


