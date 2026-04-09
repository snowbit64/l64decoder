// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VorbisFileWrap
// Entry Point: 00b07dd0
// Size: 68 bytes
// Signature: undefined __thiscall ~VorbisFileWrap(VorbisFileWrap * this)


/* AudioLoaderOGG::VorbisFileWrap::~VorbisFileWrap() */

void __thiscall AudioLoaderOGG::VorbisFileWrap::~VorbisFileWrap(VorbisFileWrap *this)

{
  *(undefined ***)this = &PTR__VorbisFileWrap_00fe7268;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(this);
  return;
}


