// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAlbumName
// Entry Point: 00b08d74
// Size: 24 bytes
// Signature: undefined __thiscall getAlbumName(AudioLoaderOGG * this)


/* non-virtual thunk to AudioLoaderOGG::getAlbumName() */

AudioLoaderOGG * __thiscall AudioLoaderOGG::getAlbumName(AudioLoaderOGG *this)

{
  AudioLoaderOGG *pAVar1;
  
  pAVar1 = this + 0x81;
  if (((byte)this[0x80] & 1) != 0) {
    pAVar1 = *(AudioLoaderOGG **)(this + 0x90);
  }
  return pAVar1;
}


