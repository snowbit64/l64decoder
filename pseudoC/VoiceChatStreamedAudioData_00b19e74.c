// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VoiceChatStreamedAudioData
// Entry Point: 00b19e74
// Size: 84 bytes
// Signature: undefined __thiscall ~VoiceChatStreamedAudioData(VoiceChatStreamedAudioData * this)


/* VoiceChatStreamedAudioData::~VoiceChatStreamedAudioData() */

void __thiscall
VoiceChatStreamedAudioData::~VoiceChatStreamedAudioData(VoiceChatStreamedAudioData *this)

{
  OpusVoiceCodec *this_00;
  
  this_00 = *(OpusVoiceCodec **)(this + 8);
  *(undefined ***)this = &PTR__VoiceChatStreamedAudioData_00fe7fe0;
  if (this_00 != (OpusVoiceCodec *)0x0) {
    OpusVoiceCodec::~OpusVoiceCodec(this_00);
    operator_delete(this_00);
    *(undefined8 *)(this + 8) = 0;
  }
  Mutex::~Mutex((Mutex *)(this + 0x4c8));
  operator_delete(this);
  return;
}


