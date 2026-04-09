// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encode
// Entry Point: 00b1a79c
// Size: 24 bytes
// Signature: undefined __cdecl encode(short * param_1, uint param_2, uchar * param_3, uint param_4)


/* OpusVoiceCodec::encode(short const*, unsigned int, unsigned char*, unsigned int) */

void OpusVoiceCodec::encode(short *param_1,uint param_2,uchar *param_3,uint param_4)

{
  opus_encode(*(undefined8 *)param_1,param_2,param_3,param_4);
  return;
}


