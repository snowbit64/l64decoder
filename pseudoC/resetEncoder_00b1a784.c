// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetEncoder
// Entry Point: 00b1a784
// Size: 12 bytes
// Signature: undefined resetEncoder(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OpusVoiceCodec::resetEncoder() */

void OpusVoiceCodec::resetEncoder(void)

{
  undefined8 *in_x0;
  
  opus_encoder_ctl(*in_x0,0xfbc);
  return;
}


