// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleVorbisHeader
// Entry Point: 00c72448
// Size: 84 bytes
// Signature: undefined __cdecl handleVorbisHeader(Stream * param_1, ogg_packet * param_2)


/* TheoraVideoDecoder::handleVorbisHeader(TheoraVideoDecoder::Stream*, ogg_packet*) */

void TheoraVideoDecoder::handleVorbisHeader(Stream *param_1,ogg_packet *param_2)

{
  int iVar1;
  
  iVar1 = vorbis_synthesis_headerin(param_2 + 0x210,param_2 + 0x248);
  if ((*(int *)(param_2 + 0x198) != 0 || iVar1 != -0x84) && iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x198) = 0;
  }
  return;
}


