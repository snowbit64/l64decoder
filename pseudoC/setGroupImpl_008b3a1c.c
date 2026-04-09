// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroupImpl
// Entry Point: 008b3a1c
// Size: 24 bytes
// Signature: undefined __cdecl setGroupImpl(uint param_1)


/* StaticSample::setGroupImpl(unsigned int) */

void StaticSample::setGroupImpl(uint param_1)

{
  if (*(long **)((ulong)param_1 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b3a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((ulong)param_1 + 0x78) + 0x98))();
    return;
  }
  return;
}


