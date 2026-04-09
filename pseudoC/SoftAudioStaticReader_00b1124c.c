// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftAudioStaticReader
// Entry Point: 00b1124c
// Size: 40 bytes
// Signature: undefined __thiscall SoftAudioStaticReader(SoftAudioStaticReader * this, float * param_1, uint param_2, uint param_3)


/* SoftAudioStaticReader::SoftAudioStaticReader(float*, unsigned int, unsigned int) */

void __thiscall
SoftAudioStaticReader::SoftAudioStaticReader
          (SoftAudioStaticReader *this,float *param_1,uint param_2,uint param_3)

{
  *(uint *)(this + 0x10) = param_2;
  *(uint *)(this + 0x14) = param_3;
  this[0x18] = (SoftAudioStaticReader)0x0;
  *(undefined ***)this = &PTR__SoftAudioStaticReader_00fe7eb0;
  *(float **)(this + 8) = param_1;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


