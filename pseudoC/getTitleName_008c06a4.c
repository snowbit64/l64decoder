// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTitleName
// Entry Point: 008c06a4
// Size: 32 bytes
// Signature: undefined __thiscall getTitleName(StreamedSample * this)


/* non-virtual thunk to StreamedSample::getTitleName() */

undefined * __thiscall StreamedSample::getTitleName(StreamedSample *this)

{
  undefined *puVar1;
  
  if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c06b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(**(code **)(**(long **)(this + 0x28) + 0x20))();
    return puVar1;
  }
  return &DAT_0050a39f;
}


