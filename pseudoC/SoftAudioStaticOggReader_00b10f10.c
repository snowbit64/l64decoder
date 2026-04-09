// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftAudioStaticOggReader
// Entry Point: 00b10f10
// Size: 124 bytes
// Signature: undefined __thiscall SoftAudioStaticOggReader(SoftAudioStaticOggReader * this, SoftAudioBuffer * param_1, stb_vorbis * param_2, uint param_3)


/* SoftAudioStaticOggReader::SoftAudioStaticOggReader(SoftAudioBuffer*, stb_vorbis*, unsigned int)
    */

void __thiscall
SoftAudioStaticOggReader::SoftAudioStaticOggReader
          (SoftAudioStaticOggReader *this,SoftAudioBuffer *param_1,stb_vorbis *param_2,uint param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  
  *(stb_vorbis **)(this + 0x10) = param_2;
  *(uint *)(this + 0x18) = param_3;
  *(undefined ***)this = &PTR__SoftAudioStaticOggReader_00fe7e40;
  *(SoftAudioBuffer **)(this + 8) = param_1;
  pvVar2 = operator_new__((ulong)(param_3 << 0xc) << 2);
  *(void **)(this + 0x20) = pvVar2;
  SoftAudioBuffer::notifyBufferAllocated(param_1,param_3 << 0xe);
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (SoftAudioStaticOggReader)0x0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  uVar1 = stb_vorbis_stream_length_in_samples(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


