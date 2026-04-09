// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAlbumName
// Entry Point: 008c0664
// Size: 32 bytes
// Signature: undefined __thiscall getAlbumName(StreamedSample * this)


/* non-virtual thunk to StreamedSample::getAlbumName() */

undefined * __thiscall StreamedSample::getAlbumName(StreamedSample *this)

{
  undefined *puVar1;
  
  if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c0674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(**(code **)(**(long **)(this + 0x28) + 0x18))();
    return puVar1;
  }
  return &DAT_0050a39f;
}


