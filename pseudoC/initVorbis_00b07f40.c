// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initVorbis
// Entry Point: 00b07f40
// Size: 208 bytes
// Signature: undefined initVorbis(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioLoaderOGG::initVorbis() */

undefined8 AudioLoaderOGG::initVorbis(void)

{
  if (s_vorbisInit != '\0') {
    return 1;
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
  return 1;
}


