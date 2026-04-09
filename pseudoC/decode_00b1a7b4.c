// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decode
// Entry Point: 00b1a7b4
// Size: 28 bytes
// Signature: undefined __cdecl decode(uchar * param_1, uint param_2, short * param_3, uint param_4)


/* OpusVoiceCodec::decode(unsigned char const*, unsigned int, short*, unsigned int) */

void OpusVoiceCodec::decode(uchar *param_1,uint param_2,short *param_3,uint param_4)

{
  undefined8 in_x4;
  
  opus_decode(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,in_x4,0);
  return;
}


