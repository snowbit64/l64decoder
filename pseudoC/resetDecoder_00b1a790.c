// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetDecoder
// Entry Point: 00b1a790
// Size: 12 bytes
// Signature: undefined resetDecoder(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OpusVoiceCodec::resetDecoder() */

void OpusVoiceCodec::resetDecoder(void)

{
  long in_x0;
  
  opus_decoder_ctl(*(undefined8 *)(in_x0 + 8),0xfbc);
  return;
}


