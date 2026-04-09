// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getErrorStr
// Entry Point: 00b1a7d0
// Size: 24 bytes
// Signature: undefined __thiscall getErrorStr(OpusVoiceCodec * this, int param_1)


/* OpusVoiceCodec::getErrorStr(int) const */

void __thiscall OpusVoiceCodec::getErrorStr(OpusVoiceCodec *this,int param_1)

{
  opus_strerror(param_1);
  return;
}


