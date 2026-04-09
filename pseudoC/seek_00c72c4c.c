// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seek
// Entry Point: 00c72c4c
// Size: 28 bytes
// Signature: undefined __thiscall seek(TheoraVideoDecoder * this, float param_1)


/* TheoraVideoDecoder::seek(float) */

undefined8 __thiscall TheoraVideoDecoder::seek(TheoraVideoDecoder *this,float param_1)

{
  *(undefined2 *)(this + 0x50) = 0;
  seekImpl(this,param_1);
  return 1;
}


