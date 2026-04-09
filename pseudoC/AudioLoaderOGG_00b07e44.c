// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AudioLoaderOGG
// Entry Point: 00b07e44
// Size: 252 bytes
// Signature: undefined __thiscall AudioLoaderOGG(AudioLoaderOGG * this)


/* AudioLoaderOGG::AudioLoaderOGG() */

void __thiscall AudioLoaderOGG::AudioLoaderOGG(AudioLoaderOGG *this)

{
  char cVar1;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__AudioLoaderOGG_00fe7288;
  *(undefined ***)(this + 8) = &PTR__AudioLoaderOGG_00fe72e8;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  cVar1 = s_vorbisInit;
  *(undefined8 *)(this + 0xb0) = 0;
  if (cVar1 != '\0') {
    return;
  }
  fn_ov_clear = ov_clear;
  fn_ov_read = ov_read;
  fn_ov_pcm_total = ov_pcm_total;
  fn_ov_info = ov_info;
  fn_ov_comment = ov_comment;
  fn_ov_open_callbacks = ov_open_callbacks;
  s_ovCallbacks = ov_read_func;
  DAT_021157c8 = ov_seek_func;
  DAT_021157d0 = ov_close_func;
  DAT_021157d8 = ov_tell_func;
  s_vorbisInit = 1;
  return;
}


