// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VoiceChatStreamedAudioData
// Entry Point: 00b19d7c
// Size: 136 bytes
// Signature: undefined __thiscall VoiceChatStreamedAudioData(VoiceChatStreamedAudioData * this)


/* VoiceChatStreamedAudioData::VoiceChatStreamedAudioData() */

void __thiscall
VoiceChatStreamedAudioData::VoiceChatStreamedAudioData(VoiceChatStreamedAudioData *this)

{
  OpusVoiceCodec *this_00;
  
  *(undefined ***)this = &PTR__VoiceChatStreamedAudioData_00fe7fe0;
  Mutex::Mutex((Mutex *)(this + 0x4c8),true);
                    /* try { // try from 00b19db0 to 00b19db7 has its CatchHandler @ 00b19e14 */
  this_00 = (OpusVoiceCodec *)operator_new(0x10);
                    /* try { // try from 00b19dbc to 00b19dbf has its CatchHandler @ 00b19e04 */
  OpusVoiceCodec::OpusVoiceCodec(this_00);
  *(OpusVoiceCodec **)(this + 8) = this_00;
                    /* try { // try from 00b19dc4 to 00b19dcb has its CatchHandler @ 00b19e14 */
  OpusVoiceCodec::initDecoder();
  memset(this + 0x10,0,0x4b0);
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x500) = 0x10100003f800000;
  return;
}


