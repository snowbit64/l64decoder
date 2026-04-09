// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArtistName
// Entry Point: 00b08d5c
// Size: 24 bytes
// Signature: undefined __thiscall getArtistName(AudioLoaderOGG * this)


/* non-virtual thunk to AudioLoaderOGG::getArtistName() */

AudioLoaderOGG * __thiscall AudioLoaderOGG::getArtistName(AudioLoaderOGG *this)

{
  AudioLoaderOGG *pAVar1;
  
  pAVar1 = this + 0x69;
  if (((byte)this[0x68] & 1) != 0) {
    pAVar1 = *(AudioLoaderOGG **)(this + 0x78);
  }
  return pAVar1;
}


