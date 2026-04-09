// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VorbisFileWrap
// Entry Point: 00b07da4
// Size: 44 bytes
// Signature: undefined __thiscall ~VorbisFileWrap(VorbisFileWrap * this)


/* AudioLoaderOGG::VorbisFileWrap::~VorbisFileWrap() */

void __thiscall AudioLoaderOGG::VorbisFileWrap::~VorbisFileWrap(VorbisFileWrap *this)

{
  *(undefined ***)this = &PTR__VorbisFileWrap_00fe7268;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b07dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


