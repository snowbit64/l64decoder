// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OpusVoiceCodec
// Entry Point: 00b1a508
// Size: 60 bytes
// Signature: undefined __thiscall ~OpusVoiceCodec(OpusVoiceCodec * this)


/* OpusVoiceCodec::~OpusVoiceCodec() */

void __thiscall OpusVoiceCodec::~OpusVoiceCodec(OpusVoiceCodec *this)

{
  if (*(void **)this != (void *)0x0) {
                    /* try { // try from 00b1a520 to 00b1a533 has its CatchHandler @ 00b1a544 */
    opus_encoder_destroy(*(void **)this);
    *(undefined8 *)this = 0;
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    opus_decoder_destroy(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


