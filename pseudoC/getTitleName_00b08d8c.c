// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTitleName
// Entry Point: 00b08d8c
// Size: 24 bytes
// Signature: undefined __thiscall getTitleName(AudioLoaderOGG * this)


/* non-virtual thunk to AudioLoaderOGG::getTitleName() */

AudioLoaderOGG * __thiscall AudioLoaderOGG::getTitleName(AudioLoaderOGG *this)

{
  AudioLoaderOGG *pAVar1;
  
  pAVar1 = this + 0x99;
  if (((byte)this[0x98] & 1) != 0) {
    pAVar1 = *(AudioLoaderOGG **)(this + 0xa8);
  }
  return pAVar1;
}


