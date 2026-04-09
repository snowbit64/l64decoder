// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArtistName
// Entry Point: 008c0624
// Size: 32 bytes
// Signature: undefined __thiscall getArtistName(StreamedSample * this)


/* non-virtual thunk to StreamedSample::getArtistName() */

undefined * __thiscall StreamedSample::getArtistName(StreamedSample *this)

{
  undefined *puVar1;
  
  if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c0634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(**(code **)(**(long **)(this + 0x28) + 0x10))();
    return puVar1;
  }
  return &DAT_0050a39f;
}


