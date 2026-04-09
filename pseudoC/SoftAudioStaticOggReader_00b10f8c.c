// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioStaticOggReader
// Entry Point: 00b10f8c
// Size: 80 bytes
// Signature: undefined __thiscall ~SoftAudioStaticOggReader(SoftAudioStaticOggReader * this)


/* SoftAudioStaticOggReader::~SoftAudioStaticOggReader() */

void __thiscall SoftAudioStaticOggReader::~SoftAudioStaticOggReader(SoftAudioStaticOggReader *this)

{
  *(undefined ***)this = &PTR__SoftAudioStaticOggReader_00fe7e40;
                    /* try { // try from 00b10fb8 to 00b10fcf has its CatchHandler @ 00b10fdc */
  SoftAudioBuffer::notifyBufferDeallocated
            (*(SoftAudioBuffer **)(this + 8),*(int *)(this + 0x18) << 0xe);
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  SoftAudioBuffer::notifyDecoderAvailable
            (*(SoftAudioBuffer **)(this + 8),*(stb_vorbis **)(this + 0x10));
  return;
}


